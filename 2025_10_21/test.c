#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main()
//
//{
//    int IQ = 0;
//    scanf("%d", &IQ);
//    if (IQ >= 140)
//        printf("Genius");
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    if (a == b)
//        printf("%d=%d", a, b);
//    else if (a > b)
//        printf("%d>%d", a, b);
//    else 
//        printf("%d<%d", a, b);
//    return 0;
// 
//}
//#include <stdio.h>
////�����Ƕ������ݣ�����Ҫ�õ�ѭ���ṹ
//int main()
//{
//    int a = 0;
//    int b = 0;
//    while (scanf("%d %d", &a, &b)== 2); < --------��Ҫ�ӷֺţ�������
//    {
//        if (a == b)
//            printf("%d=%d\n", a, b);
//        else if (a > b)
//            printf("%d>%d\n", a, b);
//        else
//            printf("%d<%d\n", a, b);
//    }
//    return 0;
//}
////#include <stdio.h>

//int main()
//{
//    int len = 0;
//    while (scanf("%d", &len))
//    {
//        for (int i = 0; i < len; i++)
//            printf("*");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int len = 0;
//    while (scanf("%d", &len))
//    {
//        for (int i = 0; i < len; i++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//1-100�п��Ա�3��������
//#include <stdio.h>
//int main()
//{
//	for (int i = 0; i < 101; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ",i);
//	}
//	return 0;
//}
//xyz
//xzy
//yxz
//yzx
//zxy
//zyx


//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main()
//{
//	int x, y, z;
//	scanf("%d %d %d",&x,&y,&z);
//	int a = max(max(x,y),max(y,z),max(x,z));
//	int b = min(min(x,y),min(y,z),min(x,z));
//	int c = 0;
//	{
//		if (x < y && y < z)
//			c = y;
//		else if (x < z && z < y)
//			c = z;
//		else if (y < x && x < z)             ��������⻹û�н������������
//			c = x;
//		else if (y < z && z < x)
//			c = z;
//		else if (z < y && y < x)
//			c = y;
//		else if (z < x && x < y)
//			c = x;
//	}
//	printf("%d %d %d\n", a, c, b);
//
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("***********************");
	printf("***1.������Ϸ 2.�˳�***");
	printf("***********************");
}

void game()
{
	int r = rand() % 100 + 1;
	int count = 5;
	int guess = 0;
	while (count)
	{
		if (guess > r)
			printf("�´���\n");
		else if (guess < r)
			printf("��С��\n");
		else (guess == r)
			printf("��ϲ�㣬�¶��ˣ�");
		    break;
		    count--;
	}
	if (count == 0)
		printf("���ź�����Ĵ����Ѿ�������");
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("������1/0ѡ���Ƿ�ʼ��Ϸ:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			print("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}