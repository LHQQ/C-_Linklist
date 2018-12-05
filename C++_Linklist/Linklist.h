#pragma once
#include<iostream>
#include<assert.h>

using namespace std;

typedef int DataType;

//���������
class Linklist_Node
{
public:
	Linklist_Node()
		:L_data(0)
		, L_pnext(nullptr){}
	DataType L_data;
	Linklist_Node* L_pnext;
};

//����������
class Linklist{
public:
	Linklist();
	~Linklist();
	void LinkPushBack(DataType value);
	void LinkPopBack();
	void LinkPushFront(DataType value);
	void LinkPopFront();
	bool LinkIsEmpty();
	int LinkLength();
	Linklist_Node* LinkFind(DataType value);
	void LinkInsert(Linklist_Node* pos, DataType value);
	void LinkErase(Linklist_Node* pos);
	void LinkRemove(DataType value);
	void LinkRemoveAll(DataType value);
	void LinkPrint();
private:
	Linklist_Node* p_head;
};