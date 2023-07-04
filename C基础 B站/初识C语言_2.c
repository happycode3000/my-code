//#define _CRT_SECURE_NO_WARNINGS //一定要加 不然scanf会报错
//严重性	代码	说明	项目	文件	行	禁止显示状态
//错误	C4996	'scanf': This function or variable may be unsafe.
//Consider using scanf_s instead.To disable deprecation, 
// use _CRT_SECURE_NO_WARNINGS.
//See online help for details.
#include <stdio.h>

int main02()
{
	int arr[10] = { 0 };//10个整型元素的数组
	int sz = 0;
	//10*sizeof(int) = 40;字节
	printf("%d\n", sizeof(arr));

	//计算数组的元素个数
	//个数 = 数组总大小 / 每个元素的大小（相当于尺子上的单位个数）
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n", sz);
	
	//int a = 10;
	////sizeof 计算的是变量/类型所占空间的大小，单位是字节
	//printf("%d\n", sizeof(a)); //4字节
	//printf("%d\n", sizeof(int)); //4字节
	//printf("%d\n", sizeof a); // 4字节
	////printf("%d\n", sizeof int); //所求为变量时（）可以省略 为类型时不行
	return 0;
}

//单目操作符
//双目操作符
//三木操作符
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b; // + 操作符 ===> 双目操作符 （两个操作数）
//	//c语言中我们表示真假
//	//0- 假
//	//非0- 真
//	int a = 10;
//	int b = 0;
//	int c = 0;
//	printf("%d\n", a); //10
//	printf("%d\n", !a);// 0
//
//    a = 0;
//	printf("%d\n", a); //0
//	printf("%d\n", !a);//1
//
//    a = -2;
//	b = -a;//
//	c = +3;// + 正号都会省略
//	printf("%d\n", a); //-2
//	printf("%d\n", !a);// 0
//	printf("%d\n", b); // 2
//	printf("%d\n", !b);// 0
//	printf("%d\n", c); // 3
//	printf("%d\n", !c);// 0
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;// = 赋值     == 判断相等
//	//1 和2 的写法完全等价
//	a = a + 10;//1
//	a += 10;//2
//	a = a - 20;//1
//	a -= 20;//2
//	a = a & 2;//1
//	a &= 2;//2
//	//复合赋值符
//	//+=   -=   *=   /=   %=   >>=   <<=   &=   |=   ^=
//	return 0;
//}

//int main()
//{
//	//(2进制)位操作
//	//& 按位 与
//	//| 按位 或
//	//^ 按位 异或
//	int a = 3;//011
//	int b = 5;//101
//	int c = a & b; // 001 == 1
//    //011
//	//101  按位与 对位 同真为真 其余为假
//	//001
//	printf("%d\n", c);
//
//	a = 3;//011
//	b = 5;//101
//	c = a | b; // 111 == 7
//	//011
//	//101  按位或 对位 一真为真 同假为假
//	//111 
//	printf("%d\n", c);
//
//	a = 3;//011
//    b = 5;//101
//	c = a ^ b; //不是次方-是异或  //001 == 6
//	//011           
//	//101  按位异或 //对应的二进制位相同， 则为0
//	//110           //对应的二进制位相异， 则为1
//	printf("%d\n", c);
//
//	return 0;
//}
//                        二进制: 1           1           1           1
//                                1*2^3       1*2^2       1*2^1       1*2^0
//                        十进制: 8           4           2           1
// 
//                                0           0           1           1
//                            3 =                         2     +     1
//  
//                                0           1           0           1
//                            5 =             4           +           1
// 
//                                1           1           0           1
//                           13 = 8     +     4           +           1   
// 
          
//int main()
//{
//	//移位操作符   //相当于把移动的差量 2进制转换后 赋值给另一个变量
//	//<<左移
//	//>>右移
//	int a = 1; //进行左移右移的变量 本身是不变的
//	int b = a << 1;
//	//整型1占4个字节 - 32bit位          a  ________________________________
//	//00000000000000000000000000000001    |                                |
//	//01                  左移一个bit位  0|00000000000000000000000000000010| 右边补0
//	printf("%d\n", b); //                 |________________________________| 补满内存
//	b = a << 2;//b=4                      1x2^1+0x2^0 = 2
//	                  //                   ________________________________             
//	printf("%d\n", b);//                  |                                |
//	return 0;         //                00|00000000000000000000000000000100|
//}                     //                |________________________________|
                      //                  1x2^2+0+0 = 4
