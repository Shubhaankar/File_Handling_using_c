#include"header.h"
int main(int argc,char **argv)
{

	if(argc!=3)
		printf("Pass Valid number of arguments\n");
	else
	if(argc==3)
	{
	  DIR	*directory;
	  struct dirent *dir;
	  directory = opendir(argv[1]);
	  if (directory)
	  {
				int value = access(argv[2],F_OK);
			if(value ==0)
				printf("File Exists\n");
			else
				printf("File is not present\n");

	   }
	   else
	   	printf("invalid directory argument\n");

		closedir(directory);
	
	 }
	 


  return(0);
}
