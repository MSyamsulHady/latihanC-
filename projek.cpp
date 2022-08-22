#include <iostream>
using namespace std;
int main(){
	char nama_produk;
    long int harga_produk,jumlah_produk;
    float total;
	cout<<"loket pembayaran\n";
	cout<<"==========================\n\n"<<endl;
	cout<<"nama produk\n";
	cin>>nama_produk;
	cout<<"jumlah_produk\n";
	cin>>jumlah_produk;
	cout<<"harga produk\n";
	cin>>harga_produk;
	cout<<"total tagihan\n"; cin>>total;
	total=jumlah_produk*harga_produk ;
	cout<<"total tagihan ="<<total<<endl;
	cout<<"=======================================";
	cout<<"terimakasih atas kunjungannya";
	
	system("CLS");
	cout<<"loket pembayaran\n";
	cout<<"==========================\n\n"<<endl;
	cout<<"nama barang :"<<nama_produk<<endl;
	cout<<"jumlah produk :"<<jumlah_produk<<endl;
	cout<<"harga produk :"<<harga_produk<<endl;
	cout<<"total tagihan "<<total<<endl;
	
	
}

