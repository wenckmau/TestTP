#include <stdio.h>

int oddDigits[] = {1, 3, 5, 7, 9};
int count = 0;
//functie pentru problema Pb4
int produs(int arr[], int left, int right) {

    if (left == right) {
        return arr[left];
    }


    int mid = left + (right - left) / 2;


    int prod1 = produs(arr, left, mid);
    int prod2 = produs(arr, mid + 1, right);


    return prod1 * prod2;
}
//Functie pentru problema Pb2
void generateNumbersODD(int num, int lung) {
    if (lung == 2) {
        if (num / 10 != num % 10) {
            printf("%d\n", num);
            count++;
        }
        return;
    }

    for (int i = 0; i < 5; i++) {
        generateNumbersODD(num * 10 + oddDigits[i], lung + 1);
    }
}

int main() {
    //Vector pentru Pb4
    int a[] = {4, 10, 3, 4, 5,82 , 9};
    int n = sizeof(a) / sizeof(a[0]);
    //Pb2
    generateNumbersODD(0, 0);
    printf("Numarul total de numere generate: %d\n", count);
    //Pb4
    printf("Produsul elementelor din vector: %d\n", produs(a, 0, n - 1));
    return 0;
}