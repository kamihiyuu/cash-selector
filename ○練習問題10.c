//‹àíŒvZƒvƒƒOƒ‰ƒ€

#include <stdio.h>

int main(void)
{
	int money, tenthousand, fivethousand, thousand, fivehundred, hundred, fifty , ten, five, one;
	printf("x•¥‹àŠz‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢i‰~jF");     scanf("%d", &money);

	tenthousand = money / 10000;    money = money % 10000;
	fivethousand = money / 5000;       money = money % 5000;
	thousand = money / 1000;         money = money % 1000;
	fivehundred = money / 500;      money = money % 500;
	hundred = money / 100;        money = money % 100;
	fifty = money / 50;         money = money % 50;
	ten = money / 10;           money = money % 10;
	five = money / 5;             money = money % 5;
	one = money / 1;

	printf("ˆê–œ‰~DF%d\n", tenthousand);
	printf("ŒÜç‰~DF%d\n", fivethousand);
	printf("ç‰~DF%d\n", thousand);
	printf("ŒÜ•S‰~‹ÊF%d\n", fivehundred);
	printf("•S‰~‹ÊF%d\n", hundred);
	printf("ŒÜ\‰~‹ÊF%d\n", fifty);
	printf("\‰~‹ÊF%d\n", ten);
	printf("ŒÜ‰~‹ÊF%d\n", five);
	printf("ˆê‰~‹ÊF%d\n", one);

	return 0;
		

}