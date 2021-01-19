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
// 勝った手の強さ　*　攻撃力
//
// で与えるダメージが決まる
//
// ただし、１０％の確率で会心の一撃となり
// その場合与えるダメージが２倍になる
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

    //プレイヤーにステータスを決めてもらう
    player.DividedStatus();

    //勝負がつくまでループする
    while (true) {
        //お互いのステータスを表示する
        player.ShowStatusPlayer();
        cpu.ShowStatusCPU();

        //お互いの手を決定する
        playerHund = player.ChooseHund();
        cpuHund = cpu.AutoHund();

        //お互いの出した手を表示する
        player.ShowHundPlayer(playerHund);
        cpu.ShowHundCPU(cpuHund);

        //じゃんけんの勝敗判定をする
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

        //どちらかのHPが０になっていたら終了
        if (player.hp <= 0) {
            judgement.CPUWin();
            break;
        }
        else if (cpu.hp <= 0) {
            judgement.PlayerWin();
            break;
        }
    }
}