#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

//结构体
//char int double
//人 -- 名字 身高 年龄 身份号码
//书 书名 作者 出版社 定价 书号
//复杂对象 -- 结构体 - 我们自己创造出来的一种类型
//
//创建一个结构体类型
//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55
//};
//
//int main()
//{
//	//利用结构体类型-创建一个该类型的结构体变量
//	struct Book b1 = {"C语言程序设计",55};
//	struct Book* pb = &b1;
//	//利用pb打印出来我的书名和价格
//	//.  结构体变量.成员
//	//-> 结构体指针->成员
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	/*printf("书名:%s\n", (*pb).name);
//	printf("书名:%d\n", (*pb).price);*/
//	/*printf("书名:%s\n", b1.name);
//	printf("价格:%d元\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格:%d元\n", b1.price);*/
//	return 0;
//}

//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	printf("%d\n", sizeof(pd));//32-4 64-8
//	//int a = 10;//申请4个字节的空间
//	//printf("%p\n", &a);
//	//int*  p = &a;//p是一个变量-指针变量
//	//printf("%p\n", p);
//	//*p = 20;;//* - 解引用操作符/间接访问操作符
//	//printf("a = %d\n", a);
//	return 0;
//}