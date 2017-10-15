#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* isValid(char* s)
{
    // Complete this function
}

int main()
{
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    char* result = isValid(s);
    printf("%s\n", result);
    return 0;
}
