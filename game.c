#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,a = 0,b=  0;
    char me,you;
    for (t = 0; t < 5; t++)
    {
        scanf("%c %c",&me,&you);
        // printf("%c",me);
        // printf("%c",you);
        printf("\n");
        
        if ((me == "s") && (you == "w"))
        {
            a = a+1;
        }
        else if((me == "w") && (you == "s")){
            b = b+1;
        }
        if ((me == "g") && (you == "s"))
        {
            a = a+1;
        }
        else if((me == "s") && (you == "g")){
            b = b+1;
        }
        if ((me == "g") && (you == "w"))
        {
            a = a+1;
        }
        else if((me == "w") && (you == "g")){
            b = b+1;
        }
        
        printf("%d %d \n",a,b);

    }
    printf("a = %d b=%d \n",a,b);
    if (a>b)    
    {
        printf("a is the winner");
    }
    else{
        printf("b is the winner");
    }
    
    return 0;
}
