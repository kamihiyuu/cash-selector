//����v�Z�v���O����

#include <stdio.h>

int main(void)
{
	int money, tenthousand, fivethousand, thousand, fivehundred, hundred, fifty , ten, five, one;
	printf("�x�����z����͂��Ă��������i�~�j�F");     scanf("%d", &money);

	tenthousand = money / 10000;    money = money % 10000;
	fivethousand = money / 5000;       money = money % 5000;
	thousand = money / 1000;         money = money % 1000;
	fivehundred = money / 500;      money = money % 500;
	hundred = money / 100;        money = money % 100;
	fifty = money / 50;         money = money % 50;
	ten = money / 10;           money = money % 10;
	five = money / 5;             money = money % 5;
	one = money / 1;

	printf("�ꖜ�~�D�F%d\n", tenthousand);
	printf("�ܐ�~�D�F%d\n", fivethousand);
	printf("��~�D�F%d\n", thousand);
	printf("�ܕS�~�ʁF%d\n", fivehundred);
	printf("�S�~�ʁF%d\n", hundred);
	printf("�܏\�~�ʁF%d\n", fifty);
	printf("�\�~�ʁF%d\n", ten);
	printf("�܉~�ʁF%d\n", five);
	printf("��~�ʁF%d\n", one);

	return 0;
		

}