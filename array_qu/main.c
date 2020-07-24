#include <stdio.h>
#include "queue.h"


void main() {


	ArrayQ* arrayq;
	arrayq = (ArrayQ*)malloc(sizeof(ArrayQ));
	InitQ(arrayq);


	int i = 0;
	for (i; i < MAX_LEN+3; i++)
	{
		if (QPush(arrayq, i)==0)
		{
			printf("공간부족\n");
		}
	}

	i = 0;
	Data pop_data;

	for (i; i < MAX_LEN; i++)
	{
		pop_data = QPop(arrayq);
		printf("%d\n", pop_data);
	}



}