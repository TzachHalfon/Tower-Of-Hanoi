#include <stdio.h>

#define NUM_OF_DISKS 3
static void TowerOfHanoi(int n, char from, char to, char aux);

int main(void)
{
	TowerOfHanoi(NUM_OF_DISKS, 'a', 'c', 'b');
	return 0;
}

static void TowerOfHanoi(int n, char from, char to, char aux)
{
	if (n == 1)
		printf("Moved disk %d from %c to %c\n", n, from, to);
	else
	{
		TowerOfHanoi(n - 1, from, aux, to);
		printf("Moved disk %d from %c to %c\n", n, from, to);
		TowerOfHanoi(n - 1, aux, to, from);
	}
}
