#include "Node.h"
/**
 * @brief Parametrized Construct a new Node:: Node object
 * 
 * @param value The Node Value
 * @param righNode The RightNode
 * @param leftNode the LeftNode
 */
Node::Node(int8_t value, Node *leftNode, Node *rightNode)
{
    //Allocate memory for right & left nodes
    // righNode = (Node *)malloc(sizeof(Node *));
    // leftNode = (Node *)malloc(sizeof(Node *));
    //Affectation To The current Node Objetc for the left & right
    this->leftNode = leftNode;
    this->rightNode = rightNode;
    this->value = value;
}
/**
 * @brief Default Construct a new Node:: Node object
 * 
 */
Node::Node(int8_t value)
{
    this->value = value;
    this->leftNode = NULL;
    this->rightNode = NULL;
}
/**
 * @brief Destroy the Node:: Node object
 * 
 */
Node::~Node()
{
    free(this->rightNode);
    free(this->leftNode);
    free(this);
}
/**
 * @brief Initilizing method 
 * 
 * @param value the value that node hold 
 * @param RN the right node pointer for the parent node
 * @param LN the left node pointer for the parent node
 */
void Node::Init(int8_t value, Node *LN, Node *RN)
{
    this->value = value;
    this->rightNode = RN;
    this->leftNode = LN;
}
void printStars(int stars)
{
    for (int index = 0; index < stars * 6; index++)
        cout << "-";
}
/**
 * @brief Show the Node and it's childs
 * 
 * @param node 
 */
void Node::showNode(Node *node, int level)
{
    {
        //Check if the node is Null
        if (node == NULL)
        {
            printStars(level);
            cout << "This is an empty node" << endl;
            return;
        }
        printStars(level);
        //Printing Current Node Value
        cout << "value-->" << (int)node->value << endl;
        //Recursion to LeftNode Of This Node
        if (node->leftNode != NULL)
        {
            printStars(level);
            cout << "Left";
            showNode(node->leftNode, level + 1);
        }

        //Recursion to RightNode Of This Node
        if (node->rightNode != NULL)
        {
            printStars(level);
            cout << "Right";
            showNode(node->rightNode, level + 1);
        }
    }
}