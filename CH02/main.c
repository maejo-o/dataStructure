
#include <stdio.h>

int main(void)
{
    int i = 0;
    int n;
    int multiply[9];
    
    printf("Input the Integer (1~9) : ");
    while(1)
    {
        scanf("%d", &n);
        if(n < 0 || n > 9)
            printf("Input the Integer (1~9) : \n");
        else
            break;
    }
    printf("\n");
    for(i = 0; i < 9; i++)
    {
        multiply[i] = n * (i + 1);
        printf(" %d * %d = %d \n", n, i+1, multiply[i]);
    }
    return 0;
}
