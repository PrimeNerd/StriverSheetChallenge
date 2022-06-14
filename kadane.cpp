#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long ans=INT_MIN,cs=0;
    long long ans2=*min_element(arr,arr+n);
    for(int i=0; i<n; i++){
        cs+=arr[i];
        if(cs>ans){
            ans=cs;
        }
        if(cs<0){
            cs=0;
        }
    }
    return max(ans,ans2);
}
int main(){
    //main code
}