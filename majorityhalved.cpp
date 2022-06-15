#include<bits/stdc++.h>
using namespace std;
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto e: mp){
        if(e.second>(n/2)){
            return e.first;
        }
    }
    return -1;
}

int main(){
    //main code
}