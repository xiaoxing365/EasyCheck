#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "欢迎使用EasyCheck - 磁盘(文件系统)修复工具！\n此程序由小兴365制作，欢迎一起讨论！\n" << endl;
	cout << "请输入盘符（注意，输入冒号时要以英文模式！）,如:           C:\n" << endl;

    string input;
	cin >> input;

	cout << "盘符为:" << input << "\n" << endl;
	cout << "请输入模式：1 - 普通版 | 2 - 加强版（包含普通版）\n" << endl;


    int mode;
	cin >> mode;
    switch (mode) {
	case 1: {
		printf("普通版\n");
		string cmd = "chkdsk "+input+"/f";
		// printf("命令为:%s\n",cmd);
		const char * command = cmd.data;
		system(command);
		system("pause");
		break;
	}
	case 2: {
		printf("加强版\n");
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
