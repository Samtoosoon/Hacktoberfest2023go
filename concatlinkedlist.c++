// C++ program to concat two singly
// linked lists in O(1) time

#include <iostream>
using namespace std;

class Node {

public:
	int data;
	Node* next;

	// Constructor
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}

	// Destructor
	~Node()
	{
		int value = this->data;

		// Memory free
		if (this->next != NULL) {
			delete next;
			this->next = NULL;
		}
	}
};

void insertAtTail(Node*& tail, int d)
{

	// New node create
	Node* temp = new Node(d);
	tail->next = temp;
	tail = temp;
}

void print(Node*& head)
{
	Node* temp = head;

	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

// Function to concatenate two LL in O(1)
void concat(Node*& head1, Node*& head2, Node*& tail)
{

	tail->next = head2;
}

// Driver Code
int main()
{

	// Created a new node of First singly LL
	Node* node1 = new Node(1);

	// Head pointed to node1
	Node* head1 = node1;
	Node* tail1 = node1;

	insertAtTail(tail1, 2);
	insertAtTail(tail1, 3);
	insertAtTail(tail1, 4);
	insertAtTail(tail1, 5);

	cout << "First Linked List: " << endl;

	print(head1);

	// Created a new node of Second singly LL
	Node* node2 = new Node(6);

	// Head pointed to node1
	Node* head2 = node2;
	Node* tail2 = node2;

	insertAtTail(tail2, 7);
	insertAtTail(tail2, 8);
	insertAtTail(tail2, 9);
	insertAtTail(tail2, 10);

	cout << "Second Linked List: " << endl;

	print(head2);

	// Concatenate Second LL in First LL
	concat(head1, head2, tail1);

	cout << "First Linked List after concatenation: "
		<< endl;

	// Printing updated head1
	print(head1);

	return 0;
}
