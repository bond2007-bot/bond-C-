#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>

//int main()
//{
//    printf("麻烦您动动手指输入一个整数");
//    int a = 0;
//    scanf("%d", &a);
//    if (a % 2 == 0)
//        printf("%d为偶数\n", a);
//    else 
//        printf("%d为奇数\n",a);
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
//			printf("%d 为正数\n", num);
//		else
//			printf("%d 为零\n", num);
//
//	}
//	else
//		printf("%d为负数" , num);
//	return 0;
//}

#include <stdio.h>

int main()
{
	int age = 0;
	scanf("%d",&age);
	if (age < 18)
		printf("少年");
	else if (18<=age <= 44)
		printf("青年");
	else if (45<=age <= 59)
		printf("中老年");
	else if (60<=age <= 89)
		printf("老年");
	else
		printf("老寿星");

	return 0;
}