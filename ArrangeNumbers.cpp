#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int num, k, n, j = 1;
        cin >> num;
        int arr[num];
        k = num;
        if (num % 2 == 0)
        {
            for (int i = 0; i < (num / 2); i++)
            {
                arr[i] = j;
                cout << "The value at " << i << "th condition : " << arr[i] << endl;
                j++;
                arr[k - 1] = j;
                cout << "The value at " << k - 1 << "th condition : " << arr[k - 1] << endl;
                j++;
                k--;
            }
        }
        else
        {
            for (int i = 0; i < ((num / 2)+1); i++)
            {
                arr[i] = j;
                if (j==num)
                {
                    break;
                }
                
                j++;
                arr[k - 1] = j;
                j++;
                k--;
            }
        }

        for (int j = 0; j < num; j++)
        {
            cout << arr[j] << " ";
        }
        t--;
    }

    return 0;
}
