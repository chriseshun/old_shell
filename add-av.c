#include <stdio.h>
#include <stdlib.h>

/*
 * add -  Recieve arguments and  help the shell handle arguments
 * @show the arguments inputs pids
 *
 *
 * Return: This function does not return a value
 */

int main(int ac, char **av)
{

	int i;
	
	printf("argv content [] \n");

	while (*av != NULL)
	{
		printf("argv = %s\n",*av);
		av++;
	}
	

	return (0);
}
