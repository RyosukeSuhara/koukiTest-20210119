#include"judgement.h"
#include<iostream>
using namespace std;

//����񂯂�̏��s������֐�
int Judgement::Buttle(int a, int b) {
	if (a == b) {
		return 0;
	}
	else if ((a == 0 && b == 1) || (a == 1 && b == 2) || (a == 2 && b == 0)) {
		return 1;
	}
	else {
		return 2;
	}
}

//���������������ɌĂ΂��֐�
void Judgement::HundDraw() {
	cout << endl;
	cout << "���������I" << endl;
	cout << endl;
}

//CPU��HP���O�ɂȂ�����Ă΂��֐�
void Judgement::PlayerWin() {
	cout << "���Ȃ��̏����ł�" << endl;
}

//Player��HP���O�ɂȂ�����Ă΂��֐�
void Judgement::CPUWin() {
	cout << "���Ȃ��̕����ł�" << endl;
}