// #include<iostream>
#include<bits/stdc++.h>
// #include<array>
// #include<vector>
// #include<deque>
// #include<list>
// #include<stack>
// #include<queue>
// #include<algorithm>
// #include<utility>
using namespace std;
    // Function Template
/*
template <typename T>
T arrMax(T arr[],int n)
{
    T res = arr[0];
    for (int i = 0; i < n; i++)
    {
            if (arr[i]>res)
            {
                res = arr[i];
            }
            
    }
    return res;
    
}
*/
    // Class Template
/*
template <typename U>
struct pairs{
    U x,y;
    pairs(U i, U j) {x = i, y = j;}
    U getFirst() {return x;};
    U getSecond() {return y;};

};
*/


int main(){
    //deque
/*
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_back(4);
    cout << endl;

    cout <<" Print first Index Element-->" << d.at(3)<< endl;
    */
    //Linked List 
/*
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_back(4);

    for (int i:l){
        cout << i << ' ';
    }
    cout << endl;

    l.erase(l.begin());
    cout << "after erase " << endl;
    for (int i:l){
        cout << i << ' ';
    }


cout << endl;
// New List 
    list<int> n(10,100);
    for (int i:n){
        cout << i << " ";
    }
    */
    //algorithm 
/*
vector<int> i;

i.push_back(1);
i.push_back(4);
i.push_back(5);
i.push_back(6);
i.push_back(2);

cout  << " Binary search -->  "<< binary_search(i.begin(),i.end(),9) << endl;
*/
    //iterator
/*
vector<int> v = {10,20,30,40,50};
vector<int>::iterator i = v.begin(); // This line can be written as -->  //auto i = v.begin();
cout << (*i) << " ";
i++;
cout << (*i)<<' ';
i = v.end();
cout << (*i) << ' ';
i--;
cout << (*i) << ' ';
*/
    //pair
/*
pair<int,int> p1(10,20);
pair<int,string> p2(10,"Harsh");
cout << p1.first << ' ' << p1.second << ' ' << endl;
cout << p2.first << ' ' << p2.second << ' ' << endl;

//Comparison Operator
pair<int,int> p3(1,12), p4(9,12);
cout << (p3 == p4) << " " << endl;
cout << (p3 != p4) << " " << endl;
cout << (p3 > p4) << " " << endl;
cout << (p3 < p4) << " " << endl;
*/
    //Calling of fuction template of arrMax
/*
float arr[] = {10.3,40.4,30.5,40.3};
cout << arrMax<float>(arr,4);
*/
    //calling of class template of Pair
/*
pairs<int> p5(10,20);
cout << p5.getFirst() << " ";
cout << p5.getSecond() << " " << endl;
*/
    //
vector<int>v;
v.push_back(2);
v.push_back(5);
v.push_back(10);
cout << v.size() << endl;
cout << "Capacity --> " << v.capacity() << " ";



    return 0;
}















