#include <iostream>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    long long cnt=1;
    long long ans=0;
    str+='z';
    for(int i=1;i<str.length();i++){
        if(str[i]==str[i-1]){
            cnt++;
        }
        else{
            if(ans<cnt)
                ans=cnt;
            cnt=1;
        }
    }
    cout<<ans;
    return 0;
}
