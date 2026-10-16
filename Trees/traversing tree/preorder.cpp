#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int x){
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }
};


Node*BinaryTree(){
int x;
cin>>x;
if(x==-1){
    return NULL;
}
Node*temp=new Node(x);
cout<<"Enter left child of "<<temp->data<<endl;
temp->left=BinaryTree();
cout<<"Enter right child of"<<temp->data<<endl;
temp->right=BinaryTree();
return temp;
}

void PreOrderTraversal(Node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}




int main(){
    cout<<"Enter the root node"<<endl;
    Node*root=BinaryTree();
    cout<<"PRE ORDER TRAVERSAL : ";
    PreOrderTraversal(root);
   
}


