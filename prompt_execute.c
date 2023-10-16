#include "acshell.h"

/**
 * execute_command - Execute a command in a new process.
 * @comd: The command to execute.
 */

void execute_command(const char *comd)
{
	pid_t c_pid = fork();

	if (c_pid == -1)
	{ 
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (c_pid == 0) 
	{
		execlp(comd, comd, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else 
	{
		wait (NULL);
	}
}
