#include"header.h"

main(int argc , char *argv[])
{
   char buffer[] = "Writing into the file!!";
	if(argc == 2)
	{
		FILE *fp;

	    fp = fopen(argv[1], "w");		
		if(fp==0)
		{
			printf("Could not open file");
		}
		else
		{
   			fwrite(buffer, strlen(buffer) + 1, 1, fp);			   
   			printf("%s\n", buffer);
			fclose(fp);
		}
	}
	else
	{
		printf("Pass valid number of arguments ");
	}


}
