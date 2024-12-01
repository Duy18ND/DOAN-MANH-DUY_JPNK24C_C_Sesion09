#include <stdio.h>

//kiem tra so nguyen to
int isPrime(int n) {
    if (n < 2) return 0; 
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) return 0; 
    }
    return 1; 
}

int main() {
    int arr[100], n, luachon, value, chenphantu;
    int sum_sochan = 0, sum_nguyento = 0;

    while (1) {
        printf("----------------MENU-----------------\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu \n");
        printf("2. In cac gia tri phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do \n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat khoi chuong trinh\n");
        printf("Moi ban lua chon trong menu: (0-8) ");
        scanf("%d", &luachon);

        switch (luachon) {
            case 1: // Nhap so phan tu 
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                if (n > 100 || n<0) {
                    printf("So phan tu nhap vao khong hop le!\n");
                    break;
                }
                for (int i = 0; i < n; i++) {
                    printf("Nhap Phan tu thu %d la: ", i + 1); // Nhap cac gia tri phan tu
                    scanf("%d", &arr[i]);
                }
                break;

            case 2: // In ra cac gia tri dang quan ly
                printf("Cac phan tu hien tai trong mang la:  ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3: //in cac phan tu so chan va tinh tong
                sum_sochan = 0;
                printf("Cac phan tu so chan la : ");
                for (int i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sum_sochan += arr[i];
                    }
                }
                printf("\nTong cac phan tu so chan la: %d\n", sum_sochan);
                break;

            case 4: // In ra gia tri lon nhat va nho nhat trong mang
                if (n > 0) {
                    int max = arr[0], min = arr[0];
                    for (int i = 1; i < n; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Gia tri lon nhat la : %d\n", max);
                    printf("Gia tri nho nhat la: %d\n", min);
                }
                break;

            case 5: // In ra cac phan tu so nguyen to va tinh tong
                sum_nguyento = 0;
                printf("Các so nguyen to trong mang la: ");
                for (int i = 0; i < n; i++) {
                    if (isPrime(arr[i])) {
                        printf("%d ", arr[i]);
                        sum_nguyento += arr[i];
                    }
                }
                printf("\nTong cac so nguyen to trong mang la: %d\n", sum_nguyento);
                break;

            case 6: // Nhap vao 
                printf("Nhap vao mot so va thong ke trong mang co bao nhieu phan tu : ");
                scanf("%d", &value);
                int count = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) count++;
                }
                printf("So %d xuat hien %d lon trong mang.\n", value, count);
                break;

            case 7: // Them mot phan tu vao vi tri trong mang
                printf("Nhap vi tri muon them (0 - %d): ", n);
                scanf("%d", &chenphantu);
                if (chenphantu >= 0 && chenphantu <= n) {
                    printf("Nhap gia tri muon them: ");
                    scanf("%d", &value);
                    for (int i = n; i > chenphantu; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[chenphantu] = value;
                    n++;
                } else {
                    printf("Vi tri khong hop le!\n");
                }
                break;

            case 8: // Thoat khoi chuong trinh
                printf("Thoat khoi chuong trinh.\n");
                return 0;

            default:
                printf("Lua chon cua ban khong hop le.\n");
                break;
        }
    }

    return 0;
}

