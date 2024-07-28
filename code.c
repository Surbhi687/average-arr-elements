#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    double sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double avg = sum / n;
    printf("%lf", avg);

    return 0;
}
