#include <stdio.h>
#include <stdlib.h>

	
	/*
	1.BAÞLA

2.Hastanýn kullanýcý adý si ve þifresi girilir
3.Eðer bilgiler doðruysa sisteme girilir, yanlýþsa hata mesajý verilir
4.Hasta kayýt sorgulama ekranýna gidilir
5.hasta kaydý varsa hastanýn  bilgileri ve seçenekler gelir
6.Randevu iptal etme 
7.Randevu erteleme
8.Hasta kaydý yoksa seçenek gelir
9.Randevu oluþturma 
10.BÝTÝR

*/
void hatali(int hata){
	printf("Hatali islem %d\n\n",hata);
	printf("Baslangica Yonlendiriliyorsunuz\n\n");
	

	
}



int main(){
float artirma[]={1.00,2.00,3.00};
char ad[50];
float b=9.30,c=11.30,d=12.00,e=13.30,f=15.00,g=17.30,h=18.00,u=18.30;
int parola=1234;
int sifre;
int i=1;
int talep;
float saat=0.00;
int j;
int k=4;
char poliklinik[20];


//tc, sifre girisi
FILE *filep = fopen("Randevu Sistemi","w");

fclose(filep);
printf("Goz Hastanesi\n\n");
printf("Giris yapmak icin bilgilerinizi giriniz:\n\n");


	
	printf("Kullanici adinizi giriniz:\n");
scanf("%s",ad);

	printf("sifrenizi giriniz:\n");
		scanf("%d",&sifre);


			while(1){


			

	printf("Yapmak istediginiz islemi seciniz:\n1:Randevu olusturma\n2:Randevu erteleme\n3:Randevu iptal etme\n4:Cikis\n ");
	scanf("%d",&talep);
	
	switch(talep){
		case 1:

	printf("Randevu alabileceginiz saatler:\n");
	
		printf("9.30\n11.30\n12.00\n13.30\n15.00\n17.30\n18.00\n18.30\n");
		printf("Randevu almak istediginiz saat  yaziniz:\n");
		scanf("%f",&saat);
		if(saat ==b || saat==c || saat==d || saat==e || saat==f|| saat==g || saat==h ||saat==u)
		{
			printf("isleminiz Alinmistir\n Randevu saatiniz %.2f\n baslangica yonlendiriliyorsunuz:\n\n",saat);
		
		}
		else{printf("Aradiginiz saatde randevu yoktur baslangica yonlendiriliyorsunuz:\n\n");
		saat=0;
		
		}
		break;

		
		case 2:
		if(saat!=0){
		
			printf("Guncel randevu saatiniz %.2f'dir\n",saat);
			printf("Randevu degistirebileceginiz saatler(saat 22.00 dan sonraki randevular gecersiz sayilacaktir).");
		printf(" :\n1)%.2f\n 2)%.2f\n 3)%.2f\n Birini seciniz\n",saat+artirma[0],saat+artirma[1],saat+artirma[2]);	
	scanf("%d",&j);
		if(j==1 &&saat<=21.00){
			saat+=j;
			printf("Randevu saatininiz %.2f olarak degismistirilmistir:\n Baslangica yonlendiriliyorsunuz\n\n",saat);
		}
		else if(j==2 &saat<=20.00){
			saat+=j;
			printf("Randevu saatininiz %.2f olarak degismistirilmistir:\n Baslangica yonlendiriliyorsunuz\n\n",saat);
		}
		else if(j==3 &&saat<=19.00){
		
				saat+=j;
			
			printf("Randevu saatininiz %.2f olarak degismistirilmistir:\n Baslangica yonlendiriliyorsunuz\n\n",saat);
		}

		
		else{
			printf("Gecersiz islem sectiniz\n Basa yonlendiriliyorsunuz:\n");
		}
	}
	else{
		printf("Randevunuz yoktur basa yonlendiriliyorsunuz\n\n");
	}
	break;
		case 3:
			if(saat!=0.00){
				printf("Randevunuz iptal edilmistir.\n\n");
				saat=0.00;
				
				
			}
			else{
				printf("iptal edilecek randevunuz yoktur\n Basa yonlendiriliyorsunuz\n\n");
			}
		break;
		
		 case 4:
 	return 0;
		default:
			

		hatali(404);
	

}
 }
	return 18;
}
		
	





	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


