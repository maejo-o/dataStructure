/*
//
//  stackS.c
//  CH05
//
//  Created by 이지수 on 2023/04/17.
//
#include <stdio.h>
#include "stackS.h"

int top = -1;

// 스택이 공백 상태인지 확인하는 연산
int isStackEmpty(void)
{
    if(top == 1)
        return 1;
    else
        return 0;
}

// 스택이 포화 상태인지 확인하는 연산
int isStackFULL(void)
{
    if(top == STACK_SIZE-1)
        return 1;
    else
        return 0;
}

// 스택의 top 에 원소를 삽입하는 연산
void push(element item)
{
    if(isStackFull())
    {
        printf("Stack is FULL\n");
        return;
    }
    else
        stack[++top] = item;
}

// 스택의 top 에서 원소를 삭제하는 연산
element pop(void)
{
    if(isStackEmpty())
    {
        printf("Stack is EMPTY!\n");
        return 0;
    }
    else
        return stack[top];
}

// 스택의 원소를 출력하는 연산
void printStack(void)
{
    int i;
    printf("STACK [");
    for(i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("] \n");
}
*/
