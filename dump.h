#pragma once
#include "stdafx.h"
LONG WINAPI DumpExceptionFilter(struct _EXCEPTION_POINTERS* pExceptionPointers);

#if 1
#define TryDump( cppcode ) 	_try{ cppcode } __except( DumpExceptionFilter(GetExceptionInformation()) ){ return 0; }
#else
#define TryDump( cppcode ) cppcode
#endif