// CEIL IN BINARY SEARCH TREE

#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* left;
	node* right;
	
	node(int val){
		data=val;
		left=right=NULL;
	}
};

node *insert(node *root,int val){
	if(root==NULL){
		return new node(val);
	}
	if(val<root->data){
		root->left=insert(root->left,val);
	}
	else{
		root->right=insert(root->right,val);
	}
	return root;
}

int ceil(node* root,int key){
	int ceil=-1;
	while(root!=NULL){
		if(root->data==key){
			return root->data;
		}
		if(root->data<key){
			root= root->right;
		}
		else{
			ceil=root->data;
			root=root->left;
		}
	}
	return ceil;
}

int main(){
	node *root=NULL;
	
	 root = insert(root,40);
    root = insert(root,20);
    root = insert(root,60);
    root = insert(root,10);
    root = insert(root,30);
    root = insert(root,50);
    root = insert(root,70);

    int key = 35;

    int result = ceil(root,key);

    if(result == -1)
        cout<<"Ceil does not exist";
    else
        cout<<"Ceil of "<<key<<" is "<<result;

	return 0;

}
