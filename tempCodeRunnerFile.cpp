#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=2,y=8,z,*p1 = &x,*p2  = &y;
    int t = *p2;
    cout << t << endl;
    z = *p1+*&*p2;
    cout << (*&z);

}