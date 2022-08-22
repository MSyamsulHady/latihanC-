#include <iostream>

using namespace std;
int main()

{

    int  a,b,hasil,pilihan ;
	cout<<"\t\t\"OPERASI ARITMATIKA\n\n"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"[1] penjumlahan"<<endl;
	cout<<"[2] pengurangan"<<endl;
	cout<<"[3] perkalian"<<endl;
	cout<<"[4] pembagian"<<endl;
	cout<<"Masukan Pilihan :" ; 
	cin>>pilihan;
	cout<<endl;
	switch (pilihan) {

	
	
	case 1:
		cout<<"1. Penjumlahan\n\n";
		cout<<"Masukan Nilai 1 :";
		cin>>a;
		cout<<"Masukan Nilai 2 :";
		cin>>b;
		cout<<" Hasil penjumlahan"<<1<<"+"<<2<< " Adalah :"<<endl;
		break;
		
	case 2:
		cout<<"2. Pengurangan\n\n";
		cout<<"Masukan Nilai 1 :";
		cin>>a;
		cout<<"Masukan Nilai 2 :";
		cin>>b;
		cout<<" Hasil pengurangan"<<1<<"-"<<2<< " Adalah :"<<endl;
		break;
		
	case 3:
		cout<<"3. Perkalian\n\n";
		cout<<"Masukan Nilai 1 :";
		cin>>a;
		cout<<"Masukan Nilai 2 :";
		cin>>b;
		cout<<" Hasil Perkalian"<<1<<"+"<<2<< " Adalah :"<<endl;
	break;
		
		case 4:
		cout<<"4. Pembagian\n\n"<<endl;
		cout<<"Masukan Nilai 1 :";
		cin>>a;
		cout<<"Masukan Nilai 2 :";
		cin>>b;
		cout<<" Hasil pembagian"<<1<<"+"<<2<< " Adalah :"<<endl;
		break;
		cout<<endl;
		
   }    
}

int penjumlahan(int a, int b, int *hasil)
 {
    	*hasil=a+b;
    	return(*hasil);
    
}
int pengurangan(int a, int b, int *hasil) {
	*hasil=a-b;
		return(*hasil);
}
int perkalian(int a, int b, int *hasil) {
	*hasil=a*b;
		return(*hasil);
}
int pembagian(int a, int b, int *hasil) {
	*hasil=a/b;
		return(*hasil);
}


