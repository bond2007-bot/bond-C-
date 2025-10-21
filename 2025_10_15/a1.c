#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main(void)
//{
//	int num1, denom1, num2, denom2, result_num, result_denom;
//
//	printf("Enter first fraction:");
//	scanf("%d/%d", &num1, &denom1);
//
//	printf("Enter second fraction:");
//	scanf("%d/%d", &num2, &denom2);
//
//	result_num = num1 * denom2 + num2 * denom1;
//	result_denom = denom1 * denom2;
//	printf("The sum is %d/%d\n", result_num, result_denom);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int month = 0;
//    int day = 0;
//    int year = 0;
//    scanf("%d/%d/%d", &month, &day, &year);
//    printf("%04d%02d%02d", year, month, day);
//    return 0;
//}

//编写⼀个程序，要求用户输出⼀个美元数量，然后显示出如何用最少20美元、10美元、5美元和1美元来付款。
//
//Enter a dollar amount : 93
//$20 bills : 4
//$10 bills : 1
//$5 bills : 0
//$1 bills : 3
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	printf("Enter a dollar amout :");
//	scanf("%d",&a);
//	b = a / 20;
//	c = (a%20)/10;
//	d = ((a%20)%10)/5;
//	e = (((a % 20) % 10) % 5);
//	printf("$20 bills :%d\n",b);
//	printf("$10 bills :%d\n", c);
//	printf("$5 bills :%d\n", d);
//	printf("$1 bills :%d\n",e);
//	return 0;
//}

//计算税金(Tax)
//
//编写一个程序，要求用户输入一个美元数量，然后显示出增加 5 % 税率后的相应金额。
//
//Enter an amount : 100.00
//with tax added : $105.00
//
//输入的金额为大于 0 的两位数浮点数。
//#include <stdio.h>

//int main()
//{
//	float Tax = 0;
//	printf("请输入一个美元数量 ： ");
//	scanf("%.2f",&Tax);
//	Tax *= 1;
//		printf("with tax added:%.2f\n",Tax);
//
//
//	return 0;
//}
#include <stdio.h>

//int main()
//{
//	float Tax = 0;
//	printf("请输入一个美元数量 ： ");
//	scanf("%f", &Tax);
//	Tax =Tax*(1+0.05);
//	printf("with tax added:%.2f\n", Tax);
//
//
//	return 0;
//}