#define _CRT_SECURE_NO_WARNINGS
//��д������ʾ�û�����һ���� n��Ȼ����ʾ�� 1~n ������ż����ƽ��ֵ��
//#include<stdio.h>
//
//int main()
//{
//	printf("������һ��������:>");
//	int n = 0;
//	scanf("%d",&n);
//	int i = 0;
//	for (i = 2; i*i< n + 1;i+=2)
//	{
//			printf("%d\n",i*i);
//	}
//	return 0;
//}
//��д����Ҫ���û���������������Ȼ��������������������Լ����GCD, Greatest Common Divisor����
//�����Լ���ľ����㷨 Euclid �㷨���£�
//�ֱ��ñ��� m �� n �洢������������� n Ϊ 0����ôֹͣ������m �е�ֵ�� GCD ��������� m ���� n ��������
// �� n ���浽 m �У������������浽 n �У��ظ�����������ÿ�ζ����ж�n�Ƿ�Ϊ 0 ��

//��������while���дһ��
//#include<stdio.h>

//int main()
//{
//	printf("Enter two integers:");
//	int m = 0;
//	int n = 0;
//	printf("��������������ֵ:>");
//	scanf("%d %d", &m, &n);
//	
//	while (n)
//		{
//			int a = 0;
//			a = m % n;
//			m = n;
//			n = a;
//		}
//		printf("Greatest common divisor��%d", m);
//	return 0;
//}

//���ٷ���ת��Ϊ�ȼ��ƣ�Centesimal - grade to Letter - grade��
//
//����switch����дһ�����򣬰������ֱ�ʾ�ĳɼ�ת��Ϊ��ĸ��ʾ�ĵȼ���
//
//ʹ������ĵȼ���������AΪ90~100��BΪ80~89��CΪ70~79��DΪ60~69��FΪ0~59������ɼ�����100��С��0��ʾ������Ϣ��
//
//���������
//Enter numerical grade : 84
//Letter grade : B
//
//Enter numerical grade : -1
//Error, grade must be between 0 and 100.
//
//��ʾ���ѳɼ���ֳ� 2 �����֣�Ȼ��ʹ�� switch ����ж�ʮλ�ϵ����֡�

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	printf("������ɼ���");
//	scanf("%d", &n);
//	if (n < 0 || n>100)
//		printf("Error, grade must be between 0 and 100");
//	else
//	{
//		int m = n / 10;
//        switch (m)
//		{
//		case 10:
//		case 9:
//			printf("Letter grade :%c", 'A');
//			break;
//		case 8:
//			printf("Letter grade :%c" ,'B');
//			break;
//		case 7:
//			printf("Letter grade :%c", 'C');
//			break;
//		case 6:
//			printf("Letter grade :%c", 'D');
//			break;
//		case 5:
//		case 4:
//		case 3:
//		case 2:
//		case 1:
//		case 0:
//			printf("Letter grade :%c", 'F');
//			break;
//		}
//	}
//	return 0;
//}

