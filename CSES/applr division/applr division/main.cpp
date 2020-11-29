#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long a=0,b=0;
    for(int i=n-1;i>=0;i--){
        if(a<=b)
            a+=arr[i];
        else
            b+=arr[i];
        cout<<a<<" "<<b<<endl;
    }
    cout<<abs(a-b)<<endl;
    return 0;
}
