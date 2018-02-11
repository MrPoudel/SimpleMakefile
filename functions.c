#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>   //_getch*/
#include<termios.h>  //_getch*/ 
#include<ctype.h>
#include"functions.h"

	char getch(){
	    
	    
	    char buf=0;
	    struct termios old={0};
	    fflush(stdout);
    if(tcgetattr(0, &old)<0)
        perror("tcsetattr()");
    old.c_lflag&=~ICANON;
    old.c_lflag&=~ECHO;
    old.c_cc[VMIN]=1;
    old.c_cc[VTIME]=0;
    if(tcsetattr(0, TCSANOW, &old)<0)
        perror("tcsetattr ICANON");
    if(read(0,&buf,1)<0)
        perror("read()");
    old.c_lflag|=ICANON;
    old.c_lflag|=ECHO;
    if(tcsetattr(0, TCSADRAIN, &old)<0)
        perror ("tcsetattr ~ICANON");
    printf("%c\n",buf);
    return buf;
 }

void help()
 {
 system("clear");
 printf("\n\n\n\tThis is a very simple game. You have to answer some GK based questions");
 printf("\n\n\n\tAmong four options( A/ B /C /D) right one should be chooseng");
 
 printf("\n\n\n\tSo BEST OF LUCK.");
 }

