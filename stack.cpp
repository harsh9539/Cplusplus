/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(5);
    q.push(6);
    for (int i = 0; i < 10; i++)
    {
        string curr = q.top();
        cout << curr << " ";
        q.pop();
        q.push(curr+"5");
        q.push(curr+"6");
        
    }
    

    return 0;
}*/
// GFG code 
#include <iostream>
#include <queue>
using namespace std;
// Function to generate numbers
void printFirstN(int n)
{
    // Sample queue
    queue<string> q;

    // Pushing elements 5 and 6 to
    // the queue
    q.push("5");
    q.push("6");

    // for loop to generate n numbers
    for (int count = 0; count < n; count++) {
        // Getting the root node
        string curr = q.front();

        // Displaying the number
        cout << curr << " ";

        // Popping out the element
        q.pop();

        // Pushing element by appending 5
        // on left side
        q.push(curr + "5");

        // Pushing element by appending 6
        // on right side
        q.push(curr + "6");
    }
}
// Driver Method
int main()
{
    int n = 5;
    printFirstN(n);
    return 0;
}






