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
void leftsidemaxlength(Node*root,int position,int &left_length,int &right_length){
     if(!root)return ;
     left_length=min(left_length,position);
     right_length=max(right_length,position);
     leftsidemaxlength(root->left,position-1,left_length,right_length);
     leftsidemaxlength(root->right,position+1,left_length,right_length);
}
vector<int> topview(vector<int>&ans,Node*root){
    if (root == NULL) return ans;
    int left_length=0;
    int right_length=0;
    int position=0;
    leftsidemaxlength(root,position,left_length,right_length);
    int total_eligile_ele=(right_length-left_length+1);
    ans.resize(total_eligile_ele);
    //     -4 -3 -2 -1  0  1  2  3  <---index  convert them into positive so -4into0 -3into1 -2into2  -1into3  0into4  means shift index in right side by maxleninleft height of tree 
    //     11  4  4  2  1  3  6  10   ans_vector                   4idx    1
    //     0   1  2  3  4   5  6  7  index after right shift             /   \
    //    idex queue may holds multiple ele at same idx     3idx      2        3    5idx
    //      but final ans will keep only top ele                    /  \         \
    //                                                   2idx     4      5 4idx    6    6 idx        idx dec in left inc in right
    //                                                          /   \             /  \
    //                                            1idx       7       8 3idx     9    10   7idx
    //                                                      /                 /      /
    //                                          0idx      11                12      13    6idx
    // used to make vector of this size whole holds all top ele from bottom left to top then top to bottom right ele which can easily seen from top
    vector<bool>filled(total_eligile_ele,0);  //  8 size ka bool vector  [0,0,0,0,0,0,0,0]
    queue<Node*>q;  //used to store left then right ele of tree
    queue<int>index;  // used to make idex ef from -4 to 0 -3 to 1 and so on
    q.push(root);
    index.push(-1*left_length);  //push index for topmost ele here topmost ele is 1 and its posi in ansvector is index 4 
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        int pos=index.front();
        index.pop();

        // main part which check weather this ele is top if yes it already present at that idx other with same idx will terminate automatically
        if(!filled[pos]){
           filled[pos]=1;
           ans[pos]=temp->data;
        }
        if(temp->left){
            q.push(temp->left);
            index.push(pos-1);
        }
        if(temp->right){
            q.push(temp->right);
            index.push(pos+1);
        }
    }

    return ans;
}

int main(){
    cout<<"enter root ele of tree"<<endl;
    Node*root=binary();
    vector<int>ans;
    ans=topview(ans,root);
    cout<<"top view element of tree are ";
    for(auto x:ans){
        cout<<x<<" ";
    }
}