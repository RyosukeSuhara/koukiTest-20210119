#include"CPU.h"
#include<iostream>
#include<ctime>
using namespace std;

//相手のステータスを表示する関数
void CPU::ShowStatusCPU() {
	cout << "対戦相手の現在のHP :" << hp << " AT :" << at << endl;
	cout << "手の攻撃力 グー" << RockPower << " チョキ" << ScissorsPower << " パー" << PaperPower << endl;
}

//出した手を表示する関数
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

//手を自動で決める関数
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

//攻撃判定をする関数
//１０％の確率でダメージが２倍になる
int CPU::CPUAttack(CharactorHund KindOfWinnerHund) {
	srand(time(NULL));
	//会心の一撃判定用
	int critical = rand() % 10;
	int criticalBuff = 1;

	cout << endl;
	cout << "相手の攻撃！" << endl;

	if (critical == 7) {
		cout << "会心の一撃だ！" << endl;
		criticalBuff = 2;
	}
	if (KindOfWinnerHund == P_Rock) {
		cout << "あなたは" << at * RockPower * criticalBuff << "ダメージ受けた!" << endl;
		cout << endl;
		return at * RockPower * criticalBuff;
	}
	else if (KindOfWinnerHund == P_Scissors) {
		cout << "あなたは" << at * ScissorsPower * criticalBuff << "ダメージ受けた!" << endl;
		cout << endl;
		return at * ScissorsPower * criticalBuff;
	}
	else if (KindOfWinnerHund == P_Paper) {
		cout << "あなたは" << at * PaperPower * criticalBuff << "ダメージ受けた!" << endl;
		cout << endl;
		return at * PaperPower * criticalBuff;
	}
}