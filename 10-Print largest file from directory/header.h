#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>


void printfile(char *dir)
{
        DIR *dp;
        struct dirent *entry;
        struct stat statbuf;
        struct stat statbuffer;
        int i = 0;
        char *name;

        if((dp = opendir(dir)) == NULL) {
           fprintf(stderr, "cannot open directory: %s\n", dir);
           return;

        }

        chdir(dir);
        while((entry = readdir(dp)) != NULL) {
           lstat(entry->d_name, &statbuf);

           if(S_ISREG(statbuf.st_mode)) {

                lstat(entry->d_name, &statbuffer);

                if(statbuffer.st_size > i) {
                   i = (statbuffer.st_size);
                   name = (entry->d_name);
                   printf("%s\n", name);
                }
           }

         }

        printf("The largest file in the provided directory is %s\n", name);
        printf("It is %i bytes\n", i);

        closedir(dp);
}

