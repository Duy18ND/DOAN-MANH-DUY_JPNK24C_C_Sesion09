#include<stdio.h>
int main(){ 
	int i,a,n;
	int index, value;
	int array[100];
	printf("So phan tu muon nhap la : ");
	scanf("%d",&n);
	if(n<0 || n >100){
		printf("PHAN TU CUA BAN KHONG HOP LE ");
	}
	int currentLength = n;
	for(i = 0; i < n; i++){
		printf("Phan tu thu %d la:  ",i +1);
		scanf("%d",&array[i]);
	}
	printf("Moi ban nhap gia tri muon them vao mang tu la : ");
	scanf("%d",&value);
	printf("Vi tri muon them vao mang tu (0 - %d) la: ",n);
	scanf("%d",&index);
	if(index>n){
		printf("BAN DA NHAP QUA SO PHAN TU TU (0 - %d)",n);
		return 1;
	}
	if (index == currentLength) {
        array[currentLength] = value;
        currentLength++;
    } else {
        for (int i = currentLength; i > index; i--) {
            array[i] = array[i - 1];
        }
        array[index] = value;
        currentLength++;
    }

    printf("Mang sau khi them la: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

	return 0;
}
