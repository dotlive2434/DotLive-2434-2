#pragma once

class CManager;

//�V�[���̊��N���X

class CScene
{
protected:
	CManager *manager;
public:
	CScene(CManager* pManager) { manager = pManager; };
	virtual ~CScene() {};
	//�`��
	virtual void Update() {};
	//�X�V
	virtual void Draw() {};
};
//�V�[���Ǘ��N���X
class CManager
{
	CScene* scene;
	CManager(char* pKey) {
		key = pKey;
	};
	~CManager() {
		delete scene;
	};
	char* GetKey() {
		return key;
	};
	//�L�[
	char* key;
public:
	//���̃V�[���̃|�C���^
	CScene* scene;
	CManagaer(char* pKey)
	{
		key = pKey;
	};
	~CManager()
	{
		delete scene;
	};
	char* GetLye()
	{
		return key;
	};
	//�X�V
	void Draw()
	{
		scene->Draw();
	}
};

	
