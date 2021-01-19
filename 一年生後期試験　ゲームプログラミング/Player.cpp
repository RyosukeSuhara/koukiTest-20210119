#include"Player.h"
#include<iostream>
using namespace std;

void Player::ShowStatusPlayer() {
	cout << "あなたの現在のHP :" << hp << " AT :" << at << endl;
	cout << "手の攻撃力 グー" << RockPower << " チョキ" << ScissorsPower << " パー" << PaperPower << endl;
}

void Player::ShowHundPlayer(CharactorHund a) {
	if (a == P_Rock) {
		cout << "あなたの手はグーです" << endl;
	}
	else if (a == P_Scissors) {
		cout << "あなたの手はチョキです" << endl;
	}
	else if (a == P_Paper) {
		cout << "あなたの手はパーです" << endl;
	}
}

Charactor::CharactorHund Player::ChooseHund() {
	//CharactorHund型だとcinが機能しないため一度int型にしている
	int setHund;
	cout << "何を出しますか？　0:グー　1:チョキ　2:パー" << endl;
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
		cout << "間違った値を入力しています。もう一度入力してください" << endl;
		ChooseHund();
	}
}

int Player::PlayerAttack(CharactorHund KindOfWinnerHund) {
	cout << endl;
	cout << "あなたのこうげき!" << endl;
	if (KindOfWinnerHund == P_Rock) {
		cout << "相手に" << at * RockPower << "ダメージ与えた!" << endl;
		cout << endl;
		return at * RockPower;
	}
	else if (KindOfWinnerHund == P_Scissors) {
		cout << "相手に" << at * ScissorsPower << "ダメージ与えた!" << endl;
		cout << endl;
		return at * ScissorsPower;
	}
	else if (KindOfWinnerHund == P_Paper) {
		cout << "相手に" << at * PaperPower << "ダメージ与えた!" << endl;
		cout << endl;
		return at * PaperPower;
	}
}