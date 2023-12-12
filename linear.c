#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    printf("enter the number of elements in the array:");
    scanf("%d",&size);
    int data[size];
    printf("Enter the elements of the array:");
    for(int i=0;i<size;i++){
        scanf("%d",&data[i]);
    }
    int element;
    printf("Enter the element to search for:");
    scanf("%d",&element);
    int searchResult=linearSearch(data,size,element);
    if (searchResult!=-1){
        printf("Element found at index :%d\n",searchResult);

    }
    else{
        printf("Elemnt not found in the array\n");

    }
   
    return 0;
}
