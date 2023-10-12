#include "shell.h"

void execute_prompt(const char *comd)
{
	pid_t c_pid = fork();

	if (c_pid == -1)
	{ 
		perror("fork")
