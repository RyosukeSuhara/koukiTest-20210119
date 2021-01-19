#pragma once
#include"Charactor.h"

class Player : public Charactor {
public:
	void ShowStatusPlayer();
	void ShowHundPlayer(CharactorHund a);
	CharactorHund ChooseHund();
	int PlayerAttack(CharactorHund KindOfWinnerHund);
};