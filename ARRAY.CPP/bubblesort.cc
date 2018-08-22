#include <iostream>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);

}
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
      {      cout<< arr[i];
         cout<<endl;}
}

// Driver program to test above functions
int main(){
  int size;
  cin>>size;
   int array[100];
  for(int i=0;i<size;i++){
    cin>>array[i];
  }

  bubbleSort(array ,size);
 printArray(array ,size);
  }
