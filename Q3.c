// Array Leaders
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[n-1];
    int brr[n],a=1;
    brr[0] = max;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>=max)
        {
            max = arr[i];
            brr[a] = arr[i];
            a++;
        }
    }
    printf("Output : ");
    for(int i=a-1;i>=0;i--)
    {
        printf("%d ",brr[i]);
    }
    return 0;
}
