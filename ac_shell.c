#include "acshell.h"

/**
<<<<<<< HEAD
 * The main function is the entry point of the program. It sets up a loop
 * to continuously prompt the user, read commands, and execute them until
 * the program is terminated.
 * @return 0 on successful execution.
=======
 * main - entry point for the shell
 *
 *comd The character array to store the command
 * Return: Always return 0
>>>>>>> dfc5f4a7b035b074b57d07b8811dad35642e7c84
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
