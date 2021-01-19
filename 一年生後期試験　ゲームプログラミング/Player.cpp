#include"Player.h"
#include<iostream>
#include<ctime>
using namespace std;

//現在のプレイヤーのステータス表示
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
	srand(time(NULL));
	//会心の一撃判定用
	int critical = rand() % 10;
	int criticalBuff = 1;

	cout << endl;
	cout << "あなたのこうげき!" << endl;

	if (critical == 7) {
		cout << "会心の一撃だ！" << endl;
		criticalBuff = 2;
	}
	if (KindOfWinnerHund == P_Rock) {
		cout << "相手に" << at * RockPower * criticalBuff << "ダメージ与えた!" << endl;
		cout << endl;
		return at * RockPower * criticalBuff;
	}
	else if (KindOfWinnerHund == P_Scissors) {
		cout << "相手に" << at * ScissorsPower * criticalBuff << "ダメージ与えた!" << endl;
		cout << endl;
		return at * ScissorsPower * criticalBuff;
	}
	else if (KindOfWinnerHund == P_Paper) {
		cout << "相手に" << at * PaperPower * criticalBuff << "ダメージ与えた!" << endl;
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
	cout << "自分のキャラクターのそれぞれの手の強さを振り分けてください！ただし、各数値最低１は振り分けてください" << endl;
	cout << "振り分けられる数値　：　９" << endl;
	cout << endl;

	while (true) {
		cout << "グーにいくつ振り分けますか？" << endl;
		cin >> rockNum;
		if (rockNum < restNum - 1 && 0 < rockNum) {
			restNum -= rockNum;
			break;
		}
		else {
			cout << "その数値は使えません" << endl;
		}
	}
	cout << "グー： " << rockNum << endl;

	cout << endl;
	cout << "残りの振り分け可能数　：" << restNum << endl;

	while (true) {
		cout << "チョキにいくつ振り分けますか？" << endl;
		cin >> scissorsNum;
		if (scissorsNum < restNum && 0 < scissorsNum) {
			restNum -= scissorsNum;
			break;
		}
		else {
			cout << "その数値は使えません" << endl;
		}
	}
	paperNum = restNum;
	cout << "グー： " << rockNum << "チョキ： " << scissorsNum << "パー： " << paperNum << endl;

	//力の数値を決めた値に書き換え
	RockPower = rockNum;
	ScissorsPower = scissorsNum;
	PaperPower = paperNum;
}