#include <stdio.h>

int main() {
    int arr[]= {5,7,2,56,34,89};
    arr[0]=56;
    printf("%d\n", arr[0]);

    float numbers[3];
    numbers[0]=5.4f;
    numbers[2]=67.34f;

    char word[]={'S','o','m','e'};
    char words[] = "Hello world!";
    printf("%s\n", words);
    printf("%c\n", words[1]);

    int array[3][4] ={
        {4,5,6,4},
        {6,7,8,2},
        {9,1,0,5}
    };

    array[1][1]=5;
    printf("%d\n", array[0][0]);
}