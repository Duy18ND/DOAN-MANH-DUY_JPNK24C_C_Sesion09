#include<stdio.h>
int main(){
	int n;
	printf("Nhap do dai Mang la: ");
	scanf("%d",&n);
	int arr[n];;
	for( int i = 0; i < n ; i++){
	printf("Nhap phan tu Thu %d la: ", i +1 );
	scanf("%d",&arr[i]);
		 }
		 printf("GIA TRI MANG BAN DAU LA:  \n");
		for( int i=0; i < n; i++){
			printf("%2d ",arr[i]);
			}
	//Vi tri sua
	int vitri,giatrimoi;
	printf("\n vi tri muon sua (0 - %d) la: ",n - 1);
	scanf("%d",&vitri);
	if(vitri>n ||  vitri < 0){
		printf("VI TRI BAN MUON THEM KHONG HOP LE");
	}
	//gia tri moi sau khi sua
	printf("Gia tri muon sua la: ");
	scanf("%d",&giatrimoi);
		arr[vitri] = giatrimoi;
		
		for( int i  = 0; i< n; i++){	
		printf("%2d ",arr[i]);
		printf("\n");
}
		 return 0;
		 
		 
}
