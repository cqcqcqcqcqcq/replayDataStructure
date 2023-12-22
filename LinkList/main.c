#include "LinkList.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define BUFFER_SIZE 3

typedef struct stuInfo
{
    int age;
    char sex;
} stuInfo;

/*自定义打印*/
int printStruct(void *arg)
{
    stuInfo *info = (stuInfo*)arg;
    printf("age:%d\t, sex:%c\n", info->age, info->sex);
}

int printBasicData(void *arg)
{
    int data = *(int *)arg;
    printf("data:%d\n", data);
}

int main()
{
#if 0
    char buffer[BUFFER_SIZE] = {0};
    char *ptr = strcpy(buffer, "zhangsan");
    printf("buffer:%s\n", buffer);
    printf("ptr:%s\n", ptr);

#endif
    LinkList * List = NULL;
    /*初始化链表*/
    LinkListInit(&List);
#if 1

    /*插入数据*/

    int buffer[BUFFER_SIZE] = {1, 2, 3};
    /*插入数据*/
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        LinkListHeadInsert(List, (void *)&buffer[idx]);
    }
    /*获取链表的长度*/
    int size = 0;
    LinkListGetlength(List, &size);
    printf("size:%d\n", size);

    LinkListForeach(List, printBasicData);
#else
    stuInfo stu1, stu2, stu3;
    memset(&stu1, 0, sizeof(stu1));
    memset(&stu2, 0, sizeof(stu2));
    memset(&stu3, 0, sizeof(stu3));

    stu1.age = 10;
    stu1.sex = 'm';

    stu2.age = 20;
    stu2.sex = 'f';

    stu3.age = 30;
    stu3.sex = 'm';

    stuInfo buffer[BUFFER_SIZE] = {stu1, stu2, stu3};

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        LinkListHeadInsert(List, (void *)&size);
        printf("size:%d\n", size);
    }

#endif
    

    return 0;
}