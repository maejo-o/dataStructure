//
//  ex7-2.c
//  CH07
//
//  Created by 이지수 on 2023/05/22.
//

#include <stdio.h>
#include "folderSize.h"

int main(void) {
    // make binary tree
    treeNode* F11 = makeRootNode(120, NULL, NULL);
    treeNode* F10 = makeRootNode(55, NULL, NULL);
    treeNode* F9 = makeRootNode(100, NULL, NULL);
    treeNode* F8 = makeRootNode(200, NULL, NULL);
    
    treeNode* F7 = makeRootNode(68, F8, F9);
    treeNode* F6 = makeRootNode(40, NULL, NULL);
    treeNode* F5 = makeRootNode(15, NULL, NULL);
    treeNode* F4 = makeRootNode(2, F8, F9);
    
    treeNode* F3 = makeRootNode(10, F6, F7);
    treeNode* F2 = makeRootNode(0, F4, F5);
    
    treeNode* F1 = makeRootNode(0, F2, F3);
    
    FolderSize = 0;
    printf("C:\\ storage gauge: %dM\n", postorder_FolderSize(F2));
    FolderSize = 0;
    printf("D:\\ storage gauge: %dM\n", postorder_FolderSize(F3));
    FolderSize = 0;
    printf("Total My computer storage: %d\n", postorder_FolderSize(F1));
    
    getchar(); return 0;
}
