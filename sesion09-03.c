#include<stdio.h>
int main(){
	int arr[100];
	int mang,phantu;
	printf("Nhap so phan tu muon nhap : ");
	scanf("%d",&mang);
	for(int i =0; i < mang; i++){
	printf("Phan tu thu %d la: ",i +1);
	scanf("%d",&arr[i]);
		 }
		 printf("\n");
		 printf("MANG SAU KHI NHAP LA: ");
		 for(int i =0; i < mang; i++){
		 	printf("\n %d",arr[i]);
		 }
		 int xoa;
		 printf("\n Nhap vi tri muon xoa tu (0 - %d) la : ",mang -1);
		 scanf("%d",&xoa);
		 for(int i = xoa -1; i < mang -1 ;++i){
		 	arr[i] = arr[i + 1];
		 }
		 mang--;
		 printf("\n MANG SAU KHI XOA LA : ");
		 for(int i = 0; i < mang; i++){
		 	printf("\n %d",arr[i]);
		 }
	return 0;
}
