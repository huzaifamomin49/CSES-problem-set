
#include <iostream>
#include<cmath>
#define mod 1000000007
using namespace std;
int main() {
    unsigned long int n;
    cin>>n;
    unsigned long long ans=1;
    for(int i=0;i<n;i++){
        ans=(ans*2)%mod;
    }
    cout<<ans;
    return 0;
}
