// Deletion In Binary Search Tree

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	
	Node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};

Node *insert(Node*root,int key){
	if(root==NULL){
		return new Node(key);
	}
	
	if(key < root->data){
		root->left=insert(root->left,key);
	}
	else{
		root->right=insert(root->right,key);
	}
	
	return root;
}


Node* findMin(Node* root){
    while(root->left != NULL)
        root = root->left;

    return root;
}



Node *deletion(Node *root,int key){
	if(root==NULL){
		return root;
	}
	
	if(key < root->data){
		root->left=deletion(root->left,key);
	}
	else if(key > root->data){
		root->right=deletion(root->right,key);
	}
	
	else{
		
		if(root->left==NULL && root->right==NULL){
			delete root;
			return NULL;
		}
		else if(root->left==NULL){
			Node *temp=root->right;
			delete root;
			return temp;
		}
		else if(root->right==NULL){
			Node *temp=root->left;
			delete root;
			return temp;
		}
		
		Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deletion(root->right, temp->data);
	}
	return root;
}

void inorder(Node *root){
	if(root==NULL){
		return;
	}
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main(){
	Node *root=NULL;
	root=insert(root,20);
	root=insert(root,40);
	root=insert(root,35);
	root=insert(root,15);
	root=insert(root,17);
	root=insert(root,22);
	root=insert(root,32);
	
	cout<<"Before Deletion :";
	inorder(root);
	
	
	deletion(root,35);
	
	
	cout<<"\nAfter Deletion :";
	inorder(root);
	
}
