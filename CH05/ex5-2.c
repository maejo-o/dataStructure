//
//  ex5-2.c
//  CH05
//
//  Created by 이지수 on 2023/04/17.
//

#include <stdio.h>
#include "StackL.h"

int main(void)
{
    element item;
    top = NULL;
    printf("** 연결 스택 연산 ** \n");
    printStack();
    
    push(1);
    printStack();
    push(2);
    printStack();
    push(3);
    printStack();
    
    item = peek();
    printStack();
    printf("peek => %d\n", item);
    
    item = pop();
    printStack();
    printf("pop => %d\n", item);
    
    item = pop();
    printStack();
    printf("pop => %d\n", item);
    
    item = pop();
    printStack();
    printf("pop => %d\n", item);
    
    getchar();
    return 0;
}
