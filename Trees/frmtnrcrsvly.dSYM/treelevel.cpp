#include<bits/stdc++.h>
using namespace std;

class Node{                        //  ---------------------------------
  public:                        //    | left*  |    data  |   right*   |
  int data;                      //    ---------------------------------
  Node*left,*right;               //                Node

  Node(int value){
    data=value;                 // constructor nned to initialize Node data structor
    left=right=NULL;
  }
};
int main(){
    int x;
    cout<<"Enter root element"<<endl;
    cin>>x;
    int first,second;
    queue<Node*>q;
    // stores address of node type pointers
    Node*root=new Node(x);
    q.push(root);
    while(!q.empty()){
        Node*temp=q.front();
        // jo q k front m tha use temp node m daal do 
        q.pop();
        cout<<"Enter the left child of "<<temp->data;
        cin>>first;
        if(first!=-1){
          
           temp->left=new Node(first);
          //  temp node k left pointer m first ele ko dynamic mem alllocate karke uska add store kro
          q.push(temp->left);
          // ab jo add of frist dala  h   temp k left m use q me push karao 
        }
        cout<<"Enter the right child of "<<temp->data;
        cin>>second;
        if(second!=-1){
          temp->right=new Node(second);
          q.push(temp->right);
        }
    }

//                    1
//                 /     \
//              2           3 
//             /   \        /  \
//            4      5     6    7
//                                \
//                                 8



}
