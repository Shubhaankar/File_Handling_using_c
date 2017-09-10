
int main(int argc,char **argv)
{
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
	  }
    }

    closedir(directory);
  }

  return(0);
}
