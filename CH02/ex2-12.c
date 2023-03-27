
#include <stdio.h>
struct employee {
    char name[10];
    int year;
    int salary;
}Lee;
int main(void)
{
    int i;
    struct employee Lee[4] = {
        {"이진호", 2022, 5200},
        {"이한영", 2023, 4300},
        {"이상원", 2023, 4500},
        {"이상범", 2024, 3900}
    };
    
    for(i = 0; i < 4; i++)
    {
        printf("name : %s\n", Lee[i].name);
        printf("year : %d\n", Lee[i].year);
        printf("salary : %d\n", Lee[i].salary);
    }
    return 0;
}
