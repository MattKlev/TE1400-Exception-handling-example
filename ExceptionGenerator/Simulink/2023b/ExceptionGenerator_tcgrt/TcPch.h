// ****************** TcPch.h *************************
// Generated by TE140x-TargetForMatlabSimulink  2.8.1.0
// MATLAB 23.2.0.2409890 (R2023b) Update 3 (win64)
// TwinCAT 3.1.0.0
// TwinCAT Target 2.8.1.0
// Beckhoff Automation GmbH & Co. KG     (www.beckhoff.com)
// *************************************************************
///////////////////////////////////////////////////////////////////////////////
// TcPch.h includes TwinCAT standard header files, 
// or project specific include files that are used frequently,
// but are changed infrequently

#ifndef _TcPch__h_INCLUDED
#define _TcPch__h_INCLUDED

#include "TcDef.h"

#if defined(TC_ENVIROMENT_UM) || defined(TC_ENVIROMENT_CE)
#include <atlbase.h>
extern CComModule _Module;
#include <atlcom.h>
#endif // defined(TC_ENVIROMENT_UM) || defined(TC_ENVIROMENT_CE)

#include "TcBase.h"
#include "TcError.h"
#include "OsBase.h"
#include "TcIoInterfaces.h"
#include "TcInterfaces.h"
#include "TcRtInterfaces.h"
#endif // _TcPch__h_INCLUDED