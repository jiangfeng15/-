// GenerateRegCode.cpp : ����Ӧ�ó��������Ϊ��
//

#include "stdafx.h"
#include "GenerateRegCode.h"
#include "GenerateRegCodeDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGenerateRegCodeApp

BEGIN_MESSAGE_MAP(CGenerateRegCodeApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CGenerateRegCodeApp ����

CGenerateRegCodeApp::CGenerateRegCodeApp()
{
	// TODO: �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CGenerateRegCodeApp ����

CGenerateRegCodeApp theApp;


// CGenerateRegCodeApp ��ʼ��

BOOL CGenerateRegCodeApp::InitInstance()
{
	// ���һ�������� Windows XP �ϵ�Ӧ�ó����嵥ָ��Ҫ
	// ʹ�� ComCtl32.dll �汾 6 ����߰汾�����ÿ��ӻ���ʽ��
	//����Ҫ InitCommonControlsEx()�����򣬽��޷��������ڡ�
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// ��������Ϊ��������Ҫ��Ӧ�ó�����ʹ�õ�
	// �����ؼ��ࡣ
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();

	AfxEnableControlContainer();

	// ��׼��ʼ��
	// ���δʹ����Щ���ܲ�ϣ����С
	// ���տ�ִ���ļ��Ĵ�С����Ӧ�Ƴ�����
	// ����Ҫ���ض���ʼ������
	// �������ڴ洢���õ�ע�����
	// TODO: Ӧ�ʵ��޸ĸ��ַ�����
	// �����޸�Ϊ��˾����֯��
	SetRegistryKey(_T("Ӧ�ó��������ɵı���Ӧ�ó���"));

	CPaintManagerUI::SetInstance(AfxGetInstanceHandle());
	CPaintManagerUI::SetResourcePath(CPaintManagerUI::GetInstancePath());
					
	m_duiFrame.Create(NULL, _T("DUIWnd"), UI_WNDSTYLE_FRAME, WS_EX_WINDOWEDGE);			
	m_pMainWnd = CWnd::FromHandle(m_duiFrame.GetHWND());
	m_duiFrame.CenterWindow();		
	m_duiFrame.ShowModal();
	
	//CGenerateRegCodeDlg dlg;
	//m_pMainWnd = &dlg;
	//INT_PTR nResponse = dlg.DoModal();
	//if (nResponse == IDOK)
	//{
	//	// TODO: �ڴ˴����ô����ʱ�á�ȷ�������ر�
	//	//  �Ի���Ĵ���
	//}
	//else if (nResponse == IDCANCEL)
	//{
	//	// TODO: �ڴ˷��ô����ʱ�á�ȡ�������ر�
	//	//  �Ի���Ĵ���
	//}

	// ���ڶԻ����ѹرգ����Խ����� FALSE �Ա��˳�Ӧ�ó���
	//  ����������Ӧ�ó������Ϣ�á�
	return FALSE;
}
