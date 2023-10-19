#include "acshell.h"

/**
 * acshell - Print a string to the standard output.
 * @show: The string to be printed.
 *
 *
 * Return: This function does not return a value.
 */
  
int main(void)
{
	char comd[143];

	while (true)
	{
		ac_prompt();
		read_command(comd, sizeof(comd));
		execute_command(comd);
	}


	return (0);
}
