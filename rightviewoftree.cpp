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
    cout<<"enter left child of "<<root->data<<endl;
    root->left=binary();
    cout<<"enter right child of "<<root->data<<endl;
    root->right=binary();
    return root;
}


// BFS /LEVEL WISE APPROACH 
 vector<int> rightview(Node*root,vector<int>&ans){
        if(root==NULL) return ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            ans.push_back(q.front()->data);
            while(n--){
                Node*temp=q.front();
                q.pop();
                if(temp->right)q.push(temp->right);
                if(temp->left)q.push(temp->left);
            }
        }
        return ans;

 }


//  DFS APPROACH
void solve(Node* root, int level, vector<int>& ans) {
    if (root == NULL) return;

    // If we are visiting this level for the first time
    if (level == ans.size()) {
        ans.push_back(root->data);
    }

    solve(root->right, level + 1, ans);
    solve(root->left, level + 1, ans);
}

int main(){
    cout<<"enter root ele"<<endl;
    Node*root=binary();
    vector<int>ans;
    rightview(root,ans);
    cout<<"all right side view ele are "<<endl;
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}