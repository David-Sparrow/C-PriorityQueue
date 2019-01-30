#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <memory.h> //memset - ClearQueue

typedef struct
{
	int nKey;
	int nPrior;
}PQItem;

typedef struct
{
	PQItem* queue;
	int nSize;
	int CurrentSize;
}PQueue;

PQueue* PQInit( /*PQueue* q,*/ int nSize );
int PQIsEmpty( PQueue* q );
void PQEnQueue( PQueue* q, int nKey, int nPrior );
int PQDeQueue( PQueue* q );
void PQClearQueue( PQueue* q );//kolejka istnieje ale jest czysciutka
void PQRelease( PQueue** q ); // ca³kowice usuwa kolejke; zwolni dynamiczna strukture i wychlastam cala strukture, wskaznik NULL
void PQPrint( PQueue* q );