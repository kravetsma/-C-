#include <stdio.h>
#define MAX 100

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
	int a;
	scanf("%i", &a);
    float A[MAX][MAX], B[MAX][MAX];
	for (int i = 0; i < a; i++){
		for (int j = 0; j < a; j++)
			scanf("%f", &A[i][j]);
    }
	assign(A, B, a);
    for (int i = 0; i < a; i++){
		for (int j = 0; j < a; j++)
			printf("%f ", B[i][j]);
        printf("\n");
	}
}