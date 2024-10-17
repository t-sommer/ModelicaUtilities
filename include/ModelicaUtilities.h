/* This file is an example of what a clean ModelicaUtilities.h conforming to the Modelica specification could look like.
 */
#ifndef MODELICAUTILITIES_H
#define MODELICAUTILITIES_H

#include <stddef.h>
#include <stdarg.h>

/*
 * Utility functions for external "C" functions.
 * The functionality is defined in the Modelica specification.
 */
#ifdef __cplusplus
extern "C" {
#endif

typedef void (*ModelicaMessage_t)(const char* string);
typedef void (*ModelicaVFormatMessage_t)(const char* format, va_list args);
typedef void (*ModelicaFormatMessage_t)(const char* format, ...);

typedef void (*ModelicaWarning_t)(const char* string);
typedef void (*ModelicaVFormatWarning_t)(const char* format, va_list args);
typedef void (*ModelicaFormatWarning_t)(const char* format, ...);

typedef void (*ModelicaError_t)(const char* string);
typedef void (*ModelicaVFormatError_t)(const char* format, va_list args);
typedef void (*ModelicaFormatError_t)(const char* format, ...);

typedef char* (*ModelicaAllocateString_t)(size_t len);
typedef char* (*ModelicaAllocateStringWithErrorReturn_t)(size_t len);
typedef char* (*ModelicaDuplicateString_t)(const char* str);
typedef char* (*ModelicaDuplicateStringWithErrorReturn_t)(const char* str);

typedef struct
{
  ModelicaMessage_t                         ModelicaMessage;
  ModelicaVFormatMessage_t                  ModelicaVFormatMessage;
  ModelicaFormatMessage_t                   ModelicaFormatMessage;
  ModelicaWarning_t                         ModelicaWarning;
  ModelicaVFormatWarning_t                  ModelicaVFormatWarning;
  ModelicaFormatWarning_t                   ModelicaFormatWarning;
  ModelicaError_t                           ModelicaError;
  ModelicaVFormatError_t                    ModelicaVFormatError;
  ModelicaFormatError_t                     ModelicaFormatError;
  ModelicaAllocateString_t                  ModelicaAllocateString;
  ModelicaAllocateStringWithErrorReturn_t   ModelicaAllocateStringWithErrorReturn;
  ModelicaDuplicateString_t                 ModelicaDuplicateString;
  ModelicaDuplicateStringWithErrorReturn_t  ModelicaDuplicateStringWithErrorReturn;
} ModelicaUtilities_t;

extern ModelicaMessage_t ModelicaMessage;
extern ModelicaVFormatMessage_t ModelicaVFormatMessage;
extern ModelicaFormatMessage_t ModelicaFormatMessage;

extern ModelicaWarning_t ModelicaWarning;
extern ModelicaVFormatWarning_t ModelicaVFormatWarning;
extern ModelicaFormatWarning_t ModelicaFormatWarning;

extern ModelicaError_t ModelicaError;
extern ModelicaVFormatError_t ModelicaVFormatError;
extern ModelicaFormatError_t ModelicaFormatError;

extern ModelicaAllocateString_t ModelicaAllocateString;
extern ModelicaAllocateStringWithErrorReturn_t ModelicaAllocateStringWithErrorReturn;
extern ModelicaDuplicateString_t ModelicaDuplicateString;
extern ModelicaDuplicateStringWithErrorReturn_t ModelicaDuplicateStringWithErrorReturn;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MODELICAUTILITIES_H */
