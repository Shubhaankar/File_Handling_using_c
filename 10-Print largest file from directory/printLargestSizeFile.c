#include"header.h"

int main(int argc, char **argv)
{
	if(argc == 2)
	{
        printfile(argv[1]);
	}
	else
	{
        printfile(".");
	}
        exit(0);
}
