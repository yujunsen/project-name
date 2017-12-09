#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>


#define LEN sizeof(struct address_list) //计算字节数
int n;

typedef struct address_list
{
    char name[20];
    char work[30];
    char handset[30];
    char email[30];
    struct address_list *next;
}address;

address *shifang(address *head);	//释放内存

address* create(void)
{
	address *head = NULL;
	address *p1 = NULL;
    char buff[20]={0};
    printf("请输入通讯录的内容!\n姓名输入为0时表示创建完毕!\n");
    while(fgets(buff, sizeof(buff), stdin) == NULL)
       printf("请重新输入:");

    while(1)
    {
        p1 = (address*)malloc(LEN);
        if(p1 == NULL)
        {
            printf("create malloc err\n");
            return 0;
        }
       
        if(!strcmp(buff, "0"))
        {
            strncpy(p1->name, buff,strlen(buff) + 1);
            printf("请输入职业:");     fgets(p1->work, sizeof(p1->work), stdin);  
            printf("请输入手机:");     fgets(p1->handset, sizeof(p1->handset), stdin);  
            printf("请输入电子邮件:"); fgets(p1->email, sizeof(p1->email), stdin);  
            printf("请输入工作:"); fgets(p1->work, sizeof(p1->work), stdin);  
            p1->address_list = NULL;
            head = p1;
            p1 = NULL;
        }
        else
        {
            if(p1 != NULL)
                free(p1);
            p1 = NULL;
            break;
        }
    } 
        
}


int main()
{
    create();

    return 0;
}
