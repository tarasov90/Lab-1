#include <stdio.h>

int main(void) {
	//загрузка банкнот
	unsigned int count5k = 0;
	unsigned int count2k = 0;
	unsigned int count1k = 0;
	unsigned int count5h = 0;
	unsigned int count2h = 0;
	unsigned int count1h = 0;
	unsigned int count50 = 0;
	int scount5k = 0;
	int scount2k = 0;
	int scount1k = 0;
	int scount5h = 0;
	int scount2h = 0;
	int scount1h = 0;
	int scount50 = 0;
	int summ = 0;
	int lsumm = 0;
	int sumToGet=0;
	char lorb;
	printf("Enter 5k\n");
	scanf("%d", &count5k);
	count5k = abs(count5k);
	printf("Enter 2k\n");
	scanf("%d", &count2k);
	count2k = abs(count2k);
	printf("Enter 1k\n");
	scanf("%ud", &count1k);
	count1k = abs(count1k);
	printf("Enter 500\n");
	scanf("%d", &count5h);
	count5h = abs(count5h);
	printf("Enter 200\n");
	scanf("%d", &count2h);
	count2h = abs(count2h);
	printf("Enter 100\n");
	scanf("%d", &count1h);
	count1h = abs(count1h);
	printf("Enter 50\n");
	scanf("%d", &count50);
	count50 = abs(count50);
	summ = 5000 * count5k + 2000 * count2k + 1000 * count1k + 500 * count5h + 200 * count2h + 100 * count1h + 50 * count50;
	printf("Cash: %d\n", summ);
	getch();
	printf("enter sum to get\n");
	scanf("%d", &sumToGet);
	sumToGet = abs(sumToGet);
	int check = 0;
	if (sumToGet <= summ ) {
		check = 1;
	}
	else {
		check = 0;
	}
	printf("l or b?\n");
	lorb = getch(stdin);
	if (lorb == 'b' && check == 1) {
		scount5k = sumToGet / 5000;
		lsumm = sumToGet;
		if (scount5k <= count5k) {
			lsumm -= scount5k*5000;
		}
		else {
			lsumm -= count5k * 5000;
			scount5k = count5k;
		}
		scount2k = lsumm / 2000;
		if (scount2k <= count2k) {
			lsumm -= scount2k * 2000;
		}
		else {
			lsumm -= count2k * 2000;
			scount2k = count2k;
		}
		scount1k = lsumm / 1000;
		if (scount1k <= count1k) {
			lsumm -= scount1k * 1000;
		}
		else {
			lsumm -= count1k * 1000;
			scount1k = count1k;
		}
		scount5h = lsumm / 500;
		if (scount5h <= count5h) {
			lsumm -= scount5h * 500;
		}
		else {
			lsumm -= count5h * 500;
			scount5h = count5h;
		}
		scount2h = lsumm / 200;
		if (scount2h <= count2h) {
			lsumm -= scount2h * 200;
		}
		else {
			lsumm -= count5h * 200;
			scount2h = count2h;
		}
		scount1h = lsumm / 100;
		if (scount1h <= count1h) {
			lsumm -= scount1h * 100;
		}
		else {
			lsumm -= count1h * 100;
			scount1h = count1h;
		}
		scount50 = lsumm / 50;
		if (scount50 <= count50) {
			lsumm -= scount50 * 50;
		}
		else {
			lsumm -= count50 * 50;
			scount50 = count50;
		}
		
	}
	else if(lorb == 'l' && check == 1) {
		lsumm = sumToGet;
		scount50 = lsumm / 50;
		if (scount50 <= count50) {
			lsumm -= scount50 * 50;
		}
		else {
			lsumm -= count50 * 50;
			scount50 = count50;
		}
		scount1h = lsumm / 100;
		if (scount1h <= count1h) {
			lsumm -= scount1h * 100;
		}
		else {
			lsumm -= count1h * 100;
			scount1h = count1h;
		}
		scount2h = lsumm / 200;
		if (scount2h <= count2h) {
			lsumm -= scount2h * 200;
		}
		else {
			lsumm -= count5h * 200;
			scount2h = count2h;
		}
		scount5h = lsumm / 500;
		if (scount5h <= count5h) {
			lsumm -= scount5h * 500;
		}
		else {
			lsumm -= count5h * 500;
			scount5h = count5h;
		}
		scount1k = lsumm / 1000;
		if (scount1k <= count1k) {
			lsumm -= scount1k * 1000;
		}
		else {
			lsumm -= count1k * 1000;
			scount1k = count1k;
		}
		scount2k = lsumm / 2000;
		if (scount2k <= count2k) {
			lsumm -= scount2k * 2000;
		}
		else {
			lsumm -= count2k * 2000;
			scount2k = count2k;
		}
		scount5k = sumToGet / 5000;
		if (scount5k <= count5k) {
			lsumm -= scount5k * 5000;
		}
		else {
			lsumm -= count5k * 5000;
			scount5k = count5k;
		}
	}
	printf("issued  \nbills by 5000 : %d\n", scount5k);
	printf("bills by 2000 : %d\n", scount2k);
	printf("bills by 1000 : %d\n", scount1k);
	printf("bills by 500 : %d\n", scount5h);
	printf("bills by 200 : %d\n", scount2h);
	printf("bills by 100 : %d\n", scount1h);
	printf("bills by 50 : %d\n", scount50);
	printf("non-issued sum %d\n", lsumm);
	printf("balance remains %d\n", summ - lsumm);
	if (check == 0)
	{
		printf("Oops! your sum is more, than i have!");
	}
}

