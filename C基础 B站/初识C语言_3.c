#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

//指针变量大小 4个字节 32个bit位
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));
//    //*pc = 'a';
//	//printf("ch : %c\n", ch);
//	return 0;
//}

//                            
//                        __________________ 0x0012ff40
//                    #->| 10改为20         |<------#
// int a = 10;   -----|->|__________________| a     |
//                    |   __________________        |
// int* p = &a;  -----|->| 0x0012ff40       |-------# 
//                    |  |__________________| p
// *p = 20;-----------#

//void cast(char* a) //看二进制地址
//{
//	char s[32];
//	_itoa(a, s, 2);
//	printf("a --> %s\n", s);
//}
//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a; //取地址
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//* - 解引用操作符
//	printf("a = %d\n", a);
//
//	//有一种变量是用来存放地址的 -- 指针变量
//	//printf("%p\n", &a);//%p 打印地址 16进制
//	//cast(&a);
//	return 0;
//}

//   int a = 10;//申请4个字节的空间 （分配给int）
// 
//   地址->空间（房间）                                      如何产生地址                                                  
//       _________________________                     32位 
//      |  一个字节（byte）大小   |0号内存地址 4byte   32根地址线/数据线
//      |__2^32种内存地址可能性___|                    正电和负电 0 1
//      |                         |1             ________________________________     
//      |_________________________|           1 |00000000000000000000000000000000|
//      |                         |2          2 |00000000000000000000000000000001|
//      |_________________________|           3 |00000000000000000000000000000010|
//      |  分配给 a               |3            |...                             |
//      |_________________________|    0号内存->|01111111111111111111111111111111|
//      |  分配给 a               |4 地址可能性 |10000000000000000000000000000000|
//      |_________________________|      2^32种 |...                             |
//      |  分配给 a               |5            |...                             |
//      |_________________________|             |...                             |
//      |  分配给 a               |6            |11111111111111111111111111111111|
//      |_________________________|             |________________________________| 
//      |                         |7
//      |_________________________|
//      |                         |8
//      |_________________________|
//      |                         |9
//      |_________________________|
//      |                         |10
//      |_________________________|
//                                                             
//                                                                                   



//#define 定义标识符常量
//#define MAX 100
//#define 可以定义宏-带参数
//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	//max = (a>b?a:b);
//	printf("max = %d\n", max);
//	return 0;
//}

//常见关键字
//auto break case char const continue default do double else enum
//extern float for goto if int long register(寄存器关键字) return short signed
//sizeof static struct switch typedef union(联合体) usigned void 
//volatile（。。。排位分?） while

//3. static 修饰函数
//改变了变量的作用域 （不准确）
//static修饰函数改变了函数的链接属性
//外部链接属性 -> 内部链接属性
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//2.static 修饰全局变量
//static int g_val = 2020;
//改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没法在使用了
//int main()
//{
//	//extern - 声明外部符号的
//	extern g_val;
//	printf("g_val: %d\n", g_val);
//	return 0;
//}

//1.static 修饰局部变量
//局部变量的生命周期变长
//void test()
//{
//	//int a = 1;//局部变量 执行出函数体就消亡 循环5次 创建5次 消亡5次 //2 2 2 2 2
//	static int a = 1;//a 是一个静态的局部变量  //2 3 4 5 6
//	a++;             
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//typedef 类型定义
//int main()
//{
//	//int float;//err
//	//typedef - 类型定义 - 类型重定义
//	//起个小名
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//}

//signed   unsigned 
//有符号数 无符号数
//int main()
//{
//	int a = 10;
//	a = -2;
//	//int 定义的变量是有符号的
//	//signed int === int （signed 通常省略）
//	//unsigned int num = -1; （unsigned无符号）默认正数
//	return 0;
//}

//register
//计算机 存储数据                        
//                              / \                                        
//                             /   \
//                            /     \                       
//                           / 寄存器\     最快           优先拿数据
//                          / 高速缓存\                  
//                         /    内存   \                  CPU - 中央处理器
//                        /     硬盘    \  8G/4G/16G
//                       /_______________\ 500G
//int main()
//{
//	register int a = 10;//建议把 a 定义成寄存器变量
//	return 0;
//}

//int 
//float

//auto 自动变量
//int main()
//{
//	auto int a = 10;//局部变量 - 自动变量 局部变量都是自动变量 一般省略
//	return 0;
//}

//只要是整数，内存中存储的都是二进制的补码
//正数--原码，反码，补码 相同
//负数:
//原码                    --->       反码       --->        补码
//按照正负          原码的符号位不变           反码+1     
//写出的二进制序列  其他位取反得到
//-2
//1000000000000000000000000000000000010 - 原码
//1111111111111111111111111111111111101 - 反码
//1111111111111111111111111111111111110 - 补码

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return 0;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[] - 下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//() - 函数调用操作符
//
//	return 0;
//}

//三目运算符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);
//	/*if (a > b)
//		max = a;
//	else
//		max = b;
//	return 0;*/
//}

//int main()
//{
//	//真 - 非0
//	//假 - 0
//	//&& - 逻辑与 同真为真 否则为假
//	//|| - 逻辑或 同真为真 同假为假
//	int a = 3;
//	int b = 5;
//	/*int c = a && b; */
//	int c = a || b;
//	printf("c = %d\n", c);
//
//}

//int main()
//{
//	int a = (int)3.14;//强制类型转换 不然会报错 double转换int丢失数据
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++（自身）
//	//int b = ++a;//前置++，先++（自身），再使用
//	int b = a--;//后置--，先使用，再--（自身）
//	int b = --a;//前置--，先--，再使用
//	printf("a = %d b = %d\n", a ,b);//11 10
//	return 0;
//}

//int main()
//{
//	int a = 0;//4个字节，32bit位
//	int b = ~a;//有符号的整型
//	//~ --按（2进制）位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//原码、反码、补码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//（符号位）{1}1111111111111111111111111111111 补码
//	//（符号位）{1}1111111111111111111111111111110 反码（补码减1）
//	//（符号位）{1}0000000000000000000000000000001 原码（反码取反）
//	printf("%d\n", b);//使用的，打印的时这个数的原码
//
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };//6*4=24 -->int[6]数组类型
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	/*printf("%d\n",sizeof int)*/ //err
//	printf("%d\n", sizeof(arr));//计算数组大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//6
//	return 0;
//}

//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}