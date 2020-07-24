#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


void InitQ(ArrayQ* arrayq)
{
	arrayq->head = 0;
	arrayq->tail = 0;
}

int Qempty(ArrayQ* arrayq)
{
	if (arrayq->head == arrayq->tail)
	{
		return 1;
	}
	else {
		return 0;
	}
}


int NextPosIdx(Data data)
{
	if (data > MAX_LEN - 1)
	{
		return 0;
	}
	else {
		return data+1;
	}
}

int QPush(ArrayQ* arrayq, Data data)
{
	int NextIdx = NextPosIdx(arrayq->tail);
	

	if (NextIdx == arrayq->head) //��ĭ����
	{
		return 0;
	}
	else {

	arrayq->tail = NextIdx;
	arrayq->arr[NextIdx] = data;
	return 1;
	}
}

int QPop(ArrayQ* arrayq)
{
	//�̹� empty�� return
	if (arrayq->head == arrayq->tail)
	{
		return  0;
	}
	int NextIdx = NextPosIdx(arrayq->head);
	arrayq->head = NextIdx;
	int rmdata = arrayq->arr[NextIdx];
	return rmdata;
}