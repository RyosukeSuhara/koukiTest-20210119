#pragma once

class Charactor {
public:
	//キャラクターのHP
	int hp;
	//キャラクターのAT（攻撃力）
	int at;

public:
	//じゃんけんの手
	enum CharactorHund {
		P_Rock = 0,
		P_Scissors = 1,
		P_Paper = 2
	};

public:
	//手ごとの攻撃力
	int RockPower;
	int ScissorsPower;
	int PaperPower;

public:
	//コンストラクタ
	Charactor();

	//ダメージを受ける関数
	void Damage(int OpponentAttack);

	//列挙体をint型に変換する関数
	int ChangeNum(CharactorHund hund);

};