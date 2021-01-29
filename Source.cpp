#include <iostream>


using namespace std;

struct Node {

	int info;
	Node *next;
} *start, newptr, *save, *ptr;

Node * Create_New_Node(int);
void Insert_Beg(Node*);
void Display(Node*);

int main()
{

	start = NULL;
	int inf;char ch = 'y';
	while (ch == 'y' || ch == 'Y')
	{
		cout << "Enter info of new node... ";
		cin >> inf;

		Node* newptr = Create_New_Node(inf);
		cout << "Now insert node at the beggining of the list";
		Insert_Beg(newptr);
		cout << "The list is:  ";
		Display(start);
		cout << "Enter Y to enter more nodes";

	}
	return 0;
}
Node * Create_New_Node(int n)
{
	ptr = new Node;
	ptr->info = n;
	ptr->next = NULL;
	return ptr;
}
void Insert_Beg(Node* np)
{
	if (start == NULL)
		start = np;

	else {
		save = start;
		start = np;
		np->next = save;
	}
}

void Display(Node* np)
{
	while (np != NULL)
	{
		cout << np->info << " ->";
		np = np->next;
	}
}
