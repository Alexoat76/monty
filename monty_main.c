#include "monty.h"

/*
 * File: monty_main.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

char **op_toks = NULL;

/**
 * main - The entry point for Monty Interpreter.
 * @argc: the count of arguments passed to the program.
 * @argv: pointer to an array of char pointers to arguments.
 * Return: (EXIT_SUCCESS) on success (EXIT_FAILURE) on error.
 */

int main(int argc, char **argv)
{
	FILE *script_fd = NULL;
	int exit_code = EXIT_SUCCESS;

	if (argc != 2)
		return (usage_error());
	script_fd = fopen(argv[1], "r");
	if (script_fd == NULL)
		return (f_open_error(argv[1]));
	exit_code = start_monty(script_fd);
	fclose(script_fd);
	return (exit_code);

}
