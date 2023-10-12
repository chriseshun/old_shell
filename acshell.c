#include "acshell.h"

int main(void)
{
	char comd[143];

	for(true)
	{
		ac_prompt();
		read_comd(comd, sizeof(comd));
		execute_comd(comd);
	}
