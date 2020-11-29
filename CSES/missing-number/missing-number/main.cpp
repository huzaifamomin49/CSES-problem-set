#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    bool flag=1;
    sort(arr,arr+n-1);
    for(int i=0;i<n-1;i++){
        if(arr[i]!=i+1){
            cout<<i+1;
            flag=0;
            break;
        }
    }
    if(flag)
        cout<<n;
    return 0;
}
