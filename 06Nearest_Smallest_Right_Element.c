// In this particular question I will be finding the largest nearest right number in the given array.
#include<stdio.h>

int main(){
        int arr[]={4,5,2,25,11};
        int i,j;
        int val = 0;
        for (i=0;i<=4;i++)
        {
            val = -1;
            for(j=i+1;j<=4;j++)
            {
                if(arr[i]>arr[j])
                {
                    val = arr[j];
                    break;
                }
            }
                printf("%d ---> %d",arr[i],val);
           printf("\n");
        }
    return 0;
}