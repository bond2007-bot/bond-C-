#define _CRT_SECURE_NO_WARNINGS
//风速等级与描述（Wind Speed）
//
//下面是用于测量风力等级的简化版，编写一个程序，要求用户输入风速（海里 / 小时），然后显示相应的描述。
//
//速率（海里 / ⼩时）	描述
//小于 1	Calm（无风）
//1~3	Light air（轻风）
//4~27	Breeze（微风）
//28~47	Gale（⼤风）
//48~63	Storm（暴风）
//⼤于63	Hurricane（飓风）

//#include <stdio.h>
//int main()
//{
//	printf("Enter a wind speed: ");
//	float v = 0;
//	scanf("%f",&v);
//	if (v > 0)
//	{
//		if (v < 1 && v>0)
//			printf("Calm\n");
//		else if (v <= 3)
//			printf("Light air\n");
//		else if (v <= 27)
//			printf("Breeze\n");
//		else if (v <= 47)
//			printf("Gale\n");
//		else if (v <= 63)
//			printf("Storm\n");
//		else if (v > 63)
//			printf("Hurricane\n");
//	}
//	else
//		printf("输入错误，请输入一个正数\n");
//    return 0;
//}

//24小时制 - 12小时制转换(24 - hour to 12 - hour)
//
//编写一个程序，要求用户输入 24 小时制的时间，将其转换为 12 小时制的格式。
//
//Enter a 24 - hour time : 21 : 11
//Equivalent 12 - hour time : 9 : 11 PM
//
//Enter a 24 - hour time : 0 : 01
//Equivalent 12 - hour time : 12 : 01 AM
//
//注意，不要把12 : 00显示为0 : 00。
//
