#include<iostream>
using namespace std;

class node {
	
	public:
		long data;
		node* next;
		
		node() {
			data = 0;
			next = NULL;
		}
		
		node(int val) {
			data = val;
			next = NULL;
		}
}; 

class list {
	
	public:
		node* top;
		
		void enqueue(int val);
		int pop();
		int dequeue();
		
}inbox, outbox;

void list::enqueue(int val) {
	
	node* newN = new node(val);
	newN->next = NULL;
	
	if (top == NULL) {
		top = newN;
		top->next = NULL;
	}
	else {
	 	newN->next = top;
		top = newN;
	}
	if (top == newN) {
		cout << "\n " << val << " has been put on queue sucessfully!";
	}
} 

int list::pop() {
	if (top == NULL) {
		cout << "\n UNDERFLOW ... return";
		return -1;
	}
	
	int data = 0;
	node* ptr = new node();
	ptr = top;
	top = top->next;
	
	data = ptr->data;
	
	delete ptr;
		
	return data;
} 

int list::dequeue() {
	if (outbox.top == NULL) {
		while (inbox.top != NULL) {
			outbox.enqueue(pop());
		}	
	}
	return outbox.pop();
} 

int main () {
	
	inbox.enqueue(2);
	inbox.enqueue(5);
	inbox.enqueue(20);
	cout << inbox.dequeue();
	cout << inbox.dequeue();
	

}
