#pragma once   //防止重复包含头文件
#include<iostream>
using namespace std;
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <fstream>  //文件流
#define  FILENAME "empFile.txt"
class workerManager{
public: 
    workerManager();
    void show_Menu();
    void exitSystem();
    
    //记录文件中的人数个数
	int m_EmpNum;

	//员工数组的指针
	worker ** m_EmpArray;

    //添加职工
    void add_Emp();
    
    //保存文件
    void save();

    //标志文件是否为空
    bool m_FileIsEmpty;

    //统计人数
	int get_EmpNum();

    //初始化员工
	void init_Emp();

    //显示职工
	void Show_Emp();

    //删除职工
	void Del_Emp();

    //按照职工编号判断职工是否存在,若存在返回职工在数组中位置，不存在返回-1
	int IsExist(int id);

    //修改职工
	void Mod_Emp();

    //查找职工
	void Find_Emp();

    //排序职工
	void Sort_Emp();

    //清空文件
	void Clean_File();
    
    ~workerManager();
};