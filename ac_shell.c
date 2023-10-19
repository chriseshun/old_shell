#include "acshell.h"

/**
 * The main function is the entry point of the program. It sets up a loop
 * to continuously prompt the user, read commands, and execute them until
 * the program is terminated.
 * @return 0 on successful execution.
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
