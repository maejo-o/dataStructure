
#include <stdio.h>
#include "smTranspose.h"
int main(void)
{
    term a[] = { {8, 7, 10}, {0, 2, 2}, {1, 4, 7}, {2, 0, 23}, {3, 3, 31}, {4, 1, 14}, {4, 5, 25}, {5, 6, 6}, {6, 0, 52}, {7, 4, 11}};
    term b[sizeof(a) / sizeof(a[0])];
    int i;
    
    printf("<< 희소행렬 a >>\n");
    for(i = 0; i < a[0].value; i++)
        printf("[%3d, %3d, %3d]\n", a[i].row, a[i].col, a[i].value);
    
    smTranspose(a,b);
    printf("<< 희소행렬 b >>\n");
    for(i = 0; i < b[0].value; i++)
        printf("[%3d, %3d, %3d]\n", b[i].row, b[i].col, b[i].value);
    
    getchar(); return 0;
    
}
