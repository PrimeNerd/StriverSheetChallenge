#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    if(n==1){
        return -1;
    }
 int slow=arr[0];
    int fast=arr[arr[0]];
    while(slow!=fast){
        slow=arr[slow];
        fast=arr[arr[fast]];
    }
    fast=0;
    while(slow!=fast){
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
}
int main(){
    //main code
}