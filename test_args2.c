#include <stdio.h>
#include <stdlib.h>
#include "args.h"

int
main(int argc, char *argv[])
{
	int flags[] = { 0 };
	char argflags[] = "c";
	char *testf;
	int totalargs;
	int argsoutput;
	int i;

	argsoutput = args(argc, argv, &flags[0], &argflags[0]);
	testf = argf(argc, argv, 'c');
	totalargs = lastarg(argc, argv);

	printf("argsoutput = %d\n", argsoutput);
	printf("testf = %s\n", testf);
	printf("totalargs = %d\n", totalargs);
	for(i = 0; i < 1; i++)
		printf("\tflags[%d] = %d\n", i, flags[i]);
	return 0;
}
