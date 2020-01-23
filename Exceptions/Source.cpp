#include <iostream>


 

//main function declared 
void main()
{
	int start = 0;
	try
	{
		//hold all age user will input
		int dadsAge;
		int momsAge;
		int kidsAge;
		int ageDif1;
		//display title of application
		std::cout << "\n\n\t***Dna visor***\n\n"; \
			//prompt user to enter numerical inputs for ages
			std::cout << "Please enter a number for each of the ages\n";
		//get dads info
		std::cout << "Enter dads age: ";
		std::cin >> dadsAge;
		//get moms info
		std::cout << "Enter moms age: ";
		std::cin >> momsAge;
		//enter kids age 
		std::cout << "Enter kids age: ";
		std::cin >> kidsAge;
		//running program
		if (start == 0) {
			//dad exceptions
			std::cout << "\nDna visor is processing dad's Dna...\n";
			if (kidsAge > dadsAge)
			{
				throw 33;
			}
			if (dadsAge <= 0)
			{
				throw 36;
			}
			//mom exceptions
			std::cout << "\nDna visor is processing mom's Dna...\n";
			if (kidsAge > momsAge)
			{
				throw 43;
			}
			if (momsAge <= 0)
			{
				throw 46;
			}
			//kid exceptions 
			std::cout << "\nDna visor is processing kid's Dna\n";
			if (kidsAge == dadsAge || kidsAge == momsAge)
			{
				throw 53;
			}
			if (kidsAge <= 0)
			{
				throw 56;
			}
		}
		else
		{

			std::cout << "No known errors found in inputs";

		}
	}

	catch (int errorNumber)
	{
		//dad error handlers 
		if (errorNumber == 33)
		{
			std::cout << "\nStrange our DNA machine found that kid is older than or as old as dad!\n";
		}
		if (errorNumber == 36)
		{
			std::cout << "\nDad cannot be only zero years old!\n";
		}
		//mom error handlers 
		if (errorNumber == 43)
		{
			std::cout << "\nStrange our DNA machine found that kid is older than or as old as mom!\n";
		}
		if(errorNumber == 46)
		{
			std::cout << "\nMom cannot be only zero years old!\n";
		}
		//kids error handlers 
		if (errorNumber == 53)
		{
			std::cout << "\nKid cannot be as old as a parent!\n";
		}
		if (errorNumber == 56)
		{
			std::cout << "\nKid needs to be born to compare ages...\n";
		}
		
	}
	
}