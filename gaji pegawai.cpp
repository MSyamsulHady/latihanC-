#include<iostream>
using namespace std;
int main()
{
	int gaji_bersih, gaji_pokok,tunjangan_anak,tunjangan_beras,zakat,golongan,nip,pil;
	string ulang, nama_pegawai;
	cout<<"HITUNG GAJI PEGAWAI"<<endl;
	do{
	cout<<"==============================="<<endl;
	cout<<"MASUKAN NAMA PEGAWAI :";
	cin>>nama_pegawai;
	cout<<"MASUKAN NIP :";
	cin>>nip;
	cout<<"GAJI POKOK = TERGANTUG GOLONGAN YANG DIPILIH !"<<endl;
	cout<<"TUNJANGAN ANAK = 10%"<<endl;
	cout<<"TUNJANGAN BERAS = 25%"<<endl;
	cout<<"ZAKAT =20% "<<endl;
	cout<<"DARI  GAJI POKOK "<<endl;
	cout<<"PILIH GOLONGAN PEGAWAI :"<<endl;
	cout<<"=============================="<<endl;
	cout<<"[1] GOLONGAN 1 \n";
	cout<<"[2] GOLONGAN 2 \n";
	cout<<"[3] GOLONGAN 3 \n";
	cout<<"[4] GOLONGAN 4 \n";
	cout<<"[5] GOLONGAN 5 \n";
	cout<<"SILAHKAN PILIH GOLONGAN :"; cin>>pil;
	switch (pil){
		case 1:
		cout<<"1.golongan 1\n"<<endl;
		gaji_pokok=1794900;
		tunjangan_anak=gaji_pokok*0.1;
		tunjangan_beras=gaji_pokok*0.25;
		zakat=gaji_pokok*0.2;
		cout<<"GAJI POKOK = 1.794.900"<<endl;
		cout<<"TUNJANGAN ANAK = "<<tunjangan_anak<<endl;
		cout<<"TUNJANGAN BERAS = "<<tunjangan_beras<<endl;
		cout<<"ZAKAT = "<<zakat<<endl;
		gaji_bersih=gaji_pokok+tunjangan_anak+tunjangan_beras-zakat;
		cout<<"GAJI PEGAWAI TERSEBUT ADALAH : "<<gaji_bersih<<endl;
		break;
		
		case 2:
		cout<<"2.golongan 2\n"<<endl;
		cout<<"GAJI POKOK = 1.960.200"<<endl;
		gaji_pokok = 1960200;
		tunjangan_anak=gaji_pokok*0.1;
		tunjangan_beras=gaji_pokok*0.25;
		zakat=gaji_pokok*0.2;
		cout<<"TUNJANGAN ANAK = "<<tunjangan_anak<<endl;
		cout<<"TUNJANGAN BERAS = "<<tunjangan_beras<<endl;
		cout<<"ZAKAT = "<<zakat<<endl;
		gaji_bersih= gaji_pokok+tunjangan_anak+tunjangan_beras-zakat;
		cout<<"GAJI PEGAWAI TERSEBUT ADALAH : "<<gaji_bersih<<endl;
		break;
		
		case 3:
		cout<<"3.golongan 3\n"<<endl;
		cout<<"GAJI POKOK = 2.043.200"<<endl;
		gaji_pokok=2043200;
		tunjangan_anak=gaji_pokok*0.1;
		tunjangan_beras=gaji_pokok*0.25;
		zakat=gaji_pokok*0.2;
		cout<<"TUNJANGAN ANAK = "<<tunjangan_anak<<endl;
		cout<<"TUNJANGAN BERAS = "<<tunjangan_beras<<endl;
		cout<<"ZAKAT = "<<zakat<<endl;
		gaji_bersih=gaji_pokok+tunjangan_anak+tunjangan_beras-zakat;
		cout<<"GAJI PEGAWAI TERSEBUT ADALAH : "<<gaji_bersih<<endl;
		break;
		
		case 4:
		cout<<"4.golongan 4\n"<<endl;
		cout<<"GAJI POKOK = 2.129.500"<<endl;
		gaji_pokok=2129500;
		tunjangan_anak=gaji_pokok*0.1;
		tunjangan_beras=gaji_pokok*0.25;
		zakat=gaji_pokok*0.2;
		cout<<"TUNJANGAN ANAK = "<<tunjangan_anak<<endl;
		cout<<"TUNJANGAN BERAS = "<<tunjangan_beras<<endl;
		cout<<"ZAKAT = "<<zakat<<endl;
		gaji_bersih=gaji_pokok+tunjangan_anak+tunjangan_beras-zakat;
		cout<<"GAJI PEGAWAI TERSEBUT ADALAH : "<<gaji_bersih<<endl;
		break;
		case 5:
		cout<<"5.golongan 5\n"<<endl;
		cout<<"GAJI POKOK = 2.325.000"<<endl;
		gaji_pokok=2325000;
		tunjangan_anak=gaji_pokok*0.1;
		tunjangan_beras=gaji_pokok*0.25;
		zakat=gaji_pokok*0.2;
		cout<<"TUNJANGAN ANAK = "<<tunjangan_anak<<endl;
		cout<<"TUNJANGAN BERAS = "<<tunjangan_beras<<endl;
		cout<<"ZAKAT = "<<zakat<<endl;
		gaji_bersih=gaji_pokok+tunjangan_anak+tunjangan_beras-zakat;
		cout<<"GAJI PEGAWAI TERSEBUT ADALAH : "<<gaji_bersih<<endl;
		break;
	}
	
		cout<<"====================================="<<endl;
	
		cout<<"ULANG MENGHITUNG GAJI PEGAWAI ? y/n  ==" ;
		cin>>ulang;
	}while (ulang =="y" || ulang =="Y");
	 cout<<"TRIMAKASIH BESTHYYY "<<endl;
	
	
}
