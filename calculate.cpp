#include <iostream>
using namespace std;
class deleting{
    int N,i,want;

    int *A;
    public:
    void createANDinputARRY(int n)
    { 
        N=n;
        A= new int[N];
        for(i=0;i<N;i++){
            cout<<"Enter value at A["<<i<<"]:"<<endl;
            cin>>A[i]; 
        }
    }
    void dodeleting(){
        cout<<"Enter value u want to delete:"<<endl;
        cin>>want;
        //int count=0;
        for(i=0;i<N;i++)  
        {
            if(want==A[i])
            {
                for(int j=i;j<N;j++)
                {
                A[j]=A[j+1];
                }
                //count++;
                N--;
            }
        }
        //N=N-count;
        
    }

    void show(){
        cout<<"New array:"<<endl;
        for(i=0;i<N;i++){
            cout<<A[i]<<" ";
        }
    }

};
int main()
{
    int l;
    cout<<"Enter length of array :"<<endl;
    cin>>l;
    deleting gagan;
    gagan.createANDinputARRY(l);
    gagan.dodeleting();
    gagan.show();

}