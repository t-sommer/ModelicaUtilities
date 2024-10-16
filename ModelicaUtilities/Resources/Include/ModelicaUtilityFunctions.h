#pragma once

#include <stddef.h>  // for size_t
#include <stdarg.h>  // for va_list


typedef struct {

	void  (*ModelicaMessage)(const char *string);
	void  (*ModelicaFormatMessage)(const char *string, ...);
	void  (*ModelicaVFormatMessage)(const char *string, va_list);
	void  (*ModelicaError)(const char *string);
	void  (*ModelicaFormatError)(const char *string, ...);
	void  (*ModelicaVFormatError)(const char *string, va_list);
	char* (*ModelicaAllocateString)(size_t len);
	char* (*ModelicaAllocateStringWithErrorReturn)(size_t len);

} ModelicaUtilityFunctions_t;
