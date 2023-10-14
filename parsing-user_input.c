#include "acshell.h"

void read_command(char *comd, size_t size)
{
	if (fgets(comd, size, stdin) ==NULL) 
	{
		if (feof(stdin))
		{
		 ac_print("/n");
		 exit(EXIT_SUCCESS);
		}	
			else
			{
			 ac_print("Error while reading input.\n")
			 exit(EXIT_FAILURE);
			}
	}
	comd[strcspn(comd, "\n")] = '\0';
}	
