#include <iostream>

using namespace std;
<<<<<<< HEAD

int tong(int a, int b){
	return a+b;
}

int hieu(int a, int b){
	return(a-b);
}
int tich(int a, int b){
	return a*b;
}

=======
int tong(int a, int b){
	return a+b;
}
int hieu(int a, int b);
int tich(int a, int b);
>>>>>>> 0ed6472 (tong)
float thuong(int a, int b);
int main()
{
	int a, int b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
<<<<<<< HEAD
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Tong = "<<tong(a,b)<<endl;
	cout<<"Hieu = "<<hieu(a,b)<<endl;
	cout<<"Tich = " << tich(a, b) << endl;
	cout<<endl;
	cout<<"Tam2";

=======
	cout<<"Tong = "<<tong(3,1)<<endl;
>>>>>>> 0ed6472 (tong)
	system("pause");
	return 0;
}