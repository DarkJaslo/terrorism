#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define TRUE 1
#define FALSE 0

void* main(void* argc, void*** argv)
{
    //We define a little "struct"
    //Stores age, name, civil state (married or not) and height
    void* person = malloc(24);
    *(int*)person = 21;
    {
        char name[12] = "Jon";
        for(int i = 4; i < 16; ++i)
        {
            *(char*)(person+i) = name[i-4];
        }
    }
    *(int*)(person+16) = FALSE;
    *(float*)(person+20) = 1.74;

    printf("Success!\n");

    free(person);
    return 0;
}