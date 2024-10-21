#include <stdio.h>
#include <limits.h>

int main() {
    int keys[] = {10, 12, 20,34};
    int freq[] = {34, 8, 50,32};
    int n;
    printf(" enter the value of n:");
    scanf("%d",&n);
    int cost[n][n];
    int l, i, j, r, c;
    for (i = 0; i < n; i++) 
	{
        cost[i][i] = freq[i];
    }
    for (l = 2; l <= n; l++)
	 {
        for (i = 0; i <= n - l + 1; i++)
		 {
            j = i + l - 1;
            cost[i][j] = INT_MAX;
            for (r = i; r <= j; r++) {
                c = ((r > i) ? cost[i][r - 1] : 0) +
                    ((r < j) ? cost[r + 1][j] : 0) +
                    freq[r];

                if (c < cost[i][j]) {
                    cost[i][j] = c;
                }
            }
        }
    }

    printf("Cost of optimal BST is %d\n", cost[0][n - 1]);

    return 0;
}

