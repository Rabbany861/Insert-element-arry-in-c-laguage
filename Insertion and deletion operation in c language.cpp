#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Number of arry element : ");
    scanf("%d",&n);
   // printf("\n");

    printf("The arry element : ");
    int arr[n+1];
    for (int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int position;
    printf("Deletion Position : ");
    scanf("%d",&position);



    //int key_value;
    //printf("Insertion value : ");
    //scanf("%d",&key_value);

    printf("the arry element before deletion : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=position-1; i<n; i++)
    {
        arr[i]=arr[i+1];
    }
   // arr[position-1]=key_value;
    printf("The arry element after deletion : ");
    for(int i=0; i<n-1; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

}
