#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t mychild_pid;

	mychild_pid = getpid();
	printf("%u\n", mychild_pid);

	return (0);
}
