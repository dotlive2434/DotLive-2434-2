#include "DxLib.h"
#include "GetKey.h"
static int key[256];
 void GetKey::update()
{
	char tmpkey[256];
	GetHitKeyStateAll(tmpkey);
	for (int i = 0; i < 256; i++)
	{
		if (tmpkey[i] != 0)
		{
			key[i] ++;
		}
		else
		{
			key[i] = 0;
		}
	}
}

 int GetKey::Key_return(int KeyCode)
 {
	 return key[KeyCode];
 }

 void GetKey::Key_pres()
 {
	 GetHitKeyStateAll(nanika);
	 for (int i = 0; i < 256; i++)
	 {
		 if (nanika[i] != 0)
		 {
			 nanika[i] ++;
		 }
		 else
		 {
			 nanika[i] = 0;
		 }
	 }
		 DrawFormatString(10, 10 , GetColor(255, 255, 255), "キーの確認A:%d", nanika[KEY_INPUT_A]);
		 DrawFormatString(10, 30, GetColor(255, 255, 255), "キーの確認D:%d", nanika[KEY_INPUT_D]);
		 DrawFormatString(10, 50, GetColor(255, 255, 255), "キーの確認W:%d", nanika[KEY_INPUT_W]);
		 DrawFormatString(10, 70, GetColor(255, 255, 255), "キーの確認S:%d", nanika[KEY_INPUT_S]);
 }

