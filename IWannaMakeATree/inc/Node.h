#pragma once
#include <memory>

template <typename T>
class Node
{
private:
    T data;
    std::unique_ptr<T> left, right;

public:
    inline T getData() const { return data; };

    explicit Node(T data, std::unique_ptr<T> left, std::unique_ptr<T> right)
        : data{data},
          left{left},
          right{right}
    {
    }
};