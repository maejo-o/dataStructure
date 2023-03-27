
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct employee {
    char name[10];
    int year;
    int pay;
};

int main(void)
{
    struct employee Lee;
    struct employee *Sptr = &Lee;
    strcpy(Sptr->name, "이순신");
    Sptr->year = 2023;
    Sptr->pay = 6900;
    
    printf("name : %s\n", Sptr->name);
    printf("year : %d\n", Sptr->year);
    printf("salary : %d\n", Sptr->pay);
    return 0;
}

