#include <fstream>
#include  <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukan Nama File : ";
	cin >> NamaFile;

	//membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	while (true) {
		cout << "- ";
		getline(cin, baris);
		if (baris == "q") break;
		outfile << baris << endl;
	}
	outfile.close();

	//membuka file dalam mode membaca
	ifstream infile;

	//menunjuk kesebuah file
	infile.open(NamaFile + ".txt", ios::in);

	cout << endl << ">= Membuka dan membaca file " << endl;
	//jika file ada maka 
	if (infile.is_open())
	{
		while (getline(infile, baris))
		{
			cout << baris << '\n';
		}
		infile.close();
	}
	//jika tidak ditemukan file maka akan menampilkan ini
	else cout << "Unable to open file";
	return 0;
}