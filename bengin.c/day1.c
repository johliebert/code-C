#include<stdio.h>
int main ()
{
   int cnt[10];
   int arr[] = {1 , 2 , 2 , 1 , 3 , 5 , 5};
   int n = sizeof(arr) / sizeof(arr[0]); 
   for(int i = 0 ; i<=n ; i++)
   {
       cnt[i] = 0;
   } 
   for(int i = 0 ; i < n ; i++)  
   {
       cnt[arr[i]]++;
   }
   for(int i=0 ; i <= 10 ; i++)
   {
       if( cnt[i] > 0 )
       printf(" \n%d=(%d) ",i,cnt[i]);
   }
}