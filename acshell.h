#ifndef ACSHELL_H
#define ACSHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void);
void ac_prompt(void);
void execute_prompt(const char *comd);
void ac_print(const char *show);

#endif
