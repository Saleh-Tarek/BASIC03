#include <stdio.h>
#include <stdlib.h>

char* counterGame(long n);

int main() {
    int t,i ; // Number of test cases
    long n; // Initial value for each game
    char* result=  NULL;  
    printf("Please, enter the number of testcases.\n");      
    scanf("%d", &t);
    printf("GAME STARTED\nEnter the initial counter value.\n");      

    for (i = 0; i < t; i++) {
        
        scanf("%ld", &n);

        result = counterGame(n);

        printf("%s\n", result);
    }

    return 0;
}
char* counterGame(long n) {
    int moves = 0;
    
    while (n > 1) 
    {
    	printf("Your turn with: %ld\n",n);
        //check whether the n is power of two or not.
        if ((n & (n - 1)) == 0)
        {
            n /= 2; // n is a power of 2, so divide it by 2.
        
        }
        else 
        {
            long largestPowerOf2 = 1;
            while (largestPowerOf2 * 2 <= n)
            {
                largestPowerOf2 *= 2;
            }

            n -= largestPowerOf2; // Subtract the largest power of 2 less than n.
        }
        moves++;
    }
    printf("GAME ENDED\nThe winner is:\n");      

    return (moves % 2 == 0) ? "Richard" : "Louise";
}
