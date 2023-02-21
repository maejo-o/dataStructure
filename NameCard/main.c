# include <stdio.h>
# include <string.h>
# include "ArrayList.h"
# include "NameCard.h"

int main(void)
{
    List list;
    NameCard *pcard;
    ListInit(&list);
    
    pcard = MakeNameCard("JisuLEE", "010-3101-9472");
    LInsert(&list, pcard);
    
    pcard = MakeNameCard("MinsuJANG", "010-6645-7026");
    LInsert(&list, pcard);
    
    pcard = MakeNameCard("ChaeminLEE", "010-1234-5678");
    LInsert(&list, pcard);
    
    if (LFirst(&list, &pcard))
    {
        if(!NameCompare(pcard, "JisuLEE"))
        {
            ShowNameCardInfo(pcard);
        }
        else
        {
            while (LNext(&list, &pcard))
            {
                if(!NameCompare(pcard, "JisuLEE"));
                {
                    ShowNameCardInfo(pcard);
                    break;
                }
            }
        }
    }
    if (LFirst(&list, &pcard))
    {
        if(!NameCompare(pcard, "MinsuJANG"))
        {
            ShowNameCardInfo(pcard);
            ChangePhoneNum(pcard, "010-3333-4444");
        }
        else
        {
            while (LNext(&list, &pcard))
            {
                if(!NameCompare(pcard, "MinsuJANG"));
                {
                    ShowNameCardInfo(pcard);
                    ChangePhoneNum(pcard, "010-3333-2222");
                    break;
                }
            }
        }
    }
    
    if (LFirst(&list, &pcard))
    {
        if(!NameCompare(pcard, "ChaeminLEE"))
        {
            pcard = LRemove(&list);
            free(pcard);
        }
        else
        {
            while (LNext(&list, &pcard))
            {
                if(!NameCompare(pcard, "ChaeminLEE"));
                {
                    pcard = LRemove(&list);
                    free(pcard);
                    break;
                }
            }
        }
    }
    printf("현재 데이터의 수 : %d\n", LCount(&list));
    
    if (LFirst(&list, &pcard))
    {
        printf("%d ", pcard);
        
        while(LNext(&list, &pcard))
            printf("%d ", pcard);
    }
    printf("\n\n");
    return 0;
}
