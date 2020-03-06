#include <stdio.h>

// gcc ifdef.c -o ifdef -D APPLE
// gcc ifdef.c -o ifdef -D ORANGE=9
// ./ifdef

// define min(a,b) as ....

#define min(a, b) (a) < (b) ? (a) : (b)
int main(int argc, char **argv)
{
    // if not defined
#ifndef PI
#define PI 3.14
#endif

#ifndef APPLE
    printf("We dont have an apple\n");
#endif
// id defined
#ifdef APPLE
    printf("We have an apple\n");
    typedef int mysize_t;
#endif
#ifdef ORANGE
    printf("We have an orange\n");
    typedef long mysize_t;
#else
    typedef double mysize_t;
    printf("Sorry no orange\n");
#endif

    printf("the size of my size t is %lu bytes\n", sizeof(mysize_t));

#if ORANGE > 1
    printf("We have %d oranges\n", ORANGE);
    int array[ORANGE];
    printf("Our orange array is %lu bytes\n", sizeof(array));

#endif

    double a = 8.3, b = 4.5;
    printf("the min of a (%f) and b (%f) is %f\n", a, b, min(a, b));

// undefine PI
#undef PI
}