
// ****************** FbExceptionGenerator.cpp *************************
// Generated by TE140x-TargetForMatlabSimulink  2.8.1.0
// MATLAB 23.2.0.2409890 (R2023b) Update 3 (win64)
// TwinCAT 3.1.0.0
// TwinCAT Target 2.8.1.0
// Beckhoff Automation GmbH & Co. KG     (www.beckhoff.com)
// *************************************************************

#include "TcPch.h"
#pragma hdrstop

#include "FbExceptionGenerator.h"

#ifdef EXT_MODE
#include "TcExtWork.h"
#endif

#include "ExceptionGenerator.h"

#include "ObjClassFactory.h"
using namespace TcMgSdk;

///////////////////////////////////////////////////////////////////////////////
// Definitions
///////////////////////////////////////////////////////////////////////////////
#if TC_BUILD<=4024
DEFINE_THIS_FILE()
#endif

///////////////////////////////////////////////////////////////////////////////
// CFbExceptionGenerator specific globals
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
// CFbExceptionGenerator static members
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
// CFbExceptionGenerator implementation
///////////////////////////////////////////////////////////////////////////////
CFbExceptionGenerator::CFbExceptionGenerator()
{
	m_TraceLevelMax = tlInfo;
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Init) = FpExcptCtrlSet::Prec53_LogCatchAndDump;
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Update) = FpExcptCtrlSet::Prec53_LogCatchAndDump;


	
}

CFbExceptionGenerator::~CFbExceptionGenerator()
{

}

bool CFbExceptionGenerator::FB_Main()
{

	HRESULT hr = S_OK;

	if (!m_Execute)
		return false;
	if (!m_Initialized)
		return false;

	if(SUCCEEDED(hr))
	{
		memset(&m_ActException, 0, sizeof(m_ActException));
		auto fpCtrl = FpControl(FpCtrlSection::Update);
		TcTry
		{
			memcpy(&(((ExceptionGenerator*)ExceptionGenerator_Obj)->ExceptionGenerator_U.DivByZero),&(DivByZero),sizeof(((ExceptionGenerator*)ExceptionGenerator_Obj)->ExceptionGenerator_U.DivByZero));
			memcpy(&(((ExceptionGenerator*)ExceptionGenerator_Obj)->ExceptionGenerator_U.FloatingPoint),&(FloatingPoint),sizeof(((ExceptionGenerator*)ExceptionGenerator_Obj)->ExceptionGenerator_U.FloatingPoint));
			hr = EvalMdlErrorStatus(((ExceptionGenerator*)ExceptionGenerator_Obj)->getRTM()->errorStatus,false);
			if (hr == S_OK)
			{
				((ExceptionGenerator*)ExceptionGenerator_Obj)->step();
				EvalMdlErrorStatus(((ExceptionGenerator*)ExceptionGenerator_Obj)->getRTM()->errorStatus,true);
			}
			Result = ((ExceptionGenerator*)ExceptionGenerator_Obj)->ExceptionGenerator_Y.Result;
			Counter = ((ExceptionGenerator*)ExceptionGenerator_Obj)->ExceptionGenerator_Y.Counter;

		}
		TcExcept(ExceptionFilter(GetExceptionInformation()))
		{
			ExceptionHandler();
		}
		FpRestore(fpCtrl);
	}


	m_HResult = hr;
	return SUCCEEDED(hr);
}

void CFbExceptionGenerator::_FB_Main(ST_FB_ExceptionGenerator_FB_Main* ST_Param)
{
	ST_Param->result = ((CFbExceptionGenerator*)ST_Param->pInst)->FB_Main(  );
}

bool CFbExceptionGenerator::FB_exit(bool bInCopyCode)
{

	HRESULT hr = S_OK;

	auto fpCtrl = FpControl(FpCtrlSection::Init);
	((ExceptionGenerator*)ExceptionGenerator_Obj)->terminate();
	if (((ExceptionGenerator*)ExceptionGenerator_Obj)!=NULL)
	{
		delete ((ExceptionGenerator*)ExceptionGenerator_Obj);
		ExceptionGenerator_Obj = NULL;
	}

	FpRestore(fpCtrl);


	SingleInstanceRelease();
	__super::Exit(bInCopyCode);

	m_HResult = hr;
	return SUCCEEDED(hr);
}

void CFbExceptionGenerator::_FB_exit(ST_FB_ExceptionGenerator_FB_exit* ST_Param)
{
	ST_Param->result = ((CFbExceptionGenerator*)ST_Param->pInst)->FB_exit( ST_Param->bInCopyCode );
}

