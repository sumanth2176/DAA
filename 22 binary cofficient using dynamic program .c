#include <stdio.h>

int main() {
    int n, k;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of k: ");
    scanf("%d", &k);
    int C[n + 1][k + 1];
    int i, j;
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= k && j <= i; j++)
		 {
            if (j == 0 || j == i)
			 {
                C[i][j] = 1;
            } 
			else
			 {
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            }
        }
    }
    printf("Binomial Coefficient C(%d, %d) is %d\n", n, k, C[n][k]);

    return 0;
}

