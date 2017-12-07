#pragma once
#pragma warning (disable:4819)

#if (defined(WIN32) || defined(WIN64))
#pragma warning(disable:4996) // suppress VS 2005 deprecated function warnings
#pragma warning(disable:4786) // for string

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX

#if !defined(_WIN32_WINNT)
#define  _WIN32_WINNT   0x0601
#endif

#include <Windows.h>
#include <BaseTsd.h>
#include <tchar.h>
#ifndef atoll
#define atoll _atoi64
#endif
#endif

#include "targetver.h"
#include <stdio.h>
#include <tchar.h>

// TODO:  在此处引用程序需要的其他头文件
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#define new  new(_CLIENT_BLOCK, __FILE__, __LINE__)
