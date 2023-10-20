#ifndef ACSHELL_H
#define ACSHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>

int main(void);
void ac_prompt(void);
void execute_command(const char *comd);
void ac_print(const char *show);
void read_command(char *comd, size_t size);


#endif
