#include"Player.h"
#include<iostream>
using namespace std;

void Player::ShowStatusPlayer() {
	cout << "���Ȃ��̌��݂�HP :" << hp << " AT :" << at << endl;
	cout << "��̍U���� �O�[" << RockPower << " �`���L" << ScissorsPower << " �p�[" << PaperPower << endl;
}

void Player::ShowHundPlayer(CharactorHund a) {
	if (a == P_Rock) {
		cout << "���Ȃ��̎�̓O�[�ł�" << endl;
	}
	else if (a == P_Scissors) {
		cout << "���Ȃ��̎�̓`���L�ł�" << endl;
	}
	else if (a == P_Paper) {
		cout << "���Ȃ��̎�̓p�[�ł�" << endl;
	}
}

Charactor::CharactorHund Player::ChooseHund() {
	//CharactorHund�^����cin���@�\���Ȃ����߈�xint�^�ɂ��Ă���
	int setHund;
	cout << "�����o���܂����H�@0:�O�[�@1:�`���L�@2:�p�[" << endl;
	cin >> setHund;

	if (setHund == 0) {
		return P_Rock;
	}
	else if (setHund == 1) {
		return P_Scissors;
	}
	else if (setHund == 2) {
		return P_Paper;
	}
	else {
		cout << "�Ԉ�����l����͂��Ă��܂��B������x���͂��Ă�������" << endl;
		ChooseHund();
	}
}

int Player::PlayerAttack(CharactorHund KindOfWinnerHund) {
	cout << endl;
	cout << "���Ȃ��̂�������!" << endl;
	if (KindOfWinnerHund == P_Rock) {
		cout << "�����" << at * RockPower << "�_���[�W�^����!" << endl;
		cout << endl;
		return at * RockPower;
	}
	else if (KindOfWinnerHund == P_Scissors) {
		cout << "�����" << at * ScissorsPower << "�_���[�W�^����!" << endl;
		cout << endl;
		return at * ScissorsPower;
	}
	else if (KindOfWinnerHund == P_Paper) {
		cout << "�����" << at * PaperPower << "�_���[�W�^����!" << endl;
		cout << endl;
		return at * PaperPower;
	}
}