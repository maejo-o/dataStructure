
#include <stdio.h>
int main(void)
{
    int i;
    int n = 0;
    int *ptr;
    int sale[2][2][4] = { {{63, 84, 140, 130},
                        {157, 2090, 251, 312}},
                        {{59, 80, 130, 135},
                        {149, 187, 239, 310}}};
    ptr = &sale[0][0][0];
    for(i = 0; i<16; i++)
    {
        printf("adress : %u sale %2d = %3d\n", ptr, i, *ptr);
    }
    getchar(); return 0;
}
