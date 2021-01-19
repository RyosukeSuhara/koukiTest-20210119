#include <iostream>
#include"Player.h"
#include"CPU.h"
#include"judgement.h"

///////////////////////////////////////////////////
//
//　　　　　　　　　ルール
//
// キャラクター2体でじゃんけんをして、勝った方が
// 手の攻撃力に応じたダメージを相手に与えられる
// 先に相手を倒したほうの勝ち
//
///////////////////////////////////////////////////


int main()
{
    Player player;
    CPU cpu;
    Judgement judgement;
    Player::CharactorHund playerHund;
    CPU::CharactorHund cpuHund;
    int judgeResult;
    int damageNum;

    while (true) {
        player.ShowStatusPlayer();
        cpu.ShowStatusCPU();

        playerHund = player.ChooseHund();
        cpuHund = cpu.AutoHund();

        player.ShowHundPlayer(playerHund);
        cpu.ShowHundCPU(cpuHund);

        judgeResult = judgement.Buttle(player.ChangeNum(playerHund), cpu.ChangeNum(cpuHund));

        if (judgeResult == 1) {
            damageNum = player.PlayerAttack(playerHund);
            cpu.Damage(damageNum);
        }
        else if (judgeResult == 2) {
            damageNum = cpu.CPUAttack(cpuHund);
            player.Damage(damageNum);
        }
        else {
            judgement.HundDraw();
        }

        if (player.hp < 0) {
            judgement.CPUWin();
            break;
        }
        else if (cpu.hp < 0) {
            judgement.PlayerWin();
            break;
        }
    }
}


