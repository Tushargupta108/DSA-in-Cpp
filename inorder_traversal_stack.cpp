#include<bits/stdc++.h>
using namespace std;
// easiiest approach=>
    //  1=> when visiting a node forst time  first push its right child=>root node=>left child
    //  2=>  when visiting 2nd time direct push that node root into ans vectro
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
Node*binary(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node*root=new Node(x);
    cout<<"enter root left child of "<<root->data<<endl;
    root->left=binary();
    cout<<"enter root right child of "<<root->data<<endl;
    root->right=binary();
    return root;
}
vector<int>inorder(Node*root){
    // easiiest approach=>
    //  1=> when visiting a node forst time  first push its right child=>root node=>left child
    //  2=>  when visiting 2nd time direct push that node root into ans vectro
    stack<Node*>s;
    stack<bool>visited;
    s.push(root);
    visited.push(0);
    vector<int>ans;
    while(!s.empty()){

        Node*temp=s.top();
        s.pop();
        bool flag=visited.top();
        visited.pop();

        if(flag==0){

         // push pahle right node fir parent root fir left node other wise when visits same root at second time then push it into ans vec
           
           // push right node
            if(temp->right){
                s.push(temp->right);
                visited.push(0);
            }
          
           //push parent root 
            s.push(temp);
            visited.push(1);
          
           // if parent ka  keft child then push 
           if(temp->left){
            s.push(temp->left);
            visited.push(0);
           }  

        }


        else{
            ans.push_back(temp->data);
        }
    }
    return ans;
}

int main(){
    cout<<"enter root node"<<endl;
    Node*root=binary();
    vector<int>ans;
    ans=inorder(root);
    cout<<"ALL INORDER TRAVERSAL ELEMENTS ARE  ";
    for(auto x:ans){
        cout<<x<<" ";
    }
}