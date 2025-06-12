#include <stdio.h>

int main(){
    int n, sum = 0, i = 1;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So nhap vao phai la so nguyen duong.");
        
    }

    while (i < n) {
        if (n % i == 0) {
            sum += i;
        }
        i++;
    }

    if (sum == n) {
        printf("%d la so hoan hao.", n);
    } else {
        printf("%d khong phai la so hoan hao.", n);
    }
}