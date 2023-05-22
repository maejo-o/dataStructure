//
//  folderSize.c
//  CH07
//
//  Created by 이지수 on 2023/05/22.
//
#include <stdio.h>
#include <stdlib.h>
#include "folderSize.h"

// size 를 루트 노드의 데이터필드로 하여 왼쪽과 오른쪽 서브 트리를 연결하는 연산
treeNode* make_RootNode(int size, treeNode* leftNode, treeNode* rightNode) {
    treeNode* root = (treeNode*)malloc(sizeof(treeNode));
    root->size = size;
    root->left = leftNode;
    root->right = rightNode;
    return root;
}

// 각 폴더 크기를 계산하기 위한 후위 순회 연산
int postorder_FolderSize(treeNode* root) {
    if(root) {
        postorder_FolderSize(root->left); // L
        postorder_FolderSize(root->right); // R
        FolderSize += root->size;
    }
    return FolderSize;
}
