#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int SequentialSearch(int n,int y,int x[]){
	int i = 0,index=0;
	bool found = false;
	while((i<n)&&(found == false)){
		if (x[i] == y)
		{
			found = true;
		}else{
			i++;
		}
	}
	if (found == true)
	{
		index = i;
	}else{
		index = 0;
	}
	return index;
}

int main()
{
	int x[10] = {1,2,3,4,5,6,7,8,9,10};
	int y;
	cout<<"Input nilai yang ingin dicari: ";
	cin>>y;
	auto start = high_resolution_clock::now();
	cout<<"Nilai ditemukan di Index ke-"<<SequentialSearch(10,y,x)<<endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop-start);
	cout<<"Time taken by function: "<< duration.count()<<" nanoseconds"<<endl;
}