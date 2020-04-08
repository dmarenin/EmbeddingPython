/* Example of embedding Python in another program */

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include "Python.h"

main(int argc, char** argv)
{

	Py_SetProgramName(argv[0]);

	Py_Initialize();

	PySys_SetArgvEx(argc, argv, 0);

	while (1) {

		char str[80];
		gets(str);
		printf("=>", strlen(str));
		PyRun_SimpleString(str);
	}

	
	Py_Finalize();


	Py_Exit(0);

}

