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
// return type is node pointer as return address of nodes created return add in backtracking
int x;
cin>>x;
if(x==-1){
    return NULL;
}
// now creating nodes from that input value of data i.e x
Node*temp=new Node(x);
// x ko add provide kro 

// creating left child
cout<<"Enter left child of "<<temp->data<<endl;
temp->left=BinaryTree();

// creating right child
cout<<"Enter right child of"<<temp->data<<endl;
temp->right=BinaryTree();

return temp;
// jab node create ho jaye to uska add backtracking m return kardo

}
int main(){
    cout<<"Enter the root node"<<endl;
    Node*root=BinaryTree();
    // time complexity in creation is O(N);
    // space complewxity depends on height of tree O(h)
    // worst case m space complexity O(N) if skwewed left or right tree
}
//                       1
//                     /   \
//                    2      6
//                   /  \
//                  3    5
//                 /
//                4
//

