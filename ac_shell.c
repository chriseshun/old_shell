#include "acshell.h"

/**
<<<<<<< HEAD
 * acshell - Print a string to the standard output.
 * @show: The string to be printed.
 *
 *
 * Return: This function does not return a value.
=======
 * main - entry point for the shell
 *
 * comd: The character array to store the command
 * Return: Always return 0
>>>>>>> a676da82ecbb8369c10b894a8f279bcd270857ca
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
