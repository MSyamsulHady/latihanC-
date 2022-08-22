#include  <iostream>
using namespace std;
int main()
{
int luas,a,s,p,l,t,r,pil;
float phi=3.14;

cout<<"\t\t\t\hitung luas yang di bawah\n\n";
cout<<"\t\t======================================="<<endl;
cout<<"[1] persegi\n";
cout<<"[2] persegi panjang\n";
cout<<"[3] segitiga\n";
cout<<"[4] jajar genjang\n";
cout<<"[5] lingkaran\n";
cout<<"silahkan pilih :" ; cin>>pil;
switch (pil) {
	case 1:
	cout<<"1. menghitung luas persegi\n"<<endl;
	cout<<"masukan sisi  :";
	cin>>s;
	luas=s*s;
	cout<<"luas persegi adalah : "<<luas<<endl;
	break;


	case 2:
	cout<<"2.menghitung luas persegi panjang\n"<<endl;
	cout<<"masukan  panjang :";
	cin>>p;
	cout<<"masukan  lebar:";
	cin>>l;
	luas=p*l;
	cout<<"luas persegi panjang : "<<luas<<endl;
	break;

	case 3:
	cout<<"3.menghitung luas segitiga\n";
	cout<<"masukan alas :";
	cin>>a;
	cout<<"masukan tinggi :";
	cin>>t;
	luas=a*t*0.5;
	cout<<"luas segi tiga adalah : "<<luas<<endl;
	break;
	
	case 4:
		cout<<"4.menghitung luas jajar genjang\n";
		cout<<"masukan alas :";
		cin>>a;
		cout<<"masukan tinggi :";
		cin>>t;
		luas=a*t;
		cout<<"luas jajar genjang adalah :"<<luas<<endl;
		break;
		
	case 5:
		cout<<"5.menghitung luas lingkaran\n";
		cout<<"masukan jari jari :";
		cin>>r;
		luas=phi*r*r;
		cout<<"luas lingkaran adalah :"<<luas<<endl;
		break;
	cout<<endl;
     }

  
}

