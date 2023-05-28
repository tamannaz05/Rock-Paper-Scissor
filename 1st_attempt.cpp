//rock_paper_scissors

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int checkWin(char comp,char user);
int main()
{
	char comp,user;
	int number;
	srand(time(0));
	number=rand()%100+1;
	if(number<=33)
		comp='R';
	else if(number>33&&number<=66)
		comp='P';	
	else
		comp='S';
	printf("\n\t *****ROCK PAPER SCISSORS***** \n\n\n");
	printf("\n Enter 'R' for Rock , 'P' for Paper and 'S' for Scissors \n");
	scanf("%c",&user);
	if(user!='R' && user!='P' && user!='S')
	{
		printf("\t INVALID INPUT \n");
	}
	else
	{
		if(checkWin(comp,user)==1)
		{
			printf("\tComputer : %c\n",comp);
			printf("\tYou : %c\n",user);
			printf("\t YOU WIN \n");
		}
		else if(checkWin(comp,user)==2)
		{
			printf("\tComputer : %c\n",comp);
			printf("\tYou : %c\n",user);
			printf("\t COMPUTER WINS \n");
		}
		else
		{
			printf("\tComputer : %c\n",comp);
			printf("\tYou : %c\n",comp);
			printf("\t MATCH DRAW \n");
		}
	}
	return 0;
}
int checkWin(char comp,char user)
{
	if(comp==user)//draw_condition
		return 0;
	else//non-draw_condition
	{
		if(comp=='R' && user=='P')
			return 1;
		if(comp=='P' && user=='S')
			return 1;
		if(comp=='S' && user=='R')
			return 1;
		if(comp=='P' && user=='R')
			return 2;
		if(comp=='S' && user=='P')
			return 2;
		if(comp=='R' && user=='S')
			return 2;	
	}
}
