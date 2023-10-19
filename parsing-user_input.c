#include "acshell.h"

/**
 * read_command - Read a command from the standard input.
 * @comd: A pointer to the character array where the command will be stored.
 * @size: The maximum number of characters to read into 'comd'.
 */

void read_command(char *comd, size_t size)
{
	if (fgets(comd, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			 ac_print("/n");
			 exit(EXIT_SUCCESS);
		}
		else
		{
			 ac_print("Error while reading input.\n");
			 exit(EXIT_FAILURE);
		}
	}
	comd[strcspn(comd, "\n")] = '\0';
}
