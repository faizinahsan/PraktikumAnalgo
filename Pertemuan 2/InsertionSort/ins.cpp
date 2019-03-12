#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void insertionSort(int x[]){
	int i,j,insert;
	int n= 10;
	for (i = 1; i < n; i++)
	{
		insert = x[i];
		j=i-1;
		while((j>=0)&&(x[j]>insert)){
			x[j+1] = x[j];
			j=j-1;
		}
		x[j+1] = insert;
	}
}
void printArr(int x[]){
	for (int i = 0; i < 10; ++i)
	{
		cout<<x[i]<<" ";
	}
}
int main()
{
	int x[10] = {1,3,2,4,10,9,8,6,7,5};
	cout<<"Before Sort"<<endl;
	printArr(x);
	insertionSort(x);
	cout<<"\nAfter Sort"<<endl;
	printArr(x);
	return 0;
}