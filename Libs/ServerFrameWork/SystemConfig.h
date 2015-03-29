/****************************************************************************/
/*                                                                          */
/*      �ļ���:    SystemConfig.h                                           */
/*      ��������:  2010��02��09��                                           */
/*      ����:      Sagasarate                                               */
/*                                                                          */
/*      ��������Ȩ��Sagasarate(sagasarate@sina.com)����                     */
/*      ����Խ������������κ���ҵ�ͷ���ҵ������������                      */
/*      ���뱣���˰�Ȩ����                                                  */
/*                                                                          */
/****************************************************************************/
#pragma once

class CSystemConfig :
	public CStaticObject<CSystemConfig>
{
protected:
	UINT			m_MainThreadProcessLimit;
	CIPAddress		m_UDPControlAddress;
	bool			m_LogServerObjectUse;	
	UINT			m_LogLevel;
	UINT			m_ConsoleLogLevel;
	UINT			m_GuardThreadKeepAliveTime;
	UINT			m_GuardThreadKeepAliveCount;
	bool			m_PreLoadModuleSym;
	bool			m_MakeFullDump;
	bool			m_LogModuleSymStatus;
public:
	CSystemConfig(void);
	~CSystemConfig(void);

	bool LoadConfig(LPCTSTR ConfigFileName);

	UINT GetMainThreadProcessLimit()
	{
		return m_MainThreadProcessLimit;
	}
	CIPAddress& GetUDPControlAddress()
	{
		return m_UDPControlAddress;
	}

	bool IsLogServerObjectUse()
	{
		return m_LogServerObjectUse;
	}
	bool IsPreLoadModuleSym()
	{
		return m_PreLoadModuleSym;
	}
	bool IsMakeFullDump()
	{
		return m_MakeFullDump;
	}
	bool IsLogModuleSymStatus()
	{
		return m_LogModuleSymStatus;
	}
	UINT GetLogLevel()
	{
		return m_LogLevel;
	}
	UINT GetConsoleLogLevel()
	{
		return m_ConsoleLogLevel;
	}
	UINT GetGuardThreadKeepAliveTime()
	{
		return m_GuardThreadKeepAliveTime;
	}
	UINT GetGuardThreadKeepAliveCount()
	{
		return m_GuardThreadKeepAliveCount;
	}

};