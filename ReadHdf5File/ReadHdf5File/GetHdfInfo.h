
#include "hdf5.h"
#include <intsafe.h>
#include <map>
#include <vector>
#include <string>
using namespace std;

typedef struct UTESTDATA
{
	int m_datavalue;
	UINT64 usTime;
	UTESTDATA() : m_datavalue(0), usTime(0)
	{}
}UTESTDATA;


class GETHDFINFO
{
public:
	void BisHdf5(string sAllFileName);
private:
	void GetHdfData(string sAllFileName);
	void GetDataset(hid_t file_id,string sGrpName,string sRootName = "");

private:
	map<string, vector<UTESTDATA>> mapData;
};