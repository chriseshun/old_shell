#include "acshell.h"

/*
 * main - entry point for the shell
 *
 * Return: Always return 0
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
