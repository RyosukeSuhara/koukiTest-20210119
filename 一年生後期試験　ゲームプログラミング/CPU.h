#pragma once
#include"Charactor.h"

class CPU : public Charactor {
public:
	void ShowStatusCPU();
	void ShowHundCPU(CharactorHund a);
	CharactorHund AutoHund();
	int CPUAttack(CharactorHund KindOfWinnerHund);
};
