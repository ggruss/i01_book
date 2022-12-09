#include <stdio.h>

int main () {
    int x,y,z,d;
    printf("Vvedite x:");
    scanf("%d",&x);
    printf("Vvedite y:");
    scanf("%d",&y);

    printf("Vvedite deistvie:\n");
    printf("1-slojenie\n");
    printf("2-Vychitanie\n");
    printf("3-umnojenie\n");
    printf("4-delenie\n");
    scanf("%d",&d);

    if (d==1){
        z=x+y;
        printf("%d+%d=%d",x,y,z);
    }

    else if (d==2){
        z=x-y;
        printf("%d-%d=%d",x,y,z);
    }

    else if (d==3){
        z=x*y;
        printf("%d*%d=%d",x,y,z);
    }

    else if (d==4){
        z=(float)x/y;
        printf(z);
        printf("%f/%f=%f",x,y,z);
    }

    else {
        printf("nevernoe deistvie");
    }

    return 0;
}
