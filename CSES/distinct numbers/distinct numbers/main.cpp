#include <iostream>
#include<vector>
#include<algorithm>
#include <cstring>
using namespace std;
int main() {
    int n;
    cin>>n;
    long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long int cnt=0;
    for(int i=0;i<n;i++){
        while(i<n-1 and arr[i]==arr[i+1])
            i++;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
