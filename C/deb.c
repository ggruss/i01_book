#include <stdio.h>
#lnclude <string.h>

char traks[5][80] = {
	"Peremen",
	"Antoshka",
	"Tyger's eye",
	"Kukushka",
	"Vintovka eto"
};

void find_track(char search_for[]) {
	for (i = 0; i < 5; i++)	{
	if (strstr(tracks[i], search_for)) {
	   printf("Pesnya nomer %d: '%s'\n", i, tracks[i]);
		}
	}
}

int main() {

	printf("%s\n", traks[1]);
	return 0;
}
