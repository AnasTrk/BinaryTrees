#if !defined(NODE_H)
#define NODE_H
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <unistd.h>
using namespace std;
class Node
{
private:
    int8_t value;
    Node *rightNode = NULL;
    Node *leftNode = NULL;

public:
    Node(int8_t, Node *, Node *);
    Node(int8_t);
    ~Node();
    void Init(int8_t, Node *, Node *);
    void showNode(Node *, int = 0);
};
#endif
