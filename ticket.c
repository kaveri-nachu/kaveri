#include <stdio.h>
void main()
{
int choice, i=0, counter=0;
  	int fclass[10];
	printf("Welcome to the booking program");
	printf("\n-----------------");
	do{ 
		printf("\n Please pick one of the following option:");
		printf("\n 1) Reserve a first class seat on Flight 101.");
		printf("\n 2) Reserve a coach seat on Flight 101.");
		printf("\n 3) Quit ");
		printf("\n ---------------------------------------------------------------------");
		printf("\nYour choice?");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				i++;
				if (i <10)
        {
						printf("Here is your seat: %d " , fclass[i]);
				}
				else if (i = 10)
				{ 
						
						printf("Sorry there is no more seat. Please wait for the next flight");
				}
				break;
			case 3:
				printf("Thank you and goodbye\n");
				exit(0);
		}
	} while (choice != 3);
}
