#include <iostream>
using namespace std;
<<<<<<< HEAD
int tong(int a, int b);
int hieu(int a, int b)
{
	return a-b ;
}
=======
int tong(int a, int b)
return a+b ;
}
int hieu(int a, int b);
>>>>>>> 0eee0876598b6ba77a45afa7c85a9a529e95b17e

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
<<<<<<< HEAD
	if(phepToan == "-")
		cout<<"Hieu 2 so la: "<<hieu(a,b)<<endl;
=======
	if(phepToan == '+')
		cout<<"Tong 2 so la: "<<tong(a,b)<<endl;
>>>>>>> 0eee0876598b6ba77a45afa7c85a9a529e95b17e
	system("pause");
	return 0;
}