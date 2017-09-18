/* Nama  : Nadia Nur Halimah
   NIM   : 3411151017
   Kelas : SIE-A
*/
   
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

void menu(){
	//algoritma
	        printf("\n--------------- MENU ---------------\n");
			printf("\n1. Hitung x+y");
			printf("\n2. Hitung x-y");
			printf("\n3. Hitung x*y");
			printf("\n4. Hitung x^y");
			printf("\n5. Hitung f(x)=2x^2-3x+1");
			printf("\n6. Exit\n");
}

int tambah (int x, int y){
	//kamus
	int jumlah;
	
    //algoritma
    jumlah = x + y;

    return (jumlah);
}

int kurang (int x, int y){
	//kamus
	int jumlah;
	
    //algoritma
    jumlah = x - y;

    return (jumlah);
}

int kali (int x, int y){
	//kamus
	int jumlah;
	
    //algoritma
    jumlah = x * y;

    return (jumlah);
}

int pangkat (int x, int y){
	//kamus
	int jumlah;
	
	//algoritma
	jumlah=pow(x,y);
	printf("%d ^ %d= %d", x, y,jumlah);
}


//int fx(int x){
	//kamus
//	int hasil;
	//algoritma
//	printf ("Maka x = %d \n", x);
//	printf ("Berapa hasilnya jika f(x) = 2x^2 - 3x + 1 ? \n");
//	hasil=((2 * (pow(x,2)) - ( 3 * x) + 1));
//	printf ("\n-----------------------------------\n");
//	printf("\nf(%d)=2(%d)^2 - 3(%d) + 1= %d", x, x, x, hasil);
//}

//main driver
int main () {
	//kamus data
	int a, b, i, hasil;
	int pil;
	
	//algoritma
			menu:
			menu();
			printf("\nPilihan = ");
			scanf("%d", &pil);
			system("cls");
			switch(pil){
				case 1 	:	printf("=====PENJUMLAHAN=====\n\n");
				            printf("Masukan x : ");
                            scanf("%d",&a);
                            printf("Masukan y : ");
                            scanf("%d",&b);
				        
						    hasil=tambah (a,b);
                            printf("\n %d + %d = %d",a,b,hasil);
						
						    getch();
						    system("cls");
							goto menu;
						    
				case 2 	:	printf("======PENGURANGAN=====\n\n");
				            printf("Masukan x : ");
                            scanf("%d",&a);
                            printf("Masukan y : ");
                            scanf("%d",&b);
				        
						    hasil=kurang (a,b);
                            printf("\n %d - %d = %d",a,b,hasil);
						
						    getch();
						    system("cls");
						    goto menu;
				      	
			   case 3 	:	printf("=====PERKALIAN=====\n\n");
				            printf("Masukan x : ");
                            scanf("%d",&a);
                            printf("Masukan y : ");
                            scanf("%d",&b);
				        
						    hasil=kali (a,b);
                            printf("\n %d * %d = %d",a,b,hasil);
						    
						    getch();
						    system("cls");
						    goto menu;  
						    
			  case 4 :	    printf("======PERPANGKATAN======\n\n");
				            printf("Masukan Bilangan : ");
                            scanf("%d",&a);
                            printf("Masukan Nilai Pangkat   : ");
                            scanf("%d",&b);
				            printf("\n");
						    hasil=pangkat (a,b);
						   
						    getch();
						    system("cls");
							goto menu;
						   
		   	  case 5 :	   
				            printf("=====HITUNG F(X)======\n\n");
				            printf("Masukan x : ");
                            scanf("%d",&a);
                            printf("Masukan y : ");
                            scanf("%d",&b);
                            printf("\n\nSyarat %d >= %d <= %d \n", a, a, b);
                            printf ("Hasil jika f(x) = 2x^2 - 3x + 1 \n");
                            
							for (i=a;i<=b;i++){
						        printf ("\nJika x = %d \n", i);
	                            hasil=((2 * (pow(i,2)) - ( 3 * i) + 1));
	                            printf("\nf(%d)=2(%d)^2 - 3(%d) + 1= %d", i, i, i, hasil);
						    }
						    
						    getch();
						    system("cls");
						    goto menu;
						    
			  case 6 :      
			  				printf("Byeeeee.....");
							getch();
							return 0;
							break; 	 	
}
}
