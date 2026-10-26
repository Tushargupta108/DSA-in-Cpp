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
Node*binarytree(){
  int x;
  cin>>x;
  if(x==-1) return NULL;
  Node *root=new Node(x);
  cout<<"enter left child of "<<root->data<<endl;
//   now node is created got to fill value in node k left and right 
  root->left=binarytree();
  cout<<"enter right of "<<root->data<<endl;
  root->right=binarytree();
  return root;
}
int  sum(Node*root){
  if(root==NULL)return 0;
  return (root->data+sum(root->left)+sum(root->right));
}
int main(){
 cout<<"enter root ele"<<endl;
 Node*root=binarytree();
 cout<<"total sum of nodes is"<<sum(root);

}