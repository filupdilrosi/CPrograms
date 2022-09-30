#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lb = 1, ub = 100;
    int nums[50];
    int count = 0, odd = 0;
    int number,i;

    srand(time(0));
    for(i = 0; i < 50; i++)
        nums[i] = (rand() % (ub - lb + 1)) + lb;
    printf("Enter a target number: ");
    scanf("%d", &number);

    if(number < 1 || number > 50)
        printf("The number is out of range.\n");
    else {
        for(i = 0; i < 50; i++)
            if(nums[i] == number)
                count++;
        
        if(count > 0)
            printf("The number %d appears %d times.\n", number, count);
        if(count>0)    
            printf("This number accounts for %% %0.1f of total generated numbers.\n",((count/50.0)*100));
        else
            printf("The number never appears.\n");
    }

    for(i = 0; i < 50; i++)
        if(nums[i] % 2 != 0)
            odd++;

    printf("Number of odd numbers: %d\n", odd);
    printf("Odd numbers account for %% %0.1f of total generated numbers.",((odd/50.0)*100));

    return 0;
}
