#include "framework.h"


int main() {
	string fsName;
	string fsPath;
	cout << "���� ��θ� �����ּ���. (�����)" << endl;
	cin >> fsPath;

	cout << "�ٲ� �̸��� �����ּ���." << endl;

	cin >> fsName;

	int i = 0;
	for (const auto& entry : fs::directory_iterator(fsPath)) {
		string npath = fsName + "0" + to_string(i++) + entry.path().extension().string();
		fs::rename(entry, npath);
	}

	return 0;



}