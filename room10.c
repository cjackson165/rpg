#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void)
{
	puts("Hello new dog owner");
	puts("Today you will be watching my puppy for me while I am in Pope's class holding on for dear life");
	puts("My dog's name is Cannon");
	puts("INSTRUCTIONS: You have to figure out what Cannon needs to remain happy");

	printf("What is your name?");
	string name;
	scanf("%s",name);	
	
	puts("CANNON IS CRYING!!");
	puts("guess a number between 1-5 to see why Cannon is crying");
	puts("1: Food");
	puts("2: Water");
	puts("3: Bathroom");
	puts("4: Play")
	puts("5: Sleepy");

	
	int num=0;
	scanf("%d",num);

	while (num != 6)
	{
		if (num ==1)
		{
			puts("Cannon was a bit hungry but he is still wining");
		}
		if(num ==2)
		{
			puts("Cannon was a bit thirsty but he is still wining");
		}
		if (num ==3);
		{
			puts("Great thinking!");
			puts("\nPick him up and take him to the back yard");
			int num2 =+1(rand % 2);
			
			if(num ==1)
			{
				puts("He peed, Just water it down");
			}
			if (num ==2)
			{
				puts("He pooped, grab the pooper scooper and get to work");
			}
		}
		if (num ==4)
		{	
			puts("What game would you like to play?");
			puts("1: Tug of war");
			puts("2: Frisbee");
			puts("3 wrestle");
			
			int numb =0;
			scanf("%d",numb);
			if (num==1)
			{
				puts("He is having a great time and will eventually get sleepy");
			}
			if (num ==2)
			{
				puts("He doesnt know how to play this game so he stares at you");
			}
			if (num ==3)
			{
				puts("Cannon is agressive so he bites you");
			}
		}
		if (num ==5)
		{
			puts("Cannon is very loving, so he cuddles up and falls alseep easily");
		}
	}
	
}
