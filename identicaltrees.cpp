#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*right;
    Node*left;

    Node(int x){
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }

};
Node* binary(){
   int x;
   cin>>x;
   if(x==-1)return NULL;
   Node*root=new Node(x);
   cout<<"enter left value of node"<<root->data<<endl;
   root->left=binary();
   cout<<"enter the right child of node"<<root->data<<endl;
   root->right=binary();
   return  root;
}
bool identical(Node*r1,Node*r2){
    if(!r1 && !r2) return 1;  //true  
    if((r1&&!r2)||(!r1&&r2)) return 0; //false
    if(r1->data!=r2->data) return 0;  //false 

    return (identical(r1->left,r2->left)&&identical(r1->right,r2->right));
}
        // there are 4 possibilities 
        // r1 N and r2 both points to null value  return 1
        // r1 r2  one points to node and another points to null rtrn 0
        // r1 points to null while r2 points to node  retrun 0
        // both points to a node but can have diff node value retrun false

int main(){
   cout<<"enter the  root value of r1"<<endl;
   Node*r1=binary();
   cout<<"enter the root  value of r2"<<endl;
   Node*r2=binary();
   cout<<"are these tree identicle ? "<<(identical(r1,r2))?"true":"false";
}