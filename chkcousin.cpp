#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data ;
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
    if(x==-1)return NULL;
    Node*root=new Node(x);
    cout<<"enter left child of "<<root->data<<endl;
    root->left=binary();
    cout<<"enter right child of "<<root->data<<endl;
    root->right=binary();
    return root;
}


bool parentcheck(Node*root,int a,int b){
  if(root==NULL)return 0;    //This path in the tree has ended, and no shared parent was found on this specific branch
  if(root->left&&root->right){
    // only if both childrens exsits
    if(root->right->data==a&&root->left->data==b){
        return 1;
    }
    if(root->right->data==b&&root->left->data==a){
        return 1;
    }
   
  }
   return parentcheck(root->left,a,b)||parentcheck(root->right,a,b);
    // checks for both side 
}


bool cousins(Node*root,int first,int second){
     if(!root)return 0;
     int l1=-1;
     int l2=-1;
    //  these are used two check that both  first and second are of same level
    int level=0;
    // used to check for level at which we are currently traversing 
    queue<Node*>s;
    s.push(root);
    while(!s.empty()){
        int n=s.size();
        // used two calculate when level is change when size of ele consisiting all ele of same level bcm 0 means level change update level
        while(n--){
            // run untill one level not traverse iske baad level increse kro
            Node*temp=s.front();
            s.pop();
            if(temp->data==first)l1=level;
            if(temp->data==second)l2=level;
            // assing level equls  to levels when either it is frst or sec  if they have same level means chances max to be cousins if not siple retrun
            if(temp->left)s.push(temp->left);
            if(temp->right)s.push(temp->right);
        }
        level++;
        if(l1!=l2){
            return 0;
            // DIRECT RETRUN FALSE WHEN NOT AT SAME LEVEL
        }
        if(l1!=-1&&l2!=-1){
            break;
            //AGAR -1 NAHI H TO KUCH YA TO ALAG ALAG LEVEL PAR H THEN CNDTN 1 EXE BUT IF SAME LEVEL BREAK FURTHER AND GO FOR SAME PARENT CHECK
        }
    }
    return !parentcheck(root,first,second);
    // Do they share the same parent?
    // agar smae parent h to cousin nahi hoga hwence use ! outside aga same parent nahi h to innner return 0 but they are cousins when diff prnt so to make 
    //0 to child that they are cousin and have not same parent so use ! outside fucntion
}
int main(){
cout<<"enter the root node"<<endl;
Node*root=binary();
cout<<"enter first child to compare"<<endl;
int first,second;
cin>>first;
cout<<"enter right child to compare"<<endl;
cin>>second;
cout<<"given two childs are "<<(cousins(root,first,second)?"cousins":"not cousins")<<endl;

}