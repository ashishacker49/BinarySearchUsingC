#include<stdio.h>
int binary(int a[],int key,int l,int h)
{
     while(l<=h)
     {
        int mid=(l+h)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        if(a[mid]<key)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
     }
     return -1;
}
int main()
{
    int n=5;
    int a[n];
    int key;
    int l,h;
    l=0;
    h=n;
    printf("enter array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter key");
    scanf("%d",&key);
    int result=binary(a,key,l,h-1);
    if (result==-1)
    {
        printf("not found");
    }
    else
    {
    printf("found at %d position",result);
    }
    
  return 0;  
}