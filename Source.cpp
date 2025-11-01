#include <iostream>

using namespace std;
int tong(int a, int b);
<<<<<<< HEAD
int hieu(int a, int b){
	return(a-b);
}
int tich(int a, int b);
=======
int hieu(int a, int b);
int tich(int a, int b){
	return a*b;
}
>>>>>>> d67d764dd7e8839359ee6fedcbddfaa8d5fd6177
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
<<<<<<< HEAD
	cout<<"Tong =";
	cout<<"Hieu =" << hieu(3,3)<<endl;
=======
	cout<<"Tich = " << tich(a, b) << endl;
>>>>>>> d67d764dd7e8839359ee6fedcbddfaa8d5fd6177
	system("pause");
	return 0;
}