#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {      //prosedur input
    while (true) {
        cout << "Masukkan Jumlah Data Pada Array: ";        //input jumlah element
        cin >> n;        //memanggil inputan n

        if (n <= 20) {      //kondisi n tidak lebih dari 20
            break;
        }
        else {
            cout << "\nArray yang anda masukkan maksimal 20 element. \n";       //Menampilkan pesan berlebih
        }
    }
    cout << endl;       //membuat jarak
    cout << "===================================" << endl;      //tampilan
    cout << "MASUKKAN ELEMENT ARRAY" << endl;                   //tampilan
    cout << "===================================" << endl;      //tampilan

    for (int i = 0;i < n; i++) {                    //menggunakan perulangan untuk menyimpan
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

int main()
{
    std::cout << "Hello World!\n";
}

