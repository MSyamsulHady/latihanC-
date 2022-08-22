#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	string nama_barang;
	long int harga, jumlah, jumlah_bayar, jumlah_beli, total, uang_bayar, uang_kembali;
	float ppn;
	
	cout<<"Toko Elektronik Sejahtera "<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"Masukan Nama_Barang: ";
	cin>>nama_barang;
	cout<<"Masukan harga_Barang: ";
	cin>>harga;
	cout<<"masukan jumlah beli: ";
	cin>>jumlah_beli;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	
	system("CLS");
	cout<<"Toko Elektronik Sejahtera    "<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"nama   barang:  "<< nama_barang<<endl;
	cout<<"harga barang:"<<harga<<endl;
	cout<<"jumlah beli:"<<jumlah_beli<<endl;
	jumlah_bayar =harga * jumlah_beli;
	cout<<"jumlah bayar:" << jumlah_bayar <<endl;
	ppn=(jumlah_bayar * 11/100);
	cout<<"ppn : "<<  ppn <<endl;
	total=ppn + jumlah_bayar;
	cout<<"total bayar :"<<total<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	char status;
	do{
		cout<<"uang bayar:";
		cin>>uang_bayar;
		if(uang_bayar>=total){
		uang_kembali =uang_bayar - total;
		cout<<"uang_kembali: "<<uang_kembali<<endl;
		cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"TERIMAKASIH ATAS KUNJUNGANNYA";
		break;
		}else{
		cout<<"uang anda kurang :"<<total - uang_bayar<<endl;
		cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;	
		}
		cout<<"Ulangi ?";
		cin >> status;
		
  	}
  	while(status == 'y' || status == 'Y');
  
  
}

	

