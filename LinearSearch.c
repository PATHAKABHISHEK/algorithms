#include <stdio.h>

#define ARRAY_SIZE 5

void main(){

// getting the digit to find in the array
int digit;
printf("Enter the digit");
scanf("%d", &digit);

//creating array
int array[ARRAY_SIZE];

//setting values into the array
for(int i =0 ; i< ARRAY_SIZE; i++){
    printf("Enter element");
    scanf("%d",&array[i]);
    }


// Linear Search Function
int linear_search(){
    //loop to find the digit in the array
    for(int i = 0; i < ARRAY_SIZE ; i++){
        if(array[i] == digit){
            return i+1;
        }

    }
        return -1;

    }


// calling linear search Function
int index = linear_search();

if(index != -1){
    printf("The element is at index %d in the array", index);
}else{
    printf("The element is not found in the array");
}


}
