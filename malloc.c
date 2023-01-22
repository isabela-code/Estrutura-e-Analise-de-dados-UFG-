#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    printf("\nQuantos numeros?\n");
    scanf("%d", &n);

    double *ptr = (double *) malloc (n* sizeof (double));

    if (ptr == NULL)
    {
        printf("Foi mal!");
        exit(1);
    }

    for (i=0; i<n; i++)
    {
        printf("\nEntre com o %d o. numero, por favor:\n", i+1);
        scanf("%lf", ptr + i);
    }

    printf("\nImprimindo os valores da entrada:\n");
    for (i=0; i<n; i++)
        printf("%lf\n", *(ptr+i)); // e se printf("%d", *(ptr+i));

    
    return 0;
}