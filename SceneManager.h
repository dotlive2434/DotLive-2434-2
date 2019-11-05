#pragma once

class CManager;

//シーンの基底クラス

class CScene
{
protected:
	CManager *manager;
public:
	CScene(CManager* pManager) { manager = pManager; };
	virtual ~CScene() {};
	//描画
	virtual void Update() {};
	//更新
	virtual void Draw() {};
};
//シーン管理クラス
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
	//キー
	char* key;
public:
	//今のシーンのポインタ
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
	//更新
	void Draw()
	{
		scene->Draw();
	}
};

	
