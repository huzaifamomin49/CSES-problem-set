#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long int a,b;
        cin>>a>>b;
        cout<<((a+b)%3==0&&(min(a,b)*2>=max(a,b))?"YES":"NO")<<endl;
    }
    return 0;
}
