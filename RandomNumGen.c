#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int getRandomNumber() {
int random_int = rand() % 4; 
return random_int;
}
int main(){
  srand(time(0)); 
  int number;
  printf("Type the amount of random numbers you wish to generate: ");
  scanf("%d", &number);
  int arrCount[] = {0, 0, 0, 0}; 
  int i;
  for (i=0; i<number; i++) {
    int random_num = getRandomNumber();
    printf("%d ", random_num); 
    arrCount[random_num]++;
   }
   printf("\n");
  for (i = 0; i < 4; i++) {
    printf("Number of times %d occured: %d\n", i , arrCount[i]);
   }
   for (i=0; i<4; i++) {
    float percentage = (arrCount[i] * 100.0)/ (float)number;
    printf("Percentage of %d = %.2f%%\n", i, percentage);
    }
  return 0;
  }
