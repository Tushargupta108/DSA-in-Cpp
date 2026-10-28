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
Node* binary(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node*root=new Node(x);
    cout<<"enter left node"<<endl;
    root->left=binary();
    cout<<"enter right node"<<endl;
    root->right=binary();
    return root;
}

int height(Node*root){
    if(root==NULL){
        return 0;
    }
    return(1+max(height(root->left),height(root->right)));
}

int main(){
    cout<<"enter the root node"<<endl;
    Node*root=binary();
    cout<<"total height of a tree is :"<<height(root);

}