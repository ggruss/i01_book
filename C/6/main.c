#include <stdio.h>
#include <locale.h>

typedef struct island{
char *name;
char *opens;
char *closes;
struct island *next;
}island;

void display(island *start){
island *i=start;
for (;i!=NULL ;i=i->next){
    printf("Название: %s Открыт: %s-%s\n",i->name,i->opens,i->closes);
}
}

void release(island *start){
island *i=start;
island *next=NULL;
for (; i!=NULL;i=next){
    next=i->next;
    free(i->name);
    free(i);
}
}

island* create(char *name){
island *i = malloc(sizeof(island));
i->name = name;
i->opens= "09:00";
i->closes= "19:00";
i->next=NULL;
return i;
}

int main(){
setlocale(LC_ALL,"Russian");

island *start=NULL;
island *i=NULL;
island *next=NULL;

char name[80];

for (; fgets(name,80,stdin);i=next){
    next =create(name);
    if (start==NULL){
        start=next;
    }
    if (i!=NULL)
        i->next=next;
}




/*island *amity = malloc(sizeof(island));
amity->name = "Дружбы";
amity->opens="09:00";
amity->closes="18:00";

island *craggy = malloc(sizeof(island));
craggy->name = "Скалистый";
craggy->opens="09:00";
craggy->closes="18:00";

island *isla_nubular = malloc(sizeof(island));
isla_nubular->name = "Туманный";
isla_nubular->opens="09:00";
isla_nubular->closes="18:00";

island *shutter = malloc(sizeof(island));
shutter->name = "Проклятых";
shutter->opens="09:00";
shutter->closes="18:00";

island amity={"Дружбы","09:00","18:00",NULL};
island craggy={"Скалистый","09:00","18:00",NULL};
island isla_nubular={"Туманный","09:00","18:00",NULL};
island shutter={"Проклятых","09:00","18:00",NULL};

amity->next=craggy;
craggy->next=isla_nubular;
isla_nubular->next=shutter;*/
display(start);
release(start);
return 0;
}
