#include <stdio.h>
#include <math.h>

int main() {
    double a, b,sum;
    int d;

    printf("Nhap so tien gui ban dau: ");
    scanf("%lf", &a);

    printf("Nhap lai suat nam (%%): ");
    scanf("%lf", &b);

    printf("Nhap so thang gui: ");
    scanf("%d", &d);

    b /= 100.0;

    double i =  a* b * d / 12.0;

    sum = a + i;

    printf("So tien lai nhan duoc sau %d thang la: %.2lf\n", d, i);
    printf("Tong so tien nhan duoc sau %d thang la: %.2lf\n", d, sum);

    return 0;
}

