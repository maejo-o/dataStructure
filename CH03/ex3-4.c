
#include <stdio.h>
#include "listS.h"
int main(void)
{
    int list[MAX] = {10, 20, 40, 50, 60, 70};
    int i, move, size = 6;
    printf("삽입 전 리스트 : \n");
    for(i=0; i < size; i++)
    {
        printf("%3d ", list[i]);
    }
    printf("\n원소의 개수 : %d\n", size);
    move = insertElement(list, size, 30);
    printf("삽입 후 선형리스트 : \n");
    for(i=0; i < size; i++)
    {
        printf("%3d", list[i]);
    }
    printf("\n원소의 갯수 : %d\n", ++size);
    printf("자리 이동 횟수 : %d\n", move);
    
    move = deleteElement(list, size, 30);
    if(move == size)
        printf("선형 리스트에 원소가 없어서 삭제할 수 없습니다\n");
    else
    {
        printf("삭제 후 선형 리스트 :\n");
        for(i = 0; i<size-1; i++)
        {
            printf("%3d ", list[i]);
        }
        printf("\n원소의 갯수 : %d\n", --size);
        printf("자리 이동 횟수 : %d\n", move);
    }
    getchar(); return 0;
}
