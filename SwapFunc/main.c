//
//  main.c
//  SwapFunc
//
//  Created by chenyufeng on 16/2/3.
//  Copyright © 2016年 chenyufengweb. All rights reserved.
//

#include <stdio.h>

/**
 *  由于我这里用的是C语言，所以不能使用引用。C++中可以使用引用。
 引用的函数定义：
 void swap04(int &a,int &b){
 ...
 }
 */

void swap01(int *a,int *b);
void swap02(int *a,int *b);
void swap03(int *a,int *b);

int main(int argc, const char * argv[]) {

    int a = 1;
    int b = 2;
    printf("交换前：a = %d,b = %d\n",a,b);
    swap03(&a, &b);
    printf("交换后：a = %d,b = %d\n",a,b);

    return 0;
}

//最常规的交换；
void swap01(int *a,int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//不用第三个数；
void swap02(int *a,int *b){

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

//异或，使用二进制位进行计算；
void swap03(int *a,int *b){

    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;
}

















