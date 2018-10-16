/*
   This program will ask to the user for n number of integer values and return how many of that numbers are unique
 
   Author: Victor Manuel Gastelum Huitzil
   Email: A01411985@itesm.mx
   Date: 15/10/2018
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// Function to compare the numbers
int compare(const void*a, const void*b) {
return (*(int*)a-*(int*)b);
}

int main() {
    int n;
    int number;
    int counter;
    int x;
    int arr[number];

    // I ask to the user for the numbers that he want to compare
    printf("How many numbers you want to compare?\n");
    scanf("%i", &number);

    // I ask to the user for the numbers 
    for (int i=0; i<number; i++) {
        printf("\nGive me the number: \n", i+1);
        scanf("%i", &n);
        arr[i]=n;
    }
    
    system("cls");

    // I use the function to compare the numbers
    qsort(arr, number, sizeof(int), compare);
    printf("The unique numbers in the array you gave me are:\n");

    // In this part prints the unique numbers
    for (int h=0; h<number; h+=counter+1) {
        counter=0;
        // In this part i compare the numbers
        do {
            // Compare the numbers that the user give us
            if (arr[h]==arr[h+counter+1]) {
                counter++;
                x=1;
            } else {
                x=0;
            }
        } while(x==1);
        
        if (counter==0) {
            printf("%i\n", arr[h]);
        }
    }
return 0;
}
