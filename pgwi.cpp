#include <iostream>

using namespace std;

int main(){
	char gol;
	string nama, nip;
	int gapok, anak, beras, zakat, ttl;
	cout << "Masukkan nama : ";
	cin >> nama;
	cout << "Masukkan NIP : ";
	cin >> nip;
	cout << "Masukkan golongan : ";
	cin >> gol;
	
	switch (gol){
		case '1':
			gapok = 1794900;
			anak = gapok * 0.1;
			beras = gapok * 0.25;
			zakat = gapok * 0.2;
			break;
		case '2':
			gapok = 1960200;
			anak = gapok * 0.1;
			beras = gapok * 0.25;
			zakat = gapok * 0.2;
			break;
		case '3':
			gapok = 2043200;
			anak = gapok * 0.1;
			beras = gapok * 0.25;
			zakat = gapok * 0.2;
			break;
		case '4':
			gapok = 2129500;
			anak = gapok * 0.1;
			beras = gapok * 0.25;
			zakat = gapok * 0.2;
			break;
		case '5':
			gapok = 2325200;
			anak = gapok * 0.1;
			beras = gapok * 0.25;
			zakat = gapok * 0.2;
			break;
		default:
			cout << "Hanya ada golongan 1 sampai 5";
	}
	
	cout << "Nama : "<<nama<<endl;
	cout << "NIP: "<<nip<<endl;
	cout << "Gaji Pokok : "<<gapok<<endl;
	cout << "Tunjangan anak : "<< anak<<endl;
	cout << "Tunjangan beras : "<< beras<<endl;
	cout << "Zakat : "<< zakat<<endl;
	ttl =  gapok + anak + beras - zakat;
	cout << "Total Gaji bersih : "<< ttl << endl;
}

