// week10-1.cpp SOIT108_Advance_002
#include <iostream>
using namespace std;
int isPrime(int N){
	for (int i=2;i<N;i++){ // 只被1跟本身整除
		if(N%i==0) return 0;
	}
	return 1;
}
int main()
{
	int a,b;
	cin >> a >> b;
	int ans = 0;
	for (int i=a;i<=b;i++){ // a...b
		if (isPrime(i)) ans++; // 判斷質數
	}
	cout << ans << "\n";
}
