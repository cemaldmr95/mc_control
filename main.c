#include <stdio.h>
#include "clarke.h"

int main()
{
   int iq = 0;
   int id = 0;
   int  a=5;
   int  b=8;
   int c=3;
   int alphaa;
   int betaa;
   int teta;
   int error=0;
    get_clarke(a, b, c, teta, &alphaa, &betaa);

error=get_clarke( a, b, c,teta, &alphaa, &betaa );

   printf("%d %d error code: %d\n",betaa,alphaa,error);

    return 0;
}
