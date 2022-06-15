#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
   map<int,int> mp;
    vector<int> ans;
    for(int i=0; i<arr.size(); i++){
        mp[arr[i]]++;
    }
    int n=arr.size();
    for(auto e: mp){
        if(e.second>(n/3)){
            ans.push_back(e.first);
        }
    }
    return ans;
}

int main(){
    //main code
}