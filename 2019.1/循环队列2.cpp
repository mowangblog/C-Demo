# include <stdio.h>
# include <malloc.h>

typedef struct Queue
{
	int * pBase;
	int front;
	int rear;
}QUEUE,*PQUEUE;

void init_queue(PQUEUE pQ);
void traverse_queue(PQUEUE pQ);
bool en_queue(PQUEUE pQ,int val);
bool is_empty(PQUEUE);
bool is_full(PQUEUE);
bool out_queue(PQUEUE pQ,int * val);


int main()
{
	QUEUE pQ;
	int val;
	init_queue(&pQ);
	en_queue(&pQ,10);
	en_queue(&pQ,20);
	if(out_queue(&pQ,&val))
	{
		printf("出队成功！val=%d\n",val);
	}
	else
	{
		printf("出队失败！"); 
	}
	traverse_queue(&pQ);
	
	
	return 0;
} 

void init_queue(PQUEUE pQ)
{
	pQ->pBase=(int *)malloc(sizeof(int)*6);
	pQ->front=0;
	pQ->rear=0;
}

void traverse_queue(PQUEUE pQ)
{
	int i=pQ->front;
	while(i!=pQ->rear)
	{
		printf("%d ",pQ->pBase[i]);
		i=(i+1)%6;
	}
}

bool is_empty(PQUEUE pQ)
{
	if(pQ->front==pQ->rear)
	{
		return true; 
	} 
	else
	{
		return false;
	}
}

bool is_full(PQUEUE pQ)
{
	if((pQ->rear+1)%6==pQ->front)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool en_queue(PQUEUE pQ,int val)
{
	if(is_full(pQ))
	{
		return false;
	}
	else
	{
		pQ->pBase[pQ->rear]=val;
		pQ->rear=(pQ->rear+1)%6;

		return true; 
	}	
}

bool out_queue(PQUEUE pQ,int * val)
{
	if(is_empty(pQ))
	{
		return false;
	}
	else
	{
		* val=pQ->pBase[pQ->front];
		pQ->front=(pQ->front+1)%6;
		
		return true;
	}
}
