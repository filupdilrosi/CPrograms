
#include <stdio.h>
#define N 208

void max_min(int a[], int n, int *max, int *min);
//Phillip pdelrossi1 -> 208 options
int main(void) {
   int b[N], i, big, small;
   int tempVar = -1;
   printf("Enter %d numbers: \n", N);
   for(i = 0; i < N; i++){
    if(scanf("%d",&b[i])==tempVar)           
         break; //stops if the user does not fill the entire array
   }
   max_min(b, i, &big, &small);
   printf("Largest: %d\n", big);
   printf("Smallest: %d\n", small);
   return 0;
}
void max_min(int a[], int n, int *max, int *min) {
   int i;
   *max = *min = a[0];
   for(i = 1; i < n; i++) {
      if (a[i] > *max)
      *max = a[i];
      else if (a[i] < *min)
      *min = a[i];
        }
}
