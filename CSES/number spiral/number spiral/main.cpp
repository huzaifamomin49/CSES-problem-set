#include <iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long int x,y;
        cin>>x>>y;
        long int max1=max(x,y);
        long int multi1=(max1-1)*(max1-1);
        if(max1&1){
            if (max1 == x)
            {
                cout<<multi1+y;
            }
            else
            {
                cout<<multi1+2*max1-x;
            }
        }
        else {
            if (max1 == y)
            {
                cout<<multi1+x;
            }
            else
            {
                cout<<multi1+2*max1-y;
            }
        }
        cout<<endl;
            
    }
    return 0;
}
