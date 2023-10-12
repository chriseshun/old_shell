#include "acshell.h"

void ac_print(const char *show)
{
	write(STDOUT_FILENO, show, strlen(show));
}
