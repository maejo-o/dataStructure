//
//  threadBT.c
//  CH07_03
//
//  Created by 이지수 on 2023/05/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "threadBT.h"

// data 를 루트 노드로 하여 왼쪽 서브트리와 오른쪽 서브 트리를 연결하는 연산
treeThNode* makeRootThNode(char data, treeThNode* leftNode, treeThNode* rightNode, int isThreadRight) {
    treeThNode* root = (treeThNode*)malloc(sizeof(treeThNode));
    root->data = data;
    root->left = leftNode;
    root->right = rightNode;
    root->isThreadRight = isThreadRight;
    return root;
}

// 후속자 노드를 반환하는 연산
treeThNode* findThreadSuccessor(treeThNode* p) {
    treeThNode* q = p->right;
    if(q == NULL)
        return q; // q = NULL
    if(p->isThreadRight == 1) // 1 은 true 이므로 후행자를 가리킴
        return q; // q 는 후행자 노드
    while(q->left != NULL)
        q = q->left; // q = NULL
    return q;
}

// 스레드 이진 트리의 중위 순회
void threadInorder(treeThNode* root) {
    treeThNode* q;
    q = root;
    while(q->left)
        q = q->left; // q 의 왼쪽 자식노드 순회탐색
    do {
        printf("%3c ", q->data); // q 출력
        q = findThreadSuccessor(q); // q 에 후속자 노드 저장
    }while(q); // q == NULL 일때 반복 종료
}
