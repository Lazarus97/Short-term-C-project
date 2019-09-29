// IOCPtest.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "IOCPModel.h"


int main()
{
	CIOCPModel m_IOCP;
	if (false == m_IOCP.LoadSocketLib())
	{
		printf("Loading Winsock 2.2 failed, server can't start up!\n");
	}
	if (false == m_IOCP.Start())
	{
		printf("Server start failed!\n");
	}
	system("pause");
    return 0;
}

