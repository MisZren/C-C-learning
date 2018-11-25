#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;


int main(int argc, char const *argv[])
{
/*     BOOL b = TRUE;

    printf("%d\r\n", sizeof(BOOL)); */

    const int n = 4;
    printf("%d\r\n", n);

    int* pN = (int*)&n;
    *pN = 100;
    printf("%d\r\n", n);
    
    return 0;
}
