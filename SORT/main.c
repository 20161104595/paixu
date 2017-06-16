//
//  main.c
//  SORT
//
//  Created by 20161104595 on 17/6/16.
//  Copyright © 2017年 20161104595. All rights reserved.
//

#include<stdio.h>
int main(int argc, const char * argv[])
{
    int i,a[10],j,t;
    FILE *fp1;
    FILE *fp2;
    fp1=fopen("//Users//a20161104595//Desktop//SORT//SORT//input.txt", "r+");
    fp2=fopen("//Users//a20161104595//Desktop//SORT//SORT//output.txt","w+");
    if(fp2==NULL)
    {
        printf("打开文件错误，要打开的文件不存在");
    }
    else
    {
        for(i=0;i<10;i++)
        {
            fscanf(fp1,"%d",&a[i]);
        }
        for(j=0;j<9;j++)
        {
            for(i=0;i<=8-j;i++)
            {
                if(a[i]>a[i+1])
                {
                    t=a[i];
                    a[i]=a[i+1];
                    a[i+1]=t;
                }
            }
        }
        printf("排列后顺序为：");
        fprintf(fp2,"排列后顺序为：");
        for(i=0;i<10;i++)
        {
            printf("%d ",a[i]);
        }
        fprintf(fp2,"\n");
        printf("\n");
        fclose(fp1);
        fclose(fp2);
    }
    return 0;
}
