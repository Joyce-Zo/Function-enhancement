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
//int Add3(int x = 5, int y = 5); // 函数声明有默认参数
//
//int Add3(int x,int y)// 函数实现/定义
//{
//	return x + y;
//}
//int Add4(int x, int y); // 函数声明
//
//int Add4(int x = 5, int y = 5)// 函数实现/定义有默认参数
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//cout << Add1(a, b) << endl;
//	//cout << Add2(a, b) << endl;
//	//Add2(a);// 用默认值
//	//Add2(a.b);// 用b的值
//
//	return 0;
//}

//int Add1(int x, int y,int )
//{
//	return x + y;
//}
//
//int Add(int x, int y, int = 10)// 最后的int=10即默认参数
//{
//	return x + y;
//}
//
//int main()
//{
//	Add(10, 10); // 形参列表最后有个int类型，必须补上个int
//	return 0;
//}
// 个数不同
//void fun() // 0个
//{
//	cout << "fun 的调用" << endl;
//}
// 
//void fun(int a) // 1个
//{
//	cout << "fun(int a)的调用" << endl;
//}
//
//// 类型不同
//void fun(int a) // 整型
//{
//	cout << "fun(int a)的调用" << endl;
//}
//
//void fun(float b) // 浮点型
//{
//	cout << "fun(float b)的调用" << endl;
//}
//// 顺序不同
//void fun(int a, float b) // 整型
//{
//	cout << "fun(int a, float b)的调用" << endl;
//}
//
//void fun(float b, int a) // 浮点型
//{
//	cout << "fun(float b, int a)的调用" << endl;
//}
//函数返回值不可作为函数重载的条件
//void fun1() 
//{
//	cout << "fun1 的调用" << endl;
//}
//int fun1() 
//{
//	cout << "fun1 的调用" << endl;
//}


//int main()
//{
//	fun();
//	return 0;
//}

// 引用
void func(int &a)
{
	cout << "func(int &a) 的调用" << endl;
}

void func(const int &a)
{
	cout << "func(const int &a) 的调用" << endl;
}

// 参数默认值
void func1(int a, int b = 10)
{
	cout << "func1(int a, int b = 10)的调用" << endl;
}

void func1(int a)
{
	cout << "func1(int a) 的调用" << endl;
}
int main()
{
	func1(5,20);

	///*int a = 5;
	//func(a);*/
	//func(5);
	return 0;
}