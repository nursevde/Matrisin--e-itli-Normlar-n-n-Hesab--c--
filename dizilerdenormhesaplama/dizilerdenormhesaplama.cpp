/************************************************************************
**                   SAKARYA �N�VERS�TES�
**                  FEN EDEB�YAT FAK�LTES�
**                    MATEMAT�K B�L�M�
**                 PROGRAMLAMAYA G�R�� DERS�
**
**                   �DEV NUMARASI....: 1
**                   ��RENC� ADI......: SEVDENUR AK
**                   ��RENC� NUMARASI.: B180200034
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
		
		//S�f�ra bas�nca programdan ��kma i�lemidir.
		
		if(secim == 0)
		{
			break;
		}
		
		//Ge�ersiz se�im yap�ld���nda se�imi tekrarlama i�lemidir.
		
		else if(secim>3)
		{
			system("cls");
			
			cout<<"Gecersiz bir secim yaptiniz. Lutfen tekrar deneyiniz."<<endl;
			continue;
		}
		
		int A[satirsayisi][sutunsayisi];     // Verilen matris A olsun.
		
		cout<<"A matrisinin bilesenlerini giriniz..:"<<endl;
		
		//A matrisinin bile�enlerini girme i�lemidir. (i sat�r say�s�na , j s�tun say�s�na kar��l�k gelir.)
		
		for(int i=0; i<satirsayisi; i++)
		{
			for(int j=0; j<sutunsayisi; j++)
			{
				cout<<"A["<<i<<"]["<<j<<"]=";
				cin>>A[i][j];
			}
		}
		
		//1-Normu hesaplama i�lemidir.
		
		if (secim == 1) //Se�im 1 oldu�unda ger�ekle�ecek i�lem.
		{
			int toplamlar[sutunsayisi];
		    	for (int j=0; j<sutunsayisi; j++)
			
			{
				int toplam=0;
			    	for (int i=0; i<satirsayisi; i++)
				{
					toplam += abs(A[i][j]); //A matrisinin mutlak de�erlerinin toplam�n�, 'toplam' i�leminin i�ine atma.
				}
			        toplamlar[j]= toplam; //A matrisinin s�tundaki elelmanlar�n�n toplam�n�, 'toplamlar' i�leminin i�ine atma.
			}
			
			//Matrisin ilk eleman�n� en b�y�k kabul edelim.
			
			int enbuyuk = toplamlar[0]; 
			   for (int j=1; j< sutunsayisi; j++)
			   
			   { 
			         //En b�y�k eleman j inci elemandan k���k ise, en b�y�k eleman j olur.
			         
			             if (enbuyuk < toplamlar[j])
			                 enbuyuk = toplamlar[j];
			       
			   }
			  
			cout<<"Dizinin 1-Normu..: "<<enbuyuk<<endl;
			
		}
		
		//Sonsuz-Normu hesaplama i�lemidir.
		
		else if (secim == 2) //Se�im 2 oldu�unda ger�ekle�ecek i�lem.
		{
			int toplamlar[satirsayisi];
			    for (int i= 0; i<satirsayisi; i++)
			    {
			    	int toplam = 0;
			    	    for (int j=0; j<sutunsayisi; j++)
			    	    {
			    	    	toplam += abs(A[i][j]); //A matrisinin mutlak de�erlerinin toplam�n�, 'toplam' i�leminin i�ine atma.
						}
						
						toplamlar[i] = toplam; //A matrisinin sat�rdaki elelmanlar�n�n toplam�n�, 'toplamlar' i�leminin i�ine atma.
				}
				
				//Matrisin ilk eleman�n� en b�y�k kabul edelim
				
				int enbuyuk = toplamlar[0];
				    for (int i=1; i<satirsayisi; i++)
				    {
				    	//En b�y�k eleman i inci elemandan k���k ise, en b�y�k eleman i olur.
				    	
				    	if (enbuyuk < toplamlar[i])
				    	    enbuyuk = toplamlar[i];
					}
					
			cout<<"Dizinin Sonsuz-Normu..:"<<enbuyuk<<endl; 
			
		}
		
	//Frobenius-Normunu hesaplama i�lemidir.
	
    	else if(secim == 3) //Se�im 3 oldu�unda ger�ekle�ecek i�lem.
	   {
	    	int toplam=0;
	    	    for(int i=0; i<satirsayisi; i++)
		        {
		        	for(int j=0; j<sutunsayisi; j++)
		        	{
		        	     toplam += A[i][j]*A[i][j]; // A matrisinin elemanlar�n�n karesini al�p toplama ve 'toplam' i�leminin i�ine atma.
					}
		    	      
		     	}
		     	
		     	cout<<"Dizinin Frobenius-Normu..:"<<sqrt(toplam)<<endl; // 'Toplam' i�leminin karek�k�n� al�p yazma i�lemidir.
    	}
	
	cout<<"Devam etmek istiyorsaniz 1 e, istemiyorsaniz herhangi bir sayiya basiniz..:"<<endl;
	cin>>secim;
	
	if(secim == 1) // Tekrar i�lem yap�lmak isteniyorsa 1 e bas�lmal�d�r.
    	{
    		continue;
    	}
	
	else if(secim != 1) // ��lem sonland�r�lmak isteneniyorsa 1 den farkl� bir tu�a bas�lmal�d�r.
    	{
    		break;
	    }
	
		
	}while(1==1);
	
	
	system("PAUSE");
	
	return 0;
}
