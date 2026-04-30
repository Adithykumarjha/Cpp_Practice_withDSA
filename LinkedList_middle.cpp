// Middle Node In a Linked List

#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		Node(int x){
			this->data=x;
			this->next=nullptr;
		}
};

int getMiddle(Node *head){
	Node *slowptr=head;
	Node *fastptr=head;
	
	while(fastptr!=NULL && fastptr->next!=NULL){
		fastptr=fastptr->next->next;
		slowptr=slowptr->next;
	}
	return slowptr->data;
}

int main(){
	Node *head=new Node(20);
	head->next=new Node(30);
	head->next->next=new Node(40);
	head->next->next->next=new Node(50);
	
	cout<<getMiddle(head)<<"";
	
	return 0;
	
}
