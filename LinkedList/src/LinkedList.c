#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

typedef struct Node
{
    struct Node *next;
    struct Node *prev;
    int value;
} Node;

typedef struct LinkedList
{
    Node *head;
    Node *tail;
} LinkedList;

void addHead(LinkedList *list, int value);
void addTail(LinkedList *list, int value);
void printList(LinkedList *list);
void removeAllElements(LinkedList *list);
unsigned char findItem(LinkedList *list, int valueToFind, Node *foundNode);
unsigned char removeItem(LinkedList *list, int valueToRemove);

int main()
{
    LinkedList *newList = (LinkedList *)malloc(sizeof(LinkedList));
    newList->head = NULL;
    newList->tail = NULL;

    for (int i = 0; i < 10; i++)
    {
        addHead(newList, i);
    }
    printList(newList);

    Node *foundNode = (Node *)malloc(sizeof(Node));
    printf("Is item Found?: %s\n", findItem(newList, 4, &foundNode) == 0 ? "false" : "true");

    printf("Return Value:0x%x: %d\n", foundNode, foundNode.value);
    // removeItem(newList, 4);

    removeAllElements(newList);

    free(newList);
    free(foundNode);
    newList = NULL;
}

void addHead(LinkedList *list, int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (list->head != NULL)
    {
        list->head->prev = newNode;
        newNode->next = list->head;

        list->head = newNode;
    }
    else
    {
        list->head = newNode;
        list->tail = list->head;
    }

    // set tail if not set
    if (list->tail == NULL)
    {
        Node *findNode = list->head;
        while (findNode->next != NULL)
        {
            findNode = findNode->next;
        }
        list->tail = findNode;
    }
}

void addTail(LinkedList *list, int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (list->tail != NULL)
    {
        list->tail->next = newNode;
        newNode->prev = list->tail;
        list->tail = newNode;
    }
    else
    {
        list->tail = newNode;
        list->head = list->tail;
    }
}

void printList(LinkedList *list)
{
    Node *nodeToPrint = list->head;
    while (nodeToPrint->next != NULL)
    {
        printf("%d ", nodeToPrint->value);
        nodeToPrint = nodeToPrint->next;
    }
    printf("\n");
}

void removeAllElements(LinkedList *list)
{
    Node *nodeToDelete = list->tail;
    Node *nextToDelete;
    do
    {
        nodeToDelete->prev->next = NULL;
        nextToDelete = nodeToDelete->prev;
        free(nodeToDelete);
        nodeToDelete = nextToDelete;
    } while (list->head->next != NULL);

    printf("Delete All...\n");
}

unsigned char findItem(LinkedList *list, int valueToFind, Node *foundNode)
{
    Node *searchNode = list->head;

    while (searchNode != NULL)
    {
        if (searchNode->value == valueToFind)
        {
            *foundNode = *searchNode;

            printf("0x%x 0x%x\n", foundNode, searchNode);

            printf("Found Node Value: %d\n", foundNode->value);
            return 1;
        }
        searchNode = searchNode->next;
    }
    return 0;
}

unsigned char removeItem(LinkedList *list, int valueToRemove)
{

    Node *nodeToRemove;
    if (!findItem(list, valueToRemove, nodeToRemove))
    {
        return 0;
    }
    else
    {
        printf("%d %d\n", nodeToRemove->prev->next->value, nodeToRemove->next->prev->value);
        nodeToRemove->prev->next = nodeToRemove->next;
        nodeToRemove->next->prev = nodeToRemove->prev;
        printf("%d %d\n", nodeToRemove->prev->next->value, nodeToRemove->next->prev->value);

        free(nodeToRemove);

        return 1;
    }
}
