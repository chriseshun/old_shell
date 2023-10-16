#include "acshell.h"

int main(void)
{
	char comd[143];

	for (true)
	{
		ac_prompt();
		read_command(comd, sizeof(comd));
		execute_command(comd);
	}


	return 0;
}
