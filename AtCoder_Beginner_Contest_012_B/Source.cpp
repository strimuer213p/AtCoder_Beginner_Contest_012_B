/*
問題文
高橋君は、お風呂で湯船に浸かった秒数を数える習慣があります。
今日は、高橋君は湯船で N 秒まで数えました。
しかし、秒だと解りにくいので、何時間何分何秒、という形に直したいです。
秒数 N が与えられるので、 hh:mm:ss の形式に変換しなさい。
*/

#include<iostream>
#include<string>
#include<array>

int main() {
	int n;
	std::array<std::string, 3> ar;
	std::cin >> n;

	ar[0]=std::to_string(n / 3600);
	ar[1]=std::to_string(n % 3600 / 60);
	ar[2]=std::to_string(n % 3600 % 60);

	for (int i = 0; i < ar.size(); i++) {
		if (ar[i].size() == 1) {
			ar[i] = "0" + ar[i];
		}
	}

	std::cout << ar[0] + ":" + ar[1] + ":" + ar[2] << std::endl;
	
	return 0;
}