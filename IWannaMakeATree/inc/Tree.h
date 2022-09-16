#pragma once

#include "Node.h"

enum class BalanceFactor_e
{
    ONE,
    TWO
};

template <typename T>
class Tree
{
    Node<T> rootNode;
    BalanceFactor_e factor;

public:
    explicit Tree(T rootNode, BalanceFactor_e factor) : rootNode{rootNode},
                                                        factor{factor}
    {
    }

    void AddNode(T data);
    void RemoveNode(T data);

    void PrintInOrderTraversal() const;
    void PrintPreOrderTraversal() const;
    void PrintPostOrderTraversal() const;
};