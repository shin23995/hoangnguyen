#include<iostream>
using namespace std;
void main()
{
	long n;
	double s=0, x;
	cout<<" Nhap vao so nguyen duong n: ";
	cin>>n;
	if (n <= 0)
	{
		cout<<" Ban da nhap khong dung' yeu cau"<< endl;
		cout<<" Vui lonng thuc hien lai";
		return;
	}
	for (double i=1; i<=n; i++)
	{
		x=1/(i*i);
		s+= x;
	}
	cout<<" Ket qua tong binh phuong nghich dao la: "<< s<< endl;
}