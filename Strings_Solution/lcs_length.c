#include <stdio.h>
#include <string.h>
int max(int a, int b) { return a > b ? a : b; }
int main() {
    char X[100], Y[100];
    printf("Enter string 1: "); scanf("%s", X);
    printf("Enter string 2: "); scanf("%s", Y);
    int m = strlen(X), n = strlen(Y);
    int dp[m + 1][n + 1];
    for (int i=0; i<=m; i++) {
        for (int j=0; j<=n; j++) {
            if (i==0 || j==0) dp[i][j] = 0;
            else if (X[i-1] == Y[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    printf("LCS length = %d\n", dp[m][n]);
    return 0;
}
