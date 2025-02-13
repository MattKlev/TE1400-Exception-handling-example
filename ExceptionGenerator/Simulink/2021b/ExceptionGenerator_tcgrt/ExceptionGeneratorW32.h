
// ****************** ExceptionGeneratorW32.h *************************
// Generated by TE140x-TargetForMatlabSimulink  2.4.1.0
// MATLAB 9.11.0.1837725 (R2021b) Update 2 (win64)
// TwinCAT 3.1.4024.0
// TwinCAT Target 2.4.1.0
// Beckhoff Automation GmbH & Co. KG     (www.beckhoff.com)
// *************************************************************
#ifndef _ExceptionGeneratorW32__h_INCLUDED
#define _ExceptionGeneratorW32__h_INCLUDED
#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __TcRtwDriverW32_h__
#define __TcRtwDriverW32_h__

/* Forward Declarations */ 

#ifndef __ITcRtwDriverCtrl_FWD_DEFINED__
#define __ITcRtwDriverCtrl_FWD_DEFINED__
typedef interface ITcRtwDriverCtrl ITcRtwDriverCtrl;
#endif 	/* __ITcRtwDriverCtrl_FWD_DEFINED__ */


#ifndef __TcRtwDriverCtrl_FWD_DEFINED__
#define __TcRtwDriverCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class TcRtwDriverCtrl TcRtwDriverCtrl;
#else
typedef struct TcRtwDriverCtrl TcRtwDriverCtrl;
#endif /* __cplusplus */

#endif 	/* __TcRtwDriverCtrl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITcRtwDriverCtrl_INTERFACE_DEFINED__
#define __ITcRtwDriverCtrl_INTERFACE_DEFINED__

/* interface ITcRtwDriverCtrl */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITcRtwDriverCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
		
		MIDL_INTERFACE("54EDF0AC-ACDE-4456-920E-A26D15A8503A")
		ITcRtwDriverCtrl : public IUnknown
		{
		public:
		};
		
#else 	/* C style interface */

		typedef struct ITcRtwDriverCtrlVtbl
		{
				BEGIN_INTERFACE
				
				HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
						ITcRtwDriverCtrl * This,
						/* [in] */ REFIID riid,
						/* [iid_is][out] */ 
						__RPC__deref_out  void **ppvObject);
				
				UINT ( STDMETHODCALLTYPE *AddRef )( 
						ITcRtwDriverCtrl * This);
				
				UINT ( STDMETHODCALLTYPE *Release )( 
						ITcRtwDriverCtrl * This);
				
				END_INTERFACE
		} ITcRtwDriverCtrlVtbl;

		interface ITcRtwDriverCtrl
		{
				CONST_VTBL struct ITcRtwDriverCtrlVtbl *lpVtbl;
		};

		

#ifdef COBJMACROS


#define ITcRtwDriverCtrl_QueryInterface(This,riid,ppvObject)	\
		( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITcRtwDriverCtrl_AddRef(This)	\
		( (This)->lpVtbl -> AddRef(This) ) 

#define ITcRtwDriverCtrl_Release(This)	\
		( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITcRtwDriverCtrl_INTERFACE_DEFINED__ */



#ifndef __TCRTWDRIVERW32Lib_LIBRARY_DEFINED__
#define __TCRTWDRIVERW32Lib_LIBRARY_DEFINED__

/* library TCRTWDRIVERW32Lib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_TCRTWDRIVERW32Lib;

EXTERN_C const CLSID CLSID_TcRtwDriverCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("F634CCE5-F3B1-47a9-8151-D2B004A4B8F3")
TcRtwDriverCtrl;
#endif
#endif /* __TCRTWDRIVERW32Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
#endif // _ExceptionGeneratorW32__h_INCLUDED