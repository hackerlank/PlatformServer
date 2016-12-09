#pragma once

//////////////////////////////////////////////////////////////////////////////////
#ifndef _SECURE_ATL 
#define _SECURE_ATL 1 
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN
#endif

#include "targetver.h"

#ifndef WINVER
#define WINVER 0x0501
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif

#ifndef _WIN32_WINDOWS
#define _WIN32_WINDOWS 0x0510
#endif

#ifndef _WIN32_IE
#define _WIN32_IE 0x0400
#endif

#define _ATL_ATTRIBUTES
#define _AFX_ALL_WARNINGS
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS

//////////////////////////////////////////////////////////////////////////////////

//MFC �ļ�
#include <AfxWin.h>
#include <AfxExt.h>
#include <AfxCmn.h>
#include <AfxDisp.h>


//MFC �ļ�
#include <Nb30.h>
#include <AfxInet.h>


//////////////////////////////////////////////////////////////////////////////////
// ȥ����

#pragma warning(disable:4996)


//////////////////////////////////////////////////////////////////////////////////
//�����ļ�

//ƽ̨����
#include "..\ȫ�ֶ���\Platform.h"
#include "..\��Ϣ����\CMD_Correspond.h"
#include "..\��Ϣ����\CMD_LogonServer.h"

//�������
#include "..\�������\ServiceCoreHead.h"
#include "..\�ں�����\KernelEngineHead.h"

//////////////////////////////////////////////////////////////////////////////////
//���Ӵ���

#ifndef _DEBUG
	#ifndef _UNICODE
		#pragma comment (lib,"../���ӿ�/Ansi/ServiceCore.lib")
		#pragma comment (lib,"../���ӿ�/Ansi/KernelEngine.lib")
	#else
		#pragma comment (lib,"../���ӿ�/Unicode/ServiceCore.lib")
		#pragma comment (lib,"../���ӿ�/Unicode/KernelEngine.lib")
	#endif
#else
	#ifndef _UNICODE
		#pragma comment (lib,"../���ӿ�/Ansi/ServiceCoreD.lib")
		#pragma comment (lib,"../���ӿ�/Ansi/KernelEngineD.lib")
	#else
		#pragma comment (lib,"../���ӿ�/Unicode/ServiceCoreD.lib")
		#pragma comment (lib,"../���ӿ�/Unicode/KernelEngineD.lib")
	#endif
#endif

