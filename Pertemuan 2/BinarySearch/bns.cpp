#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void binarySearch(){
	 const int Ar[10] = {1,2,3,4,5,6,7,8,9,10}; // untuk proses ascending
	 int tar;
	
	cout<<"masukan data yang dicari : ";
	 cin>>tar;
	int awal=0, akhir=10, tengah;
	
	
	 while (awal <= akhir)
	  { tengah = (awal + akhir)/2;
	  if (tar > Ar[tengah] )      // descending ubah tanda > menjadi <
	      { awal = tengah + 1; }
	  else if (tar < Ar[tengah])  // descending ubah tanda < menjadi >
	  {akhir= tengah - 1;}
	  else {awal = akhir +1;
	  }
	   }
	   if (tar == Ar[tengah])
	   {cout<<" Data ditemukan, Ke- "<<tengah+1<<endl;
	   }
	   else {
	    cout<<"target tidak ditemukan "<<endl;
	   }
}
int main() {
	auto start = high_resolution_clock::now();
	binarySearch();
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop-start);
	cout<<"Time taken by function: "
		<< duration.count()<<" microseconds"<<endl;

	return 0;
}
