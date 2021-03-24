#include <stdio.h>
main(){
	int which;
	printf("Hello contestant, this program tell you which type of bender are you \nWe will ask you some questions \nWhich you may answer only the numbers written beside it \n");
	printf("Which one do you prefer? \n 1) Mountains \n 2)Plains \n 3)Oceans \n Answer: ");
	scanf("%d", &which);
	if(which == 1 ){
		printf("You are a air bender");
	}
	else if( which == 2 ){
		printf("Which one do you prefer? \n 1)Coffee \n 2)Tea \n 3)Water \n Answer: ");
		scanf("%d", &which);
		if( which == 3){
			printf("You are a water bender");
		}else{
			printf("Which one do you prefer? \n 1)Summer \n 2)Winter \n Answer: ");
		scanf("%d", &which);
		if(which == 1){
			printf("You are a fire bender");
		}
		else{
			printf("You are a earth bender");
		}
	}
	}else if( which == 3){
		printf("Which one do you prefer? \n 1)Summer \n 2)Winter \n Answer: ");
		scanf("%d", &which);
		if(which == 2){
			printf("You are a earth bender");
		}
		else{
			printf("You are a fire bender");
		}
	}	
	else{
		printf("Out of the list");
	}
}
