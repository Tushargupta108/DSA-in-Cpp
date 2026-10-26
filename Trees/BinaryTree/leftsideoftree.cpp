#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node*binary(){
    int x;
    cin>>x;
  
    if(x==-1)return NULL;
    Node*root=new Node(x);
    cout<<"enter left child of " <<root->data<<endl;
    root->left=binary();
    cout<<"enter right child of"<<root->data<<endl;
    root->right=binary();
    return root;
}
vector<int> leftview(vector<int>&ans,Node*root){
    if (root == NULL) return ans;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        // when a level complete push only front ele of tree 
        ans.push_back(q.front()->data);
        while(n--){
            Node*temp=q.front();
            q.pop();
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
    }
    return ans;
}

int main(){
    cout<<"enter root ele of tree"<<endl;
    Node*root=binary();
    vector<int>ans;
    ans=leftview(ans,root);
    cout<<"left side element of tree are ";
    for(auto x:ans){
        cout<<x<<" ";
    }
}