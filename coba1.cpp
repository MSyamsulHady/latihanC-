#include <iostream>
using namespace std;
int main()
{
    int nilaiUAS,nilaiUTS,kehadiran,tugas;
    string Nama,Kelas;

    cout << "Input 1 - 100 " << endl;
    cout << "====================================" << endl;
    cout << "Masukkan Nama:";
	cin >> Nama;
	cout << "Masukkan Kelas:";
	cin >> Kelas;
	cout << "Masukan nilai kehadiran : ";
    cin >> kehadiran;
    cout << "Masukan nilai tugas : ";
    cin >> tugas;
    cout << "Masukan nilai UTS : ";
    cin >> nilaiUTS;
    cout << "Masukan nilai UAS : ";
    cin >> nilaiUAS;

    cout << "\n================================================================"
            "\nProsentase nilai kehadiran = 10% ntugas = 20% nuts = 30% nuas=40%"
            "\n================================================================" << endl;

    float h_kehadiran = kehadiran*0.1,
        h_tugas = tugas*0.2,
        h_nilaiUTS = nilaiUTS*0.3,
        h_nilaiUAS = nilaiUAS*0.4,
        hasil = h_kehadiran+h_tugas+h_nilaiUTS+h_nilaiUAS;
    if(hasil < 0 || hasil > 100){
        cout << "\nHASIL EROR, KARENA DATA INPUT TIDAK SESUAI !" << endl;
    }
    else{
        cout   << "\nnama  : " << Nama
		 << "\nkelas     : " << Kelas
		 << "\nkehadiran : " << h_kehadiran
         << "\ntugas     : " << h_tugas
         << "\nuts       : " << h_nilaiUTS
         << "\nuas       : " << h_nilaiUAS
         << "\njumlah    : " << hasil;

        if(hasil <= 19){
            cout << "\nHuruf     : E ";
        }
        else if(hasil <= 39){
            cout << "\nHuruf     : D ";
        }
        else if(hasil <= 59){
            cout << "\nHuruf     : C ";
        }
        else if(hasil <= 79){
            cout << "\nHuruf     : B ";
        }
        else if(hasil <= 85){
            cout << "\nHuruf     : A ";
        }
        else if(hasil >=90){
        	cout << "\nHuruf     :A+ ";
		}
    }
}

