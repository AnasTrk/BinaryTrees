#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
using namespace std;
int main()
{
    Node *n = new Node(10, new Node(9, new Node(2), new Node(5)), new Node(8, new Node(1), new Node(0)));
    n->showNode(n);
    return 0;
}