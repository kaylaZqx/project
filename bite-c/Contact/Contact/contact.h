#pragma once
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30


//类型的声明
//人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//通讯录
typedef struct Contact
{
	PeoInfo data[MAX];//存放人的信息
	int count;//记录当前通讯录中实际人的个数
}Contact;



//初始化通讯录
void InitContact(Contact* pc);
//增加联系人的通讯录
void AddContact(Contact* pc);
//显示通讯录的信息
void ShowContact(const Contact* pc);
//删除通讯录中的信息
void DelContact(Contact* pc);
//查找通讯录中的信息
void SearchContact(Contact* pc);
//修改通讯录中的信息
void ModifyContact(Contact* pc);
//排序通讯录中的信息
void SortContact(Contact* pc);