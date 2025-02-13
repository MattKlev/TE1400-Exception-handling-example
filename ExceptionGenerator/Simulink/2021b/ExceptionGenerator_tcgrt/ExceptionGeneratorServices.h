// ****************** ExceptionGeneratorServices.h *************************
// Generated by TE140x-TargetForMatlabSimulink  2.4.1.0
// MATLAB 9.11.0.1837725 (R2021b) Update 2 (win64)
// TwinCAT 3.1.4024.0
// TwinCAT Target 2.4.1.0
// Beckhoff Automation GmbH & Co. KG     (www.beckhoff.com)
// *************************************************************
#ifndef _ExceptionGeneratorServices__h_INCLUDED
#define _ExceptionGeneratorServices__h_INCLUDED

#include "TcInterfaces.h"
#include "TcServices.h"
#include "TcGeneratedClass.h"
#include "TcGeneratedTcCom.h"
#include "stdio.h"

#include "TcGeneratedCFInterfaces.h"

#include "ExceptionGeneratorVersion.h"
#define SRVNAME_ExceptionGenerator "ExceptionGenerator"

// TcCOM-ClassID of CTcComExceptionGenerator: {D2240B5B-5D52-0328-4960-51BFE295F729}
const CTCID CID_EXCEPTIONGENERATOR = {0xD2240B5B, 0x5D52, 0x0328, {0x49, 0x60, 0x51, 0xBF, 0xE2, 0x95, 0xF7, 0x29}};
// TcCOM-ClassID of CFbExceptionGenerator: {448A8907-DA83-35D2-1E27-9FB0CCB5629F}
const CTCID CID_FB_EXCEPTIONGENERATOR = {0x448A8907, 0xDA83, 0x35D2, {0x1E, 0x27, 0x9F, 0xB0, 0xCC, 0xB5, 0x62, 0x9F}};
// TcCOM-ClassID of CFbTcComExceptionGenerator: {26309A00-34B5-33AA-0C97-0977486F313E}
const CTCID CID_FB_EXCEPTIONGENERATOR_TCCOM_INITSTRUCT = {0x26309A00, 0x34B5, 0x33AA, {0x0C, 0x97, 0x09, 0x77, 0x48, 0x6F, 0x31, 0x3E}};


#ifndef ExceptionGenerator_IGNORE_SERVICES_TYPES
#if !defined(_TC_TYPE_18071995_0000_0000_0000_00010000007F_INCLUDED_)
#define _TC_TYPE_18071995_0000_0000_0000_00010000007F_INCLUDED_
typedef CHAR STRING127[128];
#endif // !defined(_TC_TYPE_18071995_0000_0000_0000_00010000007F_INCLUDED_)

#if !defined(_TC_TYPE_31EDB8D4_E415_447B_C995_7F92BB801FAE_INCLUDED_)
#define _TC_TYPE_31EDB8D4_E415_447B_C995_7F92BB801FAE_INCLUDED_
typedef struct _ExceptionGenerator_U_T
{
	bool DivByZero;
	bool FloatingPoint;
} ExceptionGenerator_U_T, *PExceptionGenerator_U_T;
#endif // !defined(_TC_TYPE_31EDB8D4_E415_447B_C995_7F92BB801FAE_INCLUDED_)

#if !defined(_TC_TYPE_484E1D40_EF31_F59F_642A_00FD4C836FDB_INCLUDED_)
#define _TC_TYPE_484E1D40_EF31_F59F_642A_00FD4C836FDB_INCLUDED_
typedef struct _ExceptionGenerator_Y_T
{
	double Result;
	double Counter;
} ExceptionGenerator_Y_T, *PExceptionGenerator_Y_T;
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
#endif // !defined(_TC_TYPE_459D0BA3_B29F_212F_9895_85A09B564746_INCLUDED_)

#if !defined(_TC_TYPE_18071995_0000_0000_0000_0001000000FF_INCLUDED_)
#define _TC_TYPE_18071995_0000_0000_0000_0001000000FF_INCLUDED_
typedef CHAR STRING255[256];
#endif // !defined(_TC_TYPE_18071995_0000_0000_0000_0001000000FF_INCLUDED_)


#endif

TCOM_DECL_INTERFACE("2806F198-B249-AEA0-AA4A-5EEEC04F9418", ITcExceptionGenerator)



#endif // _ExceptionGeneratorServices__h_INCLUDED
