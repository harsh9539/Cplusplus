#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int a[size], b[size];
    int aize = 0, bize = 0;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < size; j++)
    {
        scanf("%d", &b[j]);
    }
    for (int k = 1; k <= size; k++)
    {

        if (k % 2 != 0 || k == 1)
        {

            if (a[aize] % 2 == 0)
            {
                printf("%d, size of k\n", k);
                printf("%d", a[aize]);
                printf(" From A\n");
                printf("%d, size of a", aize);
                aize++;
                
            }
        }
        else
        {
            if (b[bize] % 2 != 0)
            {
                printf("%d, size of k\n", k);
                printf("%d", b[bize]);
                printf(" From B\n");
                printf("%d,size of b", bize);
                bize++;
                
            }
        }
    }

    return 0;
}