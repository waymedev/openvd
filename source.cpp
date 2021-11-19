#include <iostream>
using namespace std;
<<<<<<< HEAD
int tong(int a, int b);
int hieu(int a, int b)
{
	return a-b ;
}
=======
int tong(int a, int b){
return a+b ;
}
int hieu(int a, int b);
>>>>>>> 0eee0876598b6ba77a45afa7c85a9a529e95b17e
<<<<<<< HEAD

int tich(int a, int b){
=======
int tich(int a, int b){	
>>>>>>> 46df20562a9204047c48cdb7a4e100a2250dcabd
	return a*b;
}

int ktraChanLe(int a){
	return a%2;
}

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,*) ";
	cin >> phepToan;
<<<<<<< HEAD
	if(phepToan == "-")
		cout<<"Hieu 2 so la: "<<hieu(a,b)<<endl;
=======
	if(phepToan == '+')
		cout<<"Tong 2 so la: "<<tong(a,b)<<endl;
>>>>>>> 0eee0876598b6ba77a45afa7c85a9a529e95b17e
	
	if(phepTinh == '*')
		cout<<"Tich 2 so la: "<<tich(a,b)<<endl;

	if(ktraChanLe == 1)
		cout<<"a la so le"<<endl;
	else 
		cout<<"a la so chan"<<endl;
	system("pause");
	return 0;
}