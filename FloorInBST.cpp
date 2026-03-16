// FLOOR IN BINARY SEARCH TREE

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node*left;
	Node* right;
	
	Node(int val){
		data=val;
		left=right=NULL;
	}
};

Node *insert(Node* root,int val){
	if(root==NULL){
		return new Node(val);
	}
	
	if(val<root->data){
		root->left=insert(root->left,val);
	}
	else{
		root->right=insert(root->right,val);
	}
	return root;
}

int FloorInBST(Node *root,int key){
	int floor=-1;
	
	while(root!=NULL){
		if(root->data==key){
			return root->data;
		}
		if(root->data>key){
			root=root->left;
		}
		else{
			floor=root->data;
			root=root->right;
		}
	}
	return floor;
}

int main(){
	Node *root=NULL;
	root=insert(root,40);
	root=insert(root,25);
	root=insert(root,62);
	root=insert(root,15);
	root-insert(root,22);
	root=insert(root,30);

	int key=26;
	int result=FloorInBST(root,key);
     if(result==-1){
	cout<<"Floor does not exists\n";
	}
	else{
		cout<<"Floor of"<<key<<"is: "<<result;	
	}
	return 0;
}
