#include "args.h"

int	findinstring(char c, char *str)
{
	char *p;
	int i;

	p = str;
	i = 0;
	while(*str)
	{
		if(c == *str)
			return i;
		i++;
		str++;
	}
	return -1;
}

int	args(int argc, char *argv[], int *flags, char *options)
{
	int i;
	int fg;
	char c;
	int args;

	i = 0;
	args = 0;
	while (i < argc)
	{
		if (*argv[i] == '-')
		{
			c = *(argv[i] + 1);
			fg = findinstring(c, options);
			if (fg == -1)
				return (-1);
			flags[fg] = 1;
			args = i;
		}
		i++;
	}
	return (args);
}

char *argf(int argc, char *argv[], char c)
{
	int i;

	i = 0;
	while (i < argc)
	{
		if (*argv[i] == '-' && *(argv[i] + 1) == c)
		{
			if (argv[i + 1] == (void*)0)
				return ((void*)0);
			return (argv[i + 1]);
		}
		i++;
	}
	return ((void*)0);
}

int	lastarg(int argc, char *argv[])
{
	int i;
	int args;

	i = 0;
	args = 0;
	while (i < argc)
	{
		if(*argv[i] == '-')
			args = i;
		i++;
	}
	return (args);
}
