#include <algorithm>
#include <iostream>
#include <random>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    random_device random_device{};
    mt19937 randomNumberGenerator{random_device()};

    vector<int> v{};
    v.resize(10);

    iota(begin(v), end(v), 1);

    for (auto const &iter : v)
    {
        cout << iter << " ";
    }
    cout << endl;

    shuffle(begin(v), end(v), randomNumberGenerator);

    for (auto const &iter : v)
    {
        cout << iter << " ";
    }
    cout << endl;
}