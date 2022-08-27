#include <iostream>
#include <cmath>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution
{
    int getNext(int inputDigit)
    {
        int totalSum{0};
        while (inputDigit > 0)
        {
            int remainder = inputDigit % 10;
            inputDigit = inputDigit / 10;
            totalSum += pow(remainder, 2);
        }
        return totalSum;
    }

public:
    bool isHappy(int n)
    {
        unordered_set<int> seen{};
        int i{0};
        while (n != 1 && seen.find(n) == end(seen))
        {
            seen.insert(n);
            n = getNext(n);
            i++;
        }
        return n == 1;
    }
};

int main()
{
    Solution sol1{};
    cout << (sol1.isHappy(7) ? "True" : "False") << endl;
}