#include"CPU.h"
#include<iostream>
#include<ctime>
using namespace std;

void CPU::ShowStatusCPU() {
	cout << "�ΐ푊��̌��݂�HP :" << hp << " AT :" << at << endl;
	cout << "��̍U���� �O�[" << RockPower << " �`���L" << ScissorsPower << " �p�[" << PaperPower << endl;
}

void CPU::ShowHundCPU(CharactorHund a) {
	if (a == P_Rock) {
		cout << "�ΐ푊��̎�̓O�[�ł�" << endl;
	}
	else if (a == P_Scissors) {
		cout << "�ΐ푊��̎�̓`���L�ł�" << endl;
	}
	else if (a == P_Paper) {
		cout << "�ΐ푊��̎�̓p�[�ł�" << endl;
	}
}

Charactor::CharactorHund CPU::AutoHund() {
	srand(time(NULL));
	int randomHund = rand() % 3;

	if (randomHund == 0) {
		return P_Rock;
	}
	else if (randomHund == 1) {
		return P_Scissors;
	}
	else if (randomHund == 2) {
		return P_Paper;
	}
}

int CPU::CPUAttack(CharactorHund KindOfWinnerHund) {
	cout << endl;
	cout << "����̍U���I" << endl;
	if (KindOfWinnerHund == P_Rock) {
		cout << "���Ȃ���" << at * RockPower << "�_���[�W�󂯂�!" << endl;
		cout << endl;
		return at * RockPower;
	}
	else if (KindOfWinnerHund == P_Scissors) {
		cout << "���Ȃ���" << at * ScissorsPower << "�_���[�W�󂯂�!" << endl;
		cout << endl;
		return at * ScissorsPower;
	}
	else if (KindOfWinnerHund == P_Paper) {
		cout << "���Ȃ���" << at * PaperPower << "�_���[�W�󂯂�!" << endl;
		cout << endl;
		return at * PaperPower;
	}
}