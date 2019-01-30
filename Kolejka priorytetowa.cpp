#include "priorQueue.h"

#define ROZMIAR 10

int main()
{
	PQueue* kolejka = PQInit( ROZMIAR );

	PQEnQueue( kolejka, 11, 1 );
	PQEnQueue( kolejka, 12, 2 );
	PQEnQueue( kolejka, 13, 4 );
	PQEnQueue( kolejka, 14, 3 );
	PQEnQueue( kolejka, 8, 2 );
	PQEnQueue( kolejka, 15, 9 );

	PQPrint( kolejka );
	printf( "\n======================================================\n" );

	int zwrot[6];
	for (int i = 0; i < 6; i++)
	{
		zwrot[i] = PQDeQueue( kolejka );
		printf( "\nZwrot[%d] = %d\n", i, zwrot[i] );
	}

	printf( "\n======================================================\n" );

	PQEnQueue( kolejka, 11, 1 );
	PQEnQueue( kolejka, 12, 2 );
	PQDeQueue( kolejka );
	PQEnQueue( kolejka, 13, 4 );
	PQEnQueue( kolejka, 14, 3 );
	PQEnQueue( kolejka, 8, 2 );
	PQEnQueue( kolejka, 15, 9 );
	PQDeQueue( kolejka );
	PQEnQueue( kolejka, 22, 2 );
	PQEnQueue( kolejka, 18, 4);

	PQPrint( kolejka );
	printf( "\n======================================================\n" );

	for (int i = 0; i < 6; i++)
	{
		zwrot[i] = PQDeQueue( kolejka );
		printf( "\nZwrot[%d] = %d\n", i, zwrot[i] );
	}

	PQPrint( kolejka );
	printf( "\n======================================================\n" );

	PQClearQueue( kolejka );

	PQPrint( kolejka );
	printf( "\n======================================================\n" );

	PQRelease( &kolejka );

	return 0;
}

