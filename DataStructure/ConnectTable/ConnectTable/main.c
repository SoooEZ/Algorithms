//
//  main.c
//  ConnectTable
//
//  Created by YJHou on 2018/4/12.
//  Copyright © 2018年 houmanager@hotmail.com. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    return 0;
}

// AB都是尾指针
LinkList connect2Table(LinkList A, LinkList B){
    
    LinkList p = A->next; // 保存A表的头结点
    A->next = B->next->next; // 将b的开始结点链接到a的尾部
    free(B->next); // 释放B的头结点
    B->next = p;
    
    return B;
}
