//
//  node.h
//  CH07_04
//
//  Created by 이지수 on 2023/05/23.
//

#pragma once
typedef char element;

typedef struct treeNode {
    element key;
    struct treeNode* left;
    struct treeNode* right;
} treeNode;

void displayInorder(treeNode* root);
