#pragma once

class Charactor {
public:
	//�L�����N�^�[��HP
	int hp;
	//�L�����N�^�[��AT�i�U���́j
	int at;

public:
	//����񂯂�̎�
	enum CharactorHund {
		P_Rock = 0,
		P_Scissors = 1,
		P_Paper = 2
	};

public:
	//�育�Ƃ̍U����
	int RockPower;
	int ScissorsPower;
	int PaperPower;

public:
	//�R���X�g���N�^
	Charactor();

	//�_���[�W���󂯂�֐�
	void Damage(int OpponentAttack);

	//�񋓑̂�int�^�ɕϊ�����֐�
	int ChangeNum(CharactorHund hund);

};