#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    // creating the file ->Binary
    FILE *file = fopen("number.dat" , "w+b");
    int array [4] = {1 , 2 , 4 , 9};

    fwrite(array, sizeof(int) , 4 , file);
    fclose(file);

    // reading the file
    FILE *fileR = fopen("number.dat" , "r + b");
    int target ;
    int number ;
    printf("Enter the number to find : ");
    scanf("%d" , &target);

    while (fread(&number , sizeof(int) , 1 , fileR)) {
        // checking if the target is correct
        if (number == target) 
        {
            printf("Succesfully Found");
            break ;
        }

        else 
        {
            printf("Not Found");
            exit(1);
        }
    }


}