#include"header.h" 
int main(int argc, char **argv)
{
    if(argc != 2)    
        return 1;
 
 
   DIR	*directory;
  struct dirent *dir;
  directory = opendir(argv[1]);
  if (directory)
  {
    while ((dir = readdir(directory)) != NULL)
    {
	  if (dir->d_type == DT_REG)
	  {
		 printf("%s\n", dir->d_name);
		    struct stat fileStat;
 		   if(stat(dir->d_name,&fileStat) < 0)    
 		       return 1;
 
		 	off_t size = fileStat.st_size;
			printf("File Size: \t\t%ld bytes\n ",size);
			
			if(size == 0)
				remove(dir->d_name);
 
 
	  }
    }

    closedir(directory);
  }

    return 0;
}
