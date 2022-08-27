#include <iostream>
#include <algorithm>
#include <map>
#include <numeric>
#include <random>
#include <chrono>

using namespace std;

constexpr int TARGET = 32;

int main()
{
    map<float, int> v{};

    mt19937 randomStuff{};

    randomStuff.seed(chrono::high_resolution_clock::now().time_since_epoch().count());

    for (int i = 0; i < TARGET; i++)
    {
        v[randomStuff()] = randomStuff() % 100;
    }

    for (auto const &iter : v)
    {
        cout << iter.first << " " << iter.second << endl;
    }
}