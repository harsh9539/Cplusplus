#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int num, k;
        cin >> num;
        int arr[num];
        k = num;
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < num; i++)
        {
            for (int k = 0; k < num; k++)
            {
                if (i == k)
                {
                    continue;
                }
                else
                {
                    if (arr[i] == arr[k])
                    {
                        break;
                    }
                }
            }
        }


        t--;
    }
    return 0;
}
