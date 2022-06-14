#include<bits/stdc++.h>
using namespace std;
void sort012(int *arr, int n)
{
   //   Write your code here
   int s=0,m=0,e=n-1;
    while(m<=e){
        if(arr[m]==0){
            swap(arr[s],arr[m]);
            s++;
            m++;
        }
        else if(arr[m]==1){
            m++;
        }
        else {
            swap(arr[m],arr[e]);
            
            e--;
        }
    }
    
}
int main(){
    //main code
}