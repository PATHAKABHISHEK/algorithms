

#include <stdio.h>

void  main()
{

    int how_many_elements;
    printf("Enter how many elements want to insert in the array");
    scanf("%d",&how_many_elements);

    int array[how_many_elements];

    //inserting elements into array
    for(int i = 0; i < how_many_elements; i++){
     printf("Enter Element");
     scanf("%d",&array[i]);
    }

    // insertion sort function
    int key_element;

    void insertion_sort(){
        for(int i = 1; i< how_many_elements; i++){
            key_element = array[i];
            int j = i-1;
            while(j>=0 && array[j] > key_element){
                array[j+1] = array[j];
                j = j-1;
            }
            array[j+1] = key_element;
        }

    }

// printing array elements in sorted order

insertion_sort();

for(int i = 0; i< how_many_elements; i++){
    printf("%d ",array[i]);
}






}
