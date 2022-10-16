#include <stdio.h>
#include <stdlib.h>


struct Games
{
	char a[100];
	float b;
};
typedef struct Games game;



int main()
{
	int n;
	scanf("%i", &n);
	game* games = (game*)malloc(n * sizeof(game));
	for (int i = 0; i < n; i++)
	{
		scanf("%[^:]", games[i].a);
		int m;
		scanf(":%i", &m);
		float sum = 0;
		for (int j = 0; j < m; j++)
		{
			int var;
			scanf("%i", &var);
			sum += var;
		}
		games[i].b = sum / m;
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (games[j].b < games[j + 1].b)
			{
				game temp = games[j];
				games[j] = games[j + 1];
				games[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%s, %.3f", games[i].a, games[i].b);
	}

	free(games);
}