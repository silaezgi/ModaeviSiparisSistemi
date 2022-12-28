#include <stdio.h>
#include <stdlib.h>

/* Elbise1=150 Elbise2=200 Elbise3=250 Elbise4=300 Elbise5=350 Elbise6=400 Elbise7=450 Elbise8=500 */

void iyigunler() {
     
		printf("Iyi gunler, yine bekleriz.");

}

void secim(int i) {
	
 printf("Sepetinize %d adet urun daha eklerseniz kargo bedava kampanyasi uygulanacaktir.\nUrun eklemek ister misiniz? E=1 H=0\n", i);
}

int main() {
	int kayitlihesap,kayitlisiparis,duzen,bedenolcusu,elbisekod,fiyatbilgisi,siparis,islem,toplamsiparis,i=2,j,toplamucret,ekstraurun,urunekle;
	char adres,ozelnot;	

	int dizi[3][3]={100,150,200,250,300,350,400,450,500};
	
	printf("Sisteme kayitli hesabiniz var mi? Var=1 Yok=0\n");
	scanf("%d",&kayitlihesap);
	
	if (kayitlihesap==1)  {
	 
	     printf("Kayitli siparisiniz var mi? Var=1 Yok=0\n");
	     scanf("%d",&kayitlisiparis);
	        if  (kayitlisiparis==1) {
			
	        printf("Yapmak istediginiz islemi seciniz:\n1=Siparis duzenleme\n2=Yeni siparis olusturma\n3=Cikis yap\n");
		    scanf("%d",&islem);
		    switch(islem) {
			
			case 1:
				printf("Beden olculerinizi giriniz.\n");
				scanf("%d",&bedenolcusu);
				printf("Elbise kodunu katalogdan giriniz.\n");
				printf("-----KATALOG-----\n");
				int k,l;
				for(k=0;k<3;k++) {
				for (l=0;l<3;l++)	 		
						printf("%3d\n",dizi[k][l]);
									printf("\n");			
				}
				printf("----------------\n");
	            scanf("%d",&elbisekod);
	            printf("Ozel bir isteginiz varsa not giriniz.\n");
	            scanf("%s",&ozelnot); 
	            fiyatbilgisi=(bedenolcusu*elbisekod)/3;
	            printf("Fiyat bilgisi %d TL'dir.", fiyatbilgisi);
	            toplamucret=fiyatbilgisi;
	            secim(2);
	            scanf("%d",&toplamsiparis);
	        	switch(toplamsiparis)  {
	        	case 1:
	        	   j=0;
	        	    while(j<2) {
                    ekstraurun=0;
	        		printf("Beden olculerinizi giriniz.\n");
	                scanf("%d",&bedenolcusu);
	                printf("Elbise kodunu katalogdan giriniz.\n");
	                printf("-----KATALOG-----\n");
				int k,l;
				for(k=0;k<3;k++) {
				for (l=0;l<3;l++)	 		
						printf("%3d\n",dizi[k][l]);
									printf("\n");			
				}
				printf("----------------\n");
	                scanf("%d",&elbisekod);
	                printf("Ozel bir isteginiz varsa not giriniz.\n");
	                scanf("%s",&ozelnot); 
	                ekstraurun=(bedenolcusu*elbisekod)/3;
	                printf("Fiyat bilgisi %d TL'dir.\n", ekstraurun); 
	                toplamucret+=ekstraurun;
	                j++; 
	                
                       }
                       
					printf("Toplam ucret %d'dir. Yine bekleriz.",toplamucret);
					break;
	        
	            case 0:
	             	printf("Toplam ucret %d'dir. Yine bekleriz.",toplamucret);
	                break; 
	               
	               
				   }
				   break;
	            
	        case 2:
	        	
	        printf("Beden olculerinizi giriniz.\n");
	        scanf("%d",&bedenolcusu);
	        printf("Elbise kodunu katalogdan giriniz.\n");
	        printf("-----KATALOG-----\n");
				
				for(k=0;k<3;k++) {
				for (l=0;l<3;l++)	 		
						printf("%3d\n",dizi[k][l]);
									printf("\n");			
				}
				printf("----------------\n");
	        scanf("%d",&elbisekod);
	        printf("Ozel bir isteginiz varsa not giriniz.\n");
	        scanf("%s",&ozelnot); 
	        fiyatbilgisi=(bedenolcusu*elbisekod)/3;
	        printf("Fiyat bilgisi %d TL'dir.\n", fiyatbilgisi); 
	        toplamucret=fiyatbilgisi;
	        printf("Sepetinize 1 adet urun daha eklerseniz kargo bedava kampanyasi uygulanacaktir.\nUrun eklemek ister misiniz? E=1 H=0\n");
	        scanf("%d",&toplamsiparis);
	        	switch(toplamsiparis) {
	        		case 1:
	        	   j=0;
	        	    while(j<1) {
                    ekstraurun=0;
	        		printf("Beden olculerinizi giriniz.\n");
	                scanf("%d",&bedenolcusu);
	                printf("-----KATALOG-----\n");
				int k,l;
				for(k=0;k<3;k++) {
				for (l=0;l<3;l++)	 		
						printf("%3d\n",dizi[k][l]);
									printf("\n");			
				}
				printf("----------------\n");
	                scanf("%d",&elbisekod);
	                printf("Ozel bir isteginiz varsa not giriniz.\n");
	                scanf("%s",&ozelnot); 
	                ekstraurun=(bedenolcusu*elbisekod)/3;
	                printf("Fiyat bilgisi %d TL'dir.\n", ekstraurun); 
	                toplamucret+=ekstraurun;
	                j++; 
	                
                       }
                       
					printf("Toplam ucret %d'dir. Yine bekleriz.",toplamucret);
					break;
	                
	            case 0:
	             	printf("Toplam ucret %d'dir. Yine bekleriz.",fiyatbilgisi);
	                break;  
					  
					}
	        break;
	               
	        	
	   case 3:
	        	iyigunler();
	        	break;
	        	
	   default:
	        	printf("Gecersiz islem. Tekrar deneyin.");
	        	break;
	          
			  }
			
				   }   
	    
		    else {
		
		    printf("Siparis olusturmak ister misiniz? Evet=1 Hayir=0\n");
		    scanf("%d",&siparis);
	        switch (siparis) {
		case 1:
	        printf("Beden olculerinizi giriniz.\n");
	        scanf("%d",&bedenolcusu);
	        printf("Elbise kodunu katalogdan giriniz.\n");
	        printf("-----KATALOG-----\n");
				int k,l;
				for(k=0;k<3;k++) {
				for (l=0;l<3;l++)	 		
						printf("%3d\n",dizi[k][l]);
									printf("\n");			
				}
				printf("----------------\n");
	        scanf("%d",&elbisekod);
	        printf("Ozel bir isteginiz varsa not giriniz.\n");
	        scanf("%s",&ozelnot); 
	        fiyatbilgisi=(bedenolcusu*elbisekod)/3;
	        printf("Fiyat bilgisi %d TL'dir.", fiyatbilgisi); 
	        toplamucret=fiyatbilgisi;
	        secim(2);
	        scanf("%d",&toplamsiparis);
	        	switch(toplamsiparis) {
			
	        		case 1:
	        	    j=0;
	        	    while(j<2) {
                    ekstraurun=0;
	        		printf("Beden olculerinizi giriniz.\n");
	                scanf("%d",&bedenolcusu);
	                printf("Elbise kodunu katalogdan giriniz.\n");
	               printf("-----KATALOG-----\n");
				int k,l;
				for(k=0;k<3;k++) {
				for (l=0;l<3;l++)	 		
						printf("%3d\n",dizi[k][l]);
									printf("\n");			
				}
				printf("----------------\n");
	                scanf("%d",&elbisekod);
	                printf("Ozel bir isteginiz varsa not giriniz.\n");
	                scanf("%s",&ozelnot); 
	                ekstraurun=(bedenolcusu*elbisekod)/3;
	                printf("Fiyat bilgisi %d TL'dir.\n", ekstraurun); 
	                toplamucret+=ekstraurun;
	                j++; 
	                
                       }
                       
					printf("Toplam ucret %d'dir. Yine bekleriz.",toplamucret);
					break;
	        
	             case 0:
	             	iyigunler();
					 break; }
					 break;
	       
	       case 0:
	       iyigunler();
	       	break;
			}
			}
		
			}
			
			
	        
       
  
	else {
		int devam;
		long telefon;
	   	char ad[50];
    	char soyad[50];
    	char adres[50],ozelnot[50],adsoyad[50];
	printf("Lutfen ad soyad bilginizi giriniz:\n");
	scanf("%s",&adsoyad);
	printf("Telefon numaranizi giriniz.\n");
	scanf("%d",&telefon);
	strcpy(ad,"Musteri");
	strcpy(soyad,"Adi:");
	strcat(ad,soyad);
	printf(ad);
	printf("%s",&adsoyad);
	printf("\n");
    printf("%ld",&telefon);
	printf("\n");
	printf("Musteri bilgileri dogru ise devam ediniz D=1 Y=0:\n");
	scanf("%d",&devam);
	FILE *musterilistesi;
    int c;
    musterilistesi = fopen("musteri","w");
    if (musterilistesi == NULL) printf("Boyle bir dosya yok\n");
    else {
    do {
    	int i;
    fscanf(musterilistesi,"%d",&i);
	fprintf(musterilistesi,"%d",i);
    
    c = getc(musterilistesi);
    putchar(c); 
    } while (c != EOF);
     }
	
	if(devam==1) {
		
	printf("Bilgilerinizin dogru oldugu onaylanmistir.\n");
	
    printf("Adres bilginizi giriniz.\n");
	scanf("%s", &adres);
    printf("Yapmak istediginiz islemi seciniz:\n1=Yeni siparis olusturma\n2=Cikis yap\n");
	scanf("%d",&islem);
		
	
		switch(islem) {
	
			case 1:
				printf("Beden olculerinizi giriniz.\n");
				scanf("%d",&bedenolcusu);
				printf("Elbise kodunu katalogdan giriniz.\n");
				printf("-----KATALOG-----\n");
				int k,l;
				for(k=0;k<3;k++) {
				for (l=0;l<3;l++)	 		
						printf("%3d\n",dizi[k][l]);
									printf("\n");			
				}
				int urunekle2,j,i=2;
				printf("----------------\n");
	            scanf("%d",&elbisekod);
	            printf("Ozel bir isteginiz varsa not giriniz.\n");
	            scanf("%d",&ozelnot); 
	            fiyatbilgisi=(bedenolcusu*elbisekod)/3;
	            printf("Fiyat bilgisi %d TL'dir.", fiyatbilgisi);
	            toplamucret=fiyatbilgisi;
	            secim(2);
	             scanf("%d",&urunekle2);
	        	switch(urunekle2) {
	        		case 1:
	        	   j=0;
	        	    while(j<2) {
                    ekstraurun=0;
	        		printf("Beden olculerinizi giriniz.\n");
	                scanf("%d",&bedenolcusu);
	                printf("-----KATALOG-----\n");
				int k,l;
				for(k=0;k<3;k++) {
				for (l=0;l<3;l++)	 		
						printf("%3d\n",dizi[k][l]);
									printf("\n");			
				}
				printf("----------------\n");
	                scanf("%d",&elbisekod);
	                printf("Ozel bir isteginiz varsa not giriniz.\n");
	                scanf("%s",&ozelnot); 
	                ekstraurun=(bedenolcusu*elbisekod)/3;
	                printf("Fiyat bilgisi %d TL'dir.\n", ekstraurun); 
	                toplamucret+=ekstraurun;
	                j++; 
	                
                       }
                       
					printf("Toplam ucret %d'dir. Yine bekleriz.",toplamucret);
					break;
	                
	            case 0:
	             	printf("Toplam ucret %d'dir. Yine bekleriz.",fiyatbilgisi);
	                break;  
					  
					}
					
	            break;
	            
	         case 2:
	        	printf("Iyi gunler, yine bekleriz.");
	        	break;
	        	
	        	default: printf("Gecersiz islem. Tekrar deneyin.");
	        	break; 
	        
				} } 
				
				else {
					printf("Bilgileriniz yanlis, lutfen tekrar deneyin.");
				}
			
				}
	           	
	
	return 0;
}
