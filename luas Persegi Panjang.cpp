#Include<iostream>
using namespace std;

int main(){
	int panjang, lebar, keliling, luas;
	cout<<"Program Menghitung Luas dan Keliling Persegi Panjang"<<endl;
	cout<<"Masukan panjang persegi panjang:";
	cin>>panjang;
	cout<<"Masukkan lebar persegi panjang:";
	cin>>lebar;
	
	luas = panjang * lebar;
	Keliling = 2 * (panjang + lebar);
	
	cout<<"Luas Persegi Panjang ="<<luas<<endl;
	cout<<"Keliling persegi panjang ="<<keliling;
		
		return 0;
}
