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
    cout<<"Enter left child of "<<root->data<<endl;
    root->left=binarytree();
    cout<<"Enter right child of "<<root->data<<endl;
    root->right=binarytree();
  return root;
}
void  nodesintree(Node*root,int &count){

    if(root==NULL){
        return ;
    }
    count++;
    nodesintree(root->left,count);
    nodesintree(root->right,count);
     
}
int main(){
    cout<<"enter data of  node";
    Node*root=binarytree();
    //  retrun add of nodes created
    int count=0;
    nodesintree(root,count);
     // count is passed as a ref so updation in count reflects here 
    cout<<"total no of node in this tree is:"<<count;


}