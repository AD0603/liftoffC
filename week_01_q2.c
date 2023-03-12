#include <stdio.h>

int main()
{
	int Q;
    printf("Enter the number Q: ");
	scanf("%d", &Q);

	if (Q > 0)
		printf("%d is positive.", Q);
	else if (Q < 0)
		printf("%d is negative.", Q);
	else if (Q == 0)
		printf("%d is zero.", Q);

	return 0;
}
