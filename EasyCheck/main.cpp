#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "��ӭʹ��EasyCheck - ����(�ļ�ϵͳ)�޸����ߣ�\n�˳�����С��365��������ӭһ�����ۣ�\n" << endl;
	cout << "�������̷���ע�⣬����ð��ʱҪ��Ӣ��ģʽ����,��:           C:\n" << endl;

    string input;
	cin >> input;

	cout << "�̷�Ϊ:" << input << "\n" << endl;
	cout << "������ģʽ��1 - ��ͨ�� | 2 - ��ǿ�棨������ͨ�棩\n" << endl;


    int mode;
	cin >> mode;
    switch (mode) {
	case 1: {
		printf("��ͨ��\n");
		string cmd = "chkdsk "+input+"/f";
		// printf("����Ϊ:%s\n",cmd);
		const char * command = cmd.data;
		system(command);
		system("pause");
		break;
	}
	case 2: {
		printf("��ǿ��\n");
		string cmd = "chkdsk " + input + "/r";
		const char * command = cmd.data;
		system(command);
		system("pause");
		break;
	}
	default: {};
    }
    return 0;
}
