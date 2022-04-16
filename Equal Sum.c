#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {

        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

int findSplitPoint(int arr[], int n)
{
    // traverse array element and compute sum
    // of whole array
    int leftSum = 0;
    for (int i = 0 ; i < n ; i++)
        leftSum += arr[i];

    // again traverse array and compute right sum
    // and also check left_sum equal to right
    // sum or not
    int rightSum = 0;
    for (int i=n-1; i >= 0; i--)
    {
        // add current element to right_sum
        rightSum += arr[i];

        // exclude current element to the left_sum
        leftSum -=  arr[i] ;

        if (rightSum == leftSum)
            return i ;
    }

}

// Prints two parts after finding split point using
// findSplitPoint()
void printTwoParts(int arr[], int n)
{
    int splitPoint = findSplitPoint(arr, n);

    
    for (int i = 0; i < n; i++)
    {
        if(splitPoint == i)
            return;
        printf("%d ",arr[i]);
    }
}

int main()
{
    int i=0;
    char line[255];
    fgets(line, 255, stdin);
    int t=atoi(line);
    i++;
    while(i<=t)
    {

        fgets(line, 255, stdin);    //read N
        int N = atoi(line);
        //printf your new nubmer**************************
        for(int z=1;z<N+1;z++)
            printf("%d ",z);
        printf("\n");
        fgets(line, 255, stdin);
        int tab[200];
        int ind=0;

        for(ind=0;ind<N;ind++)
        {

            tab[ind]=ind+1;
        }
        char * given = strtok(line, " ");
        while( ind<N*2 ) {

            tab[ind]= atoi(given);
            given = strtok(NULL, " ");
            ind++;
        }

        selectionSort(tab,2*N);

        printTwoParts(tab, 2*N);
        printf("\n");
        i++;
    }
    return 0;
}
