#include "framework.h"


int main() {
	string fsName;
	string fsPath;
	cout << "파일 경로를 정해주세요. (상대경로)" << endl;
	cin >> fsPath;

	cout << "바꿀 이름을 정해주세요." << endl;

	cin >> fsName;

	int i = 0;
	for (const auto& entry : fs::directory_iterator(fsPath)) {
		string npath = fsName + "0" + to_string(i++) + entry.path().extension().string();
		fs::rename(entry, npath);
	}

	return 0;



}