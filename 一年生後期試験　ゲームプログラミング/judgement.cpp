#include"judgement.h"
#include<iostream>
using namespace std;

//じゃんけんの勝敗をつける関数
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

//あいこだった時に呼ばれる関数
void Judgement::HundDraw() {
	cout << endl;
	cout << "あいこだ！" << endl;
	cout << endl;
}

//CPUのHPが０になったら呼ばれる関数
void Judgement::PlayerWin() {
	cout << "あなたの勝ちです" << endl;
}

//PlayerのHPが０になったら呼ばれる関数
void Judgement::CPUWin() {
	cout << "あなたの負けです" << endl;
}