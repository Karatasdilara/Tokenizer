/*Dilara Karata� 02200201044*/
#include <stdio.h> 
#include <stdlib.h> 
 
int main() 
{ 
    short RAM [256];
    char Komutlar[200];
    FILE *dosya;
    int i,k;
    char c;
    char ad[20];
    printf("Dosya isminin .txt olarak giriniz\n"); //dosya ismini al�yoruz
    scanf("%s",ad);
    dosya=fopen(ad,"r");
    c=fgetc(dosya);
    while (c!=EOF){
        Komutlar[i]=c;     //dosyay� diziye atama i�lemi yap�yoruz
        i++;
        c=fgetc(dosya);}
    int j; 
    for(j=0;j<=i;j++){
        printf("%c",Komutlar[j] );  //kaynak kodun kendisini ekrana yazd�r�yoruz
		if(i==j){
		printf("\n");
		}	                     
    }
    for(j=0;j<i;j++){
    	if(Komutlar[j]==' '){
    		Komutlar[j]=Komutlar[j+1]; //bo�luklar� siliyoruz
    		j++;
		}
		if(Komutlar[j]=='('||Komutlar[j]==')'){     //kelimele�tirme i�lemini yap�yoruz
			printf(",%c,",Komutlar[j]);
	    }
	    else if(Komutlar[j]=='-'||Komutlar[j]=='+'||Komutlar[j]=='/'||Komutlar[j]=='*'){
	    	if(Komutlar[j+1]=='+'||Komutlar[j+1]=='-'){
	    		printf(",%c%c",Komutlar[j],Komutlar[j+1]);
	    		j++;
			}
			else{
				printf(",%c,",Komutlar[j]);
			}
		}
		else if(Komutlar[j]=='='||Komutlar[j]=='<'||Komutlar[j]=='>'){
			if(Komutlar[j+1]=='='){
				printf(",%c%c,",Komutlar[j],Komutlar[j+1]);
				j++;
			}
			else{
				printf(",%c,",Komutlar[j]);
			}
		}
		else if(Komutlar[j]=='{'||Komutlar[j]=='}'){
			printf("%c,",Komutlar[j]);
		}
		else if(Komutlar[j]=='['||Komutlar[j]==']'){
			printf("%c,",Komutlar[j]);
		}
		else if(Komutlar[j]=='^'||Komutlar[j]=='%'){
			printf("%c,",Komutlar[j]);
		}
		else if(Komutlar[j]=='&&'||Komutlar[j]=='||'){
			printf("%c,",Komutlar[j]);
		}
		else if(Komutlar[j]=='#'){
			printf("%c,",Komutlar[j]);
		}
		else if(Komutlar[j]==';'){
			printf(",%c,",Komutlar[j]);
		}
		else if(Komutlar[j]<10){
			if(Komutlar[j+1]<10){
				printf(",%c%c,",Komutlar[j],Komutlar[j+1]);
			}
			else{
				printf(",%c,",Komutlar[j]);
			}
		}
		else{
			printf("%c",Komutlar[j]);
		}
		
    }
    return 0; 
} 
