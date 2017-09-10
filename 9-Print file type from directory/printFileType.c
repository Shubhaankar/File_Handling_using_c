#include"header.h" 
int main(int argc, char **argv)
{
    if(argc != 2)    
        return 1;
 
    struct stat fileStat;
    if(stat(argv[1],&fileStat) < 0)    
        return 1;
 
    printf("Information about %s\n",argv[1]);
    printf("---------------------------\n");
    printf("File Size: \t\t%d bytes\n",fileStat.st_size);
    printf("Number of Links: \t%d\n",fileStat.st_nlink);
    printf("File inode: \t\t%d\n",fileStat.st_ino);
 
    printf("File Type: \t\t");
    printf( S_ISREG( fileStat.st_mode ) ? "Regular File" : "-");
    printf( S_ISDIR( fileStat.st_mode ) ? "Directory" : "-");
    printf( S_ISCHR( fileStat.st_mode ) ? "Character File" : "-");
    printf( S_ISBLK( fileStat.st_mode ) ? "Block" : "-");
    printf( S_ISFIFO( fileStat.st_mode ) ? "PIPE" : "-");
    printf( S_ISSOCK( fileStat.st_mode ) ? "Socket" : "-");
    printf("\n\n");
 
    printf("The file %s a symbolic link\n", (S_ISLNK(fileStat.st_mode)) ? "is" : "is not");
 
    return 0;
}
