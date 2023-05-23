//
//  main.cpp
//  CH07_04
//
//  Created by 이지수 on 2023/05/23.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "bst.h"

void menu(void);

int main(void) {
    treeNode* root = NULL;
    treeNode* foundedNode = NULL;
    char choice, key;
    
    // 그림 [7-38] 과 같은 초기 이진 탐색 트리를 구성하고
    // 노드 G 를 루트 노드 포인터 root 로 지정
    root = insertBSTNode(root, 'G');
    insertBSTNode(root, 'I');
    insertBSTNode(root, 'H');
    insertBSTNode(root, 'D');
    insertBSTNode(root, 'B');
    insertBSTNode(root, 'M');
    insertBSTNode(root, 'N');
    insertBSTNode(root, 'A');
    insertBSTNode(root, 'J');
    insertBSTNode(root, 'E');
    insertBSTNode(root, 'Q');
    
    while(1) {
        menu();
        scanf("%c ", &choice);
        
        switch(choice - '0') {
            case 1:
                printf("[이진 트리 출력]\n");
                displayInorder(root);
                printf("\n");
                break;
                
            case 2:
                printf("삽입할 문자를 입력하세요: ");
                scanf("%c ", &key);
                insertBSTNode(root, key);
                break;
            case 3:
                printf("삭제할 문자를 입력하세요: ");
                scanf("%c ", &key);
                deleteBSTNode(root, key);
                break;
            case 4:
                printf("찾을 문자를 입력하세요: ");
                scanf("%c ", &key);
                foundedNode = searchBST(root, key);
                if(foundedNode != NULL)
                    printf("%c 를 찾았습니다!\n", foundedNode->key);
                else
                    printf("문자를 찾지 못했습니다 \n");
                break;
            case 5:
                return 0;
            
            default:
                printf("없는 메뉴 입니다. 메뉴를 다시 선택하세요!\n");
                break;
        }
    }
}

void menu(void) {
    printf("* ----------------------- *\n");
    printf("t1: 트리출력\n");
    printf("t2: 문자삽입\n");
    printf("t3: 문자삭제\n");
    printf("t4: 문자검색\n");
    printf("t5: 종료\n");
    printf("* ----------------------- *\n");
    printf("메뉴입력 >> ");
}
