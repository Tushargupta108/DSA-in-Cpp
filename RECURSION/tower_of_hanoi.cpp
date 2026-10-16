// steps to solve =>
// step 1. n-1 disk to helper tak pahunchao using dest as hlpr=>                (src ,hlpr,dest    =>    src,dest,hlpr)
// source to helpr


//  step 2. bachi hui 1 disk to source to destination
// 


//  step 3. n-1 dsik jo helper p thi unhe dest par pahunchao using source as a helper
// src hlpr dest =>  hlpr src dest
// helper to destination




#include<bits/stdc++.h>
using namespace std;

void towerofhanoi(int n,string SRC,string HLPR, string DEST){
   
   if(n==1){
    cout<<"  transfer  disk   " <<n << "  FROM  " <<SRC << "  to  " <<DEST<<endl; 
    return;
   }


    // step 1. n-1 disk to helper tak pahunchao using dest as hlpr
    // source to helpr USING DEST  AS HLPR
    towerofhanoi(n-1,SRC,DEST,HLPR);

    //  step 2. bachi hui 1 disk to source to destination
    cout<<"  transfer  disk   " <<n << "  FROM  " <<SRC << "  to  " <<DEST<<endl;
    
   // step 3. n-1 dsik jo helper p thi unhe dest par pahunchao using source as a helper
   // helper to destination
   towerofhanoi(n-1,HLPR,SRC,DEST);

}

int main(){
    // poore code ka simple logic h pahle n-1 disk ko src se hlpr m rkh do 
    // then hlpr s dest m phnch do
    // jab last wali 1 disk backegi tab use direct src to dest 
    cout<<"enter no of disk in a source tower initially";
    int n;
    cin>>n;
    towerofhanoi(n,"S","H","D");
}
