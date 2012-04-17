/*
 * =====================================================================================
 *
 *       Filename:  ex1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/16/2012 09:19:30 PM MDT
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:   (), 
 *        Company:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(int argc, char **argv, char** envp)
{
    puts("Hello World");
    /* For Extra Credit:
     * print 5 more lines
     * Going Overkill with sysenv
     * http://stackoverflow.com/questions/2085302/printing-all-environment-variables-in-c-c */
    char** env;
    for (env = envp; *env != 0; env++) {
        char* thisEnv = *env;
        printf("%s\n", thisEnv);
    }
    return 0;
}
