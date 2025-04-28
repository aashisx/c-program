// Aashish karkey. BCSIT-1st sem
#include <stdio.h>
#include <conio.h>
int main()
{
	int x, n, b, c, w, r;
	r = b - w;
	w = b - r;
	b = 100000;
	{
		printf("Enter your card.\n");
		printf("Enter pin/password = ");
		scanf("%d", &c);
	}
	if (c != 1234)
	{
		printf("Error! your PIN / Password is incorrect.\n\n");
		printf("Try again.....\n");
	}
	else
	{
		printf("Enter an option.\n");
		printf("1.Withdrawl\t");
		printf("2.Balance\n");
		printf("3.Pin change\t");
		printf("4.fast cash $100\n");
		b = 100000;
		printf("Enter an option = ");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			printf("Enter amount to withdraw.\n");
			scanf("%d", &w);
			{
				if (w <= 100000)
				{
					printf("processing......\n");
					printf("wait a minute...\n");
					printf("the amount withdrawn is $%d.\n", w);
					r = b - w;
					printf("Your remaining balance is $%d \n", r);
				}
				else
				{
					printf("there is no sufficient amount to withdraw");
				}
			}
			break;
		case 2:
			printf("your balance is $%d", b);
			break;
		case 3:
			printf("To change your pin");
			printf("enter new pin");
			scanf("%d", &n);
			printf("the new pin is %d", n);
			break;
		case 4:
			printf("for fast cash $100\n");
			printf("processing.......\n");
			printf("wait a minute.\n");
			printf("withdrawn amount is $100.\n");
			r = b - 100;
			printf("Remaining balance is $%d \n", r);

			break;
		default:
			printf("Error! there is no option more than 4.\nSo, enter option between 1 to 4.\n");
		}
	}
	return 0;
}