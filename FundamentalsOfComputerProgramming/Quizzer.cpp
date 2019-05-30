#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//function prototypes
void reset_score(int);                   //resets counter to 0
void show_record(char str[], int counter);    //displays the highest score
void help();                   //game instructions

int main()
{
	srand(time(NULL));
	char str[06]; //definition of str for taking input of name from user

	//intialization of variables
	int count = 0;
	float score;
	int option, option2, option3;
	char answer;
	int counter = 0;
	int answer1;
	int choice, choice2;
	int Randomizer[7] = { 0 }; //array for randomizing the questions
	int i;
	char adminE1[] = { "behzad11@gmail.com" };    //user emails
	int adminP = 1234;                         //user passwords
	char email[30], email1[30];                 //user enters email for admin adn user account
	int pwd;                                   //user enters pwd
	int login, login2;
	char admin[] = { "saminkhaliq@gmail.com" }; // admin email
	int pass = 0000;                           // admin password
	int age;

	printf(" \n\n\t\t ### Enter your name to play the game \n");
	printf(" \n\n\t\t Name = ");
	scanf("%s", &str);
	printf("\n\n\t\t ### Enter your age \n");
	printf("\n\n\t\t Age = ");
	scanf("%d", &age);
	system("cls");

game:

	printf("\n\n\t\t $$$$ Welcome %s to C PROGRAM QUIZ GAME $$$$\n", str);
	printf("________________________________________________________________________________");
	printf("\n\n\t Enter one of the following options to login to the quiz \n");
	printf("\n\t Enter 1. to Login as an Admininstrator \n\n");
	printf("\n\t Enter 2. to Login as a  User \n\n");
	printf("\n\t Enter 3. to exit the game \n\n");
	scanf_s("%d", &login);

login:
	if (login == 1) //admin login shows questions as well as answers
	{
		system("cls");
		printf("\n\n\t\t  Enter an email to login to the Quiz Game \n\n\t\t");
		printf("\n\t\t  Email = ");
		scanf("%s", &email1);
		printf("\n\n\t\t  Enter the password to continue ");
		printf("\n\n\t\t  Password = ");
		scanf_s("%d", &pwd);
		if (strcmp(admin, email1) == 0 && pwd == pass)
		{
			system("cls");
			printf("\n\n\t\t  $$$$$$ You are logged in as ADMIN $$$$$$ \n\n");
			printf("\n\t\t\t !!! Round Number 1 - Question List !!! \n\n");

			printf("\n\n\n\t Question No.1 ");
			printf("\n\n\t which digit is wrong in this series >> (2-3-5-8-12-16) ?");

			printf("\n\n\t(1) 2 \t\t (2) 16 \n\n\t(3) 12\t\t (4) 8 \n");
			printf("\n\n\t Answer >> (2) 16  \n");
			system("pause");

			printf("\n\n\n\t\ Question NO.2 ");
			printf("\n\n\t Which has highest mountains ?");
			printf("\n\n\t(1) EARTH\t\t (2) JUPITER\n\n\t(3) URANUS \t\t (4) MARS \n");
			printf("\n\n\t Answer >> (4) Mars  \n");
			system("pause");

			printf("\n\n\n\t Question No.3 ");
			printf("\n\n\t Which city has largest population?");
			printf("\n\n\t(1) TOKYO\t\t (2) LAHORE \n\n\t(3) MUMBAI\t\t (4) KARACHI \n");
			printf("\n\n\t Answer >> Tokyo\n");
			system("pause");

			printf("\n\n\n\t Question No.4 ");
			printf("\n\n\t HOW MANY MEN HAVE WALKED ON THE MOON ?");
			printf("\n\n\t(1) 8\t\t (2) 12 \n\n\t(3) 5 \t\t (4) 7\n");
			printf("\n\n\t Answer >> (2) 12 \n ");
			system("pause");

			printf("\n\n\n\t Question No.5 ");
			printf("\n\n\t Which is the world's second-largest country in land area? ");
			printf("\n\n\t(1) AMERICA \t\t (2) RUSSIA \n\n\t(3) CANDA \t\t (4) AUSTRALIA \n");
			printf("\n\n\t Answer  >> (3) Canada \n");
			system("pause");

			printf("\n\n\n\t QUESTION NO.6");
			printf("\n\n\t Which word does the 'e' in 'e-mail' stand for? ");
			printf("\n\n\t(1) ELECTRIC \t\t (2) ELECTRONIC \n\n\t(3) ESPECIAL \t\t (4) EASY \n ");
			printf("\n\n\t Answer >> (2) Electrnoic \n");
			system("pause");
			system("cls");

			printf("\n\n\t\t\t !!! Round Number 2 Question List !!!\n\n");

			printf("\n\n\n\t QUESTION NO.1");
			printf(" \n\n\t What is the currency of Switzerland ? ");
			printf("\n\n\t(1) DOLLAR \t\t (2) DIRHAM \n\n\t(3) SWISS FRANC \t (4) RUPEES \n");
			printf("\n\n\t Answer >> (3) Swiss Franc  \n");
			system("pause");

			printf("\n\n\n\t QUESTION NO.2");
			printf("\n\n\t Study of Earthquake is called ________ ");
			printf("\n\n\t(1) Seismology \t (2) Cosmology \n\n\t (3) Orology \t\t (4)Etimology \n");
			printf("\n\n\t Answer >> (1) Seismology  \n");
			system("pause");

			printf("\n\n\n\t QUESTION NO.3");
			printf("\n\n\t In which country is the world's largest McDonalds Restaurant? ");
			printf("\n\n\t(1) JAPAN \t\t (2) PAKISTAN \n\n\t(3) CHINA \t\t (4) AMERICA \n");
			printf("\n\n\t Answer >> (3) China  \n");
			system("pause");

			printf("\n\n\n\t QUESTION NO.4");
			printf("\n\n\t The Laws of Electromagnetic Induction were given by?");
			printf("\n\n\t(1) Faraday \t\t (2) Tesla \n\n\t(3) Maxwell \t\t (4) Coulomb \n");
			printf("\n\n\t Answer >> (1) Faraday  \n");
			system("pause");

			printf("\n\n\n\t QUESTION NO.5");
			printf("\n\n\t In what unit is electric power measured?");
			printf("\n\n\t(1) Coulomb \t\t (2) Watt \n\n\t(3) Power \t\t (4) Units \n");
			printf("\n\n\t Answer >> (2) Watt  \n");
			system("pause");

			printf("\n\n\n\t QUESTION NO.6");
			printf("\n\n\t Which is largest : ");
			printf("\n\n\t(1) MEGABYTE \t\t (2) TERABYTE \n\n\t(3) GIGABYTE \t\t (4) KILOBYTE \n");
			printf("\n\n\t Answer >> (2) Terabyte  \n");
			system("pause");

			printf("\n\n\n\t QUESTION NO.7");
			printf("\n\n\t Which country has the largest Christian population?");
			printf("\n\n\t(1) AUSTRALIA \t\t (2) BANGLADESH \n\n\t(3) INDIA \t\t (4) USA \n");
			printf("\n\n\t Answer >> (4) USA  \n");
			system("pause");

			printf("\n\n\n\t QUESTION NO.8");
			printf("\n\n\t How many times a piece of paper can be folded at the most?");
			printf("\n\n\t(1) 6 \t\t (2) 7 \n\n\t\t (3) 8 \t(4) Depends on the size of paper \n");
			printf("\n\n\t Answer >> (2) 7 (seven)  \n");;
			system("pause");

			printf("\n\n\n\t QUESTION NO.9");
			printf("\n\n\t What is the largest living bird? ");
			printf("\n\n\t(1) OSTRICH \t\t (2) HEN \n\n\t(3) PEACOCK \t\t (4) PIGEON \n");
			printf("\n\n\t Answer >> (1) Ostrich  \n");
			system("pause");

			printf("\n\n\n\t QUESTION NO.10");
			printf("\n\n\t Which is the longest River in the world?");
			printf("\n\n\t(1) Nile \t\t (2) Koshi \n\n\t(3) Ganga \t\t (4) Amazon \n");
			printf("\n\n\t Answer >> (1) Nile  \n");
			system("pause");

			printf("\n\n\n\t QUESTION NO.11");
			printf("\n\n\t\t What is the color of the Black Box in aeroplanes?");
			printf("\n\n\t(1) White \t\t (2) Black \n\n\t(3) Orange \t\t (4) Red\n");
			printf("\n\n\t Answer >> (3) Orange  \n");
			system("pause");

			printf("\n\n\n\t QUESTION NO.12");
			printf("\n\n\t What is Rambo's first name? ");
			printf("\n\n\t(1) JOHN \t\t (2) ROBERT \n\n\t(3) WILLIAM \t\t (4) STEVE \n");
			printf("\n\n\t Answer >> (1) John  \n");
			system("pause");

			printf("\n\n\n\t QUESTION NO.13");
			printf("\n\n\t Name the country where there no mosquitoes are found?");
			printf("\n\n\t(1) Japan \t\t (2) Italy \n\n\t(3) Argentina \t\t (4) France \n");
			printf("\n\n\t Answer >> (4) France  \n");
			system("pause");

			printf("\n\n\n\t QUESTION NO.14");
			printf("\n\n\t Which is heavier? ");
			printf("\n\n\t(1)  PROTON \t\t (2) NEUTRON \n\n\t(3) ELECTRON \t\t (4) ANTI-NEUTRINO \n");
			printf("\n\n\t Answer >> (1) Proton  \n");
			system("pause");

			printf("\n\n\n\t QUESTION NO.15");
			printf("\n\n\t Which Blood Group is known as the Universal Recipient?");
			printf("\n\n\t(1) A \t\t (2) AB \n\n\t(3) B \t\t (4) O");
			printf("\n\n\t Answer >> (2) AB  \n");

			system("pause");
			system("cls");

			goto game;
		}
		else
		{
			printf("\n\n\ Invalid password !!!! \t Or \t Invalid Email  \t!!!\t...Please Try Again..!!!\n\n");
			system("pause");
			system("cls");
			goto login;
		}

	}


	else if (login == 2)
	{
	entry:
		system("cls");
		printf("\n\n\t\t Enter an email to login to the QUIZ GAME  \n\n\t\t");
		printf("\n\t\t  Email = ");
		scanf("%s", &email);
		printf("\n\n\t\t Enter your Password to continue ");
		printf("\n\n\t\t  Password = ");
		scanf_s("%d", &pwd);


		if (strcmp(adminE1, email) == 0 && pwd == adminP) //compares both emails with entered one and compares pwd
		{
			printf("\t\t\tYou are logged in as a User\n\n");

			//user's quiz 
		mainhome:
			system("cls");
			printf("\n\n\t\t\t C PROGRAM QUIZ GAME\n");
			printf("\n\t\t_______________________________________________________________");

			printf("\n\t\t\t   WELCOME ");
			printf("\n\t\t\t      to ");
			printf("\n\t\t\t   THE GAME ");
			printf("\n\t\t________________________________________");
			printf("\n\t\t________________________________________");
			printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ");
			printf("\n\t\t________________________________________");
			printf("\n\t\t________________________________________");
			printf("\n\t\t >> Press 1 to start the game");
			printf("\n\t\t >> Press 2 to show the highest score");
			printf("\n\t\t >> Press 3 to reset score");
			printf("\n\t\t >> press 4 for help            ");
			printf("\n\t\t >> press 5 to quit             ");
			printf("\n\t\t________________________________________\n\n");
			printf("\n\n\t\t Enter any of the above option : ");
			scanf_s("%d", &option);

			if (option == 2)
			{
				show_record(str, counter); // calls show record function to show the last highest score achieved


				system("pause");
				system("cls");
				goto mainhome;

			}
			if (option == 3)
			{

				reset_score(count); //calling reset score function to reset counter to zero

				system("pause");
				system("cls");
				goto mainhome;

			}
			else if (option == 4)
			{
				help(); //calling help function to display instructions
				system("pause");
				system("cls");
				goto mainhome;
			}
			else if (option == 5)
			{
				printf(" You are now going to exit the game ");
				exit(1);
			}

			else  (option == 1);
			{

				system("cls");
				printf("\n ------------------  Welcome  to C Program Quiz Game --------------------------");
				printf("\n\n Here are some tips you might wanna know before playing:");
				printf("\n -------------------------------------------------------------------------");
				printf("\n\n >> There are 2 rounds in this Quiz Game, WARMUP ROUND & CHALLANGE ROUND \n ");
				printf("\n\n >> In warmup round you will be asked a total of 6 questions to test your");
				printf("\n    general knowledge. You are eligible to play the game if you give atleast 3");
				printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.\n ");
				printf("\n\n >> If the answer is correct you will get +2 points  ");
				printf("\n   but if your answer is wrong then -1 points will be deducted. \n");
				printf("\n\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
				printf("\n    total of 10 questions. Each right answer will be awarded $150,000!");
				printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!.......... \n ");
				printf("\n\n >> You will be given 4 options and you have to press 1, 2 ,3 or 4 for the");
				printf("\n    right option.\n");
				printf("\n\n >> There will be +3 points for a right answer and -1 points for a wrong answer !!!");
				printf("\n\n\t\t !!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!! \n ");
				printf("\n\n\n\t\t  Press  1 to start the game !\n");

				scanf_s("%d", &option2);
				if (option2 == 1)
				{
					goto home;
				}
				else
				{
					printf(" You are now going back to the main menu \n ");
					system("pause");
					system("cls");

					goto mainhome;

				}

			home:
				system("cls");



				for (i = 1; i <= 6;) //loop runs 6 times for 6 questions in round 1
				{

					int sentinel = rand() % 6 + 1; //random values b/w 1-6 generated  
					if (Randomizer[sentinel] != 0) 
						sentinel = -1;

					if (sentinel != -1) {
						switch (sentinel) {

						case 1:
							printf("\tQUESTION : ");
							printf("\n\n\t\t which digit is wrong in this series >> (2-3-5-8-12-16) ?");
							printf("\n\n\t\t(1) 2 \t\t (2) 16 \n\n\t\t(3) 12\t\t (4) 8 \n");
							printf("\n\n\t\t Enter your answer:  ");
							scanf_s("%d", &choice);

							if (choice == 2)
							{
								printf("\n\n\t\t Correct!!! \n\n\t\t\t");
								count += 3;

							}
							else
							{
								printf("\n\n\t\t Wrong!!! The correct answer is >> (2) 16 \n\n\t\t\t");
								count = count - 1;
							}

							system("pause");
							system("cls");
							Randomizer[sentinel]++;
							i++;
							break;

						case 2:

							printf("\tQUESTION : ");
							printf("\n\n\t Which has highest mountains ?");
							printf("\n\n\t(1) EARTH\t\t (2) JUPITER\n\n\t(3) URANUS \t\t (4) MARS \n");
							printf("\n\n\t Enter your answer:  ");
							scanf_s("%d", &choice);

							if (choice == 4)
							{
								printf("\n\n\t\t Correct!!! \n\n\t\t\t");
								count += 3;

							}
							else
							{
								printf("\n\n\t\t Wrong!!! The correct answer is >> (4) MARS \n\n\t\t\t");
								count = count - 1;
							}

							system("pause");
							system("cls");
							Randomizer[sentinel]++;
							i++;
							break;


						case 3:

							printf("\tQUESTION : ");
							printf("\n\n\t\t Which city has largest population?");
							printf("\n\n\t\t(1) TOKYO\t\t (2) LAHORE \n\n\t\t(3) MUMBAI\t\t (4) KARACHI \n");
							printf("\n\n\t\t Enter your answer:  ");
							scanf_s("%d", &choice);


							if (choice == 1)
							{
								printf("\n\n\t\t Correct!!! \n\n\t\t\t");

								count += 3;


							}
							else
							{
								printf("\n\n\t\t Wrong!!! The correct answer is >> (1) TOKYO \n\n\t\t\t");
								count = count - 1;
							}
							system("pause");
							system("cls");

							Randomizer[sentinel]++;
							i++;
							break;

						case 4:

							printf("\tQUESTION : ");
							printf("\n\n\t HOW MANY MEN HAVE WALKED ON THE MOON ?");
							printf("\n\n\t(1) 8\t\t (2) 12 \n\n\t(3) 5 \t\t (4) 7\n");
							printf("\n\n\t\t Enter your answer:  ");
							scanf_s("%d", &choice);


							if (choice == 2)
							{
								printf("\n\n\t\t Correct!!! \n\n\t\t\t");
								count += 3;

							}
							else
							{
								printf("\n\n\t\t Wrong!!! The correct answer is >>  (2) 12 \n\n\t\t\t");
								count = count - 1;
							}
							system("pause");
							system("cls");
							Randomizer[sentinel]++;
							i++;
							break;

						case 5:

							printf("\tQUESTION : ");
							printf("\n\n\t\t Which is the world's second-largest country in land area? ");
							printf("\n\n\t\t(1) AMERICA \t\t (2) RUSSIA \n\n\t\t(3) CANDA \t\t (4) AUSTRALIA \n");
							printf("\n\n\t\t Enter your answer:  ");
							scanf_s("%d", &choice);

							if (choice == 3)
							{
								printf("\n\n\t\t Correct!!! \n\n\t\t\t");
								count += 3;

							}
							else
							{
								printf("\n\n\t\t Wrong!!! The correct answer is  >> (3) CANADA \n\n\t\t\t");
								count = count - 1;
							}

							system("pause");
							system("cls");
							Randomizer[sentinel]++;
							i++;
							break;

						case 6:

							printf("\tQUESTION : ");
							printf("\n\n\t\t Which word does the 'e' in 'e-mail' stand for? ");
							printf("\n\n\t\t(1) ELECTRIC \t\t (2) ELECTRONIC \n\n\t\t(3) ESPECIAL \t\t (4) EASY \n ");
							printf("\n\n\t\t\t Enter your answer:  ");
							scanf_s("%d", &choice);

							if (choice == 2)
							{
								printf("\n\n\t\t Correct!!! \n\n\t\t\t");
								count += 3;

							}
							else
							{
								printf("\n\n\t\t Wrong!!! The correct answer is >> (2) ELECTRONIC \n\n\t\t\t");
								count = count - 1;
							}

							system("pause");
							system("cls");
							Randomizer[sentinel]++;
							i++;
							break;
						}
					}
				}
			}

			printf("\n\n\t\t WAOOO !!!!!");
			printf("\n\n\t\t you have played well !!!!!");
			printf("\n\n\t\t your score is %d\n!!!!!", count);


			system("pause");
			system("cls");

			if (count >= 8)
			{

				goto playgame;
			}

			else
			{

				printf("\n\n\t\t !!!! SORRY !!!");
				printf("\n\n\t\t You are not able to play the next round !!! \n\n\t\t");

				system("pause");
				system("cls");

				goto mainhome;
			}




		playgame:

			printf("\n\n\t*** CONGRATULATION YOU ARE ELIGIBLE TO PLAY THE NEXT ROUND \n\n\t\t*** ");

			system("pause");
			system("cls");

			srand(time(NULL));
			int randomizer[16] = { 0 };
			
			
			
			for (i = 1; i <= 15;) 
			{
						
				int sentinel = rand() % 15 + 1;
				
				if (randomizer[sentinel] != 0)
					sentinel = -1;
				
				if (sentinel != -1) {
					switch (sentinel)
					{
					case 1:
						printf("\t\t QUESTION : ");
						printf(" \n\n\t\t What is the currency of Switzerland ? ");
						printf("\n\n\t\t (1) DOLLAR \t\t (2) DIRHAM \n\n\t\t (3) SWISS FRANC \t (4) RUPEES \n");
						printf("\n\n\t\t\t Enter your answer:  ");
						scanf_s("%d", &answer1);
						if (answer1 == 3)
						{
							printf("\n\n\t\t Correct!!! \n\n\t\t\t");
							counter += 5;

						}
						else
						{
							printf("\n\n \t\t Wrong!!! The correct answer is >> (3) SWISS FRANC \n\n\t\t");
							counter = counter - 1;
						}
						system("pause");
						system("cls");
						i++;
						randomizer[sentinel]++;
						break;

					case 2:
						printf("\tQUESTION : ");
						printf("\n\n\t\t Study of Earthquake is called ________ ");
						printf("\n\n\t\t (1) Seismology \t (2) Cosmology \n\n\t\t (3) Orology \t\t (4)Etimology \n");
						printf("\n\n\t\t\t Enter your answer:  ");
						scanf_s("%d", &answer1);
						if (answer1 == 1)
						{
							printf("\n\n\t\t Correct!!! \n\n\t\t\t");
							counter += 5;
						}
						else
						{
							printf("\n\n\t\t Wrong!!! The correct answer is >> (1) Seismology \n\n\t\t ");
							counter = counter - 1;
						}
						system("pause");
						system("cls");
						i++;
						randomizer[sentinel]++;
						break;

					case 3:
						printf("\tQUESTION : ");
						printf("\n\n\t\t In which country is the world's largest McDonalds Restaurant? ");
						printf("\n\n\t\t(1) JAPAN \t\t (2) PAKISTAN \n\n\t\t(3) CHINA \t\t (4) AMERICA \n");
						printf("\n\n\t\t\t Enter your answer:  ");
						scanf_s("%d", &answer1);
						if (answer1 == 3)
						{
							printf("\n\n\t\t Correct!!! \n\n\t\t\t");
							counter += 5;
						}
						else
						{
							printf("\n\n\t\t Wrong!!! The correct answer is >> (3) CHINA \n\n\t\t");
							counter = counter - 1;
						}
						system("pause");
						system("cls");
						i++;
						randomizer[sentinel]++;
						break;

					case 4:
						printf("\tQUESTION : ");
						printf("\n\n\t\t The Laws of Electromagnetic Induction were given by?");
						printf("\n\n\t\t (1) Faraday \t\t (2) Tesla \n\n\t\t (3) Maxwell \t\t (4) Coulomb \n");
						printf("\n\n\t\t\t Enter your answer:  ");
						scanf_s("%d", &answer1);
						if (answer1 == 1)
						{
							printf("\n\n\t\t Correct!!! \n\n\t\t\t");
							counter += 5;
						}
						else
						{
							printf("\n\n\t\t Wrong!!! The correct answer is >> (1) Faraday \n\n\t\t");
							counter = counter - 1;
						}
						system("pause");
						system("cls");
						i++;
						randomizer[sentinel]++;
						break;

					case 5:
						printf("\tQUESTION : ");
						printf("\n\n\t\t In what unit is electric power measured?");
						printf("\n\n\t\t (1) Coulomb \t\t (2) Watt \n\n\t\t (3) Power \t\t (4) Units \n");
						printf("\n\n\t\t\t Enter your answer:  ");
						scanf_s("%d", &answer1);
						if (answer1 == 2)
						{
							printf("\n\n\t\t Correct!!! \n\n\t\t\t");
							counter += 5;
						}
						else
						{
							printf("\n\n\t\t Wrong!!! The correct answer is >> (2) Power \n\n\t\t");
							counter = counter - 1;
						}
						system("pause");
						system("cls");
						i++;
						randomizer[sentinel]++;
						break;

					case 6:
						printf("\tQUESTION : ");
						printf("\n\n\t\t Which is largest : ");
						printf("\n\n\t\t (1) MEGABYTE \t\t (2) TERABYTE \n\n\t\t (3) GIGABYTE \t\t (4) KILOBYTE \n");
						printf("\n\n\t\t Enter your answer:  ");
						scanf_s("%d", &answer1);
						if (answer1 == 2)
						{
							printf("\n\n\t\t Correct!!! \n\n\t\t\t");
							counter += 5;
						}
						else
						{
							printf("\n\n\t\t Wrong!!! The correct answer is >> (2) TERABYTE \n\n\t\t");
							counter = counter - 1;
						}
						system("pause");
						system("cls");
						i++;
						randomizer[sentinel]++;
						break;

					case 7:
						printf("\tQUESTION : ");
						printf("\n\n\t\t Which country has the largest Christian population?");
						printf("\n\n\t\t (1) AUSTRALIA \t\t (2) BANGLADESH \n\n\t\t (3) INDIA \t\t (4) USA \n");
						printf("\n\n\t\t\t Enter your answer:  ");
						scanf_s("%d", &answer1);
						if (answer1 == 4)
						{
							printf("\n\n\t\t Correct!!! \n\n\t\t\t");
							counter += 5;
						}
						else
						{
							printf("\n\n\t\t Wrong!!! The correct answer is >> (4) USA \n\n\t\t");
							counter = counter - 1;
						}
						system("pause");
						system("cls");
						i++;
						randomizer[sentinel]++;
						break;

					case 8:
						printf("QUESTION : ");
						printf("\n\n\t\t How many times a piece of paper can be folded at the most?");
						printf("\n\n\t\t (1) 6 \t\t (2) 7 \n\n\t\t (3) 8 \t\t (4) Depends on the size of paper \n");
						printf("\n\n\t\t\t Enter your answer:  ");
						scanf_s("%d", &answer1);
						if (answer1 == 2)
						{
							printf("\n\n\t\t Correct!!! \n\n\t\t\t");
							counter += 5;
						}
						else
						{
							printf("\n\n\t\t Wrong!!! The correct answer is >> (2) 7 \n\n\t\t");
							counter = counter - 1;

						}
						system("pause");
						system("cls");
						i++;
						randomizer[sentinel]++;
						break;

					case 9:
						printf("\tQUESTION : ");
						printf("\n\n\t\t What is the largest living bird? ");
						printf("\n\n\t\t (1) OSTRICH \t\t (2) HEN \n\n\t\t (3) PEACOCK \t\t (4) PIGEON \n");
						printf("\n\n\t\t\t Enter your answer:  ");
						scanf_s("%d", &answer1);
						if (answer1 == 1)
						{
							printf("\n\n\t\t Correct!!! \n\n\t\t\t");
							counter += 5;
						}
						else
						{
							printf("\n\n\t\t Wrong!!! The correct answer is >> (1) OSTRICH \n\n\t\t");
							counter = counter - 1;
						}
						system("pause");
						system("cls");
						i++;
						randomizer[sentinel]++;
						break;

					case 10:
						printf("\tQUESTION : ");
						printf("\n\n\t\t Which is the longest River in the world?");
						printf("\n\n\t\t (1) Nile \t\t (2) Koshi \n\n\t\t (3) Ganga \t\t (4) Amazon \n");
						printf("\n\n\t\t\t Enter your answer:  ");
						scanf_s("%d", &answer1);
						if (answer1 == 1)
						{

							printf("\n\n\t\t Correct!!! \n\n\t\t\t");
							counter += 5;
						}
						else
						{
							printf("\n\n\t\t Wrong!!! The correct answer is >> (1) Nile \n\n\t\t");
							counter = counter - 1;
						}
						system("pause");
						system("cls");
						i++;
						randomizer[sentinel]++;
						break;

					case 11:
						printf("\tQUESTION : ");
						printf("\n\n\t\t What is the color of the Black Box in aeroplanes?");
						printf("\n\n\t\t (1) White \t\t (2) Black \n\n\t\t (3) Orange \t\t (4) Red\n");
						printf("\n\n\t\t\t Enter your answer:  ");
						scanf_s("%d", &answer1);
						if (answer1 == 3)
						{

							printf("\n\n\t\t Correct!!! \n\n\t\t\t");
							counter += 5;
						}
						else
						{
							printf("\n\n\t\t Wrong!!! The correct answer is >> (3) Orange \n\n\t\t");
							counter = counter - 1;
						}
						system("pause");
						system("cls");
						i++;
						randomizer[sentinel]++;
						break;

					case 12:
						printf("\tQUESTION : ");
						printf("\n\n\t\t What is Rambo's first name? ");
						printf("\n\n\t\t (1) JOHN \t\t (2) ROBERT \n\n\t\t (3) WILLIAM \t\t (4) STEVE \n");
						printf("\n\n\t\t\t Enter your answer:  ");
						scanf_s("%d", &answer1);
						if (answer1 == 1)
						{
							printf("\n\n\t\t Correct!!! \n\n\t\t\t");
							counter += 5;
						}
						else
						{
							printf("\n\n\t\t Wrong!!! The correct answer is >> (1) JOHN \n\n\t\t");
							counter = counter - 1;
						}
						system("pause");
						system("cls");
						i++;
						randomizer[sentinel]++;
						break;

					case 13:
						printf("\tQUESTION : ");
						printf("\n\n\t\t Name the country where there no mosquitoes are found?");
						printf("\n\n\t\t (1) Japan \t\t (2) Italy \n\n\t\t (3) Argentina \t\t (4) France \n");
						printf("\n\n\t\t\t Enter your answer:  ");
						scanf_s("%d", &answer1);
						if (answer1 == 4)
						{
							printf("\n\n\t\t Correct!!! \n\n\t\t\t");
							counter += 5;
						}
						else
						{
							printf("\n\n\t\t Wrong!!! The correct answer is >> (4) France \n\n\t\t");
							counter = counter - 1;
						}
						system("pause");
						system("cls");
						i++;
						randomizer[sentinel]++;
						break;

					case 14:
						printf("\tQUESTION : ");
						printf("\n\n\t\t Which is heavier? ");
						printf("\n\n\t\t (1)  PROTON \t\t (2) NEUTRON \n\n\t\t (3) ELECTRON \t\t (4) ANTI-NEUTRINO \n");
						printf("\n\n\t\t\t Enter your answer:  ");
						scanf_s("%d", &answer1);
						if (answer1 == 1)
						{
							printf("\n\n\t\t Correct!!! \n\n\t\t\t");
							counter += 5;
						}
						else
						{
							printf("\n\n\t\t Wrong!!! The correct answer is >> (1) PROTON \n\n\t\t");
							counter = counter - 1;
						}

						system("pause");
						system("cls");
						i++;
						randomizer[sentinel]++;
						break;

					case 15:
						printf("\tQUESTION : ");
						printf("\n\n\t\t Which Blood Group is known as the Universal Recipient?");
						printf("\n\n\t\t (1) A \t\t (2) AB \n\n\t\t (3) B \t\t (4) O");
						printf("\n\n\t\t\t Enter your answer:  ");
						scanf_s("%d", &answer1);
						if (answer1 == 2)
						{
							printf("\n\n\t\t Correct!!! \n\n\t\t\t");
							counter += 5;
						}

						else
						{
							printf("\n\n\t\t Wrong!!! The correct answer is >> (2) B");
							counter = counter - 1;

						}
						system("pause");
						system("cls");
						i++;
						randomizer[sentinel]++;
						break;

					}
				}
			}
			printf("\n\t\t HURRAAAAAAAAH.....!!!!!!");
			printf("\n\t\t %s HAVE DONE A GREAT JOB.....!!!!!!\n", str);
			printf(" %s have scored %d.....!!!!!!\n", str, counter);



			system("pause");
			system("cls");


			system("cls");
			score = (float)counter * 100000;
			printf("\n\t\t %s has played well.....!!!!!!", str);
			printf(" \n\n\t\t In millions your score is %0.2f", score);
			if (score > 0.00 || score < 100000)
			{
				printf("\n\n\t\t ### CONGRATULATION ### ");
				printf("\n\n\t\t %s won $ %0.2f", str, score);
				goto go;
			}

			else if (score == 100000.00)
			{
				printf("\n\n\n \t\t**************** CONGRATULATION ****************");
				printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
				printf("\n\t\t You won $%.2f", score);
				printf("\t\t Thank You!!");
			}
			else
			{
				printf("\n\n\t\t ******** SORRY YOU DIDN'T WIN ANY CASH ********");
				printf("\n\t\t Thanks for your participation");
				printf("\n\t\t TRY AGAIN");
				goto go;
			}


		go:
			printf("\n\n\t\t Press 1 if you want to play again");
			printf(" \n\n\t\t Press any key if you want to exit");
			printf("\n\n\t\t Enter your choice : ");
			scanf_s("%d", &answer);
			if (answer == 1)
			{

				goto mainhome;
			}

			else
			{

				exit(1);
			}
		}




		else
		{
			printf("\n\n\t Invalid password !!!! \t Or \tInvalid Email  \t!!!...Please Try Again..!!!\n\n");
			system("pause");
			system("cls");
			goto game;
		}
	}







	else
	{
		printf(" \n\n\t\t You are now going to exit the game \n\n\t\t !!!!!");
		exit(1);
	}
}

void show_record(char str[06], int counter)
{
	printf("%s has scored %d \n", str, counter);
}

void reset_score(int counter)
{
	counter = 0;
	printf("\n\t\tScore is Reset\n");
	printf("\n\t\t Your Score is:");
	printf("%d", counter);
	printf("\n\n\n");
}

void help()
{
	system("cls");
	printf("\n\n\t\t\t !!!!! HELP !!!!!");
	printf("\n -------------------------------------------------------------------------");
	printf("\n ......................... C program Quiz Game...........");
	printf("\n\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
	printf("\n\n >> In warmup round you will be asked a total of 6 questions to test your general");
	printf("\n    knowledge. You will be eligible to play the next round if you score equal or more than (8)");
	printf("\n    right answers otherwise you can't play the Game...........");
	printf("\n\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
	printf("\n    total 15 questions each right answer will be awarded $100,000.");
	printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
	printf("\\nn >> You will be given 4 options and you have to press A, B ,C or D for the");
	printf("\n    right option");
	printf("\n\n >> Negative marking for wrong answers");

	printf("\n\n\t*************BEST OF LUCK******************");
	printf("\n\n\t***** C PROGRAM QUIZ GAME is developed by a team of 4 member ********\n");
	printf("\n\n\t *** The 4 members are BEHZAD  ,,  TALHA  ,, SHAHZINA  ,, MISHAAL ***\n");
}


