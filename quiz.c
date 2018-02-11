#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctype.h>
#include "functions.h"
int main()
     {
     int countr;
     int r,i;
     int nq[6];int w;
  
     char choice;

     system("clear");
     //randomize();
     mainhome:
     system("clear");
     puts("\n\t\t WELCOME TO I.Q. TEST PROGRAM\n\n") ;
     puts("\n\t\t-------------------------------");
     puts("\n\t\t Enter 'S' to start game       ");
    // puts("\n\t\t Enter 'V' to view high score  ");
     puts("\n\t\t Enter 'H' for help            ");
     puts("\n\t\t Enter 'Q' to quit             ");
     printf("\n\t\t-------------------------------\n\n\t\t  ");
     choice=toupper(getch());

	if (choice=='Q')
	exit(1);
	else if (choice=='H')
	{
		help();
		getch();
		goto mainhome;
	}

    else if(choice=='S'){
    
	system("clear");

     printf("\n\n\n\t\t\tLoading...");
     printf("\n\t\t\t(WAIT\n\n\t\t\t");
     sleep(3);
     home:
     system("clear");
      
     i=1;
     start:
     r=rand()%5+1;
     nq[i]=r;
     for (w=0;w<i;w++)
	 if (nq[w]==r) goto start;

     switch(r)
	{
		case 1:
		printf("\n\nWhat is the value of 0!?");
		printf("\n\nA.4\tB.1\n\nC.none\tD.infinite\n\n");

		if (toupper(getch())=='B')
		{
		printf("\n\nCorrect!!!");
		countr++;
		break;}
		else
		{
		printf("\n\nWrong!!! The correct answer is B.1");
		break;}

		case 2:
		printf("\n\n\nHow many points are possible in a compound pendulum about which");
		printf("time period is same?");
		printf("\n\nA.4\tB.2\n\nC.none\tD.infinite\n\n");

		if (toupper(getch())=='A')
		{
		 printf("\n\nCorrect!!!");
	     countr++; 
		 break;}
		else
		printf("\n\nWrong!!! The correct answer is A.4");
		break;

		case 3:
		printf("\n\n\nWho was the creator of Linux?");
		printf("\n\nA.Richard Nikson\tB.Abraham Linkon\n\nC.Donald Trump\tD.Linus Torvalds\n\n");

		if (toupper(getch())=='D')
		{printf("\n\nCorrect!!!");countr++; break;}
		else
		{printf("\n\nWrong!!! The correct answer is D.Linus Torvalds");break;}


		case 4:
		printf("\n\nWho is the founder of SpaceX?");
		printf("\n\nA.Elon Musk\tB.Mahela Jawardan\n\nC.Mathew Hayden\tD.Bill Gates\n\n");

		if (toupper(getch())=='A')
		{printf("\n\nCorrect!!!");countr++; break;}
		else
		{printf("\n\nWrong!!! The correct answer is A.Elon Musk");break;}


		case 5:
		printf("\n\n\nWho created the C-program?");
		printf("\n\nA.Elon Musk\tB.Dennis Ritchie\n\nC.Bob Marley\tD.Lady Gaga\n\n");

		if (toupper(getch())=='B')
		{printf("\n\nCorrect!!!");countr++; break;}
		else
		{printf("\n\nWrong!!! The correct answer is B. Dennis Ritchie");break;}


		}
		i++;
		if (i<=2) goto start;

		puts("\n\nNEXT PLAY?(Y/N)");
		if (toupper(getch())=='Y')
		goto home;
		else
		goto mainhome;
		}
		else
		{
		printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
		sleep(1);
		goto mainhome;
		}
    return 0;
	}
