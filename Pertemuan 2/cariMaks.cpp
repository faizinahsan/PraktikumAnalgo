#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int CariMaks(int x[], int n){
	int i =0;
	int maks = x[0];
	while(i<n){
		if (x[i]>maks)
		{
			maks = x[i];
		}
		i++;
	}
	return maks;
}

int main()
{
	int n;
	cout<<"Berapa angka yang ingin diinput?";
	cin>>n;
	int x[n];
	cout<<"Input the Nilai";
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>x[i];
	}
	auto start = high_resolution_clock::now();
	cout<<"Nilai Maks adalah"<<CariMaks(x,n)<<endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop-start);
	cout<<"Time taken by function: "<< duration.count()<<" nanoseconds"<<endl;	/* code */
	return 0;
}