#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void	display_welcome(void)
{
	printf("Calculatrice by Judith\n\n");
}

void	display_menu(void)
{
	printf("Choisis l'opération à effectuer:\n");
	printf("1.Addition\n");
	printf("2.Soustraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Quitter\n");
}

int	getting_user_choice(void)
{
	int	choice;

	scanf("%d", &choice);
	return (choice);
}

int	getting_user_number(void)
{	
	int	num;

	printf("quel nombre?\n");
	scanf("%d", &num);
	return (num);
}

int	add(int num1, int num2)
{
	int	result;

	result = num1 + num2;
	return (result);
}

int	sub(int num1, int num2)
{
	int	result;

	result = num1 - num2;
	return (result);
}

int	mult(int num1, int num2)
{
	int	result;

	result = num1 * num2;
	return (result);
}

int	divi(int num1, int num2)
{
	int	result;

	result = num1 / num2;
	return (result);
}

int	calculatrice(int choice, int num1, int num2)
{
	int	result;

	if (choice == 1)
	{
		result = add(num1, num2);
		return (result);
	}
	else if (choice == 2)
	{
		result = sub(num1, num2);
		return (result);
	}
	else if (choice == 3)
	{
		result = mult(num1, num2);
		return (result);
	}
	else if (choice == 4)
	{
		result = divi(num1, num2);
		return (result);
	}
	else
		return (0);
}

void	display_result(int result, int num1, int num2, int choice)
{
	if (choice == 1)
	{
		printf("\nResultat :  %d + %d = ", num1, num2);
		printf("%d.\n\n", result);
	}
	else if (choice == 2)
	{
		printf("\nResultat :  %d - %d = ", num1, num2);
		printf("%d.\n\n", result);
	}
	else if (choice == 3)
	{
		printf("\nResultat :  %d * %d = ", num1, num2);
		printf("%d.\n\n", result);
	}
	else if (choice == 4)
	{
		printf("\nResultat :  %d / %d = ", num1, num2);
		printf("%d.\n\n", result);
	}
}

int	main(void)
{
	int	num1;
	int	num2;
	int	choice;
	int	result;

	display_welcome();
	do
	{
		display_menu();
		choice = getting_user_choice();
		printf("\nChoix numéro: %d\n\n", choice);
		if (choice != 5)
		{
			if (0 < choice && choice < 6)
			{
				num1 = getting_user_number();
				num2 = getting_user_number();
				result = calculatrice(choice, num1, num2);
				display_result(result, num1, num2, choice);
			}
			else
			{
				printf("invalid choice\n\n");
			}
		}
	}
	while (choice != 5);
	return (0);
}
