#include <stdio.h>

void go_south_east (int* lat, int* lon)
{
	*lat = *lat - 1;
	*lon = *lon + 1;
}

int main()
{
	int lati = 32;
	int longi = -64;
	go_south_east(&lati, &longi);
	printf("stop! teper vashi koordinati: [%i, %i]\n", lati, longi);
	return 0;
}

