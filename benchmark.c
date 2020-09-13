#include <stdio.h>
#include <time.h>

int main()
{
    int counter = 0;
    clock_t time = clock();

    while ((clock() - time) / CLOCKS_PER_SEC < 1.0)
        counter++;

    printf("%d cycles elapsed.", counter);
}
