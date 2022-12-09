#include <stdio.h>

void encrypt(char *message);

int main(){
    char mes[80];
    scanf("%s",mes);
    encrypt(mes);
    printf("%s\n",mes);
    encrypt(mes);
    printf("%s\n",mes);
    return 0;
}


void encrypt(char *message){
while (*message){
    *message=*message^31;
    message++;
}

}
