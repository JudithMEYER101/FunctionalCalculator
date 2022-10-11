#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ADDITION_CHOICE	1
#define SUBSTRACTION_CHOICE 2
#define MULTIPLICATION_CHOICE	3
#define DIVISION_CHOICE	4
#define EXIT_CHOICE	5

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

	return (result = num1 + num2);
}

int	substract(int num1, int num2)
{
	int	result;

	return (result = num1 - num2);
}

int	multiply(int num1, int num2)
{
	int	result;

	return (result = num1 * num2);
}

int	divide(int num1, int num2)
{
	int	result;

	return (result = num1 / num2);
}

char	getting_operator(int choice)
{
	char	plus;
	char	minus;
	char	times;
	char	divided;
	char	operator;

	plus = '+';
	minus = '-';
	times = '*';
	divided = '/';
	if (0 < choice && choice < 6)
	{
		if (choice == ADDITION_CHOICE)
		{
			return (operator = plus);
		}
		else if (choice == SUBSTRACTION_CHOICE)
		{
			return (operator = minus);
		}
		else if (choice == MULTIPLICATION_CHOICE)
		{
			return (operator = times);
		}
		else 
		{	
			return (operator = divided);
		}
	}
	else
	{
		return(0);
	}
}

int	resolving(int choice, int num1, int num2)
{
	int	result;

	if (choice == ADDITION_CHOICE)
	{
		return (result = add(num1, num2));
	}
	else if (choice == SUBSTRACTION_CHOICE)
	{
		return (result = substract(num1, num2));
	}
	else if (choice == MULTIPLICATION_CHOICE)
	{
		return (result = multiply(num1, num2));
	}
	else if (choice == DIVISION_CHOICE)
	{
		if (num2 == 0)
		{
			printf("\ncan't divide by 0\n");
		}
		else
		return (result = divide(num1, num2));
	}
	else
		return (0);
}

void	display_result(int result, int num1, int num2, char operator)
{
	printf("\nResultat :  %d %c %d = ", num1, operator,  num2);
	printf("%d.\n\n", result);	
}

int	main(void)
{
	int	num1;
	int	num2;
	int	choice;
	int	operator;
	int	result;

	display_welcome();
	do
	{
		display_menu();
		choice = getting_user_choice();
		operator=getting_operator(choice);
		printf("\nChoix numéro: %d\n\n", choice);
		if (choice != EXIT_CHOICE)
		{
			if (0 < choice && choice < 6)
			{
				num1 = getting_user_number();
				num2 = getting_user_number();
				result = resolving(choice, num1, num2);
				display_result(result, num1, num2, operator);
			}
			else
			{
				printf("invalid choice\n\n");
			}
		}
	}
	while (choice != 5);
	{
		return (0);
	}
}
