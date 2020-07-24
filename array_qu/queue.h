
#define MAX_LEN 100

typedef int Data;



typedef struct _ArrayQ {

	int head;
	int tail;
	Data arr[MAX_LEN];

}ArrayQ;


void InitQ(ArrayQ*);
int Qempty(ArrayQ*);
int QPush(ArrayQ*, Data);
int QPop(ArrayQ*);