#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> p;
    p.push(43);
    p.push(45);
    p.push(85);
    cout << p.size() << " ";
    cout << p.top() << " "<< endl;
    while (p.empty() != false) 
    {
        cout << p.top() << " ";
        p.pop();
    }

    int n;
    
while(true){
    cout << n << " " << endl;
    n++;
}
    return 0;
}