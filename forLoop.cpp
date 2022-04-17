#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int num1, num2;
    char arr[10] = {'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight'};
    cin >> num1;
    cin >> num2;
    if (num1 >= 9)
    {
        for (int i = num1; i < 10; i++)
        {
            cout << arr[i];
        }
    }
    else if (num1 > 9 && (num1 % 2 == 0))
    {
        for (int i = num1; i < num1; i++)
        {
            cout << "even";
        }
    }
    else
    {
        for (int i = num1; i < num1; i++)
        {
            cout << "odd";
        }
    }

    return 0;
}