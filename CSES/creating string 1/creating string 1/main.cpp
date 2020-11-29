
#include <iostream>
#include<string>
#include<set>
using namespace std;
void permute(string str,size_t l,size_t r,set<string>&s){
    
    if(l==r){
        s.insert(str);
    }
    for(size_t i=l;i<=r;i++){
        swap(str[l],str[i]);
        permute(str,l+1,r,s);
        swap(str[l],str[i]);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>>str;
    set<string>s;
    permute(str,0,str.length()-1,s);
    cout<<s.size()<<endl;
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<endl;
    }
    return 0;
}
