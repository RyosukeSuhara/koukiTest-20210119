#pragma once
#include"Charactor.h"

class Player : public Charactor {
public:
	//ステータスを表示する関数
	void ShowStatusPlayer();
	//出した手を表示する関数
	void ShowHundPlayer(CharactorHund a);
	//出す手を選ぶ関数
	CharactorHund ChooseHund();
	//相手に与えるダメージを計算する関数
	int PlayerAttack(CharactorHund KindOfWinnerHund);
	//自分のキャラクターのステータスを分配する関数
	void DividedStatus();
};