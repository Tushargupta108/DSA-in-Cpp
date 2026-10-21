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
Node*binary(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node*root=new Node(x);
    cout<<"enter left node of"<<root->data<<endl;
    root->left=binary();
    cout<<"enter  rhight node of"<<root->data<<endl;
    root->right=binary();

    return root;
}
   int height(Node*root,bool & valid){
         if(root==NULL) return 0;
         int l=height(root->left,valid);
         int r=height(root->right,valid);
         if(abs(l-r)>1){
            valid=false;
         }
         return 1+max(l,r);
   }
  
  bool validtree(Node*root,bool &valid){
    if(valid==false){
        return false;
    }
    height(root,valid);
    return valid;
  }

int main(){
    // binary tree is cvalid when left height - right height is 0 1 -1 i.e abs(l-r)>1
    cout<<"enter root node"<<endl;
    Node*root=binary();
    bool valid=true;
    cout<<"given binary  tree is "<<(validtree(root, valid) ? "binary (balanced)" : "not binary (unbalanced)")<<endl;
}