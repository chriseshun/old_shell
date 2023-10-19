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
	int add = 0;

	printf("argc or ac = %d\n", ac);
	printf("argv content [] \n");

	for (i = 1; i < ac; i++)
	{
		printf("argv[%d] = %s\n", i, av[i]);
		add += atoi(av[i]);
	}
	
	printf("addition is %d\n", add);
	return (0);
}
