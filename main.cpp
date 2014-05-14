
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <ctype.h>

using namespace std;

int main(int argc, char *argv[]) 
{
	printf( "argc = %d \n", argc );
	
	for( int i=0; i<argc; i++ ){
		printf( "i = %d, argv[%d] = %s \n", i,i,argv[i] );
	}
	return 0;

//test 0
//test 1
//test 2 
}
