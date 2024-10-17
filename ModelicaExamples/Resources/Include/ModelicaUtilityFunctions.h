#pragma once

#include <stddef.h>  // for size_t
#include <stdarg.h>  // for va_list


typedef struct {

	void  (*ModelicaMessage)(const char* string);
	void  (*ModelicaFormatMessage)(const char* string, ...);
	void  (*ModelicaVFormatMessage)(const char* string, va_list args);
	void  (*ModelicaError)(const char* string);
	void  (*ModelicaWarning)(const char* string);
	void  (*ModelicaFormatWarning)(const char* string, ...);
	void  (*ModelicaVFormatWarning)(const char* string, va_list args);
	void  (*ModelicaFormatError)(const char* string, ...);
	void  (*ModelicaVFormatError)(const char* string, va_list args);
	char* (*ModelicaAllocateString)(size_t len);
	char* (*ModelicaAllocateStringWithErrorReturn)(size_t len);

} ModelicaUtilityFunctions_t;
