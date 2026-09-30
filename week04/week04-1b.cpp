// week04-1b.cpp SOIT108_Advance_008
// C++ version
#include <iostream>
#include <algorithm> // week04 today!!
#include <vector> // week03
using namespace std;
int main()
{
	vector<int> a(10); // week04 today!!
	for (int i=0;i<10;i++){
		cin >> a[i];
	}
	sort (a.begin(),a.end()); // week04 today!!
	for (int i=9;i>=0;i--){
		cout << a[i] << ' ';
	}
}
