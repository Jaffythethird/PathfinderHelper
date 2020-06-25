#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>
#include "PFHelper.h"

int main(int argc, char *argv[])
{
	printf("Welcome to PFHelper");
	char *buffer = {};
	while (buffer.compare(command_list[0]))
	{
		free(buffer);
		buffer = readline("> ");
		if (buffer)
		{
			printf("You entered %s\n", buffer);
		}
		printf("Type %s to exit\n", command_list[0]);
	}
	printf("Thank you");
	return 0;
}
