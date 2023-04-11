//金種計算プログラム

#include <stdio.h>

int main(void)
{
	int money, tenthousand, fivethousand, thousand, fivehundred, hundred, fifty , ten, five, one;
	printf("支払金額を入力してください（円）：");     scanf("%d", &money);

	tenthousand = money / 10000;    money = money % 10000;
	fivethousand = money / 5000;       money = money % 5000;
	thousand = money / 1000;         money = money % 1000;
	fivehundred = money / 500;      money = money % 500;
	hundred = money / 100;        money = money % 100;
	fifty = money / 50;         money = money % 50;
	ten = money / 10;           money = money % 10;
	five = money / 5;             money = money % 5;
	one = money / 1;

	printf("一万円札：%d\n", tenthousand);
	printf("五千円札：%d\n", fivethousand);
	printf("千円札：%d\n", thousand);
	printf("五百円玉：%d\n", fivehundred);
	printf("百円玉：%d\n", hundred);
	printf("五十円玉：%d\n", fifty);
	printf("十円玉：%d\n", ten);
	printf("五円玉：%d\n", five);
	printf("一円玉：%d\n", one);

	return 0;
		

}
