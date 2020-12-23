#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void edit_score(int score, char plnm[20], int amount)
{
	int sc;
	char nm[20];
	int amn;
	FILE *f;
	f = fopen("score.txt", "ab");
	if (f == NULL)
	{
		printf("error\n");
		exit(1);
	}
	fprintf(f, "Player name:%s  Score:%d  Amount:$ %d \n", plnm, score, amount);
	fclose(f);
}

void viewscore()
{
	char buffer[256];
	FILE *f;
	f = fopen("score.txt", "r");
	while (fgets(buffer, sizeof(buffer), f) != NULL)
	{
		printf("\n");
		puts(buffer);
	}
}

void help()
{
	printf("\n\n                              HELP");
	printf("\n -------------------------------------------------------------------------");
	printf("\n ......................... C program Quiz Game...........");
	printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
	printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
	printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
	printf("\n    right answers otherwise you can't play the Game...........");
	printf("\n >> Your game starts with the CHALLANGE ROUND)  In this round you will be asked");
	printf("\n    total 10 questions each right answer will be awarded $100,000.");
	printf("\n    By this way you can win upto ONE MILLION cash prize in USD) ..............");
	printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
	printf("\n    right option");
	printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
	printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by NAVIN ********");
}

int main()
{
	int r, q, count, i, amount, score;
	char choice;
	char playername[20];

mainhome:

	printf("\n\t\t\tC PROGRAM QUIZ GAME\n");
	printf("\n\t\t________________________________________");

	printf("\n\t\t\t   WELCOME ");
	printf("\n\t\t\t      to ");
	printf("\n\t\t\t   THE GAME ");
	printf("\n\t\t________________________________________");
	printf("\n\t\t________________________________________");
	printf("\n\t\t  BECOME RICH BY ATTENDING THIS QUIZ !!");
	printf("\n\t\t________________________________________");
	printf("\n\t\t________________________________________");
	printf("\n\t\t > Press S to start the game");
	printf("\n\t\t > Press V to view the Scores");
	printf("\n\t\t > press H for help           ");
	printf("\n\t\t > press Q to quit             ");
	printf("\n\t\t________________________________________\n\n");

	scanf(" %c", &choice);
	if (choice == 'S' || choice == 's')
	{
		printf("\n\n\n\tResister your name:");
		scanf("%s", playername);
		printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------", playername);
		printf("\n\n Here are some tips you might wanna know before playing:");
		printf("\n -------------------------------------------------------------------------");
		printf("\n >> There are 10 questions in this Quiz Game,RAPID FIRE Round");
		printf("\n >> You should answer maximum of questions correctly to become rich");
		printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
		printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
		printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
		printf("\n    right option.");
		printf("\n >> You will be asked questions continuously, till right answers are given");
		printf("\n >> No negative marking for wrong answers!");
		printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by NAVIN********");
		printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");

		printf("\n\nPress A to start the quiz\n");
		scanf(" %c", &choice);
		if (choice == 'A' || choice == 'a')
		{
			goto home;
		}
	}
	else if (choice == 'V' || choice == 'v')
	{
		viewscore();
		goto help;
	}
	else if (choice == 'H' || choice == 'h')
	{
		help();
		goto help;
	}
	else if (choice == 'Q' || choice == 'q')
	{
		printf("\nPress ctrl+c to exit");
	}
	else
	{
		printf("\nEnter correct values");
	}

home:
	count = 0;
	for (i = 1; i <= 10; i++)
	{
		//q = i;
		switch (i)
		{

		//first question
		case 1:
		{
			printf("\n\nWhich of the following is a Palindrome number?");
			printf("\n\nA) 42042\t\tB) 101010\n\nC) 23232\t\tD) 01234\n\n");
			scanf(" %c", &choice);
			if (choice == 'c' || choice == 'C')
			{
				printf("Your answer is correct\n");
				count++;
				break;
			}
			else
			{
				printf("The correct answer is c\n");
				break;
			}
		}

		//second question
		case 2:
		{
			printf("\n\n\nThe country with the highest environmental performance index is...");
			printf("\n\nA) France\t\tB) Denmark\n\nC) Switzerland\t\tD) Finland\n\n");
			scanf(" %c", &choice);
			if (choice == 'c' || choice == 'C')
			{
				printf("Your answer is correct\n");
				count++;
				break;
			}
			else
			{
				printf("the correct answer is c\n");
				break;
			}
		}

		//third question
		case 3:
		{
			printf("\n\n\nWhich animal laughs like human being?");
			printf("\n\nA) Polar Bear\t\tB) Hyena\n\nC) Donkey\t\tD) Chimpanzee\n\n");
			scanf(" %c", &choice);
			if (choice == 'b' || choice == 'B')
			{
				printf("Your answer is correct\n");
				count++;
				break;
			}
			else
			{
				printf("The correct answer is c\n");
				break;
			}
		}

		//fourth question
		case 4:
		{
			printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
			printf("\n\nA) Wayne Rooney\t\tB) Lucas Podolski\n\nC) Lionel Messi\t\tD) Christiano Ronaldo\n\n");
			scanf(" %c", &choice);
			if (choice == 'b' || choice == 'B')
			{
				printf("Your answer is correct\n");
				count++;
				break;
			}
			else
			{
				printf("The correct answer is c\n");
				break;
			}
		}

		//fifth question
		case 5:
		{
			printf("\n\n\nWhich is the third highest mountain in the world?");
			printf("\n\nA) Mt. K2\t\tB) Mt. Kanchanjungha\n\nC) Mt. Makalu\t\tD) Mt. Kilimanjaro\n\n");
			scanf(" %c", &choice);
			if (choice == 'd' || choice == 'D')
			{
				printf("Your answer is correct\n");
				break;
				count++;
			}
			else
			{
				printf("The correct answer is c\n");
				break;
			}
		}

		//sixth question
		case 6:
		{
			printf("\n\n\nWhat is the group of frogs known as?");
			printf("\n\nA) A traffic\t\tB) A toddler\n\nC) A police\t\tD) An Army\n\n");
			scanf(" %c", &choice);
			if (choice == 'b' || choice == 'B')
			{
				printf("Your answer is correct\n");
				count++;
				break;
			}
			else
			{
				printf("The correct answer is c\n");
				break;
			}
		}

		//sevent question
		case 7:
		{
			printf("\n\nWhat is the National Game of England?");
			printf("\n\nA) Football\t\tB) Basketball\n\nC) Cricket\t\tD) Baseball\n\n");
			scanf(" %c", &choice);
			if (choice == 'd' || choice == 'D')
			{
				printf("Your answer is correct\n");
				count++;
				break;
			}
			else
			{
				printf("The correct answer is c\n");
				break;
			}
		}

		//eigth question
		case 8:
			printf("\n\n\nOzone plate is being destroyed regularly because of____ ?");
			printf("\n\nA) L.P.G\t\tB) Nitrogen\n\nC) Methane\t\tD)  C) F.C\n\n");
			scanf(" %c", &choice);
			if (choice == 'd' || choice == 'D')
			{
				printf("Your answer is correct\n");
				count++;
				break;
			}
			else
			{
				printf("The correct answer is c\n");
				break;
			}

		//ninth question
		case 9:
			printf("\n\n\nWhich film was awarded the Best Motion Picture at Oscar in 2010?");
			printf("\n\nA) The Secret in their Eyes\t\tB) Shutter Island\n\nC) The King's Speech\t\tD) The Reader\n\n");
			scanf(" %c", &choice);
			if (choice == 'c' || choice == 'C')
			{
				printf("Your answer is correct\n");
				count++;
				break;
			}
			else
			{
				printf("The correct answer is c\n");
				break;
			}

		//tenth question
		case 10:
			printf("\n\n\nWhich hardware was used in the First Generation Computer?");
			printf("\n\nA) Transistor\t\tB) Valves\n\nC) I.C\t\tD) S.S.Ic\n\n");
			scanf(" %c", &choice);
			if (choice == 'c' || choice == 'C')
			{
				printf("Your answer is correct\n");
				count++;
				break;
			}
			else
			{
				printf("The correct answer is c\n");
				break;
			}
		}
	}

score:

	amount = (float)count * 100000;

	printf("You answered %d questions correctly out of 10", count);

	score = count;

	if (amount > 0.00 && amount < 1000000)
	{
		printf("\n\n\t\t**************** CONGRATULATION *****************");
		printf("\n\t\t\t You won $%d\n", amount);
		edit_score(score, playername, amount);
	}

	else if (amount == 0.00)
	{
		printf("\n\n\n \t**************** CONGRATULATION ****************\n");
		printf("\n\t\tYOU ARE A NOT MILLIONAIRE!!!!!!!!!\n");
		printf("\n\t\t You won $%d\n", amount);
		printf("\n\t\t Thank You!!\n");
	}

help:
	printf("\n\tWant to continue\n");
	printf("\tEnter X to go to main home\n");
	printf("\tEnter M to go to retry the quiz\n");
	printf("\tpress ctrl+c to quit the quiz\n");
	scanf(" %c", &choice);
	if (choice == 'M' || choice == 'm')
	{
		goto home;
	}
	else if (choice == 'X' || choice == 'x')
	{
		goto mainhome;
	}
}
