#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(void) {
    printf("��ӭʹ��EasyCheck - ����(�ļ�ϵͳ)�޸����ߣ�\n�˳�����С��365��C������������ӭһ�����ۣ�\n");
    printf("�������̷���ע�⣬����ð��ʱҪ��Ӣ��ģʽ����,��:           C:\n");
    char input[2];
    scanf("%s",&input);
    printf("�̷�Ϊ:%s\n",input);
    printf("������ģʽ��1 - ��ͨ�� | 2 - ��ǿ�棨������ͨ�棩\n");
    int mode;
    scanf("%d",&mode);
    switch (mode) {
        case 1:
            printf("��ͨ��\n");
            char cmd[15];
            sprintf(cmd,"chkdsk %s/f",input);
            // printf("����Ϊ:%s\n",cmd);
            system(cmd);
			printf("������޲�");
            system("pause");
            break;
        case 2:
            printf("��ǿ��\n");
            char command[15];
            sprintf(command,"chkdsk %s/r",input);
            system(command);
			printf("������޲�");
            system("pause");
            break;
        default: ;
    }
    return 0;
}
