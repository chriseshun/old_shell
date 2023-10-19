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
		ac_print("Error in fork process.\n");
		exit(EXIT_FAILURE);
	}
	else if (c_pid == 0)
	{
		char *args[143];

		int arg_cnt = 0;

		char *envp[] = { NULL };

		char *token = strtok((char *)comd, " ");

		while (token != NULL)

		{
			args[arg_cnt++] = token;
			token = strtok(NULL, " ");
		}
		args[arg_cnt] = NULL;

		if (execve(args[0], args, envp) == -1)
		{
			ac_print("Error executing command.\n");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}
}
