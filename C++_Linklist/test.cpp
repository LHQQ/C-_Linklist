#include"Linklist.h"

void test()
{
	Linklist L1;
	cout<<L1.LinkIsEmpty()<<endl;
	cout << "β��5��Ԫ��" << endl;
	L1.LinkPushBack(1);
	L1.LinkPushBack(2);
	L1.LinkPushBack(3);
	L1.LinkPushBack(4);
	L1.LinkPushBack(5);
	cout << L1.LinkLength() << endl;
	L1.LinkPrint();
	cout << "ͷ��5��Ԫ��" << endl;
	L1.LinkPushFront(6);
	L1.LinkPushFront(7);
	L1.LinkPushFront(8);
	L1.LinkPushFront(9);
	L1.LinkPushFront(10);
	cout<<L1.LinkLength()<<endl;
	L1.LinkPrint();
	cout << "βɾ����Ԫ��" << endl;
	L1.LinkPopBack();
	L1.LinkPopBack();
	cout << L1.LinkLength() << endl;
	L1.LinkPrint();
	cout << "ͷɾ����Ԫ��" << endl;
	L1.LinkPopFront();
	L1.LinkPopFront();
	cout << L1.LinkLength() << endl;
	L1.LinkPrint();
}

int main()
{
	test();
	system("pause");
	return 0;
}