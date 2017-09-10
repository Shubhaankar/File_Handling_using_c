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
		char *m = argv[2];
		if(*m =='r')
		{
			int value = access(argv[1],R_OK);
			if(value ==0)
				printf("We can access the file\n");
			else
				printf("Cannot access");
		}
		else if(*m=='w')
		{
			int value = access(argv[1],W_OK);
			printf("We can access the file");
		
		}
		else if(*m=='x')
		{
			int value = access(argv[1],W_OK);
			printf("We can access the file");
		
		}
		else
		{
			printf("Cannot access file!!");
		}
		
	}
	else
	{
		printf("Pass valid number of arguments ");
	}


}
