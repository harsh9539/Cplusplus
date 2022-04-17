#include <iostream>
using namespace std;
class prime{
    int N,i,j;
    int *A;
    int index=0;
    int ss;
    public:
    void checkprime(int n)
    {
        N=n;
        A= new int[N];
        for(i=11;i<=N;i++)
        {
            int flag=1;
            for(j=2;j<i;j++)
            {  
                if(i%j==0){
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
            if(i%10==1){
            A[index]=i;
            index++;
            }
            }
        }
        cout<<"Enter number of value want to add:"<<endl;
        cin>>ss;
        int  ans=0;
        for(i=0;i<ss;i++){
            ans=ans + A[i];
        }
        cout<<"Answer: "<<ans;
    } 
};
int main(){
    int len;
    cout<<"Enter N :";
    cin>>len;
    prime gagan;
    gagan.checkprime(len);
    
}