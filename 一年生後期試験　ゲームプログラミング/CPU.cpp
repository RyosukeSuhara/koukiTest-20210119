#include"CPU.h"
#include<iostream>
#include<ctime>
using namespace std;

void CPU::ShowStatusCPU() {
	cout << "対戦相手の現在のHP :" << hp << " AT :" << at << endl;
	cout << "手の攻撃力 グー" << RockPower << " チョキ" << ScissorsPower << " パー" << PaperPower << endl;
}

void CPU::ShowHundCPU(CharactorHund a) {
	if (a == P_Rock) {
		cout << "対戦相手の手はグーです" << endl;
	}
	else if (a == P_Scissors) {
		cout << "対戦相手の手はチョキです" << endl;
	}
	else if (a == P_Paper) {
		cout << "対戦相手の手はパーです" << endl;
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
	cout << "相手の攻撃！" << endl;
	if (KindOfWinnerHund == P_Rock) {
		cout << "あなたは" << at * RockPower << "ダメージ受けた!" << endl;
		cout << endl;
		return at * RockPower;
	}
	else if (KindOfWinnerHund == P_Scissors) {
		cout << "あなたは" << at * ScissorsPower << "ダメージ受けた!" << endl;
		cout << endl;
		return at * ScissorsPower;
	}
	else if (KindOfWinnerHund == P_Paper) {
		cout << "あなたは" << at * PaperPower << "ダメージ受けた!" << endl;
		cout << endl;
		return at * PaperPower;
	}
}