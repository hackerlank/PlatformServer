
// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�

#pragma once

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // �� Windows ͷ���ų�����ʹ�õ�����
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ĳЩ CString ���캯��������ʽ��

// �ر� MFC ��ĳЩ�����������ɷ��ĺ��Եľ�����Ϣ������
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC ��������ͱ�׼���
#include <afxext.h>         // MFC ��չ


#include <afxdisp.h>        // MFC �Զ�����



#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC �� Internet Explorer 4 �����ؼ���֧��
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC �� Windows �����ؼ���֧��
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // �������Ϳؼ����� MFC ֧��


#include <afxsock.h>            // MFC �׽�����չ






//////////////////////////////////////////////////////////////////////////////////

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS

#define _AFX_ALL_WARNINGS

#include <AfxWin.h>
#include <AfxExt.h>
#include <AfxDisp.h>
#include <AfxDtctl.h>

#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <AfxCmn.h>
#endif


//////////////////////////////////////////////////////////////////////////////////
// ȥ����

#pragma warning(disable:4996)


//////////////////////////////////////////////////////////////////////////////////
//�����ļ�

//ƽ̨����
#include "..\ȫ�ֶ���\Platform.h"
#include "..\��Ϣ����\CMD_Commom.h"
#include "..\��Ϣ����\CMD_Correspond.h"
#include "..\��Ϣ����\CMD_GameServer.h"
#include "..\��Ϣ����\CMD_LogonServer.h"
#include "..\��Ϣ����\IPC_GameFrame.h"

//�������
#include "..\�������\ServiceCoreHead.h"
#include "..\�ں�����\KernelEngineHead.h"
#include "..\�������\ServiceCoreHead.h"
#include "..\��Ϸ����\GameServiceHead.h"
#include "..\��������\MatchServiceHead.h"
#include "..\�ں�����\KernelEngineHead.h"
#include "..\ģ�����\ModuleManagerHead.h"

//////////////////////////////////////////////////////////////////////////////////
//���Ӵ���

#ifndef _DEBUG
#ifndef _UNICODE
	#pragma comment (lib,"../���ӿ�/Ansi/ServiceCore.lib")
	#pragma comment (lib,"../���ӿ�/Ansi/GameService.lib")
	#pragma comment (lib,"../���ӿ�/Ansi/KernelEngine.lib")
	#pragma comment (lib,"../���ӿ�/Ansi/ModuleManager.lib")
#else
	#pragma comment (lib,"../���ӿ�/Unicode/ServiceCore.lib")
	#pragma comment (lib,"../���ӿ�/Unicode/GameService.lib")
	#pragma comment (lib,"../���ӿ�/Unicode/KernelEngine.lib")
	#pragma comment (lib,"../���ӿ�/Unicode/ModuleManager.lib")
#endif
#else
#ifndef _UNICODE
	#pragma comment (lib,"../���ӿ�/Ansi/ServiceCoreD.lib")
	#pragma comment (lib,"../���ӿ�/Ansi/GameServiceD.lib")
	#pragma comment (lib,"../���ӿ�/Ansi/KernelEngineD.lib")
	#pragma comment (lib,"../���ӿ�/Ansi/ModuleManagerD.lib")
#else
	#pragma comment (lib,"../���ӿ�/Unicode/ServiceCoreD.lib")
	#pragma comment (lib,"../���ӿ�/Unicode/GameServiceD.lib")
	#pragma comment (lib,"../���ӿ�/Unicode/KernelEngineD.lib")
	#pragma comment (lib,"../���ӿ�/Unicode/ModuleManagerD.lib")
#endif
#endif


//////////////////////////////////////////////////////////////////////////////////




#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif


