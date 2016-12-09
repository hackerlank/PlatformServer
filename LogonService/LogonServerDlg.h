#pragma once

#include "ServiceUnits.h"
#include ".\flashaccredit.h"

// CLogonServerDlg �Ի���

class CLogonServerDlg : public CDialog, public IServiceUnitsSink
{
	DECLARE_DYNAMIC(CLogonServerDlg)

protected:	
	CServiceUnits					m_ServiceUnits;						//����Ԫ
	CTraceServiceControl			m_TraceServiceControl;				//׷�ٴ���
	CFlashAccredit                  m_FlashAccredit;                    //Flash����

public:
	CLogonServerDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CLogonServerDlg();

	// �Ի�������
	enum { IDD = IDD_DLG_LOGON_SERVER };

public:
	//����״̬
	virtual VOID OnServiceUnitsStatus(enServiceStatus ServiceStatus);

protected:
	 // DDX/DDV ֧��
	virtual void DoDataExchange(CDataExchange* pDX);   
	// ��ʼ��
	virtual BOOL OnInitDialog();
	// ��Ϣ����
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	//ȡ������
	virtual VOID OnCancel();
	//��������
	VOID OnBnClickedStartService();
	//ֹͣ����
	VOID OnBnClickedStopService();

public:
	//�ر�ѯ��
	BOOL OnQueryEndSession();
	//�����¼�
	LRESULT OnNetworkEvent(WPARAM wparam, LPARAM lparam);

	DECLARE_MESSAGE_MAP()
};
