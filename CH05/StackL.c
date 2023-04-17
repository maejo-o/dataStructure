//
//  StackL.c
//  CH05
//
//  Created by 이지수 on 2023/04/17.
//
#include <stdio.h>
#include <stdlib.h>
#include "StackL.h"
// 스택이 공백 상태인지 확인하는 연산
int isStackEmpty(void)
{
    if(top == NULL)
        return 1;
    else
        return 0;
}
// 스택의 top 원소를 삽입하는 연산
void push(element item)
{
    stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
    
    temp->data = item;
    temp->link = top;
    top = temp;
}
// 스택의 top 에서 원소를 삭제하는 연산
element pop(void)
{
    element item;
    stackNode* temp = top;
    
    if(isStackEmpty())
    {
        printf("Stack is empty! \n");
        return 0;
    }
    else
    {
        item = temp->data;
        top = temp->link;
        free(temp);
        return item;
    }
}

// 스택의 top 원소를 검색하는 연산
element peek(void)
{
    if(isStackEmpty())
    {
        printf("Stack is empty! \n");
        return 0;
    }
    else
    {
        return(top->data);
    }
}
// 스택의 원소를 top 에서 bottom 순서로 출력하는 연산
void printStack()
{
    stackNode* p = top;
    printf("STACK [");
    while(p)
    {
        printf("%d ", p->data);
        p = p->link;
    }
    printf("] \n");
}
