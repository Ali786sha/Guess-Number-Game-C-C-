 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
 int main()
 {
 	int number ,guess,nguess= 1;
 	srand(time(0));
 	number = rand()%100 +1;
 	//genrating the rendom number 1 to 100 
 
// 	printf ("the number is %d \n ",number );
// 	the loop are until the number is guessed 
 	do
{
 		printf("guess the number between  1 to 100 \n");
 		scanf("%d",&guess);
 		if (guess>number){
 		printf("Lower number please \n");
 	}
	else  if (guess<number ){
	
printf("higher number please \n");
	 }
	 else 
 {
	 	printf("you guessed it in %d attempts \n ",nguess);
	 }
	 nguess++;
	 
 }while(guess!=number);
}
 getch ();

 
 
