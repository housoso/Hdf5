// ReadHdf5File.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "GetHdfInfo.h"
#define FILEHDF5 "hdf5test.h5" 

int _tmain(int argc, _TCHAR* argv[])
{
	GETHDFINFO stuGETHDFINFO;
	stuGETHDFINFO.BisHdf5(FILEHDF5);



	return 0;
}

