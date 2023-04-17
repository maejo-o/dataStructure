//
//  StackL.h
//  CH05
//
//  Created by 이지수 on 2023/04/17.
//

#pragma once
typedef int element;

typedef struct stackNode
{
    element data;
    struct stackNode* link;
}stackNode;

stackNode* top;

int isStackEmpty(void);
void push(element item);
element pop(void);
element peek(void);
void printStack(void);
