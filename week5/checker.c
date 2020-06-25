// Program to calculate the avg weight of seals
#include <stdio.h>
#include <stdlib.h>

int mystery(int p, int q){
     int r;
     if ((r = p % q) == 0)
          return q;
     else return mystery(q, r);
}

int main()
{
        int x = 1, y = 2;
        int *p, *q;

        q = &p;

        printf("%d\n", q);
        printf("%p\n", q);

}
