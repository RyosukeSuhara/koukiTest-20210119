#pragma once
#include"Charactor.h"

class CPU : public Charactor {
public:
	//�X�e�[�^�X�\��
	void ShowStatusCPU();
	//���������\������
	void ShowHundCPU(CharactorHund a);
	//��������Ō��߂�֐�
	CharactorHund AutoHund();
	//����ɗ^����_���[�W���v�Z����֐�
	int CPUAttack(CharactorHund KindOfWinnerHund);
};
