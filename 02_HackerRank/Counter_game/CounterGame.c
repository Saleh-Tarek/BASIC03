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