bool CFbExceptionGenerator::FB_init(bool bInitRetains, bool bInCopyCode)
{

	HRESULT hr = S_OK;

	if(SUCCEEDED(hr))
	{
		m_pData = nullptr;
		hr = __super::Init(0,TC_BUILD_MIN,bInitRetains,bInCopyCode);
		if (FAILED(hr))
			Log(TcTraceLevel::tlError, "Initialization of base class TcMatSim::GeneratedFb failed");
	}
	
	if(SUCCEEDED(hr))
	{
		ExceptionGenerator_Obj = new ExceptionGenerator();

	m_TraceLevelMax = tlInfo;
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Init) = FpExcptCtrlSet::Prec53_LogCatchAndDump;
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Update) = FpExcptCtrlSet::Prec53_LogCatchAndDump;


	}

	if (SUCCEEDED(hr))
	{
		hr = SingleInstanceLock(GUID_NULL);
		if (FAILED(hr))
			Log(TcTraceLevel::tlError, "SingleInstanceLock() did not succeed");
	}
	
	if (SUCCEEDED(hr))
	{
		auto fpCtrl = FpControl(FpCtrlSection::Init);
		TcTry
		{
		((ExceptionGenerator*)ExceptionGenerator_Obj)->initialize();

		}
		TcExcept(ExceptionFilter(GetExceptionInformation(),FpCtrlSection::Init))
		{
			Log(TcTraceLevel::tlError, "Model initialization failed with an exception.");
			hr = E_FAIL;
		}
		FpRestore(fpCtrl);
	}
	
	if (SUCCEEDED(hr))
		hr = DataExchangeSetState(TCOM_STATE_OP,true);
	
	if (SUCCEEDED(hr))
	{
		m_Initialized = true;
		m_Execute = true;
	}
	else
	{
		m_Initialized = false;
		m_Execute = false;
	}

	m_HResult = hr;
	return SUCCEEDED(hr);
}

void CFbExceptionGenerator::_FB_init(ST_FB_ExceptionGenerator_FB_init* ST_Param)
{
	ST_Param->result = ((CFbExceptionGenerator*)ST_Param->pInst)->FB_init( ST_Param->bInitRetains, ST_Param->bInCopyCode );
}

HRESULT CFbExceptionGenerator::GetnHResult(HRESULT& nParam)
{
	nParam = m_HResult;
	return S_OK;
}

void CFbExceptionGenerator::_GetnHResult(ST_GetSet_HRESULT* ST_Param)
{
	((CFbExceptionGenerator*)ST_Param->pInst)->GetnHResult( ST_Param->nParam );
}

HRESULT CFbExceptionGenerator::GeteInitExceptionHandling(TcMgSdk::FpExcptCtrlSet& eParam)
{
	eParam = GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Init);
	return S_OK;
}

void CFbExceptionGenerator::_GeteInitExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param)
{
	((CFbExceptionGenerator*)ST_Param->pInst)->GeteInitExceptionHandling( ST_Param->eParam );
}

HRESULT CFbExceptionGenerator::SeteInitExceptionHandling(TcMgSdk::FpExcptCtrlSet eParam)
{
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Init) = eParam;
	return S_OK;
}

void CFbExceptionGenerator::_SeteInitExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param)
{
	((CFbExceptionGenerator*)ST_Param->pInst)->SeteInitExceptionHandling( ST_Param->eParam );
}

HRESULT CFbExceptionGenerator::GeteUpdateExceptionHandling(TcMgSdk::FpExcptCtrlSet& eParam)
{
	eParam = GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Update);
	return S_OK;
}

void CFbExceptionGenerator::_GeteUpdateExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param)
{
	((CFbExceptionGenerator*)ST_Param->pInst)->GeteUpdateExceptionHandling( ST_Param->eParam );
}

HRESULT CFbExceptionGenerator::SeteUpdateExceptionHandling(TcMgSdk::FpExcptCtrlSet eParam)
{
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Update) = eParam;
	return S_OK;
}

void CFbExceptionGenerator::_SeteUpdateExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param)
{
	((CFbExceptionGenerator*)ST_Param->pInst)->SeteUpdateExceptionHandling( ST_Param->eParam );
}

HRESULT CFbExceptionGenerator::GetnExceptionCnt(ULONGLONG& nParam)
{
	nParam = m_ExceptionCnt;
	return S_OK;
}

void CFbExceptionGenerator::_GetnExceptionCnt(ST_GetSet_ULINT* ST_Param)
{
	((CFbExceptionGenerator*)ST_Param->pInst)->GetnExceptionCnt( ST_Param->nParam );
}

HRESULT CFbExceptionGenerator::GetstActiveException(TcMgSdk::ExceptionInfo& stParam)
{
	stParam = m_ActException;
	return S_OK;
}

void CFbExceptionGenerator::_GetstActiveException(ST_GetSet_ST_ExceptionInfo* ST_Param)
{
	((CFbExceptionGenerator*)ST_Param->pInst)->GetstActiveException( ST_Param->stParam );
}

HRESULT CFbExceptionGenerator::GetbInitialized(bool& bParam)
{
	bParam = m_Initialized;
	return S_OK;
}

void CFbExceptionGenerator::_GetbInitialized(ST_GetSet_BOOL* ST_Param)
{
	((CFbExceptionGenerator*)ST_Param->pInst)->GetbInitialized( ST_Param->bParam );
}

