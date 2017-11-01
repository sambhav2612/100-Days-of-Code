// I assume that the ADT for Queue has been implemented befroehand, YOU CAN"T RUN THIS CODE WITHOUT THE ADT

#include <iostream>
using namespace std;

class node {
	int data;
	node* next;
	
	// other stuff like contructors
};

void reverseQueue () {
	
	if (head == NULL) {			// no node in queue
		return;
	}
	
	if (head == tail) {			// only one node
		return;
	}
	
	if (head->next == tail) {	// two nodes 
		node* temp = new node();
		temp = head;
		
		temp->next = NULL;
		temp = tail;
		temp->next = head;
		
		tail = head;
		head = temp;
		
		return;
	}
	else {
		node* p = new node();
		node* q = new node();
		node* r = new node();
		
		p = head;
		q = p->next;
		r = q->next;
		
		p->next = NULL;
		
		while (q != NULL) {
			q->next = p;
			q = r;
			p = q;
			r = r->next;
		}
		
		// this will make q and r to become NULL in the end, leaving p on the tail
		
		tail = head;	// tail at head
		head = p;		// now head at p which was standing at where tail was awhile ago
	}
} 

int main() {
	return 0;
}