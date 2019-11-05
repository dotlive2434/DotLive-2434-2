#include "DxLib.h"
#include "Player.h"
#include "GetKey.h"

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	if (DxLib_Init() == -1)		// �c�w���C�u��������������
	{
		return -1;			// �G���[���N�����璼���ɏI��
	}
	ChangeWindowMode(TRUE);//�E�B���h�E���[�h�ɂ����Ă� 
	SetDrawScreen(DX_SCREEN_BACK);//�`���𗠉�ʂɐݒ�
	//class�̐錾
	Player c_player;
	GetKey c_getkey;
	//
	c_player.Loadgraphic();
	while (1)
	{
		if (ProcessMessage() != 0)
		{
			break;//�E�B���h�E�̔��{�^���������ꂽ�烋�[�v�𔲂���		}
		}
		ClearDrawScreen();//��ʂ�����
		c_getkey.update();
		c_player.Move();
		c_player.Drawgraphic();
		c_getkey.Key_pres();
		ScreenFlip();
	}

	WaitKey();				// �L�[���͑҂�

	DxLib_End();				// �c�w���C�u�����g�p�̏I������

	return 0;				// �\�t�g�̏I�� 
}
