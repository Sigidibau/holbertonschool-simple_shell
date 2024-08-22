#include "shell.h"

/**
 *main - function for the simple shell
 *@:
 *return: 0 if success and 1 if fails.
 */

int main(void)
{
	ssize_t bytes_read = 0;
	size_t bf_size = 0;
	char *entry = NULL, *av[];
	int counter = 1, vf_stat = 0, exist_stat = 0, exit_stat = 0, builtin_stat = 0;

	prompt("wating for user, $ ");
	bytes_rd = getline(&entry, &bf_size, stdin);
	while (bytes_read != -1)
	{
		if (*entry != '\n')
		{
			args(ac, **av);
			if (av[0] != NULL)
			{
				exist_stat = exist(av[0]);
				if (exist_stat == 0)
					


