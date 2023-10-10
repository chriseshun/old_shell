#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * This program prompts the user to choose a number between 1 and 4 and
 * uses a switch statement to determine and print the  Hogwarts house.
 *
 * Return: 0 on successful execution.
 */
int main(void)
{
int choice;
printf("Choose a number (1-4): ");
scanf("%d", &choice);
switch (choice)
{
case 1:
printf("Gryffindor!\n");
break;
case 2:
printf("Hufflepuff!\n");
break;
case 3:
printf("Ravenclaw!\n");
break;
case 4:
printf("Slytherin!\n");
break;
default:
printf("an unknown house, Are you sure you chose a number between 1 and 4?\n");
}
return (0);
}
