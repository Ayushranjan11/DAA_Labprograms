#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,key,n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Key\n");
    scanf("%d",&key);
    i=0;

    //double clock_tstart=clock();
    while(a[i]!=key)
        i++;

    //double clock_tend=clock();
    //double time=(en__start)/(double) CLOCK S_PER_SEC;
   // printf("Execution time: %lf seconds\n",time);
    if(i<n)
        printf("%d found at the position %d\n",key,i+1);
    else
        printf("%d is not found\n",key);
    return 0;
}
