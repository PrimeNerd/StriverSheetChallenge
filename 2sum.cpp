#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>> ans;
    unordered_map<int,int> mp;
    for(int i=0; i<arr.size(); i++){
        int test=s-arr[i];
        auto found=mp.find(test);
        if(found!=mp.end()){
            int num=found->second;
            while(num){
                vector<int> v;
                v.push_back(test);
                v.push_back(arr[i]);
                sort(v.begin(),v.end());
                ans.push_back(v);
                v.clear();
                num--;
            }
        }
        mp[arr[i]]++;
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    //main code
}