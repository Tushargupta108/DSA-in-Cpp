#include<bits/stdc++.h>
using namespace std ;

// approach -> creat 2 stack which contains element from left to right or vice versa traversal
// jab ltor put ele in same order ltor but in rtol holding  stack  same when rtol put ele m rtol but in stack of ltor
// har bar stack alternative order m  only ek hi level ke ele stroe karenge 
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
    cout<<"enter left child of "<<root->data<<endl;
    root->left=binary();
    cout<<"enter right child of "<<root->data<<endl;
    root->right=binary();
    return root;
}
vector<int> spriral_traversal(Node*root){
        stack<Node*>s1; // store ele from right to left traversal
        stack<Node*>s2;  // store ele from LEFT to RIGHT traversal
        s1.push(root);
        vector<int>ans;
        while(!s1.empty()||!s2.empty()){
            // traversing right to left 
            if(!s1.empty()){
                while(!s1.empty()){
                 Node*temp=s1.top();
                 s1.pop();
                 ans.push_back(temp->data);
                //  pushing data in same manner in right to left but in ltor stack
                 if(temp->right){
                    s2.push(temp->right);
                 }
                 if(temp->left){
                    s2.push(temp->left);
                 }
                }
            }

            // traversing in left to right direction 
            if(!s2.empty()){
               while(!s2.empty()){
                Node*temp=s2.top();
                s2.pop();
                ans.push_back(temp->data);
                if(temp->left){
                   s1.push(temp->left);
                }
                if(temp->right){
                    s1.push(temp->right);
                }
               }
            }
        }
        return ans;
        
}

int main(){
    cout<<"enter  root node "<<endl;
    Node*root=binary();
    vector<int>result;
    result=spriral_traversal(root);
    for(auto x:result){
        cout<<x<<" ";
    }

}