HRESULT CFbExceptionGenerator::GetbExecute(bool& bParam)
{
	bParam = m_Execute;
	return S_OK;
}

void CFbExceptionGenerator::_GetbExecute(ST_GetSet_BOOL* ST_Param)
{
	((CFbExceptionGenerator*)ST_Param->pInst)->GetbExecute( ST_Param->bParam );
}

HRESULT CFbExceptionGenerator::SetbExecute(bool bParam)
{
	m_Execute = bParam;
	return S_OK;
}

void CFbExceptionGenerator::_SetbExecute(ST_GetSet_BOOL* ST_Param)
{
	((CFbExceptionGenerator*)ST_Param->pInst)->SetbExecute( ST_Param->bParam );
}




BEGIN_FUNC_MAP_FB(CFbExceptionGenerator)
	FUNC_ENTRY_LIB(VID_ExceptionGenerator, CID_FB_EXCEPTIONGENERATOR , "FB_ExceptionGenerator" "__main", CFbExceptionGenerator::_FB_Main)
	FUNC_METHOD_ENTRY_LIB(VID_ExceptionGenerator,CID_FB_EXCEPTIONGENERATOR , "FB_EXIT", "FB_ExceptionGenerator" "__FB_exit", CFbExceptionGenerator::_FB_exit)
	FUNC_METHOD_ENTRY_LIB(VID_ExceptionGenerator,CID_FB_EXCEPTIONGENERATOR , "FB_INIT", "FB_ExceptionGenerator" "__FB_init", CFbExceptionGenerator::_FB_init)
	FUNC_METHOD_ENTRY_LIB(VID_ExceptionGenerator,CID_FB_EXCEPTIONGENERATOR , "GETNHRESULT", "FB_ExceptionGenerator" "__GetnHResult", CFbExceptionGenerator::_GetnHResult)
	FUNC_METHOD_ENTRY_LIB(VID_ExceptionGenerator,CID_FB_EXCEPTIONGENERATOR , "GETEINITEXCEPTIONHANDLING", "FB_ExceptionGenerator" "__GeteInitExceptionHandling", CFbExceptionGenerator::_GeteInitExceptionHandling)
	FUNC_METHOD_ENTRY_LIB(VID_ExceptionGenerator,CID_FB_EXCEPTIONGENERATOR , "SETEINITEXCEPTIONHANDLING", "FB_ExceptionGenerator" "__SeteInitExceptionHandling", CFbExceptionGenerator::_SeteInitExceptionHandling)
	FUNC_METHOD_ENTRY_LIB(VID_ExceptionGenerator,CID_FB_EXCEPTIONGENERATOR , "GETEUPDATEEXCEPTIONHANDLING", "FB_ExceptionGenerator" "__GeteUpdateExceptionHandling", CFbExceptionGenerator::_GeteUpdateExceptionHandling)
	FUNC_METHOD_ENTRY_LIB(VID_ExceptionGenerator,CID_FB_EXCEPTIONGENERATOR , "SETEUPDATEEXCEPTIONHANDLING", "FB_ExceptionGenerator" "__SeteUpdateExceptionHandling", CFbExceptionGenerator::_SeteUpdateExceptionHandling)
	FUNC_METHOD_ENTRY_LIB(VID_ExceptionGenerator,CID_FB_EXCEPTIONGENERATOR , "GETNEXCEPTIONCNT", "FB_ExceptionGenerator" "__GetnExceptionCnt", CFbExceptionGenerator::_GetnExceptionCnt)
	FUNC_METHOD_ENTRY_LIB(VID_ExceptionGenerator,CID_FB_EXCEPTIONGENERATOR , "GETSTACTIVEEXCEPTION", "FB_ExceptionGenerator" "__GetstActiveException", CFbExceptionGenerator::_GetstActiveException)
	FUNC_METHOD_ENTRY_LIB(VID_ExceptionGenerator,CID_FB_EXCEPTIONGENERATOR , "GETBINITIALIZED", "FB_ExceptionGenerator" "__GetbInitialized", CFbExceptionGenerator::_GetbInitialized)
	FUNC_METHOD_ENTRY_LIB(VID_ExceptionGenerator,CID_FB_EXCEPTIONGENERATOR , "GETBEXECUTE", "FB_ExceptionGenerator" "__GetbExecute", CFbExceptionGenerator::_GetbExecute)
	FUNC_METHOD_ENTRY_LIB(VID_ExceptionGenerator,CID_FB_EXCEPTIONGENERATOR , "SETBEXECUTE", "FB_ExceptionGenerator" "__SetbExecute", CFbExceptionGenerator::_SetbExecute)
END_FUNC_MAP_FB()

DECLARE_FUNCMAP_CREATOR(HandleFuncMap_CFbExceptionGenerator)
{
	return CFbExceptionGenerator::TcHandleFuncMap(mode, idx, idxcounter, pFncId, pipFnc, ppMethod, ppName, pSignature, pVersion);
}
