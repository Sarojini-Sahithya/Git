#include<iostream>
using namespace std;
void display(int *ptr,int n);
int main()
{
	int arr[5] = {1,2,3,4,5};
	display(arr,5);
	return 0;
}
void display(int *ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<ptr[i]<<endl;
	}
}
