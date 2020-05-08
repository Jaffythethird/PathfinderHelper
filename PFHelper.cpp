#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>

int PFHelper::main(int argc, char *argv[])
{
	printf("Welcome to PFHelper");
	char *buffer = {""};
	while (buffer != command_list[0])
	{
		free(buffer);
		buffer = readline("> ");
		if (buffer)
		{
			printf("You entered %s\n", buffer);
		}
	}
	printf("Thank you");
	return 0;
}
