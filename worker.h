#pragma once
#include<iostream>
#include<string>
using namespace std;

//职工抽象基类，多态的实现！
class worker
{
public:

	//显示个人信息
	virtual void showInfo() = 0;  //纯虚函数，抽象类
	//获取岗位名称
	virtual string getDeptName() = 0;

	int m_Id; //职工编号
	string m_Name; //职工姓名
	int m_DeptId; //职工所在部门名称编号
};