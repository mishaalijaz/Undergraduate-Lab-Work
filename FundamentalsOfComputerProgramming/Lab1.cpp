#include <stdio.h>

int main()

{
	//initialize all the variables
	int basic_pay = 0, marriage, marriage_date = 0, marriage_months = 0, marriage_year = 0;
	int age = 0, starting_year = 0, starting_month = 0, months_in_service = 0, a = 0, b = 0, c = 0, d = 0;
	float oldage_allowance = 0, pension = 0, house_rent = 0, salary = 0;

	printf("Enter your age\n"); 
	scanf_s("%d", &age);

	//basic pay is the overall pay without any deductions
	printf("Enter your basic pay\n");
	scanf_s("%d", &basic_pay);


	//taking input for service time to calculate total no. of months of service for evaluation
	printf("Enter your starting month of service\n"); 
	scanf_s("%d", &starting_month);  


	printf("Enter your starting year of service\n");
	scanf_s("%d", &starting_year);

	//duration in service
	starting_year = 2015 - starting_year;
	//converting the duration to months
	months_in_service = (10 - starting_month) + (starting_year * 12);

	//calculating the income tax
	printf("\n5% deducted income tax is %.0f\n", 0.05* basic_pay);
	//calculing the provisional tax
	printf("7% deducted provisional tax is %.0f\n", 0.07*basic_pay);

	//salary after deduction of income & provisional tax
	salary = basic_pay - (0.05 * basic_pay + 0.07* basic_pay);
	printf("Your basic pay after deducation of taxes is %.0f\n\n", salary);

	//take user marital status
	printf("Select 1 if unmarried, select 2 if married\n");
	scanf_s("%d", &marriage);

//evaluate the house rent according to marital status
	if (marriage == 1)
	{
		printf("You're unmarried, so you're ineligible for house rent\n");
		house_rent = 0;

	}

	else
	{
		//taking necessary input from married employee to calculate number of months in service since marriage
		
		printf("You're married\n\n"); 
		printf("Enter your marriage month\n");
		scanf_s("%d", &marriage_months);
		printf("Enter your marriage year\n");
		scanf_s("%d", &marriage_year);
		
		//years of marriage
		marriage_year = 2015 - marriage_year;
		//conversion of years of marriage in service to months
		marriage_months = (marriage_year * 12) + (10 - marriage_months);

		//married employee is given 15% house rent on his basic pay
		salary = salary + (0.15 * basic_pay);
		house_rent = 0.15* basic_pay;

	}

	//calculation of old age allowance

	if (age < 45)

	{
		printf("\nYou get no allowance\n");
		oldage_allowance = 0;
	}
	else
	{
		if (age >= 45 && age <= 55) 	

		{
			//if user is 45-55 of age, user gets 10% allowance on basic pay
			salary = salary + basic_pay *0.10;
			oldage_allowance = 0.10*basic_pay;
			printf("\nThe allowance you get is %.0f\n", oldage_allowance);
		}
		else
		{
			//if the user is above 55, user gets 15% old age allowance on basic pay
			salary = salary + basic_pay*0.15;

			oldage_allowance = 0.15*basic_pay;
			printf("\nThe allowance you get is %.0f\n", oldage_allowance);
		}
	}

	
	//calculating pension
	a = (2 * basic_pay)* months_in_service;
	b = house_rent*marriage_months;
	c = oldage_allowance * 3;
	d = salary * 2;

	pension = a + b + c + d;
	printf("\nThe computed pension is %.0f\n", pension);  

	return 0;
}