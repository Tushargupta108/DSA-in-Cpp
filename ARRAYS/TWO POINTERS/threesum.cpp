#include<bits/stdc++.h>
using namespace std;
int main(){
    //problem=> find  triplets whose sum equals to target  and triplet shold distinct
    // concept=>choose 1 elemt as i and rest array par two sum apply agar 1 triplet miljaye uske baad jab doosra find kro
    // tab j and k same nahi hone chahiye previous triplet se  kyuki i to abhi bhi wahi same h agar j ya k same lenge to 
    // rest j or k previous triplet se match karega hi karega 
    // hence to prevent triplet only one element can match with prev triplet
    vector<int> arr = {-2, -1, 0, 1, 2, 3, 4};
    sort(arr.begin(), arr.end());
    // help to rduce triplet matching
    int target = 3;
    vector<vector<int>>ans;
    int sum=0;
    // used to store triplets

     for(int i=0;i<arr.size();i++){
        if(i>0&&arr[i]==arr[i-1])continue;
        int j=i+1;
        int k=arr.size()-1;
        // these two works are two  sum pointers
        while(j<k){
         sum=arr[i]+arr[j]+arr[k];
         if(sum<target){
            j++;
         }
         else if(sum>target){
            k--;
         }
         else{
            ans.push_back({arr[i],arr[j],arr[k]});
            j++;
            k--;
         }
         while(j<k&&arr[j]==arr[j-1]){
            j++;
         }
         // skips to repeat triplet
         while(j<k&&arr[k]==arr[k-1]){
            k--;
         }
        }
     }
    for(auto triplet : ans){
         cout << triplet[0] << " "
         << triplet[1] << " "
         << triplet[2] << endl;
    }
}
