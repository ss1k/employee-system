#include<iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#define tests 
int main() {
#ifdef  test
	worker *worker = NULL;
	worker = new employee(1,"ss",1);
	worker->showInfo();
	delete worker;

	worker = new manager(2,"syj",1);
	worker->showInfo();
	delete worker;

	worker = new boss(3,"syjj",1);
	worker->showInfo();
	delete worker;
#endif

    //实例化管理者对象
    workerManager wm;
    int choice = 0;
	while (true)
	{
		//展示菜单
		wm.show_Menu();
		cout << "请输入您的选择:" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0: //退出系统
			wm.exitSystem();
			break;
		case 1: //添加职工
			wm.add_Emp();
			break;
		case 2: //显示职工
			wm.Show_Emp();
			break;
		case 3: //删除职工
			wm.Del_Emp();
			break;
		case 4: //修改职工
			wm.Mod_Emp();
			break;
		case 5: //查找职工
			wm.Find_Emp();
			break;
		case 6: //排序职工
			wm.Sort_Emp();
			break;
		case 7: //清空文件
			wm.Clean_File();
			break;
		default:
			//system("cls");
			break;
		}
	}

    return 0;
}
