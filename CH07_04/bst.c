//
//  bst.c
//  CH07_04
//
//  Created by 이지수 on 2023/05/23.
//
#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "bst.h"

// 이진탐색 트리에서 키값이 x 인 노드의 위치를 탐색하는 연산
treeNode* searchBST(treeNode* root, element x) {
    treeNode* p;
    p = root;
    while(p != NULL) {
        if(x < p->key)
            p = p->left;
        else if(x == p->key)
            return p;
        else
            p = p->right;
    }
    printf("찾는 키가 없습니다.\n");
    return p;
}

// 포인터 p 가 가리키는 노드와 비교하여 노드 x 를 삽입하는 연산
treeNode* insertBSTNode(treeNode* p, element x) {
    treeNode* newNode;
    if(p == NULL) {
        newNode = (treeNode*)malloc(sizeof(treeNode));
        newNode->key = x;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    else if(x < p->key)
        p->left = insertBSTNode(p->left, x);
    else if(x > p->key)
        p->right = insertBSTNode(p->right, x);
    else
        printf("이미 같은 키가 있습니다.\n");
    
    return p;
}

// 루트 노드부터 탐색하여 키값과 같은 노드를 찾아 삭제하는 연산
void deleteBSTNode(treeNode* root, element key) {
    treeNode* parent, *p, *succ, *succ_parent;
    treeNode* child;
    
    parent == NULL;
    p = root;
    while((p != NULL) && (p->key != key)) { // 삭제할 노드의 위치 탐색
        parent = p;
        if(key < p->key)
            p = p->left;
        else
            p = p->right;
    }
    // 삭제할 노드가 없는 경우
    if(p == NULL) {
        printf("찾는 키가 이진트리에 없습니다!\n");
        return;
    }
    // 삭제할 노드가 단말 노드인 경우
    if((p->left == NULL) && (p->right == NULL)) {
        if(parent != NULL) {
            if(parent->left == p)
                parent->left == NULL;
            else
                parent->right = child;
        }
        else
            root = NULL;
    }
    // 삭제할 노드가 자식 노드를 한개 가진 경우
    else if((p->left == NULL) || (p->right == NULL)) {
        if(p->left != NULL)
            child = p->left;
        else
            child = p->right;
        
        if(parent != NULL) {
            if(parent->left == p)
                parent->left = child;
            else
                parent->right = child;
        }
        else root = child;
    }
    // 삭제할 노드가 자식 노드를 두개 가진 경우
    else {
        succ_parent = p;
        succ = p->left;
        while(succ->right != NULL) {
            succ_parent = succ;
            succ = succ->right;
        }
        if (succ_parent->left == succ)
            succ_parent->left = succ->left;
        else
            succ_parent->right = succ->left;
        p->key = succ->key;
        p = succ;
    }
    free(p);
}
