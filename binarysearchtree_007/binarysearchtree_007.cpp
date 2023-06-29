#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	//constructor for the node class
	Node(string i, Node* l, Node* r)
	{
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class binarytree
{
public:
	Node* ROOT;

	binarytree()
	{
		ROOT = NULL;
	}

	void insert(string element)
	{
		Node* parent = NULL;
		newNode->info = element;
		newNode->leftchild = NULL;
		newNode->rightchild = NULL;

		Node* parent = NULL;
		Node* currentNode = NULL;
		search(element, parent, currentNode);

		