#include <stdio.h>


void main()
    {
    int n,A[20],i,j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
 
    for(i=0;i<n;i++)
        for(j=0;j<n-1;j++)
    if(A[j]>A[j+1])
    {
        c=A[j];
        A[j]=A[j+1];
        A[j+1]=c;
    }

    for(i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("\n");
    for(i=n-1;i>=0;i--)
        printf("%d ", A[i]);
    
}