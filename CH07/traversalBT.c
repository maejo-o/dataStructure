//
//  traversalBT.c
//  CH07
//
//  Created by 이지수 on 2023/05/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "traversalBT.h"

// data 를 루트 노드로 하여 왼쪽 서브트리와 오른쪽 서브트리를 연결하는 연산
treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode) {
    treeNode* root = (treeNode*)malloc(sizeof(treeNode));
    root->data = data;
    root->left = leftNode;
    root->right = rightNode;
    return root;
}

// 이진트리에 대한 전위 순회 연산
void pre_order(treeNode* root) {
    if(root) {
        printf("%c ", root->data); // D
        pre_order(root->left); // L
        pre_order(root->right); // R
    }
}

// 이진트리에 대한 중위 순회 연산
void in_order(treeNode* root) {
    if(root) {
        in_order(root->left); // L
        printf("%c ", root->data); // D
        in_order(root->right); // R
    }
}

// 이진트리에 대한 후위 순회 연산
void post_order(treeNode* root) {
    if(root) {
        post_order(root->left); // L
        post_order(root->right); // R
        printf("%c ", root->data); // D
    }
}
