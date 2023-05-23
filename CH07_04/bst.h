//
//  bst.h
//  CH07_04
//
//  Created by 이지수 on 2023/05/23.
//

#pragma once
#include "node.h"

treeNode* searchBST(treeNode* root, element x);
treeNode* insertBSTNode(treeNode* p, element x);
void deleteBSTNode(treeNode* root, element key);
