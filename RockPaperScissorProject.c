#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Rock = 1, Paper = 2, Scissor = 3 
int number1_count = 0;
int number2_count = 0;
int main(){
    Random_Num_Generate();
    return 0;

}

int Random_Num_Generate(){
       srand(time(0));
    
    for (int i=0; i < 6; i++) {
        
        for (int j=0; j < 3; j++)
        {
            int number1 = rand() %  3 + 1;
            int number2 = rand() %  3 + 1;
           
            printf("Random Number: %d \n", number1);
            printf("Random Number: %d \n", number2);
            
            if (number1 == number2){
                printf("Tied \n");
            }

            if (number1 == 1 & number2 == 2 ){
                printf("paper beats rock\n");
                number2_count++;
                
            }

               if (number1 == 1 & number2 == 3 ){
                printf("rock beats scissor\n");
                number1_count++;
                
            }
                if (number1 == 2 & number2 == 1){
                    printf("paper beats rock\n");
                    number1_count++;

                }
                if (number1 == 2 & number2 == 3){
                    printf("scissor beats rock\n");
                    number2_count++;


                }
                if (number1 == 3 & number2 == 1){
                    printf("rock beats paper\n");
                    number2_count++;
                }
                if (number1 == 3 & number2 == 2){
                    printf("scissor beats paper\n");
                    number1_count;
                }
        }

            if (number1_count >  number2_count){
                    printf("CPU 1 wins \n");
                    printf("%d\n", number1_count);
                    printf("%d\n", number2_count);
                }   
             else if  (number1_count < number2_count){
                printf("CPU 2 wins \n");
                printf("%d\n", number1_count);
                printf("%d\n", number2_count);

             }
             else {
                printf("tied \n");
                printf("%d\n", number1_count);
                printf("%d\n", number2_count);
             }
        

        
    } 

}