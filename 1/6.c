#include <stdio.h>


int main()
{  
  int a;
  int b;
  scanf("%i %i", &a, &b);
  int c=1;
  int d=a;
  while (a <= b)
  {
    int n;
    n = a;
    int Length = 1;
    int Max = n;
    while (n != 1)
    {
        Length+=1;
        if (!(n % 2))
        {
            n = n / 2;
            if (n > Max)
                Max = n;;
        }
        else 
        {
            n = 3 * n + 1;
            if (n > Max)
                Max = n;;
        }
    }
    if  (Length > c){
        c = Length;
        d = a;
    }
    a++;
  }
  
  printf ("%i %i", d, c);

}