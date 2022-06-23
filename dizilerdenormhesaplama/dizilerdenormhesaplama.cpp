/************************************************************************
**                   SAKARYA ÜNÝVERSÝTESÝ
**                  FEN EDEBÝYAT FAKÜLTESÝ
**                    MATEMATÝK BÖLÜMÜ
**                 PROGRAMLAMAYA GÝRÝÞ DERSÝ
**
**                   ÖDEV NUMARASI....: 1
**                   ÖÐRENCÝ ADI......: SEVDENUR AK
**                   ÖÐRENCÝ NUMARASI.: B180200034
**                   DERS GRUBU.......: 1
*************************************************************************/               



#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
	
	int satirsayisi, sutunsayisi;
	
	cout<<"Normunu hesaplamak istediginiz matrisin satir sayisini giriniz..:";
	cin>>satirsayisi;
	
	cout<<"Normunu hesaplamak istediginiz matrisin sutun sayisini giriniz..:";
	cin>>sutunsayisi;
	
	int secim;
	
	do {
		
		cout<<"1-Normunu hesaplamak icin 1 e basiniz..:"<<endl;
		cout<<"Sonsuz-Normunu hesaplamak icin 2 ye basiniz..:"<<endl;
		cout<<"Frobenius-Normunu hesaplamak icin 3 e basiniz..:"<<endl;
		cout<<"Programdan cikmak <sonlandirmak> icin 0 basiniz..:"<<endl;
		
		cin>>secim;
		
		//Sýfýra basýnca programdan çýkma iþlemidir.
		
		if(secim == 0)
		{
			break;
		}
		
		//Geçersiz seçim yapýldýðýnda seçimi tekrarlama iþlemidir.
		
		else if(secim>3)
		{
			system("cls");
			
			cout<<"Gecersiz bir secim yaptiniz. Lutfen tekrar deneyiniz."<<endl;
			continue;
		}
		
		int A[satirsayisi][sutunsayisi];     // Verilen matris A olsun.
		
		cout<<"A matrisinin bilesenlerini giriniz..:"<<endl;
		
		//A matrisinin bileþenlerini girme iþlemidir. (i satýr sayýsýna , j sütun sayýsýna karþýlýk gelir.)
		
		for(int i=0; i<satirsayisi; i++)
		{
			for(int j=0; j<sutunsayisi; j++)
			{
				cout<<"A["<<i<<"]["<<j<<"]=";
				cin>>A[i][j];
			}
		}
		
		//1-Normu hesaplama iþlemidir.
		
		if (secim == 1) //Seçim 1 olduðunda gerçekleþecek iþlem.
		{
			int toplamlar[sutunsayisi];
		    	for (int j=0; j<sutunsayisi; j++)
			
			{
				int toplam=0;
			    	for (int i=0; i<satirsayisi; i++)
				{
					toplam += abs(A[i][j]); //A matrisinin mutlak deðerlerinin toplamýný, 'toplam' iþleminin içine atma.
				}
			        toplamlar[j]= toplam; //A matrisinin sütundaki elelmanlarýnýn toplamýný, 'toplamlar' iþleminin içine atma.
			}
			
			//Matrisin ilk elemanýný en büyük kabul edelim.
			
			int enbuyuk = toplamlar[0]; 
			   for (int j=1; j< sutunsayisi; j++)
			   
			   { 
			         //En büyük eleman j inci elemandan küçük ise, en büyük eleman j olur.
			         
			             if (enbuyuk < toplamlar[j])
			                 enbuyuk = toplamlar[j];
			       
			   }
			  
			cout<<"Dizinin 1-Normu..: "<<enbuyuk<<endl;
			
		}
		
		//Sonsuz-Normu hesaplama iþlemidir.
		
		else if (secim == 2) //Seçim 2 olduðunda gerçekleþecek iþlem.
		{
			int toplamlar[satirsayisi];
			    for (int i= 0; i<satirsayisi; i++)
			    {
			    	int toplam = 0;
			    	    for (int j=0; j<sutunsayisi; j++)
			    	    {
			    	    	toplam += abs(A[i][j]); //A matrisinin mutlak deðerlerinin toplamýný, 'toplam' iþleminin içine atma.
						}
						
						toplamlar[i] = toplam; //A matrisinin satýrdaki elelmanlarýnýn toplamýný, 'toplamlar' iþleminin içine atma.
				}
				
				//Matrisin ilk elemanýný en büyük kabul edelim
				
				int enbuyuk = toplamlar[0];
				    for (int i=1; i<satirsayisi; i++)
				    {
				    	//En büyük eleman i inci elemandan küçük ise, en büyük eleman i olur.
				    	
				    	if (enbuyuk < toplamlar[i])
				    	    enbuyuk = toplamlar[i];
					}
					
			cout<<"Dizinin Sonsuz-Normu..:"<<enbuyuk<<endl; 
			
		}
		
	//Frobenius-Normunu hesaplama iþlemidir.
	
    	else if(secim == 3) //Seçim 3 olduðunda gerçekleþecek iþlem.
	   {
	    	int toplam=0;
	    	    for(int i=0; i<satirsayisi; i++)
		        {
		        	for(int j=0; j<sutunsayisi; j++)
		        	{
		        	     toplam += A[i][j]*A[i][j]; // A matrisinin elemanlarýnýn karesini alýp toplama ve 'toplam' iþleminin içine atma.
					}
		    	      
		     	}
		     	
		     	cout<<"Dizinin Frobenius-Normu..:"<<sqrt(toplam)<<endl; // 'Toplam' iþleminin karekökünü alýp yazma iþlemidir.
    	}
	
	cout<<"Devam etmek istiyorsaniz 1 e, istemiyorsaniz herhangi bir sayiya basiniz..:"<<endl;
	cin>>secim;
	
	if(secim == 1) // Tekrar iþlem yapýlmak isteniyorsa 1 e basýlmalýdýr.
    	{
    		continue;
    	}
	
	else if(secim != 1) // Ýþlem sonlandýrýlmak isteneniyorsa 1 den farklý bir tuþa basýlmalýdýr.
    	{
    		break;
	    }
	
		
	}while(1==1);
	
	
	system("PAUSE");
	
	return 0;
}
