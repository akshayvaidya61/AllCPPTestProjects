#include <iostream>
#include <cmath>
#include <vector>
#include <chrono>
#include <algorithm>

using namespace std;

class Solution
{

public:
    int getNext(int n)
    {
        int totalSum{0}, digit{0};

        while (n > 0)
        {
            digit = n % 10;
            n = n / 10;
            totalSum += pow(digit, 2);
        }

        return totalSum;
    }

    bool isHappy(int n)
    {
        vector<int> seen{};
        while (n != 1 && find(begin(seen), end(seen), n) == end(seen))
        {
            seen.push_back(n);
            n = getNext(n);
        }
        return n == 1;
    }
};

int main()
{
    auto start_time = chrono::high_resolution_clock::now();
    Solution sol1{};
    sol1.isHappy(116);
    auto end_time = chrono::high_resolution_clock::now();

    cout << chrono::duration_cast<chrono::microseconds>((end_time - start_time)).count() << " us" << endl;
}