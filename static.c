#include <stdio.h>
#include "stats.h"
/* Size of the Data Set*/
#define SIZE (40)
void statistics(int ,int ,int ,int);
int find_maximum(int *,int);
int find_minimum(int *,int);
int find_mean(int *,int);
int find_median(int *,int);

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  int max,min,mean,median;
  max=find_maximum(test,size);
  min=find_minimum(test,size);
  mean=find_mean(test,size);
  median=find_median(test,size);
  
  statistics(max,min,mean,median);
}
  /*for printing the values*/
  void statistics(int a,int b,int c,int d)
  {
  printf("the maximum value in the array is %d",max);
  printf("the minimum value in the array is %d",min);
  printf("the mean value is %d",mean);
  printf("the median value is %d",median);
}

/* To find the maximum value in the array */
int find_maximum(int *a,int n)
{
  int i;
  for(i=1;i<n;i++)
  {
    if (a[0]<a[i]);
    a[0]=a[i];
  }
  return a[0];
}

/* To find the minimum value*/
int find_minimum(int *a,int n)
{
  int i;
  for(i=1;i<n;i++)
  {
    if(a[0]>a[i])
      a[0]=a[i];
  }
}

/* To find the mean */
 int find_mean(int *a,int n)
 {
   int i,t,mean;
   for(i=0;i<n;i++)
   mean+=a[i];
   t=mean/n;
   return t;
 }

/* To find median */
int find_median(int *a,int n)
{
  int median;
  if(n%2==0)
    median=(a[n/2] + a[a/2+1])/2;
  else
    median=(a[n/2+1]);
  return median;
}

   
  
