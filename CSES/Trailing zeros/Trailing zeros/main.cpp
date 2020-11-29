#include <iostream>
using namespace std;
int main() {
    long int n;
    cin>>n;
    long int cnt=0;
    for(long int i=5;n/i>=1;i*=5){
        cnt+=n/i;
    }
    cout<<cnt;
    return 0;
}
