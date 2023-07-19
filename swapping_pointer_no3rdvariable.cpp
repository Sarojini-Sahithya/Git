#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int *ptr1,*ptr2;
	cin>>a>>b;
	ptr1 = &a;
	ptr2 = &b;
	cout<<"Before Swapping a,b are "<<a<<" "<<b<<endl;
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
	cout<<"After Swapping a,b are "<<a<<" "<<b<<endl;
	return 0;
}
