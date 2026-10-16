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

void INOrderTraversal(Node*root){
    if(root==NULL){
        return;
    }

    INOrderTraversal(root->left);
    cout<<root->data<<" ";
    INOrderTraversal(root->right);
}




int main(){
    cout<<"Enter the root node"<<endl;
    Node*root=BinaryTree();
    cout<<"IN ORDER TRAVERSAL : ";
    INOrderTraversal(root);
   
}


