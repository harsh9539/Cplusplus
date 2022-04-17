#include <iostream>

#include <math.h>
using namespace std;

/*
int main(){
    int n;
    cin >> n;
    int i = 1;
    int p = 1;
    while (i<=n)
    {
    int j = 1;
    while(j<=n){
        cout<< p <<' ';
        p += 1;
        j += 1;
    }
    cout << endl;
    i += 1;
    }

}
*/

/*
int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i<= n)
    {
        int j = 1;
            int count = i;
        while (j<= i)
        {
            cout << count << " ";
            count -= 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }

}*/

/*
int main(){
    int n = 10;

    int a = 0;
    int b= 1;
    cout << a << " " << b << " ";
    for (int i = 0; i < n; i++)
    {
        int nextNumber = a+b;
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;

    }


}
*/

/*
int main(){
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;

    while(n != 0){
        int bit;
        bit = n%2;
        ans = (bit * pow(10,i) + ans);
        // cout << bit << endl;
        n = n/2;
        i++;
    }

cout << ans << endl;
}
*/
/*
int main(){
    int n;
    cin >> n;
    // int i = len(n);

    int rev= 0;
    int temp = 0;
    while (n != 0)
    {
        temp = n%10;
        // rev = ((temp*pow(10,i))+rev);
        rev = (rev*10) + temp;
        n = n/10;
        // i--;
    }
    cout << rev;
}
*/

/*
int getMax(int arr[],int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }

    }
    return max;

}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum Value is " << getMax(arr,n) << endl;

    return 0;
}

*/

/*
// Swap Alternate
void swapAlt(int arr[],int size){
    for (int i = 0; i < size; i +=2)
    {
        if ((i+1) < size)
        {
            swap(arr[i],arr[i+1]);
        }

    }

}


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swapAlt(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";

    }
    cout << endl;

    return 0;
}
*/
/*
int binarySearch(int arr[], int size, int key){

    int start = 0, end = size - 1, mid = ((start + end) / 2);

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return -1;
}


int main()
{
    // int n, k, arr[100], ans;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cin >> k;
    int arr[6] = {2,4,6,8,12};
    int ans = binarySearch(arr,5,6);
    cout <<"index of 12 is "<< ans;

    return 0;
}
*/

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    for(int i = 0;i<n;i++){
        if(arr[i]>arr[i+1]){
            cout << i;
            break;
        }
    }
    return 0;
}

