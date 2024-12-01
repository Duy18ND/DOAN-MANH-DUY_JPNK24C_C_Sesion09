#include <stdio.h>
//Nhap gia tri phan tu cua ma tran
int numbers(int arr[100][100], int m, int n) {
    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) {
            printf("arr[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    return 0;
}
//in ma tran
int matran(int arr[100][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) 
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
//tim so le
int sole(int num) {
    return num % 2 != 0;
}
//Tinh tong so le va in ra man hinh
int sum_sole(int arr[100][100], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) 
            if (sole(arr[i][j])) {
                printf("%d ", arr[i][j]);
                sum += arr[i][j];
            }
    printf("\nTong so le la: %d\n", sum);
    return 0;
}
//tinh bien, tich va in ra man hinh
int phantubien(int arr[100][100], int m, int n) {
    int tichbien = 1;
    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) 
            if (i == 0 || i == m-1 || j == 0 || j == n-1) {
                printf("%d ", arr[i][j]);
                tichbien *= arr[i][j];
            }
    printf("\nTich: %d\n",tichbien);
    return 0;
}
//Tim duong cheo chinh va duong cheo phu
int duongcheo(int arr[100][100], int m, int n) {
    printf("Chinh: ");
    for (int i = 0; i < m && i < n; i++) 
        printf("%d ", arr[i][i]);
    printf("\nPhu: ");
    for (int i = 0; i < m && i < n; i++) 
        printf("%d ", arr[i][n-i-1]);
    printf("\n");
    return 0;
}
//Tim dong so tong lon nhat
int sum_lonnhat(int arr[100][100], int m, int n) {
    int maxSum = -1e9, rowIndex = -1;
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) rowSum += arr[i][j];
        if (rowSum > maxSum) { maxSum = rowSum; rowIndex = i; }
    }
    printf("Dong co tong lon nhat la: ");
    for (int j = 0; j < n; j++) printf("%d ", arr[rowIndex][j]);
    printf("\nTong: %d\n", maxSum);
    return 0;
}

int main() {
    int arr[100][100], m, n, choice;
    printf("Nhap hang : ");
    scanf("%d", &m);
    printf("Nhap cot : ");
    scanf("%d", &n);

    while (1) {
        printf("\n1. Nhap ma tran\n2. In ma tran\n3. In so le và tính tong\n");
        printf("4. In bien va tinh tich\n5. In cheo chinh/phu\n6. Dong co tong lon nhat\n7. Thoat\n");
        printf("Moi ban lua chon trong MENU: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: numbers(arr, m, n); break;
            case 2: matran(arr, m, n); break;
            case 3: sum_sole(arr, m, n); break;
            case 4: phantubien(arr, m, n); break;
            case 5: duongcheo(arr, m, n); break;
            case 6: sum_lonnhat(arr, m, n); break;
            case 7: return 0;
            default: printf("Lua chon cua ban khong hop le.\n"); break;
        }
    }

    return 0;
}

