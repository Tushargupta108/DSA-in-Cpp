#include<bits/stdc++.h>
using namespace std;
void find_index(string s,int &first,int &second,int index,int target_char){
    if(index==s.size()){
        return;
    }
    if(s[index]==target_char){
        if(first==-1){
            // agar first - 1 k equal nahi h to iska mtlb first mil chuka h ab jab bhi ele mile wo last hi hoga
            first=index;
        }
        second=index;
    }
    
    find_index(s,first,second,index+1,target_char);

}

int main(){
    string s="wkawkaeyaey";
    int first=-1;
    int last=-1;
    find_index(s,first,last,0,'a');
    cout<<"char occurs first at index "<<first<<" and occurs second time at index "<<last;
}