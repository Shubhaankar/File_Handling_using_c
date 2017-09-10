#include"header.h"

main(int argc , char *argv[])
{
	if(argc != 2)
	{
		printf("Pass valid number of arguments ");
	}
	else if(argc == 2)
	{
		FILE *fp;

	    fp = fopen(argv[1], "r");		
		if(fp==0)
		{
			printf("Could not open file");
		}
		else
		{
			char line[100];
			while(fgets(line,100,fp))
			{
				printf("%s",line);
			}
			fclose(fp);
		}
	}
}
