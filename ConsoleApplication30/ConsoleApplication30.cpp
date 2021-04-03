#include <stdio.h>

void main()

{

	int i = 1;

	for (i = 1; i <= 100; i++)

		if (i % 3 == 0 && i % 5 == 0) printf("%d ", i);

	getchar();

}
