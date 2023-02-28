#include<iostream>

using namespace std;

int main(){
	
	
	bool devamdurumu;
	int vize, kisasinav_1, kisasinav_2, odev, final;
		
	float ortalama;
	
	
	cout<<"ogrencinin devam durumunu giriniz(devamsizliktan kaldi ise 0 kalmadi ise 1)"<<endl;
	cin>>devamdurumu;
	
	if(devamdurumu==1){
	
	
	cout<<"ogrencinin vize notunu giriniz...:"<<endl;
	cin>>vize;
	cout<<"ogrencinin birinci kisa sinav notunu giriniz...:"<<endl;
	cin>>kisasinav_1;
	cout<<"ogrencinin ikinci kisa sinav notunu giriniz...:"<<endl;
	cin>>kisasinav_2;
	cout<<"ogrencinin odev notunu giriniz...:"<<endl;
	cin>>odev;
	cout<<"ogrencinin final notunu giriniz...:"<<endl;
	cin>>final;
	
	ortalama=(float)vize*(0.35)+0.05*((float)kisasinav_1+(float)kisasinav_2+(float)odev)+(float)final*0.5;
	
	cout<<"ogrencinin ortalamasi...:"<<ortalama<<endl;
	
	
	if(ortalama<=39.9&&ortalama>=0)
	{
		cout<<"Harf Notu: FF"<<endl;
	}
	
	else if(ortalama<=49.9&&ortalama>=40)
	{
		cout<<"Harf Notu: FD"<<endl;
	}
	
	else if(ortalama<=57.99&&ortalama>=50)
	{
		cout<<"Harf Notu: DD"<<endl;
	}
	
	
	else if(ortalama<=64.99&&ortalama>=58)
	{
		cout<<"Harf Notu: DC"<<endl;
	}
	
	else if(ortalama<=74.99&&ortalama>=65)
	{
		cout<<"Harf Notu: CC"<<endl;
	}
	
		else if(ortalama<=79.99&&ortalama>=75)
	{
		cout<<"Harf Notu: CB"<<endl;
	}
			else if(ortalama<=84.99&&ortalama>=80)
	{
		cout<<"Harf Notu: BB"<<endl;
	}
	
				else if(ortalama<=89.99&&ortalama>=85)
	{
		cout<<"Harf Notu: BA"<<endl;
	}
	
					else if(ortalama<=100&&ortalama>=90)
	{
		cout<<"Harf Notu: AA"<<endl;
	}
	
	}
	
	else 
	cout<<"ogrenci devamsizliktan kaldi Harf Notu: DZ  q:("<<endl;
	
	
}
