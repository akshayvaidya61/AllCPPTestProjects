#include <iostream>
#include <memory>
#include <functional>
#include <string>
#include <cstdio>

using namespace std;

template <typename T>
class Node
{
public:
    T value;
    shared_ptr<Node<T>> prev{nullptr};
    shared_ptr<Node<T>> next{nullptr};
};

template <typename T>
class LinkedList
{

public:
    shared_ptr<Node<T>> head{nullptr};
    shared_ptr<Node<T>> tail{nullptr};

    void AddHead(T const value)
    {
        shared_ptr<Node<T>> nodeToAdd{make_shared<Node<T>>()};
        nodeToAdd->value = value;
        if (head != nullptr)
        {
            head->prev = nodeToAdd;
            nodeToAdd->next = head;
            head = nodeToAdd;
        }
        else
        {
            head = nodeToAdd;
            tail = head;
        }
    }
    void AddTail(T const value)
    {
        shared_ptr<Node<T>> nodeToAdd{make_shared<Node<T>>()};
        nodeToAdd->value = value;
        if (tail != nullptr)
        {
            tail->next = nodeToAdd;
            nodeToAdd->prev = tail;
            tail = nodeToAdd;
        }
        else
        {
            tail = nodeToAdd;
            head = tail;
        }
    }

    const bool FindNode(T const value, shared_ptr<Node<T>> &foundNode) const
    {
        bool returnValue{false};
        shared_ptr<Node<T>> nodeToFind{head};
        if (head != nullptr)
        {
            while (nodeToFind->next != nullptr)
            {
                if (nodeToFind->value == value)
                {
                    foundNode = nodeToFind;

                    cout << "Found Value: " << foundNode->value << endl;

                    returnValue = true;

                    break;
                }
                else
                {
                    returnValue = false;
                }
                nodeToFind = nodeToFind->next;
            }
            if (value == tail->value)
            {
                cout << "Its tail node" << endl;
                foundNode = tail;
                returnValue = true;
            }
            if (returnValue == false)
            {
                cout << "Not in the list" << endl;
            }
        }
        return returnValue;
    }

    void PrintList() const
    {
        if (head != nullptr)
        {
            shared_ptr<Node<T>> nodeToPrint{head};
            while (nodeToPrint->next != nullptr)
            {
                cout << nodeToPrint->value << " ";
                nodeToPrint = nodeToPrint->next;
            }
            cout << nodeToPrint->value << " ";
            cout << endl;
        }
        else
        {
            cout << "EMPTY!\n";
        }
    }

    void RemoveNode(T value)
    {
        shared_ptr<Node<T>> nodeToRemove{nullptr};
        if (FindNode(value, nodeToRemove) == true)
        {
            if (nodeToRemove == head)
            {
                head = nodeToRemove->next;
                nodeToRemove->next->prev = nullptr;
            }
            else if (nodeToRemove == tail)
            {
                tail = nodeToRemove->prev;
                (nodeToRemove->prev)->next = nullptr;
            }
            else
            {
                nodeToRemove->next->prev = nodeToRemove->prev;
                nodeToRemove->prev->next = nodeToRemove->next;
            }
        }
    }

    void SortList()
    {
    }
};

int main()
{
    LinkedList<int> list1;
    list1.AddHead(1);
    list1.AddHead(2);
    list1.AddHead(14);
    list1.AddHead(15);
    list1.AddHead(16);

    list1.PrintList();
    list1.RemoveNode(0);
    list1.PrintList();
    list1.RemoveNode(0);
    list1.PrintList();
    list1.RemoveNode(0);
    list1.PrintList();
}
