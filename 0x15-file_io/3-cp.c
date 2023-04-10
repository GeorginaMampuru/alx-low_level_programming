#include "main.h"
#include "stdlib.h"
#include <stdio.h>
#include <errno.h>
#include <string.h>

#define BUF_SIZE 1024

/**
 * print_error - print errors
 * @error : specific error
 * @arg : the arguments
 * Return: 1 on success 0r -1 if it fails
 *
 */

void print_error(int error, char *arg)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", arg);
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", arg);
			break;
		default:
			break;
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int fp1, fp2, readit, writeit;
	char buf[BUF_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		print_error(97, argv[0]);
		exit(97);
	}
	fp1 = open(argv[1], O_RDONLY);
	if (fp1 == -1)
	{
		print_error(98, argv[1]);
		exit(98);
	}
	fp2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fp2 == -1)
	{
		print_error(99, argv[2]);
		exit(99);
	}
	while ((readit = read(fp1, buf, BUF_SIZE)) > 0)
	{
		writeit = write(fp2, buf, readit);
		if (writeit != readit)
		{
			print_error(99, argv[2]);
			exit(99);
		}
	}
	if (readit == -1)
	{
		print_error(98, argv[1]);
		exit(98);
	}
	close(fp1);
	close(fp2);
	return (0);
}
