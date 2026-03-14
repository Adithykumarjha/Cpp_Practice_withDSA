// Insertion in Binary Search Tree

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node*left;
	Node*right;
	
	Node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};

Node* insert(Node *root,int key){
	Node *newNode=new Node(key);
	
	if(root==NULL){
		return newNode;
	}
	
	Node* curr=root;
	Node* parent=NULL;
	
	while(curr!=NULL){
		parent=curr;
		
		if(key<curr->data){
			curr=curr->left;
		}
		else{
			curr=curr->right;
		}
	}
	
	if(key<parent->data){
		parent->left=newNode;
	}
	else{
		parent->right=newNode;
	}
	
	return root;	
}

void inOrder(Node* root){
	if(root==NULL){
		return;
	}
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}

int main(){
	Node* root=NULL;
	root=insert(root,50);
	root=insert(root,30);
	root=insert(root,70);
	root=insert(root,20);
	root=insert(root,40);
	
	inOrder(root);
	return 0;
}
