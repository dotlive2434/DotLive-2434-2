#include "DxLib.h"
#include "Player.h"
#include "GetKey.h"

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}
	ChangeWindowMode(TRUE);//ウィンドウモードにせってい 
	SetDrawScreen(DX_SCREEN_BACK);//描画先を裏画面に設定
	//classの宣言
	Player c_player;
	GetKey c_getkey;
	//
	c_player.Loadgraphic();
	while (1)
	{
		if (ProcessMessage() != 0)
		{
			break;//ウィンドウの罰ボタンが押されたらループを抜ける		}
		}
		ClearDrawScreen();//画面を消す
		c_getkey.update();
		c_player.Move();
		c_player.Drawgraphic();
		c_getkey.Key_pres();
		ScreenFlip();
	}

	WaitKey();				// キー入力待ち

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}
