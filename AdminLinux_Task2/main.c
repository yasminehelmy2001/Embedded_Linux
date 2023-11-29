#include <stdio.h>

int binary_search(int arr[], int size, int key);
int main (void)
{
int arr[]={1,2,3,4,5,6,7,8};
int num;
for(int i=0;i<8;i++)
{
	printf("%d ",arr[i]);
}
printf("\nEnter number to search for: ");
scanf("%d",&num);
int index=binary_search(arr,8,num);
if(index==-1)
{
printf("Index not found!"); 
}
else
{
printf("Output of the function is %d ",arr[index]);
}
} 

