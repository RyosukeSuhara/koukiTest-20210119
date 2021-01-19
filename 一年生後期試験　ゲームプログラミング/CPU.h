#pragma once
#include"Charactor.h"

class CPU : public Charactor {
public:
	//ステータス表示
	void ShowStatusCPU();
	//だした手を表示する
	void ShowHundCPU(CharactorHund a);
	//手を自動で決める関数
	CharactorHund AutoHund();
	//相手に与えるダメージを計算する関数
	int CPUAttack(CharactorHund KindOfWinnerHund);
};
