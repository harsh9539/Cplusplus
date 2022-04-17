#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for (int i = 0; i < n/2; i++)
    {
        if (n % i == 0)     
        {
            return false;
        }
        
    };
    return true;
    
}

int generatePrime(int n){
    int arr[n];
    int i = 2;
    while ((sizeof(arr)) < n)
    {
        
    }
    

return true;
}

int main()
{
    int num;
    cin >> num;
    // isPrime(num) ? cout << "true \n" : cout << " false\n";
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    cout << sizeof(arr)/sizeof(*arr);

    return 0;
}