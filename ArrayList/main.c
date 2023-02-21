# include <stdio.h>
# include "ArrayList.h"

int main(void)
{
    // ArrayList 의 생성 및 초기화 ///
    List list;
    int data;
    int sum=0;
    ListInit(&list);
    
    // 9 개의 데이터 저장
    for (int i=1; i<10; i++)
        LInsert(&list, i);
    
    // 저장된 데이터의 전체 출력
    printf("현재 데이터의 수 : %d\n ", LCount(&list));
    
    if (LFirst(&list, &data))
    {
        printf("%d ", data);
        
        while (LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");
    
    if (LFirst(&list, &data))
    {
        sum+=data;
    }
    
    printf("SUM = %d\n\n", sum);

    // 2의 배수를 탐색하여 모두 삭제
    if (LFirst(&list, &data))
    {
        if ((data%2)==0)
            LRemove(&list);
        while (LNext(&list, &data))
        {
            if ((data%2)==0)
                LRemove(&list);
        }
    }
    
    // 3의 배수를 탐색하여 모두 삭제
    if (LFirst(&list, &data))
    {
        if ((data%3)==0)
            LRemove(&list);
        while (LNext(&list, &data))
        {
            if ((data%3)==0)
                LRemove(&list);
        }
    }
    
    // 삭제 후 남은 데이터 전체 출력
    printf("현재 데이터의 수 : %d\n", LCount(&list));
    
    if (LFirst(&list, &data))
    {
        printf("%d ", data);
        
        while (LNext(&list, &data))
            printf("%d ", data);
    }
    printf("\n\n");
    return 0;
}

