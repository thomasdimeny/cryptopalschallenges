
/* first c program in years */

#include <stdio.h>

void show_message(void); 

int main(){
	int count; 
	count = 0; 
	while (count < 10){
		show_message(); 
		count = count+1; 
	}
	return(0); 
}

void show_message(void){

	printf("hello\n"); 
}

