/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long int fact(int);
int main(void)
{
    int n, result;
    printf("Input the integer : ");
    scanf("%d", &n);
    result = fact(n);
    printf("%d ! = %ld\n", n, result);
    getchar(); getchar();
}
long int fact(int n)
{
    int value;
    if(n <= 1)
    {
        printf("fact(1) func call\n");
        printf("fact(1) func return 1\n");
        return 1;
    }
    else{
        printf("fact(%d) func call\n", n);
        value = (n * fact(n-1));
        printf("fact(%d) func return %ld\n", n, value);
        return value;
    }
}

*/
