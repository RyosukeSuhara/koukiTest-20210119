#include"Player.h"
#include<iostream>
#include<ctime>
using namespace std;

//���݂̃v���C���[�̃X�e�[�^�X�\��
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
	srand(time(NULL));
	//��S�̈ꌂ����p
	int critical = rand() % 10;
	int criticalBuff = 1;

	cout << endl;
	cout << "���Ȃ��̂�������!" << endl;

	if (critical == 7) {
		cout << "��S�̈ꌂ���I" << endl;
		criticalBuff = 2;
	}
	if (KindOfWinnerHund == P_Rock) {
		cout << "�����" << at * RockPower * criticalBuff << "�_���[�W�^����!" << endl;
		cout << endl;
		return at * RockPower * criticalBuff;
	}
	else if (KindOfWinnerHund == P_Scissors) {
		cout << "�����" << at * ScissorsPower * criticalBuff << "�_���[�W�^����!" << endl;
		cout << endl;
		return at * ScissorsPower * criticalBuff;
	}
	else if (KindOfWinnerHund == P_Paper) {
		cout << "�����" << at * PaperPower * criticalBuff << "�_���[�W�^����!" << endl;
		cout << endl;
		return at * PaperPower * criticalBuff;
	}
}

void Player::DividedStatus() {
	int rockNum;
	int scissorsNum;
	int paperNum;
	int restNum = 9;
	cout << endl;
	cout << "�����̃L�����N�^�[�̂��ꂼ��̎�̋�����U�蕪���Ă��������I�������A�e���l�Œ�P�͐U�蕪���Ă�������" << endl;
	cout << "�U�蕪�����鐔�l�@�F�@�X" << endl;
	cout << endl;

	while (true) {
		cout << "�O�[�ɂ����U�蕪���܂����H" << endl;
		cin >> rockNum;
		if (rockNum < restNum - 1 && 0 < rockNum) {
			restNum -= rockNum;
			break;
		}
		else {
			cout << "���̐��l�͎g���܂���" << endl;
		}
	}
	cout << "�O�[�F " << rockNum << endl;

	cout << endl;
	cout << "�c��̐U�蕪���\���@�F" << restNum << endl;

	while (true) {
		cout << "�`���L�ɂ����U�蕪���܂����H" << endl;
		cin >> scissorsNum;
		if (scissorsNum < restNum && 0 < scissorsNum) {
			restNum -= scissorsNum;
			break;
		}
		else {
			cout << "���̐��l�͎g���܂���" << endl;
		}
	}
	paperNum = restNum;
	cout << "�O�[�F " << rockNum << "�`���L�F " << scissorsNum << "�p�[�F " << paperNum << endl;

	//�͂̐��l�����߂��l�ɏ�������
	RockPower = rockNum;
	ScissorsPower = scissorsNum;
	PaperPower = paperNum;
}