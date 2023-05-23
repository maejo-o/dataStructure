//
//  node.c
//  CH07_04
//
//  Created by 이지수 on 2023/05/23.
//
#include <stdio.h>
#include "node.h"
// 이진 탐색 트리를 중위 순회하면서 출력하는 연산
void displayInorder(treeNode* root) {
    if(root) {
        displayInorder(root->left);
        printf("%c ", root->key);
        displayInorder(root->right);
    }
}
