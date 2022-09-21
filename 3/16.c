#include <stdio.h>
#define MAX 100
void multiply(float a[100][100], float b[100][100], float c[100][100], int x);
void assign(float A[MAX][MAX], float B[MAX][MAX], int n)
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
    float a[100][100];
    float b[100][100];
    int x;
    scanf("%i", &x);
    for (int i = 0; i < x; ++i) 
    {
        for (int j = 0; j < x; ++j) 
        {
            scanf("%f", &a[i][j]);   
        }
    }
    float c[100][100];
    int k;
    scanf("%i", &k);
    assign(a, b, x);
    assign(a, c, x);
    for (int i =1; i<k; i++)
    {
        multiply(a, b, c, x);
        assign(c, b, x);
    }
    for (int i = 0; i < x; i++){
		for (int j = 0; j < x; j++)
			printf("%f ", c[i][j]);
        printf("\n");
    }


}
void multiply(float a[100][100], float b[100][100], float c[100][100], int x)
{
    float u[100][100]={0};

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