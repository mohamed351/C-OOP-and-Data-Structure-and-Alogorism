#include<stdio.h>
#include<iostream>
using namespace std;



class Node
{
public:
	Node();
	Node * GetNodeNext()
	{
		return this->Next;
	}
	Node *GetNodePre()
	{
		return this->Prev;
	}

	void SetNodeNext(Node * next)
	{
		this->Next = next;
	}
	void SetNodePre(Node *pre) {
		this->Prev = pre;

	}
	void SetData(int data) {
		this->data = data;
	}
	int GetData()
	{
		return this->data;
	}



private:
	int data;
	Node *Next;
	Node *Prev;



};

Node::Node()
{
	this->data = 0;
	this->Next = NULL;
	this->Prev = NULL;
}

class LinkedList {

public:
	
	
	bool AddNode(int data) {
		bool isAdded = false;
		Node *node = new Node();
		if (node) {
			node->SetData(data);

			if (Head == NULL)
			{
				LinkedList::Head = LinkedList::Tail = node;
			}
			else
			{

			
				LinkedList::Tail->SetNodeNext(node);
				node->SetNodePre(Tail);
				LinkedList::Tail = node;
				
			}
			isAdded = true;
		}

		return isAdded;
	

	}

	LinkedList();
	static Node * GetHeader() {
		return Head;
	}
	static Node *GetTail()
	{
		return Tail;
	}


private:
	static Node *Head;
	static Node *Tail;
};
Node* LinkedList::Head = NULL;
Node * LinkedList::Tail = NULL;


LinkedList::LinkedList()
{

}







