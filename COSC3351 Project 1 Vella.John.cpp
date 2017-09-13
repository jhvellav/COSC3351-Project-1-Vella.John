//John H. Vella, V
//Data Structures
//COSC3351
//Project 1
#include<iostream>
using namespace std;


//   Create node
struct node
{
	int data;
	struct node *next;
};

// Create stack
class stack
{
	struct node *top;
public:
	stack()
	{
		top = NULL;
	}
	//push
	void push();
	//pop
	void pop();
	//show stack
	void show();
};
//push
void stack::push()
{
	int value;
	struct node *ptr;
	cout << "\nPUSH the stack.";
	cout << "Enter a number tobe push into the stack: ";
	cin >> value;
	ptr = new node;
	ptr->data = value;
	ptr->next = NULL;
	if (top != NULL)
		ptr->next = top;
	top = ptr;
	cout << "\n a new value is pushed into the stack";

}

// pop
void stack::pop()
{
	struct node *temp;
	if (top == NULL)
	{
		cout << "\nThe stack is empty";
	}
	temp = top;
	top = top->next;
	cout << "\nThe value that was poped is: " << temp->data;
	delete temp;
}

// Show stack
void stack::show()
{
	struct node *ptr1 = top;
	cout << "\nThe stack is:\n";
	while (ptr1 != NULL)
	{
		cout << ptr1->data << " ->";
		ptr1 = ptr1->next;
	}
	cout << "NULL\n";
}

// push pop stack
int main()
{
	stack s;
	int num;
	while (1)
	{
		
		cout << "\n\t\tPush and Pop the Stack\n\n";
		cout << "Enter 1 to push""    ""Enter 2 to pop""    " "Enter 3 to show stack" "    ""Enter 4 to end program";
		
		cin >> num;
		switch (num)
		{
		case 1:
			s.push();
			break;
		case 2:
			s.pop();
			break;
		case 3:
			s.show();
			break;
		case 4:
			return 0;
			break;
		default:
			cout << "\nPlease enter a number between 1 and 4";
			break;
		}
	}
	return 0;
}