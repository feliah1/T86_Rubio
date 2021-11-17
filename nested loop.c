#include <stdio.h>
int main()
{
    int a, b, f;
    printf(" Number of rows: \n");
    scanf("%d", &f);
    for(a = f; a >= 1; a--){

        for(b = 1; b <= a; b++)
        printf("%d", b);
    printf("\n");
    }
return 0;
}
