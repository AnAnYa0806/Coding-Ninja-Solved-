int i, j, N;

scanf("%d", &N);

for(i=N; i>=1; i--)
{
    //Logic to print spaces
    for(j=N; j>i; j--)
    {
        printf(" ");
    }

    //Logic to print numbers
    for(j=1; j<=i; j++)
    {
        printf("%d ", i);
    }
    for(j=N; j>i; j--)
    {
        printf(" ");
    }

    printf("\n");
}

