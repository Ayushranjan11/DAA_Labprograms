#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100],i,max,min,size,pos1,pos2;
    printf("Enter the size\n");
    scanf("%d",&size);

    printf("Enter the elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    max=array[0];
    min=array[0];

    for(i=1;i<size;i++)
    {
        //if the current element is greater than max
        if(array[i]>max)
        {
            max=array[i];
            pos1=i+1;
        }
        //if the current element is smaller than min
        if(array[i]<min)
        {
            min=array[i];
            pos2=i+1;
        }
    }
    printf("The maximum element is %d at position %d\n",max,pos1);
    printf("The minimum element is %d at position %d\n",min,pos2);



    return 0;
}


