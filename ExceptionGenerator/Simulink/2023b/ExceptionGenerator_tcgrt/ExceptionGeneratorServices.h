// ****************** ExceptionGeneratorServices.h *************************
// Generated by TE140x-TargetForMatlabSimulink  2.8.1.0
// MATLAB 23.2.0.2409890 (R2023b) Update 3 (win64)
// TwinCAT 3.1.0.0
// TwinCAT Target 2.8.1.0
// Beckhoff Automation GmbH & Co. KG     (www.beckhoff.com)
// *************************************************************
#ifndef _ExceptionGeneratorServices__h_INCLUDED
#define _ExceptionGeneratorServices__h_INCLUDED

#include "TcInterfaces.h"
#include "TcServices.h"
#include "TcGeneratedClass.h"
#include "TcGeneratedCFServiceProvider.h"
#include "TcGeneratedTcCom.h"
#include "stdio.h"

#include "TcGeneratedCFInterfaces.h"

#include "ExceptionGeneratorVersion.h"
#define SRVNAME_ExceptionGenerator "ExceptionGenerator"

// TcCOM-ClassID of CTcComExceptionGenerator: {D2240B5B-5D52-0328-4960-51BFE295F729}
const CTCID CID_EXCEPTIONGENERATOR = {0xD2240B5B, 0x5D52, 0x0328, {0x49, 0x60, 0x51, 0xBF, 0xE2, 0x95, 0xF7, 0x29}};
// TcCOM-ClassID of CFbExceptionGenerator: {74366DEA-05DF-987D-4D60-5336A7D035B5}
const CTCID CID_FB_EXCEPTIONGENERATOR = {0x74366DEA, 0x05DF, 0x987D, {0x4D, 0x60, 0x53, 0x36, 0xA7, 0xD0, 0x35, 0xB5}};
// TcCOM-ClassID of CFbTcComExceptionGenerator: {4CDB1552-252E-6583-F2D7-9FCDF8402CBF}
const CTCID CID_FB_EXCEPTIONGENERATOR_TCCOM_INITSTRUCT = {0x4CDB1552, 0x252E, 0x6583, {0xF2, 0xD7, 0x9F, 0xCD, 0xF8, 0x40, 0x2C, 0xBF}};


#ifndef ExceptionGenerator_IGNORE_SERVICES_TYPES
#if defined(ExceptionGenerator_TYPES)
#else
	#define ExceptionGenerator_TYPES 1
#endif


#if ExceptionGenerator_TYPES
#if !defined(_TC_TYPE_18071995_0000_0000_0000_00010000007F_INCLUDED_)
#define _TC_TYPE_18071995_0000_0000_0000_00010000007F_INCLUDED_
typedef CHAR STRING127[128];
const GUID GUID_STRING127 = {0x18071995, 0x0000, 0x0000, {0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x7F}};
#endif // !defined(_TC_TYPE_18071995_0000_0000_0000_00010000007F_INCLUDED_)

#if !defined(_TC_TYPE_BB79F3C5_FCA6_44F0_A017_6CA6C8C2A9DA_INCLUDED_)
#define _TC_TYPE_BB79F3C5_FCA6_44F0_A017_6CA6C8C2A9DA_INCLUDED_
typedef struct _TcMatSim_ModuleGeneratorInfo
{
	ULONG MatlabVersion[4];
	ULONG TE140xVersion[4];
} TcMatSim_ModuleGeneratorInfo, *PTcMatSim_ModuleGeneratorInfo;
const GUID GUID_TcMatSim_ModuleGeneratorInfo = {0xBB79F3C5, 0xFCA6, 0x44F0, {0xA0, 0x17, 0x6C, 0xA6, 0xC8, 0xC2, 0xA9, 0xDA}};
#endif // !defined(_TC_TYPE_BB79F3C5_FCA6_44F0_A017_6CA6C8C2A9DA_INCLUDED_)

