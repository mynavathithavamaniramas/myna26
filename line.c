#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
        string c = argv[1][0];
        string * line = NULL;
        size_t len = 0;
        while (getline(&line, &len, stdin) != -1)
        {
                int count = 0;
                char * s = line;
                while (*s) if(*s++ == c) count++;
                printf("%d\n",count);
        }
        if(line) free(line);
}
