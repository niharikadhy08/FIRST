#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

//swapping using pointer
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to swap two elements in the array without using pointers
// void swap(int arr[], int index1, int index2) {
//     int temp = arr[index1];
//     arr[index1] = arr[index2];
//     arr[index2] = temp;
// }

void BUBBLEsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)  //no. of passes
    {
        for(int j=0;j<n-i-1;j++)   //no. of comparisions
        {
            if(arr[j]>arr[j+1])   //compare the values at the indices of the array
            {
                swap(&arr[j],&arr[j+1]);  // swap(arr, j, j + 1);
            }
        }
    }
}

int main()
{
    int arr[] = {7,11,9,2,17,4};
    int n = 6;
    display(arr,n);  //before sorting array
    printf("\n");
    BUBBLEsort(arr,n);
    display(arr,n);  //after sorting array
}


//                                                     making bubble sort an adaptive algorithm

// #include <stdio.h>
// #include <stdlib.h>

// void display(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// // swapping using pointer
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void BUBBLEsort(int arr[], int n)
// {
//     int issorted = 0;
//     for (int i = 0; i < n - 1; i++) // no. of passes
//     {
//         printf("working on pass %d\n",i+1);
//         issorted = 1;
//         for (int j = 0; j < n - i - 1; j++) // no. of comparisions
//         {
//             if (arr[j] > arr[j + 1]) // compare the values at the indices of the array
//             {
//                 swap(&arr[j], &arr[j + 1]);
//                 issorted = 0;
//             }
//         }
//         if (issorted)
//         {
//             return;
//         }
//     }
// }

// int main()
// {
//     // int arr[] = {7,11,9,2,17,4};
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int n = 6;
//     display(arr, n); // before sorting array
//     printf("\n");
//     BUBBLEsort(arr, n);
//     display(arr, n); // after sorting array
// }