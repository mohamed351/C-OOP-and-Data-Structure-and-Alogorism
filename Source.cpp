#include "LinkedList.h"
#include <conio.h>

int main()
{
	LinkedList list;
	list.AddNode(20);
	list.AddNode(30);
	list.AddNode(40);
	list.AddNode(50);
	Node * node = NULL;
	node = LinkedList::GetHeader();
	while (node)
	{
		cout << node->GetData()<<endl;
		node = node->GetNodeNext();
	}


	_getch();

	return 0;
}