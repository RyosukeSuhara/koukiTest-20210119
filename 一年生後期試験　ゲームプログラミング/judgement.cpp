#include"judgement.h"
#include<iostream>
using namespace std;

//‚¶‚á‚ñ‚¯‚ñ‚ÌŸ”s‚ğ‚Â‚¯‚éŠÖ”
int Judgement::Buttle(int a, int b) {
	if (a == b) {
		return 0;
	}
	else if ((a == 0 && b == 1) || (a == 1 && b == 2) || (a == 2 && b == 0)) {
		return 1;
	}
	else {
		return 2;
	}
}

//‚ ‚¢‚±‚¾‚Á‚½‚ÉŒÄ‚Î‚ê‚éŠÖ”
void Judgement::HundDraw() {
	cout << endl;
	cout << "‚ ‚¢‚±‚¾I" << endl;
	cout << endl;
}

//CPU‚ÌHP‚ª‚O‚É‚È‚Á‚½‚çŒÄ‚Î‚ê‚éŠÖ”
void Judgement::PlayerWin() {
	cout << "‚ ‚È‚½‚ÌŸ‚¿‚Å‚·" << endl;
}

//Player‚ÌHP‚ª‚O‚É‚È‚Á‚½‚çŒÄ‚Î‚ê‚éŠÖ”
void Judgement::CPUWin() {
	cout << "‚ ‚È‚½‚Ì•‰‚¯‚Å‚·" << endl;
}