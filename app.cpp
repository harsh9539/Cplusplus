#include <iostream>
using namespace std;

int main(){
  // your code goes here
  int t;
  cin >> t;
  while (t--){
    int arr[3];
    for (int i = 0; i < 3; i++){
      cin >> arr[i];
    }
    for (int i = 0; i < 3; i++){
      if(arr[0] > 50){
          cout << "A" << endl;
          break;
      }
      if(arr[1] > 50){
          cout << "B" << endl;
          break;
      }
      if(arr[2]> 50){
          cout << "C" << endl;
          break;
      }
    }
    if(arr[0]<= 50 && arr[1]<=50 && arr[2]<= 50){
        cout << "NOTA" << endl;
    }
  }
    return 0;
        }
