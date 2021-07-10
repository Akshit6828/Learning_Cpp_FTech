#include <stdio.h>
#include <stdlib.h>
int i=1;

int main()
{

    printf("Main Called for %d times\n",i);
    i++;
    if(i==10)
    {
        return 0;
    }
    main();
    return 0;
}
