
#include <stdio.h>
int main(void)
{
    int i, j, k;
    char student[2][3][20];
    for(i = 0; i < 2; i++)
    {
        printf("Student%d 's name : ", i+1);
        gets_s(student[i][0][20]);
        printf("Studnet%d 's major : ", i+1);
        gets_s(student[i][1][20]);
        printf("Studnet%d 's shool number : ", i+1);
        gets_s(student[i][2][20]);
    }
    for(i = 0; i < 2; i++)
    {
        printf("Student%d : ", i+1);
        for(j = 0; j < 3; j++)
        {
            printf("\n");
            for(k = 0; student[i][j][k] != '\0'; k++)
            {
                printf("%c", student[i][j][k]);
            }
        }
    }
    getchar();
    return 0;
}
