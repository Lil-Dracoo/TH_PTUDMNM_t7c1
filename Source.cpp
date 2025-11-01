#include <iostream>

using namespace std;
<<<<<<< HEAD
int tong(int a, int b);
<<<<<<< HEAD
int hieu(int a, int b){
	return(a-b);
}
int tich(int a, int b);
=======
=======
int tong(int a, int b){
	return a+b;
}
>>>>>>> 3899096ccfa74e628014d8cebca00f4cd45090be
int hieu(int a, int b);
int tich(int a, int b){
	return a*b;
}
>>>>>>> d67d764dd7e8839359ee6fedcbddfaa8d5fd6177
float thuong(int a, int b);
int main()
{
	int a, int b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
<<<<<<< HEAD
<<<<<<< HEAD
	cout<<"Tong =";
	cout<<"Hieu =" << hieu(3,3)<<endl;
=======
=======
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Tong = "<<tong(a,b)<<endl;
>>>>>>> 3899096ccfa74e628014d8cebca00f4cd45090be
	cout<<"Tich = " << tich(a, b) << endl;
>>>>>>> d67d764dd7e8839359ee6fedcbddfaa8d5fd6177
	system("pause");
	return 0;
}