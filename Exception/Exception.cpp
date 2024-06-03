#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan
#include <array>
using namespace std;

int main()
{
	cout << "Awal Program" << endl; //penanda 1:....
	try {
		array<int, 3> data{ 1, 2, 3 };
		//pesan array integer 3 elemen
		cout << data.at(5) << endl;
	}
	catch (exception& e) {
		//penangkapan menggunakan obyek exception
		cout << e.what() << endl;
	}
	cout << "Baris Program Yang Terakhir" << endl;
	//*penanda 2: bahwa program berjalan tanpa berhenti
}