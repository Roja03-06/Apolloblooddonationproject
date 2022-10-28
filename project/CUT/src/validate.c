/*
 * FILE : validate.c
 
 *DESCRIPTION ; This file consists of validation for name
 */

#include<stdlib.h>
#include<functions.h>
#include<string.h>
#include<ctype.h>
int isvalidate(char *name)
{
	for(int i=0 ; i<strlen(name) ; i++)
	{
		if(isalpha(name[i]))
			continue;
		else 
			return 0;
	}
	return 1;

}

