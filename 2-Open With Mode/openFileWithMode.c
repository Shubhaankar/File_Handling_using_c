#include"header.h"

main(int argc , char *argv[])
{
	if(argc == 2)
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
	else if(argc == 3)
	{
		FILE *fp;

	    fp = fopen(argv[1], argv[2]);		
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
	else
	{
		printf("Pass valid number of arguments ");
	}


}
