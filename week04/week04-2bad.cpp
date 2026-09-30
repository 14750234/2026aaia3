/// week04-2bad.cpp 這個城市是對的，用進階C++迴圈
/// 但在 codeblocks出錯 ， warning: range-based for only available with ...
/// 2011年之後，只有在 -std=++11 或 -std=gnu+11才能用
/// 所以，需要改一下設定
/// 下面是week04的小考題目 SOIT_ADVANCE_012
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int now;
	for (int i=0;i<20;i++){
		cin >> now;
		if (now==0)break;
		a.push_back(now);
	}
	cin >> now;
	int ans=0;
	for (int num : a){ ///在codeblocks設定出錯時，永遠跑不出答案
		if (num==now)ans++;
	}
	cout << ans << "\n";
} /// 截圖時，請把 build messages 裡面藍色的 warning 也截圖進來
