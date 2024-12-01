#include<stdio.h>
int main(){
	printf("------MENU------- \n");
	printf("1. Nhap vao mang \n");
	printf("2. Hien thi mang \n");
	printf("3. Them phan tu \n");
	printf("4. Sua phan tu \n");
	printf("5. Xoa phan tu \n");
	printf("6. Thoat khoi chuong trinh \n");
	printf("\n");
	int menu,chucnang;
	int arr[100];
	int mang,phantu;
	while(1){
			printf("Moi ban chon chuc nang ( 1-6)   ");
			scanf("%d",&chucnang);
			
			//1. NHAP VAO MANG
			if(chucnang == 1){
				printf("Nhap do dai cua mang la : ");
				scanf("%d",&mang);
				for(int i = 0; i < mang; i++){
					printf("Phan tu thu %d la: ", i +1);
					scanf("%d",&arr[i]);
				}
			}
			
			//2. HIEN THI MANG
			if(chucnang == 2){
				printf("HIEN THI MANG \n");
				for(int i =0; i<mang;i++){
					printf("%d \n",arr[i]);
				}
			}
			
		//3. THEM PHAN TU
		int themphantu,vitri,n;
		n = mang;	
		if(chucnang == 3){
			printf("Phan tu muon them la: ");
			scanf("%d",&themphantu);
			printf("Vi tri muon them tu (0-%d) la:",n -1);
			scanf("%d",&vitri);
			if(vitri > n || vitri < 0){
				printf("VI TRI BAN MUON THEM VAO KHONG HOP LE");
			}
		for(int i = n; i > vitri; i--){
			arr[i] = arr[i - 1];
		}
		arr[vitri] = themphantu;
		n++;
		//3.1 IN
		printf("MANG SAU KHI THEM LA: \n");
		for(int i = 0; i<n;i++){
			printf("%d \n",arr[i]);
		}
		}
		
		//4. SUA PHAN TU
		int vitrisua, giatrimoi;
		if(chucnang ==4){
			printf("Vi tri muon sua (0 - %d) la: ",mang -1);
			scanf("%d",&vitrisua);
			if(vitrisua > mang){
				printf("VI TRI MUON SUA KHONG HOP LE");
			}
			printf("Gia tri muon sua la : ");
			scanf("%d",&giatrimoi);
			arr[vitrisua] = giatrimoi;
			for(int i = 0; i < mang; i++){
				printf("%d \n",arr[i]);
			}
		}
		
		//5. XOA PHAN TU
		if(chucnang == 5){
		int xoa;
		printf(" Nhap vi tri muon xoa tu (0 -%d) la: ",mang -1);
		scanf("%d",&xoa);
		for(int i = xoa; i < mang -1; i++){
			arr[i] = arr[i -1];
		}
		mang --;
		printf("\n MANG SAU KHI XOA LA : \n ");
		 for(int i = 0; i < mang; i++){
		 	printf(" %d \n",arr[i]);
		 }
	}
		//6. THOAT KHOI CHUONG TRINH
		if(chucnang ==6){
			printf("CAM ON BAN DA SU DUNG CHUONG TRINH");
			return 1;
		}
	}
	return 0;
}
