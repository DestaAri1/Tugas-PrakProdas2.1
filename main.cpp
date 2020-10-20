/* Desta Ari Alfananda */
/* 20051397008 */
/* 2020B */

#include <iostream>
#include <conio.h>
#include <math.h>
#include <string.h>


using namespace std;

int main()
{
    string up = "--------------------------------------";
    int a, t, katakunci, awal, akhir, yn;
    float luas, keliling, s_mrg;

    cout << "          Program Menghitung Segitiga " << endl;
    cout << "***********************************************" << endl;
    cout << " Pilih Bagian Segitiga Yang Ingin Dihitung"<<endl;
    cout << " 1. Sisi Miring"<<endl;
    cout << " 2. Keliling"<<endl;
    cout << " 3. Luas"<<endl;
    cout << " 4. Program Berhenti" << endl;
    cout << " Masukkan Angkanya = "; cin >> katakunci;
    cout << up << endl;

    switch(katakunci){
    case 1:
        {
            cout << " Masukkan Alas (Sisi Pertama) = "; cin >> a;
            cout << " Masukkan Tinggi (Sisi Kedua) = "; cin >> t;
            s_mrg = sqrt ((a * a) + (t * t));
            cout << " Jadi Sisi Miringnya yaitu "<< s_mrg << " cm"<<endl;
            cout << up;
            break;
        }
    case 2:
        {
            cout << " Masukkan Alas (Sisi Pertama) = "; cin >> a;
            cout << " Masukkan Tinggi (Sisi Kedua) = "; cin >> t;
            s_mrg = sqrt ((a * a) + (t * t));
            keliling = s_mrg + a + t;
            cout << " Jadi Kelilingnya yaitu "<< keliling << " cm"<<endl;
            cout << up;
            break;
        }
    case 3:
        {
            cout << " Masukkan Alas (Sisi Pertama) = "; cin >> a;
            cout << " Masukkan Tinggi (Sisi Kedua) = "; cin >> t;
            luas = 0.5 * a * t;
            cout << " Jadi Luasnya yaitu "<< luas << " cm persegi"<<endl;
            cout << up;
            break;
        }
    case 4:
        {
            cout << "Terimakasih";
            exit(0);
            break;
        }
    }
    cout << up << endl;
    cout << "Terimakasih";
    return 0;
}

