#include <stdio.h>

int main()
{
    char masked_raider[]="jivoi!";
    char *jimy = masked_raider;
    printf ("Grabitel v maske seichas %s Djimmi seichas %s\n",masked_raider,jimy);
    masked_raider[0]='D';
    masked_raider[1]='E';
    masked_raider[2]='A';
    masked_raider[3]='D';
    masked_raider[4]='!';
    masked_raider[5]='!';
    printf ("Grabitel v maske seichas %s Djimmi seichas %s\n",masked_raider,jimy);
    return 0;
}
