#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>

//int main()
//{
//    printf("�鷳��������ָ����һ������");
//    int a = 0;
//    scanf("%d", &a);
//    if (a % 2 == 0)
//        printf("%dΪż��\n", a);
//    else 
//        printf("%dΪ����\n",a);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	if (num >= 0)
//	{
//		if (num > 0)
//			printf("%d Ϊ����\n", num);
//		else
//			printf("%d Ϊ��\n", num);
//
//	}
//	else
//		printf("%dΪ����" , num);
//	return 0;
//}

#include <stdio.h>

int main()
{
	int age = 0;
	scanf("%d",&age);
	if (age < 18)
		printf("����");
	else if (18<=age <= 44)
		printf("����");
	else if (45<=age <= 59)
		printf("������");
	else if (60<=age <= 89)
		printf("����");
	else
		printf("������");

	return 0;
}