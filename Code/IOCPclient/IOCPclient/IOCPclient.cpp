// IOCPclient.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "client.h"


int main()
{
	CClient m_client;
	if (false == m_client.LoadSocketLib())
	{
		printf("Loading Winsock 2.2 failed, server can't start up!\n");
	}
	if (false == m_client.Start())
	{
		printf("Client start failed!\n");
	}
	system("pause");
    return 0;
}

