#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a,b,c;
 for(c=10;c<24;c++){
 for(a=37;a<60;a++){
    for(b=0;b<60;b++){
        printf("%03d:%02d:%02d\n",c,a,b);
        sleep(01);
    }


 }
}

    return 0;
}

