#pragma once
#include"Charactor.h"

class Player : public Charactor {
public:
	//�X�e�[�^�X��\������֐�
	void ShowStatusPlayer();
	//�o�������\������֐�
	void ShowHundPlayer(CharactorHund a);
	//�o�����I�Ԋ֐�
	CharactorHund ChooseHund();
	//����ɗ^����_���[�W���v�Z����֐�
	int PlayerAttack(CharactorHund KindOfWinnerHund);
	//�����̃L�����N�^�[�̃X�e�[�^�X�𕪔z����֐�
	void DividedStatus();
};