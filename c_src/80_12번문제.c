#include <stdio.h>

void input(int *a, int cnt){
    int i;
    for(i = 0; i < cnt; i++){
        printf("Input Num >> ");
        scanf("%d", &a[i]);
    }
}

void output(int a[], int cnt){
    int i;
    for(i = 0; i < cnt; i++){
        printf("%d", a[i]);
    }
    printf("\n");
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int a[], int cnt){
    int i, j;
    for(i = 0; i < cnt - 1; i++){
        for(j = i + 1; j < cnt; j++){
            if(a[i] > a[j]){
                swap(&a[i], &a[j]);
            }
        }
    }
}

int main(){
    int arr[6];
    input(arr, 6);
    sort(arr, 6);
    output(arr, 6);
    return 0;
}