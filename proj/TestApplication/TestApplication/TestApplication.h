﻿
// TestApplication.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'stdafx.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CTestApplicationApp:
// このクラスの実装については、TestApplication.cpp を参照してください
//

class CTestApplicationApp : public CWinApp
{
public:
	CTestApplicationApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CTestApplicationApp theApp;
