#include "shell.h"

void execute_prompt(const char *comd)
{
	pid_t c_pid = fork();

	if (c_pid == -1)
	{ 
		perror("fork");
		exit(EXIT_FAIiLURE);
	}
	else if (c_pid == 0) 
	{
		execlp(comd, comd, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else 
	{
		wait(NULL);
	}
}
