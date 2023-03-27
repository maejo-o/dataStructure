
#include <stdio.h>

void hanoi(int n, int start, int work, int target);
int main(void)
{
    hanoi(3, 'A', 'B', 'C');
    getchar();
}
void hanoi(int n, int start, int work, int target)
{
    if(n==1)
    {
        printf("%c 에서 원반 %d 를 %c 로 옮김\n", start, n, target);
    }
    else
    {
        hanoi(n-1, start, target, work);
        printf("%c 에서 원반 %d 를 %c로 옮김\n", start, n-1, target);
        hanoi(n-1, work, start, target);
    }
}
