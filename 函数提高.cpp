#include<iostream>
using namespace std;

//int Add1(int x, int y)
//{
//	return x + y;
//}
//int Add2(int x, int y = 5)
//{
//	return x + y;
//}
//
//int Add3(int x = 5, int y = 5); // ����������Ĭ�ϲ���
//
//int Add3(int x,int y)// ����ʵ��/����
//{
//	return x + y;
//}
//int Add4(int x, int y); // ��������
//
//int Add4(int x = 5, int y = 5)// ����ʵ��/������Ĭ�ϲ���
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//cout << Add1(a, b) << endl;
//	//cout << Add2(a, b) << endl;
//	//Add2(a);// ��Ĭ��ֵ
//	//Add2(a.b);// ��b��ֵ
//
//	return 0;
//}

//int Add1(int x, int y,int )
//{
//	return x + y;
//}
//
//int Add(int x, int y, int = 10)// ����int=10��Ĭ�ϲ���
//{
//	return x + y;
//}
//
//int main()
//{
//	Add(10, 10); // �β��б�����и�int���ͣ����벹�ϸ�int
//	return 0;
//}
// ������ͬ
//void fun() // 0��
//{
//	cout << "fun �ĵ���" << endl;
//}
// 
//void fun(int a) // 1��
//{
//	cout << "fun(int a)�ĵ���" << endl;
//}
//
//// ���Ͳ�ͬ
//void fun(int a) // ����
//{
//	cout << "fun(int a)�ĵ���" << endl;
//}
//
//void fun(float b) // ������
//{
//	cout << "fun(float b)�ĵ���" << endl;
//}
//// ˳��ͬ
//void fun(int a, float b) // ����
//{
//	cout << "fun(int a, float b)�ĵ���" << endl;
//}
//
//void fun(float b, int a) // ������
//{
//	cout << "fun(float b, int a)�ĵ���" << endl;
//}
//��������ֵ������Ϊ�������ص�����
//void fun1() 
//{
//	cout << "fun1 �ĵ���" << endl;
//}
//int fun1() 
//{
//	cout << "fun1 �ĵ���" << endl;
//}


//int main()
//{
//	fun();
//	return 0;
//}

// ����
void func(int &a)
{
	cout << "func(int &a) �ĵ���" << endl;
}

void func(const int &a)
{
	cout << "func(const int &a) �ĵ���" << endl;
}

// ����Ĭ��ֵ
void func1(int a, int b = 10)
{
	cout << "func1(int a, int b = 10)�ĵ���" << endl;
}

void func1(int a)
{
	cout << "func1(int a) �ĵ���" << endl;
}
int main()
{
	func1(5,20);

	///*int a = 5;
	//func(a);*/
	//func(5);
	return 0;
}