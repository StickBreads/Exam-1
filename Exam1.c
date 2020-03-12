/*
Isaiah Estrada
CSC251
3/11/2020
*/

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define SIZE 20
int numberSide(void);
int dieRoll(void);
void generator(int arr[SIZE], int dieRoll);
void printer(int printArr[SIZE], int num);
int main(void)
{
	srand(time(NULL));
	int sideoD;
	int rolloD;
	int diceArr[SIZE] = {0};

	sideoD = numberSide();
	rolloD = dieRoll();

	generator(diceArr,numberS);

	printer(diceArr,numberS);

	return EXIT_SUCCESS;
}

int numberSide(void)
{
	printf("Enter the number of sides on your die:\n");

	scanf("%d\n"), &numberS);

	while(numberS > 20)
	{
		printf("Less than twenty please \n");
		scanf("%d\n", &numberS);
	}

	return numberS;
}
int dieRoll(void)
{
	int numRoll;
	printf("Enter number of rolls:\n");
	scanf("d\n"),&numRoll);

	return numRoll;
}
void generator(int arr[SIZE]), int numRoll;
{
	int i = 0;
	int counter;
	for(i=0; i < SIZE; i++)
	{
		arr[i] = (rand()% numRoll) + 1;
	}
}
void printer(int printArr[SIZE],int num)
{
	puts("The number of times you rolled a: ");
	int i = 0;
	for(i=0;i<num;i++)
	{
		printf("%d = %d\n", i+1,printArr[i];
	}
}
