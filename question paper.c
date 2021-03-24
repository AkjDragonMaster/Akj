#include <stdio.h>
main(){
	char y=121,n=110,ans;
	printf("Is the area of a circle 12.75r^2 if diameter is equal to 2 times radius \nyes(y) or no(n):");
	scanf(" %c",&ans);
	if(ans == y){
		printf("Good \n");
		printf("Q2) If the initial velocity 4km\s and the final velocity is 2km/s with an accelaration of two times its velocity\nIs the time period 1 second \nyes(y) or no(n)");
		scanf(" %c",&ans);
			if(ans == n){
				printf("Good \n");
				printf("Is tan 0(theta) = 1/cot 0 \nyes(y) or no(n):");
				scanf(" %c",&ans);	
					if(ans == y){
						printf("Good \n");
				printf("The initial velocity 2 x time and the time is 2 x its acceleration(a) \nIs the displacement 2a^2 + 2a^3 \nyes(y) or no(n):");
				scanf(" %c",&ans);
						if(ans == y){
							int answer;
							printf("Good \n");
							printf("If the a person in a trapezium(whose base is 2 x distance and height 34 km) park walks at a speed of 15m/s and and time taken is 50 hrs what is the area: ");
							scanf(" %d", &answer); 
								if(answer == 486180){
									printf("Hurray, you have WON!!!!");
								}
								else{
									printf("So close but you still did not get it");
								}
								}
								else{
									printf("You failed");
								}
						}
						else{
							printf("You failed");
						}
					}
					else{
						printf("You failed");
					}
			}
			else{
			printf("You failed");}
}
