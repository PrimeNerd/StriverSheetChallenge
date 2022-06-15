#include<bits/stdc++.h>
using namespace std;
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int> ans;
    long long sz=n;
    long long ss=(sz*(sz+1)*((2*sz)+1))/6;
    long long s=(sz*(sz+1))/2;
    long long ssarray=0,sarray=0;
    for(int i=0; i<n; i++){
        ssarray+=(long long)(arr[i]*arr[i]);
        sarray+=(long long)arr[i];
    }
    ss-=ssarray;
    s-=sarray;
    int miss=(s+(ss/s))/2;
    int r=miss-s;
    ans.first=miss;
    ans.second=r;
    return ans;
	
}

int main(){
    //main code
}