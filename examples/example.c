#define CVECTOR_IMPLEMENTATION
#include "../cvector.h"

typedef struct {
	int a;
	int b;
	int c;
	int x;
	int y;
	int t;
} teststr;

int main()
{
	teststr t1 = {
		.a = 10,
		.b = 20,
		.c = 35,
	};

	teststr t2 = {
		.a = 20,
		.b = 30,
		.c = 45,
	};

	teststr t3 = {
		.a = 30,
		.b = 40,
		.c = 55,
	};

	vector vec;
	vector_init(&vec, sizeof(teststr));
	vector_push(&vec, &t1);
	vector_push(&vec, &t2);
	vector_push(&vec, &t3);

	vector_pop(&vec);
	vector_push(&vec, &t3);

	teststr *tl = (teststr*)vector_get(&vec, 2);
	printf("%d\n", tl->a);
	printf("%d\n", tl->b);
	printf("%d\n", tl->c);

	vector_push(&vec, &t2);
	return 0;
}
