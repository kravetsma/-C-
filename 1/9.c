#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int m;
    int result = 0;
    scanf("%i", &m);

    for (int i = 1; i < m; ++i)
    {
        for (int j = i; j <= m; ++j)
        {
            int q;
            q=(int)(sqrt(i*i+j*j));
            q++;
            if (q-sqrt(i*i+j*j)==1)
            {
                if (sqrt(i*i+j*j)<=m)
                {
                    int y;
                    y=1;
                    for (int t = 2; t < m; t++)
                    {
                        if (i%t == 0 && j%t == 0)
                        {
                            y=0;
                        }
                    }
                    if (y==1)
                    {
                        printf("%i %i %i\n", i, j, q-1);

                    }

                     
                }
            }
        }
    }
}