#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int,greater<int>> m;
    m.insert({1,4});
    m.insert({2,8});
    m.insert({3,12});
    m.insert({4,16});
    for(auto its = m.begin(); its != m.end(); its++){
        cout << (*its).first << " "<< (*its).second ;

    }
    cout << endl;
    auto it  = m.upper_bound(2);
    if(it != m.end()){
        cout << (*it).first << " " << (*it).second;

    }
    else{
        cout << " No greater value";
    }
}