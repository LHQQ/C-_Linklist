#include"Linklist.h"

Linklist::Linklist()
{
	p_head = new Linklist_Node;
	if (nullptr == p_head){
		assert(p_head);
		return;
	}
	p_head->L_data = 0;
	p_head->L_pnext = nullptr;
}
Linklist::~Linklist()
{
	Linklist_Node* cur = p_head;
	Linklist_Node* pre = p_head;
	while (nullptr != cur)
	{
		pre = cur;
		cur = cur->L_pnext;
		delete pre;
		pre = nullptr;
	}
}
void Linklist::LinkPushBack(DataType value){
	Linklist_Node* cur = p_head;
	Linklist_Node* pNewNode = new Linklist_Node;
	if (nullptr == pNewNode){
		assert(pNewNode);
		return;
	}
	pNewNode->L_data = value;
	pNewNode->L_pnext = nullptr;
	while (nullptr != cur->L_pnext){
		cur = cur->L_pnext;
	}
	cur->L_pnext = pNewNode;
	p_head->L_data++;
}
void Linklist::LinkPopBack(){
	Linklist_Node* cur = p_head;
	Linklist_Node*pre = p_head;
	while (nullptr != cur->L_pnext)
	{
		pre = cur;
		cur = cur->L_pnext;
	}
	p_head->L_data--;
	pre->L_pnext = nullptr;
	delete cur;
	cur = nullptr;
}
void Linklist::LinkPushFront(DataType value){
	Linklist_Node* pNewNode = new Linklist_Node;
	if (nullptr == pNewNode){
		assert(pNewNode);
		return;
	}
	pNewNode->L_data = value;
	pNewNode->L_pnext = nullptr;
	Linklist_Node* cur = p_head->L_pnext;
	if (nullptr != cur){
		pNewNode->L_pnext = cur;
		p_head->L_pnext = pNewNode;
	}
	p_head->L_data++;
}

void Linklist::LinkPopFront(){
	Linklist_Node* cur = p_head->L_pnext;
	if (nullptr == cur){
		cout << "Á´±íÎª¿Õ£¬É¾³ýÊ§°Ü" << endl;
	}
	p_head->L_pnext = cur->L_pnext;
	p_head->L_data--;
	delete cur;
	cur = nullptr;
}
bool Linklist::LinkIsEmpty(){
	return 0 == p_head->L_data;
}
int Linklist::LinkLength(){
	return p_head->L_data;
}
Linklist_Node* Linklist::LinkFind(DataType value){
	Linklist_Node* cur = p_head->L_pnext;
	while (nullptr != cur){
		if (value == cur->L_data){
			return cur;
		}
		cur = cur->L_pnext;
	}
	return nullptr;
}
//void Linklist::LinkInsert(Linklist_Node* pos, DataType value){
//
//}
//void Linklist::LinkErase(Linklist_Node* pos){
//
//}
//void Linklist::LinkRemove(DataType value){
//
//}
//void Linklist::LinkRemoveAll(DataType value){
//
//}

void Linklist::LinkPrint()
{
	Linklist_Node* cur = p_head->L_pnext;
	while (nullptr != cur){
		cout << cur->L_data << "->";
		cur = cur->L_pnext;
	}
	cout << endl;
}
