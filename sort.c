/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.c
 * Author: Manohar
 *
 * Created on October 30, 2019, 7:56 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*BUBBLE SORT*/
/*
int main()
{
  int array[100], n, i, j, t;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
 
  for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (array[j] > array[j+1]) //For decreasing order use < 
      {
        t       = array[j];
        array[j]   = array[j+1];
        array[j+1] = t;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (i = 0; i < n; i++)
     printf("%d\n", array[i]);
 
  return 0;
}
*/



//INSERTION SORT
/*void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        // Move elements of arr[0..i-1], that are 
        //greater than key, to one position ahead 
        //of their current position 
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 
  
// A utility function to print an array of size n 
void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
//Driver program to test insertion sort 
int main() 
{ 
    int arr[] = { 12, 11, 13, 5, 6 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    insertionSort(arr, n); 
    printArray(arr, n); 
  
    return 0; 
} 
*/


/*#define MAXINT 32767
#include<stdio.h>
int partition(int a[],int p,int q);
void quicksort(int a[],int si,int ei);
void main(){
	int a[100],i,j,n,key;
	printf("enter size of an array:");
	scanf("%d",&n);
	printf("enter the elements of the array:");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	a[n+1]=MAXINT;
	quicksort(a,1,n);
	printf("in sorted array is:");
	for(i=1;i<=n;i++){
		printf("%d\t",a[i]);
	}
}
void quicksort(int a[],int si,int ei){
	int j;
	if(si<ei){
		j=partition(a,si,ei+1);
		quicksort(a,si,j-1);
		quicksort(a,j+1,ei);
	}
}
int partition(int a[],int p,int q){
	int i,j,key,t;
	key=a[p];
	j=q;
	i=p;
	do{
		do{
			i++;
		}while(a[i]<key);
		do{
			j--;
		}while(a[j]>key);
		if(i<j){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}while(i<j);
	t=a[p];
	a[p]=a[j];
	a[j]=t;
	return j;
}
 */

