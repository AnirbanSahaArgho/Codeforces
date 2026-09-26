#include <stdio.h>
#include <stdlib.h>
 
int max_ribbon_pieces(int n, int a, int b, int c) {
    // Initialize dp array, where dp[i] will store the maximum number of pieces for a ribbon of length i
    int dp[n + 1];
    for (int i = 0; i <= n; i++) {
        dp[i] = -1; // Initialize with -1 (impossible cases)
    }
    dp[0] = 0; // Base case: no ribbon means 0 pieces
 
    // Dynamic programming to calculate the maximum number of pieces for each length from 1 to n
    for (int i = 1; i <= n; i++) {
        if (i >= a && dp[i - a] != -1) {
            dp[i] = (dp[i] > dp[i - a] + 1) ? dp[i] : dp[i - a] + 1;
        }
        if (i >= b && dp[i - b] != -1) {
            dp[i] = (dp[i] > dp[i - b] + 1) ? dp[i] : dp[i - b] + 1;
        }
        if (i >= c && dp[i - c] != -1) {
            dp[i] = (dp[i] > dp[i - c] + 1) ? dp[i] : dp[i - c] + 1;
        }
    }
 
    // The result is the maximum number of pieces for the ribbon of length n
    return dp[n] != -1 ? dp[n] : 0; // If dp[n] is -1, return 0 (though shouldn't happen in valid inputs)
}
 
int main() {
    int n, a, b, c;
    // Read the input values
    scanf("%d %d %d %d", &n, &a, &b, &c);
 
    // Get the result and print it
    printf("%d
", max_ribbon_pieces(n, a, b, c));
 
    return 0;
}