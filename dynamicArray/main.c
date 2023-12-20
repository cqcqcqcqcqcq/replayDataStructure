#include<stdio.h>
#include"dynamicArray.h"

#define BUFFER_SIZE 10

#define DEFAULT_SIZE 3

int main()
{
    dynamicArray array;
    /*初始化*/
    dynamicArrayInit(&array, BUFFER_SIZE);

    /*插入数据*/
    for (int idx = 0; idx < DEFAULT_SIZE; idx++)
    {
        dynamicArrayInsertData(&array, idx);
    }

    int size = 0;

    /*获取动态数组的大小*/
    dynamicArrayGetSize(&array, &size);
    printf("size:%d\n", size);

    return 0;
}