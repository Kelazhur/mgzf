#include <stdio.h>
char arr[1024];
int index=0;
int isMingan(char x){
    int count=0;
    for(int i=0;i<index;i++)
    {
        if(x==arr[i])
        {
            count++;
        }
    }
    if(count==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    printf("进入敏感字符管理系统\n");
    while(1)
    {
        printf("1---添加敏感字符\n");
        printf("2---删除敏感字符(最后一个)\n");
        printf("3---查看所有敏感字符\n");
        printf("4---替换敏感字符\n");
        printf("5---退出\n");
        printf("请选择相应功能\n");
        int code;
        scanf("%d",&code);
        if(code==1)
        {
            printf("请输入要添加的敏感字符\n");
            char m;
            scanf("%c",&m);
            scanf("%c",&m);
            arr[index]=m;
            index++;
            printf("添加成功，点击回车继续\n");
            char enter;
            scanf("%c",&enter);
            scanf("%c",&enter);
        }
        if(code==2)
        {
            printf("正在删除最后一个敏感字符……\n");
            if(index>0)
            {
                index--;
                printf("删除成功，点击回车继续\n");
                char enter;
                scanf("%c",&enter);
                scanf("%c",&enter);
            }
            else
            {
                printf("删除失败，无敏感字符，点击回车继续\n");
                char enter;
                scanf("%c",&enter);
                scanf("%c",&enter);
            }
        }
        if(code==3)
        {
            if(index>0)
            {    
                for(int i=0;i<index;i++)
                {
                    printf("第%d个敏感字符为%c\n",i+1,arr[i]);
                }
            }
            else
            {
                printf("无敏感字符,");
            }
            printf("点击回车继续\n");
            char enter;
            scanf("%c",&enter);
            scanf("%c",&enter);
        }
        if(code==4)
        {
            printf("请输入一段英文：\n");
            char neirong[1024];
            scanf("%s",neirong);
            for(int i=0;1;i++)
            {
                if(neirong[i]=='\0')
                {
                    break;
                }
                if(isMingan(arr[i])==1)
                {
                    neirong[i]='*';
                }
                printf("%c",neirong[i]);
            }
            printf("\n");
            printf("替换完成，点击回车继续\n");
            char enter;
            scanf("%c",&enter);
            scanf("%c",&enter);
        }
        if(code==5)
        {
            printf("退出系统\n");
            break;
        }
    }
}