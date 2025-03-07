#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(void) {
    printf("欢迎使用EasyCheck - 磁盘(文件系统)修复工具！\n此程序由小兴365制作，欢迎一起讨论！\n");
    printf("请输入盘符（注意，输入冒号时要以英文模式！）,如:           C:\n");

    char input;
	scanf("%s", &input);

    printf("盘符为:%s\n",input);
    printf("请输入模式：1 - 普通版 | 2 - 加强版（包含普通版）\n");


    int mode;
    scanf("%d",&mode);
    switch (mode) {
        case 1:
            printf("普通版\n");
            char cmd;
            sprintf(cmd,"chkdsk %s/f",input);
            // printf("命令为:%s\n",cmd);
            system(cmd);
            system("pause");
            break;
        case 2:
            printf("加强版\n");
            char command;
            sprintf(command,"chkdsk %s/r",input);
            system(command);
            system("pause");
            break;
        default: ;
    }
    return 0;
}
