#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
 
off_t get_file_size(const char *file_name) 
{
        struct stat st;
        if ( stat(file_name, &st) != 0 ) return(0);
        return( st.st_size );
}
 
int main(int argc, char **argv)
{
    printf("%u\n", get_file_size(argv[1]));
 
    return 0;
}