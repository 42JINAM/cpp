#include <stdio.h>
#include <stdlib.h>

void test(int **i)
{
	printf("%d\n", *i);

}

int main(void) {
	int i[6] = {1,2,3,4,5,6};

	test(&i);
}
