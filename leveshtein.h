#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
int d[100][100];
#define MIN(x,y) ((x) < (y) ? (x) : (y))
using namespace std;

// Function to find Levenshtein Distance between string X and Y
// m and n are the number of characters in X and Y respectively
int dist(string X, int m, string Y, int n)
{
	// base case: empty strings (case 1)
	if (m == 0)
		return n;

	if (n == 0)
		return m;

	int cost,i,j,tracker,temp;

	for(i=0;i<=m;i++)
    d[0][i] = i;
    for(j=0;j<=n;j++)
    d[j][0] = j;
 
    for (j=1;j<=m;j++)
    {
        for(i=1;i<=n;i++)
        {
            if(X[i-1] == Y[j-1])
            {
                tracker = 0;
            }
            else
            {
                tracker = 1;
            }
            temp = MIN((d[i-1][j]+1),(d[i][j-1]+1));
            d[i][j] = MIN(temp,(d[i-1][j-1]+tracker));
        }
    }
    //printf("the Levinstein distance is %d\n",d[n][m]);
    return (d[n][m]);
}
