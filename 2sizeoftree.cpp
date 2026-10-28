#include<bits/stdc++.h>
using namespace std;
class  Node {
 public:
   int data;
   Node*left;
   Node*right;

   Node (int x){
    this->data=x;
    this->left=NULL;
    this->right=NULL;
   }

};
Node *binarytree(){
   
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node*root=new Node(x);
    // allocartes meo to node  nodes created
    cout<<"Enter left child of "<<root->data<<endl;
    root->left=binarytree();
    cout<<"Enter right child of "<<root->data<<endl;
    root->right=binarytree();
  return root;
}

 int  nodesintree(Node*root){

    if(root==NULL){
        return 0;
    }
    
    return 1+nodesintree(root->left)+nodesintree(root->right);
    // particular node par jao uska count gino + uske left or right walo ko dekho then backtract to above node
   
     
}
int main(){
    cout<<"enter data of  node";
    Node*root=binarytree();
    //  retrun add of nodes created

    cout<<"total no of node in this tree is:"<< nodesintree(root);


}