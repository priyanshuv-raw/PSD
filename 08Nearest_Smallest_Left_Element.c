// In this particular question I will be finding the largest nearest right number in the given array.
#include<stdio.h>

int main(){
        int arr1[]={4,5,2,25,11};
        int arr[5];
        int i,j,temp=0,val=0;
        for(i=4;i>=0;i--){
            arr[temp]=arr1[i];
            temp ++;
        }
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