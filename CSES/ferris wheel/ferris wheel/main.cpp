#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,w;
    cin>>n>>w;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int i=0,j=n-1;
    int cnt=0;
    while(i<=j){
        if(arr[i]+arr[j]<=w){
            i++;
        }
        cnt++;j--;
    }
    cout<<cnt<<endl;
    return 0;
}
