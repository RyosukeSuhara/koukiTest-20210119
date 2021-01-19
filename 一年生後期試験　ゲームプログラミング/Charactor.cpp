#include"Charactor.h"
#include<iostream>
using namespace std;

Charactor::Charactor() {
	hp = 100;
	at = 5;
	RockPower = 3;
	PaperPower = 3;
	ScissorsPower = 3;
}

void Charactor::Damage(int OpponentAttack) {
	hp -= OpponentAttack;
}

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

