#include<bits/stdc++.h>
using namespace std;
//  GFG problem 3
/* int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }

    for(auto it = v.end() -1 ; it != v.begin() - 1; it--)
    cout << (*it) << " " ;
    return 0;

}
*/

// GFG problem 4
// Vector<int> 

int main(){
    int ele,size;
    cout << "Enter the size of array" << "";
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Values: ";
        cin >> ele;
        v.push_back(ele);
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout << (*it) << " ";
    }
    
    
}