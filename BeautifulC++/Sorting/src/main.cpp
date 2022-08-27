#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution
{
    int sum(const vector<int>::iterator &it1, vector<int>::iterator it2, const vector<int> &nums)
    {
        int sum{0};

        if (it2 <= begin(nums))
        {
            sum = *begin(nums);
        }
        else if (it2 > end(nums))
        {
            sum = *end(nums);
        }
        else
        {
            for (vector<int>::iterator i = it1; i <= it2; i++)
            {
                sum += *i;
            }
        }
        return sum;
    }

public:
    int pivotIndex(vector<int> &inputVector)
    {
        vector<int>::iterator iter_ptr{begin(inputVector)};
        int resultValue{-1}, i{0};
        for (auto const &iter : inputVector)
        {
            auto left_sum = sum(begin(inputVector), iter_ptr - 1, inputVector);
            auto right_sum = sum(iter_ptr + 1, end(inputVector), inputVector);

            auto result = find_if(begin(inputVector), end(inputVector), [&](auto elem)
                                  { return (left_sum == right_sum); });
            if (*result != 0)
            {
                resultValue = i;
                break;
            }
            iter_ptr++;
            i++;
        }
        return resultValue;
    }
};

int main()
{
    Solution sum1{};
    vector<int> inputVector{1, 7, 3, 6, 5, 6};
    cout << sum1.pivotIndex(inputVector) << endl;
}