//
//  main.cpp
//  weird-algorithm
//
//  Created by Huzaifa Momin on 04/11/20.
//  Copyright © 2020 Huzaifa Momin. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    unsigned long long int n;
    cin>>n;
    while(n!=1){
        cout<<n<<" ";
        if(n&1){
            n=n*3;
            n+=1;
        }
        else{
            n=n>>1;
        }
        
    }
    cout<<"1";
    return 0;
}
