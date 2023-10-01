// LinkedList_Опит.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

//class Node {
//public:
//	int data;
//	Node* Next;
//
// };
//
//void printlist(Node*n) {
//	while (n!=0) {
//		cout << n->data << endl;
//		n = n->Next;
//	}
//}
//
//void insertatthefront(Node**head, int newData) {
//	// 1. Prepare a new node
//	Node* newNode = new Node();
//	newNode->data = newData;
//	//2. Put it in front o current head
//	newNode->Next = *head;
//	//3. Move head of the list to point to te newNode
//	*head = newNode;
//}
//
//void insertatheend(Node** head, int newData) {
//	//1. Create a newNode
//	Node* newNode = new Node();
//	newNode->data = newData;
//	newNode->Next = 0;
//	//2. If list is empty, newNode will be a head node
//	if (*head == 0) {
//		*head = newNode;
//	}
//	//3. Find the last node
//	Node* last = *head;
//	while (last->Next != 0) {
//		last = last->Next;
//	}
//
//	//4. Insert newNode after last node (at the end)
//	last->Next = newNode;
//}
//
//void insertafter(Node*previous,int newData) {
//	//1, Check if the previous node is nulL
//	if (previous == 0) {
//		cout << "Previous can not e NULL";
//	}
//	//2. Prepare a new node
//	Node* newNode = new Node();
//	newNode->data = newData;
//
//	//3. Insert newNode after previous
//	newNode->Next = previous->Next;
//	previous->Next = newNode;
//
//
//}
//
//int main() {
//
//	Node* head = new Node();
//	Node* second = new Node();
//	Node* third = new Node();
//
//	head->data = 1;
//	head->Next = second;
//	second->data = 2;
//	second->Next = third;
//	third->data = 3;
//	third->Next = 0;
//
//	insertatthefront(&head, 0);
//	insertatthefront(&head, -1);
//
//	insertatheend(&head, 4);
//	insertatheend(&head, 5);
//
//	insertafter(head, 9);
//	insertafter(second, 9);
//	printlist(head);
//}


// Double linced list

//class Node {
//public:
//	int data;
//	Node* next;
//	Node* previous;
//
//
//};
//
//void printForward(Node*head) {
//	Node* traversar = head;
//	while (traversar != 0) {
//		cout << traversar->data << endl;
//		traversar = traversar->next;
//	}
// }
//
//void printBackward(Node* tail) {
//	Node* traversar = tail;
//	while (traversar != 0) {
//		cout << traversar->data << endl;
//		traversar = traversar->previous;
//	}
//}
//
//int main()
//{
//	// add first node 
//	Node* head;
//	Node* tail;
//	Node* node = new Node();
//	node->data = 4;
//	node->next = 0;
//	node->previous = 0;
//	head = node;
//	tail = node;
//
//	// add a second node 
//	node = new Node();
//	node->data = 5;
//	node->next = 0;
//	node->previous = tail;
//	tail->next = node;
//	tail = node;
//
//	//add a third node
//	node = new Node();
//	node->data = 6;
//	node->next = 0;
//	node->previous = tail;
//	tail->next = node;
//	tail = node;
//
//	printForward(head);
//	printBackward(tail);
//}

//SSL Vectors

int main()
{
	vector<int> numbers;
	numbers.push_back(0);

	for (int i = 1; i <= 10; i++) {
		numbers.push_back(i);
	}

	/*for (int number : numbers)
		cout << number << endl;*/


	////it = iterator 
	
	//for (auto it = numbers.begin(); it != numbers.end(); it++) {
 //      // this is not awolled cout << it << endl;
	//	cout << *it << endl;	//print the value of the element
	//	cout << &it << endl;	//print the address of the itrator
	//	cout << &(*it) << endl; //print the addres of the element 
	//}

	//auto it = numbers.begin();
	//// move to the 5-th element. print the 5-th element
	//cout << *(it + 5);


	// cbegin and cend 
	// constant behin and constant end 
	// the iterators can't be changed
	// we can use them when we create a functionalite wen we need to print the elements and not to change them. 
	/*for (auto it = numbers.cbegin(); it != numbers.cend(); it++) {
		cout << *it << endl;
	}*/

	cout << "Size:" << numbers.size() << endl;
	cout << "Max_Size" << numbers.max_size() << endl;
	cout << "Capacity:" << numbers.capacity() << endl;
	numbers.resize(5);
	cout << "Size:" << numbers.size() << endl;
	if (numbers.empty()) {
		cout << "Vector is empty\n";
	}
	else {
		cout << "Vector is not empty\n";
	}
	cout << "Elemnt[0] is:" << numbers[0] << endl;
	cout << "Elements at [0] is:" << numbers.at(0) << endl;
	cout << "Front:" << numbers.front() << endl;
	cout << "Back:" << numbers.back() << endl;
	numbers.clear();
	cout << "Size:" << numbers.size() << endl;

}