//int main()
//{
//	int a = 5 % 2;// 取模 得余数
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	/*int a = 1; //可以定义一个数组存放
//	int b = 2;
//	int c = 3;
//	int d = 4;*/
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //定义一个存放10个整型数字的数组
//	//0-9     //出现5是因为下面的printf arr[4] 没有被注释
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//
//	             //arr[下标];
//	printf("%d\n", arr[4]);//用下标的方式访问元素 // 5
//
//	/*char ch[20];
//	float arr2[5];*/
//	return 0;

	//数组变量名arr
	//           ______________________________
	//          |                              |
	//          |1 2 3 4 5 6 7 8 9 10 11 12 13 |
	//          |______________________________|
	//     下标: 0 1 2 3 4 5 6 7 8  9 10 11 12 
	//     下标默认是从0开始  如果数组有 n个元素 那最大下标为 n-1 (下标是从0开始)
	//
	//

//}

//自定义函数 -- 设计
//库函数 现成的函数

//  返回类型  函数名   形参1，形参2
//    int     Add     (int x, int y)
// {//函数体
//	int z = x + y;
//  //返回值（int 类型）
//	return z;
// }
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	//sum = num1 = num2;
//	
////接收返回值       //实参1，实参2
//	sum     =    Add(num1, num2);//运用函数
//	//sum = a + b;
//	sum = Add(a, b);//Add函数
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//函数
//f(x) = 2 * x + 1;
//f(x, y) = x + y;

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("敲一行代码\n");
//		line++;
//	}
//	printf("恭喜进入搬血镜\n");
//	printf("觉醒天赋“拿一个好offer”");
//}

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要开始修仙吗？（1/0）>: ");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("突破练气期\n");
//	else
//		printf("放弃！选择当一个凡人\n");
//
//	return 0;
//}

//int main()
//{
	//printf("%c\n", '\x61');
	//printf("%c\n", '\132');
	/*printf("%d\n", strlen("c:\test\32\test.c"));*/
	//\32 -- 32是2个8进制数字
	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
	//32 -->10进制 26 -> 作为ASCII码代表的字符
	//return 0;
//}

//int main()
//{
//	//printf("c:\\test\\32\\test.c");
//	printf("%c\n", 'a');
//	printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "\"");
//	//\t - 水平制表符  ？？+）-->三字母词 会被解析另外一个词====》/?/?
//	return 0;
//}

//int main()
//{
//	printf("abc\n");
//	return 0;
//}

//int main()
//{                       //scanf计算字符串长度
//	char arr1[] = "abc";//并没有算'\0'在内 遇到'\0'都结束
//	char arr2[] = { 'a','b','c','\0'};//不可知的随机值 直到遇到0才结束
//	printf("%d\n", strlen(arr1));//strlen - string lenth- 计算字符串长度的库函数
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
	//数据在计算机上存储的时候，存储的是2进制
	//#av$ 
	//a - 97
	//A - 65
	// ...
	// ASCII 编码
	// ASCII 码值
	//char arr1[] = "abc";//数组
	////"abc" -- 'a' 'b' 'c' '\0' ---'\0' 字符串的结束标志
	//char arr2[] = { 'a','b','c','\0'};
	////'\0' - 0
	//// 'a' - 97
	////'a' 'b' 'c'
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);//abc烫烫烫烫蘟bc

	//return 0;
//}

//int float
//char
//字符串类型
//int main()
//{
//	"abcdef";
//	"hello bit";
//	"";//空字符串
//
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//scanf是C语言提供的
//	//scanf_s不是标准C语言提供的，是VS编译器提供的
//	//如果用scanf_s，就只有VS编译器才能识别 ，就不具有跨平台性（可移植性）
//	
//	//C语言提供的库函数 使用上严格来说不安全
//	//scanf
//	//strcpy
//	//strlen
//	//strcat
//	//...
//	
//	//VS提供的库函数
//	//strcpy_s
//	//...
//	//选择使用C语言提供的库函数 源文件第一行加“#define _CTR_SECURE_NO_WARNINGS”
//	//来避开VS的报错
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	// 1. const - 常属性
//	const int n = 10; //n是变量，但是又有常属性，所以我们说n是常变量
//	//int arr[n] = { 0 };
//	//n = 20; //常属性 不能修改
//
//	//const修饰的常变量
//	//const int num = 4;//num 本质属性还是变量 
//	//printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num);
//	// 2. 字面常量 一个直接的值
//  //3;
//	//100;
//	//3.14
//	return 0;
//}

//   //3. #define 定义的标识符常量
//#define MAX 10 
//
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}

//4. 枚举常量
//枚举 - 一一列举
//
//性别： 男，女，保密
//三原色： 红、黄、蓝
//星期： 1，2，3，4，5，6，7

//枚举关键字 - enum

//enum SEX
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
////MALE,FEMALE,SECRET - 枚举常量 有值的 不能被改变的
//int main()
//{
//	enum SEX s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//enum Color
//{
//	RED, //0
//	YELLOW, //1
//	BLUE //2
//};
//
//int main()
//{
//	enum Color color = BLUE; //游戏方向：UE、unity 里面 
//	//枚举用的很多 一般用来定义人物状态State
//
//	color = YELLOW;//通过枚举创造衍生的变量“color”可以改
//	//BLUE = 6;err //枚举里的枚举常量“BLUE”不能改
//}

