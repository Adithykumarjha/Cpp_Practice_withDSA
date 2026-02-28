// SIZE OF A BINARY TREE

#include<bits/stdc++.h> 
using namespace std;

class node{
	public:
		int data;
		node *left;
		node *right;
};

node *newNode(int data){
	node *Node=new node();
	Node->data=data;
	Node->left=NULL;
	Node->right=NULL;
	
	return (Node);
}

int size(node *node){
	if(node==NULL){
		return 0;
	}
	
	else{
		return (size(node->left)+1+size(node->right));
	}
}

int main(){
	node *root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(4);
	root->left->left=newNode(6);
	root->left->right=newNode(7);
	
	cout<<"size of the tree is :"<<size(root);
	return 0;
}
