#include<iostream>
#include<iomanip>
using namespace std;
class node
{
		int data;
		node* next;
		node(int d)
		{
			data = d;
			next = NULL;
		}
		friend class Stack;
};
class Stack
{
		node* head;
	public:
		Stack()
		{
			head = NULL;
		}
		void push(int d)
		{
			node* p = new node(d);
			p -> next = head;
			head = p; //new 'head' is the new 'node'
		}
		void pop()
		{
			if(!isEmpty())
			{
				node* p = head; //move 'p' at head
				head = head -> next; //move 'head' one node ahead
				delete p; //deallocate the first node and reclaim the memory
			}
				
		}

		int isEmpty()
		{
			if(head == NULL)
				return 1;
			return 0;
		}

		void show()
		{
			cout << "The Stack" <<endl;
			for(node* q = head ; q != NULL ; q = q -> next)
				cout << std::setw(4) << q -> data;
			cout <<endl;
		}
};
main()
{
	Stack stk;

	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.push(40);
	stk.push(50);
	stk.push(60);

	stk.show();  // 60 50 40 30 20 10
	
	
	stk.pop();
	stk.pop();
	stk.pop();
	
	cout<<"\nAfter Deletion : ";
	stk.show(); //30 20 10

}