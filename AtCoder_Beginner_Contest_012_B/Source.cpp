/*
��蕶
�����N�́A�����C�œ��D�ɐZ�������b���𐔂���K��������܂��B
�����́A�����N�͓��D�� N �b�܂Ő����܂����B
�������A�b���Ɖ���ɂ����̂ŁA�����ԉ������b�A�Ƃ����`�ɒ��������ł��B
�b�� N ���^������̂ŁA hh:mm:ss �̌`���ɕϊ����Ȃ����B
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