main(int argc , char *argv[])
{
	if(argc != 2)
	{
		printf("Pass valid number of arguments\n ");
	}
	else if(argc == 3)
	{
		FILE *fp,*cp;

	    fp = fopen(argv[1], "r");
	    cp = fopen(argv[2],"w");		
		if(fp==0)
		{
			printf("Could not open file\n");
		}
		else
		{
			char line[100];
			while(fgets(line,100,fp))
			{
			   	fwrite(line, strlen(line) + 1, 1, cp);			   
			}
			fclose(fp);
			fclose(cp);
		}
	}
	else if(argc==2)
	{
		FILE *fp,*cp;

	    fp = fopen(argv[1], "r");
	    cp = fopen("tempFile.txt","w");		
		if(fp==0)
		{
			printf("Could not open file\n");
		}
		else
		{
			char line[100];
			while(fgets(line,100,fp))
			{
			   	fwrite(line, strlen(line) + 1, 1, cp);			   
			}
			fclose(fp);
			fclose(cp);
		}
	
	}
}
