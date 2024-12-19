#include <stdio.h>

int main() {
    int arr[10], i, n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap các phan tu cua mang:\n");
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Các phan tu cua mang theo chieu nguoc lai là:\n");
    for (i = n - 1; i >= 0; --i) {
        printf("%d ", arr[i]);
    }
    return 0;
}