#if !defined(_TC_TYPE_24B309D5_81B5_4BC2_A814_E85159BFD98A_INCLUDED_)
#define _TC_TYPE_24B309D5_81B5_4BC2_A814_E85159BFD98A_INCLUDED_
typedef struct _TcMatSim_SimulinkModelInfo
{
	STRING127 ModelName;
	ULONG SimulinkVersion[4];
	ULONG ModelVersion[4];
	ULONG ModelChecksum[4];
} TcMatSim_SimulinkModelInfo, *PTcMatSim_SimulinkModelInfo;
const GUID GUID_TcMatSim_SimulinkModelInfo = {0x24B309D5, 0x81B5, 0x4BC2, {0xA8, 0x14, 0xE8, 0x51, 0x59, 0xBF, 0xD9, 0x8A}};
#endif // !defined(_TC_TYPE_24B309D5_81B5_4BC2_A814_E85159BFD98A_INCLUDED_)

#if !defined(_TC_TYPE_31EDB8D4_E415_447B_C995_7F92BB801FAE_INCLUDED_)
#define _TC_TYPE_31EDB8D4_E415_447B_C995_7F92BB801FAE_INCLUDED_
typedef struct _ExceptionGenerator_U_T
{
	bool DivByZero;
	bool FloatingPoint;
} ExceptionGenerator_U_T, *PExceptionGenerator_U_T;
const GUID GUID_ExceptionGenerator_U_T = {0x31EDB8D4, 0xE415, 0x447B, {0xC9, 0x95, 0x7F, 0x92, 0xBB, 0x80, 0x1F, 0xAE}};
#endif // !defined(_TC_TYPE_31EDB8D4_E415_447B_C995_7F92BB801FAE_INCLUDED_)

#if !defined(_TC_TYPE_484E1D40_EF31_F59F_642A_00FD4C836FDB_INCLUDED_)
#define _TC_TYPE_484E1D40_EF31_F59F_642A_00FD4C836FDB_INCLUDED_
typedef struct _ExceptionGenerator_Y_T
{
	double Result;
	double Counter;
} ExceptionGenerator_Y_T, *PExceptionGenerator_Y_T;
const GUID GUID_ExceptionGenerator_Y_T = {0x484E1D40, 0xEF31, 0xF59F, {0x64, 0x2A, 0x00, 0xFD, 0x4C, 0x83, 0x6F, 0xDB}};
#endif // !defined(_TC_TYPE_484E1D40_EF31_F59F_642A_00FD4C836FDB_INCLUDED_)

#if !defined(_TC_TYPE_459D0BA3_B29F_212F_9895_85A09B564746_INCLUDED_)
#define _TC_TYPE_459D0BA3_B29F_212F_9895_85A09B564746_INCLUDED_
typedef struct _ExceptionGenerator_DW_T
{
	double Counter;
	double a;
	double b;
	double fPosInf;
	double fNegInf;
} ExceptionGenerator_DW_T, *PExceptionGenerator_DW_T;
const GUID GUID_ExceptionGenerator_DW_T = {0x459D0BA3, 0xB29F, 0x212F, {0x98, 0x95, 0x85, 0xA0, 0x9B, 0x56, 0x47, 0x46}};
#endif // !defined(_TC_TYPE_459D0BA3_B29F_212F_9895_85A09B564746_INCLUDED_)

#if !defined(_TC_TYPE_18071995_0000_0000_0000_0001000000FF_INCLUDED_)
#define _TC_TYPE_18071995_0000_0000_0000_0001000000FF_INCLUDED_
typedef CHAR STRING255[256];
const GUID GUID_STRING255 = {0x18071995, 0x0000, 0x0000, {0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xFF}};
#endif // !defined(_TC_TYPE_18071995_0000_0000_0000_0001000000FF_INCLUDED_)

#endif // ExceptionGenerator_TYPES

#endif

TCOM_DECL_INTERFACE("2806F198-B249-AEA0-AA4A-5EEEC04F9418", ITcExceptionGenerator)



#endif // _ExceptionGeneratorServices__h_INCLUDED
