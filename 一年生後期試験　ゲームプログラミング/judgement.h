#pragma once

class Judgement {
public:
	//どちらがじゃんけんに勝ったか判定する関数
	int Buttle(int a, int b);
	//じゃんけんが引き分けだった時に呼ばれる関数
	void HundDraw();
	//CPUの体力が０になったら呼ばれる関数
	void PlayerWin();
	//Playerの体力が０になったら呼ばれる関数
	void CPUWin();
};
