#include <iostream>
#include<map>
#include<string>
#include<cmath>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    getline(cin,str);
    map<char,long int>m1;
    for(char c:str){
        m1[c]++;
    }
    if(str.length()&1){
        int cnt=0;
        bool flag=true;
        for(auto i:m1){
            if((i.second%2)==1){
                cnt++;
                if(cnt==2){
                    flag=false;
                    cout<<"NO SOLUTION";
                    break;
                }
            }
        }
        if(flag){
            pair<char,long int>p1;
            for(auto i:m1){
                if(i.second%2==0){
                    for(int j=0;j<i.second/2;j++)
                        cout<<i.first;
                }
                else{
                    p1.first=i.first;
                    p1.second=i.second;
                }
            }
            for(auto i=0;i<p1.second;i++){
                cout<<p1.first;
            }
            for(auto i=m1.rbegin();i!=m1.rend();i++){
                if(i->second%2==0){
                    for(int j=0;j<i->second/2;j++)
                        cout<<i->first;
                }
            }
        }
        
    }
    else{
        bool flag=true;
        for(auto i:m1){
            if((i.second%2)==1){
                flag=false;
                cout<<"NO SOLUTION";
                break;
            }
        }
        if(flag){
            for(auto i:m1){
                for(int j=0;j<i.second/2;j++)
                    cout<<i.first;
            }
            for(auto i=m1.rbegin();i!=m1.rend();i++){
                for(int j=0;j<i->second/2;j++)
                    cout<<i->first;
            }
        }
    }
    return 0;
}
