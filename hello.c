#include <stdio.h>

void main()
{
	float celc, fahr, kelv;
	int temp, tempConv;

	puts("Temperature Converter");
	puts("-----------------------");
	puts("Default temperature :");
	puts("1. Celcius");
	puts("2. Fahrenheit");
	puts("3. Kelvin");
	printf("Choose your temperature :");
	scanf("%d", &temp);
	if(temp == 1)
	{
		printf("Input the temperature :");
		scanf("%f", &celc);
		puts("Want to convert to?");
		puts("1. Fahrenheit");
		puts("2. Kelvin");
		printf("Choose your temperature :");
		scanf("%d", &tempConv);
		if(tempConv == 1)
		{
			fahr = (celc * 9/5) + 32;
			printf("The Result is = %f \n", fahr);
		}

		else if (tempConv == 2)
		{
			kelv = (celc + 273.15);
			printf("The Result is = %f \n", kelv);
		}
		
		else
		{
			puts("Nothing to do here!");
		}
	}

	else if(temp == 2)
	{
		printf("Input the temperature :");
		scanf("%f", &fahr);
		puts("Want to convert to?");
		puts("1. Celcius");
		puts("2. Kelvin");
		printf("Choose your temperature :");
		scanf("%d", &tempConv);
		if(tempConv == 1)
		{
			celc = (fahr -32) * 5/9;
			printf("The Result is = %f \n", celc);
		}

		else if (tempConv == 2)
		{
			kelv = (fahr - 32) * 5/9 + 273.15;
			printf("The Result is = %f \n", kelv);
		}
		
		else
		{
			puts("Nothing to do here!");
		}
	}

	else if(temp == 3)
	{
		printf("Input the temperature :");
		scanf("%f", &kelv);
		puts("Want to convert to?");
		puts("1. Celcius");
		puts("2. Fahrenheit");
		printf("Choose your temperature :");
		scanf("%d", &tempConv);
		if(tempConv == 1)
		{
			celc = (kelv - 273.15);
			printf("The Result is = %f \n", celc);
		}

		else if (tempConv == 2)
		{
			fahr = (kelv - 273.15) * 9/5 + 32;
			printf("The Result is = %f \n", kelv);
		}
		
		else
		{
			puts("Nothing to do here!");
		}
	}

	else {
		puts("nothing to do here!, go home dude!");
	}
}
