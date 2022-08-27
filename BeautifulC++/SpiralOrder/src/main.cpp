/*
1  2  3
4  5  6
7  8  9
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> returnValue{};
        unordered_set<int> seen{};
        auto rowSize = matrix.size();
        auto columnSize = matrix.at(0).size();
        int m{rowSize}, n{columnSize};

        cout << "rowSize: " << rowSize << " "
             << "columnSize: " << columnSize << endl;

        // In spiral order, first row in increasing index order
        while (n <= columnSize || m <= rowSize)
        {
            for (auto columnIndex = 0; columnIndex < columnSize - n; columnIndex++)
            {
                returnValue.emplace_back(matrix.at(0).at(columnIndex));
            }
            for (auto rowIndex = 1; rowIndex < rowSize; rowIndex++)
            {
                returnValue.emplace_back(matrix.at(rowIndex).at(rowSize));
            }

            n--;
        }

        return returnValue;
    }
};

int main()
{
    Solution sol1{};
    vector<vector<int>> testMatrix{
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> returnValue = sol1.spiralOrder(testMatrix);
    for (auto const &iter : returnValue)
    {
        cout << iter << " ";
    }
    cout << endl;
}
