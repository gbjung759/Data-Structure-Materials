/*
appendNode
3 2 1 
insertNode
3 2 1 4 
3 2 1 5 4 
6 3 2 1 5 4 
7 6 3 2 1 5 4 
7 8 6 3 2 1 5 4 
findNode
find: 0
find: -1
find: 7
find: 2
find: -1
7 8 6 3 2 1 5 4 
removeNode
remove: 1
7 8 6 3 2 1 4 
remove: 1
7 8 3 2 1 4 
remove: 0
7 8 3 2 1 4 
deleteNode
delete: 1
7 3 2 1 4 
delete: 4
7 3 2 1 
delete: 1
7 2 1 
1 7 2 1 
find: 0
destructor: 2 1 7 2 1
*/

#include <iostream>
#include "list.h"

using namespace std;

int main()
{
	List list;
	cout << "appendNode" << endl;
	list.appendNode(1);
	list.appendNode(2);
	list.appendNode(3);
	list.displayNodes();

	cout << "insertNode" << endl;
	list.insertNode(3, 4);
	list.displayNodes();
	list.insertNode(3, 5);
	list.displayNodes();
	list.insertNode(10, 6);
	list.displayNodes();
	list.insertNode(0, 7);
	list.displayNodes();
	list.insertNode(1, 8);
	list.displayNodes();

	cout << "findNode" << endl;
	cout << "find: " << list.findNode(7) << endl;
	cout << "find: " << list.findNode(100) << endl;
	cout << "find: " << list.findNode(4) << endl;
	cout << "find: " << list.findNode(6) << endl;
	cout << "find: " << list.findNode(0) << endl;
	list.displayNodes();

	cout << "removeNode" << endl;
	cout << "remove: " << list.removeNode(6) << endl;
	list.displayNodes();
	cout << "remove: " << list.removeNode(2) << endl;
	list.displayNodes();
	cout << "remove: " << list.removeNode(100) << endl;
	list.displayNodes();

	cout << "deleteNode" << endl;
	cout << "delete: " << list.deleteNode(8) << endl;
	list.displayNodes();
	cout << "delete: " << list.deleteNode(4) << endl;
	list.displayNodes();
	cout << "delete: " << list.deleteNode(3) << endl;
	list.displayNodes();

	list.appendNode(1);
	list.displayNodes();
	cout << "find: " << list.findNode(1) << endl;
	list.insertNode(0, 2);

	return 0;
}
