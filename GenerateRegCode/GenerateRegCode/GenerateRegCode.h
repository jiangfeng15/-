// GenerateRegCode.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once


#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������
#include "DuiFrameDlg.h"

// CGenerateRegCodeApp:
// �йش����ʵ�֣������ GenerateRegCode.cpp
//

class CGenerateRegCodeApp : public CWinApp
{
public:
	CGenerateRegCodeApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
	CDuiFrameDlg m_duiFrame;
};

extern CGenerateRegCodeApp theApp;