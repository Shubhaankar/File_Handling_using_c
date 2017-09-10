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
			char buffer[100];
			  fread(buffer, 100, 1, fp);
			   printf("%s\n", buffer);
			fclose(fp);
		}
	}
	else if(argc == 3)
	{
		FILE *fp;

	    fp = fopen(argv[1], "r");		
		if(fp==0)
		{
			printf("Could not open file");
		}
		else
		{
			int count = atoi(argv[2]);
			char lines[count];
			  fread(lines, count, 1, fp);
			   printf("%s\n", lines);
			fclose(fp);
		}
	}
	else
	{
		printf("Pass valid number of arguments ");
	}


}
