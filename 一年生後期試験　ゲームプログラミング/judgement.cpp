#include"judgement.h"
#include<iostream>
using namespace std;

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

void Judgement::HundDraw() {
	cout << endl;
	cout << "あいこだ！" << endl;
	cout << endl;
}

void Judgement::PlayerWin() {
	cout << "あなたの勝ちです" << endl;
}

void Judgement::CPUWin() {
	cout << "あなたの負けです" << endl;
}