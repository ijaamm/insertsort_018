#include <iostream>
using namespace std;

int arr[20];			//membuat array dengan panjan data 20 
int n;					//membuat variable inputan n

void input() {			//prosedur input
	while (true)
	{
		cout << "Masukan Jumlah Data pada Array : "; //membuat inputan jumlah element array
		cin >> n;									 //memanggil variable inputan n

		if (n <= 20) {								//membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 Elemen.\n"; //menampilkan pesan jika data lebih dari 20 
		}
	}
	cout << endl;													//membuat jarak per baris program
	cout << "=====================" << endl;						//membuat tampilan susunan data element array 
	cout << "Masukan Element Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++)										//menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";						//memasukan atau menginputkan nilai data n
		cin >> arr[i];												//menyimpan nilai data n kedalam array arr
	}
}

void insertionsort() {												//prosedure insertionsort

	int temp;														//membuat variable data temporer atau penyimpanan sementara 
	int j;															//membuat variable j sebagai penanda

	for (int i = 1; i < n; i++) {									//looping dengan i di mulai dari 1 hingga n-1

		temp = arr[i];												//simpan nilai arr[i] ke variable sementara temp

		j = i - 1;													//setting nilai j sama dengan i-1

		while (j >= 0 && arr[j] > temp)								//looping while dimana nilai j lebih besar sma dengan 0 dan
																	//arr[j] lebih besar dari pada temp
		{
			arr[j + 1] = arr[j];									//simpan arr[j] kedalam variable arr(j+1)
			j++;													//decreement nilai j by 1
		}

		arr[j + 1] = temp;											//simpan nilai temp dalam arr(j+1)

		cout << "\nStep " << i << ": ";								//output ke layar
		for (int k = 0; k < n; k++) {								//looping nilai k di mulai dari 0 hingga n-1
			cout << arr[k] << " ";									//output ke layar
		}
	}
}

void display() {													//prosedur display
	cout << endl;
	cout << "\n=================================" << endl;
	cout << "Element array yang telah tersusun" << endl;
	cout << "=================================" << endl;

	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << endl;
}

int main()
{
	input();
	insertionsort();
	display();

}