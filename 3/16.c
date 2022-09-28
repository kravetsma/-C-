#include <stdio.h>
#define MAX 100
void power(int a[100][100], int c[100][100], int n, int k);
void multiply(int a[100][100], int b[100][100], int c[100][100], int x);
void assign(int A[MAX][MAX], int B[MAX][MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
        {
			B[i][j] = A[i][j];
        }
	}
}
int main()
{
    int a[100][100];
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            scanf("%i", &a[i][j]);   
        }
    }
    int c[100][100];
    int k;
    scanf("%i", &k);
    power(a, c, n, k);
}

void power(int a[100][100], int c[100][100], int n, int k)
{
    int b[100][100];
    assign(a, b, n);
    assign(a, c, n);
    for (int i =1; i<k; i++)
    {
        multiply(a, b, c, n);
        assign(c, b, n);
    }
    for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
			printf("%i ", c[i][j]);
        printf("\n");
    }
}

void multiply(int a[100][100], int b[100][100], int c[100][100], int x)
{
    int u[100][100]={0};

    for (int i = 0; i < x; ++i) 
    {
        for (int j = 0; j < x; ++j) 
        {
            for (int k = 0; k < x; ++k) 
            {
                u[i][j] += a[i][k] * b[k][j];
                
            }
        }
    }
    assign(u, c, x);
}
