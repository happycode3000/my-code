#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

//�ṹ��
//char int double
//�� -- ���� ��� ���� ��ݺ���
//�� ���� ���� ������ ���� ���
//���Ӷ��� -- �ṹ�� - �����Լ����������һ������
//
//����һ���ṹ������
//struct Book
//{
//	char name[20];//C���Գ������
//	short price;//55
//};
//
//int main()
//{
//	//���ýṹ������-����һ�������͵Ľṹ�����
//	struct Book b1 = {"C���Գ������",55};
//	struct Book* pb = &b1;
//	//����pb��ӡ�����ҵ������ͼ۸�
//	//.  �ṹ�����.��Ա
//	//-> �ṹ��ָ��->��Ա
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	/*printf("����:%s\n", (*pb).name);
//	printf("����:%d\n", (*pb).price);*/
//	/*printf("����:%s\n", b1.name);
//	printf("�۸�:%dԪ\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�:%dԪ\n", b1.price);*/
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
//	//int a = 10;//����4���ֽڵĿռ�
//	//printf("%p\n", &a);
//	//int*  p = &a;//p��һ������-ָ�����
//	//printf("%p\n", p);
//	//*p = 20;;//* - �����ò�����/��ӷ��ʲ�����
//	//printf("a = %d\n", a);
//	return 0;
//}