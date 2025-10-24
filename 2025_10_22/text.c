#define _CRT_SECURE_NO_WARNINGS
//编写程序，提示用户输入一个数 n，然后显示出 1~n 的所有偶数的平方值。
//#include<stdio.h>
//
//int main()
//{
//	printf("请输入一个正整数:>");
//	int n = 0;
//	scanf("%d",&n);
//	int i = 0;
//	for (i = 2; i*i< n + 1;i+=2)
//	{
//			printf("%d\n",i*i);
//	}
//	return 0;
//}
//编写程序，要求用户输入两个整数，然后计算这两个整数的最大公约数（GCD, Greatest Common Divisor）。
//求最大公约数的经典算法 Euclid 算法如下：
//分别让变量 m 和 n 存储两个整数。如果 n 为 0，那么停止操作，m 中的值是 GCD ；否则计算 m 除以 n 的余数，
// 把 n 保存到 m 中，并把余数保存到 n 中；重复上述操作，每次都先判断n是否为 0 。

//尝试再用while语句写一下
//#include<stdio.h>

//int main()
//{
//	printf("Enter two integers:");
//	int m = 0;
//	int n = 0;
//	printf("请输入两个整数值:>");
//	scanf("%d %d", &m, &n);
//	
//	while (n)
//		{
//			int a = 0;
//			a = m % n;
//			m = n;
//			n = a;
//		}
//		printf("Greatest common divisor：%d", m);
//	return 0;
//}

//将百分制转换为等级制（Centesimal - grade to Letter - grade）
//
//利用switch语句编写一个程序，把用数字表示的成绩转化为字母表示的等级。
//
//使用下面的等级评定规则：A为90~100，B为80~89，C为70~79，D为60~69，F为0~59。如果成绩大于100或小于0显示出错信息。
//
//输出范例：
//Enter numerical grade : 84
//Letter grade : B
//
//Enter numerical grade : -1
//Error, grade must be between 0 and 100.
//
//提示：把成绩拆分成 2 个数字，然后使用 switch 语句判定十位上的数字。

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	printf("请输入成绩：");
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

