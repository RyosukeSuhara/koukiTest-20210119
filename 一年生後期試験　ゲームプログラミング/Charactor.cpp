#include"Charactor.h"
#include<iostream>
using namespace std;

//コンストラクタ
Charactor::Charactor() {
	hp = 100;
	at = 5;
	RockPower = 3;
	PaperPower = 3;
	ScissorsPower = 3;
}

//ダメージを受ける関数
void Charactor::Damage(int OpponentAttack) {
	hp -= OpponentAttack;
}

//列挙体からint型に変換する関数
int Charactor::ChangeNum(CharactorHund hund) {
	if (hund == P_Rock) {
		return 0;
	}
	else if (hund == P_Scissors) {
		return 1;
	}
	else if (hund == P_Paper) {
		return 2;
	}
}

