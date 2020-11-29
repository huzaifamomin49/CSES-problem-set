#include <iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    unsigned long int n;
    cin>>n;
    unsigned long long sum=n*(n+1)/2;
    if(sum&1){
        cout<<"NO";
        exit(0);
    }
    //cout<<sum<<endl;
    cout<<"YES\n";
    vector<long int>v1,v2;
    if(!(n&1)){
        long int l=1,r=n;
        bool turn=true;
        while(l<r){
            if(turn){
                v1.push_back(l);
                v1.push_back(r);
                turn=!turn;
            }
            else{
                v2.push_back(l);
                v2.push_back(r);
                turn=!turn;
            }
            l++;r--;
        }
    }
    else{
        bool visit[n+1];
        for(unsigned long int i=1;i<=n;i++)
            visit[i]=false;
        visit[0]=true;
        sum=sum>>1;
        for(unsigned long int i=n;i>=1;i--){
            if(sum>i){
                v1.push_back(i);
                visit[i]=true;
                sum-=i;
            }
            else{
                v1.push_back(sum);
                visit[sum]=true;
                break;
            }
        }
        for(unsigned long int i=1;i<=n;i++){
            if(!visit[i]){
                v2.push_back(i);
            }
        }
    }
    cout<<v1.size()<<endl;
    for(auto i:v1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<v2.size()<<endl;
    for(auto i:v2){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
