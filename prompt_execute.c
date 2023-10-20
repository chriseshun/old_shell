#include "acshell.h"
#include <fcntl.h>

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

	if (c_pid == 0)

	{
		char *args[] = {NULL, NULL};
		char *comd_copy = strdup(comd);

		args[0] = comd_copy;

		if (execve(args[0], args, NULL) == -1)

		{
			perror("evecve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}
