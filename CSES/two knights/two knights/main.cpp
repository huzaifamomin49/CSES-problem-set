#include <iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        long long ans;
        ans=pow(i,2);
        ans*=(pow(i,2)-1);
        ans/=2;
        ans-=(4*(i-1)*(i-2));
        cout<<ans<<endl;
    }
    return 0;
}
