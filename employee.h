#pragma once
#include<iostream>
using namespace std;
#include "worker.h"

class employee:public worker{
public:
    employee(int id, string name, int dId);
	//显示个人信息 virtual关键字可以删可不删
	virtual void showInfo();  
	//获取岗位名称
	virtual string getDeptName() ;
};
