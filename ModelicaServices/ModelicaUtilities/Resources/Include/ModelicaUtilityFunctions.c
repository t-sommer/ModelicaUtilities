#ifndef MODELICA_UTILITY_FUNCTIONS_C
#define MODELICA_UTILITY_FUNCTIONS_C

#include "ModelicaUtilities.h"
#include "ModelicaUtilityFunctions.h"


void * ModelicaUtilityFunctions_getModelicaUtilityFunctions() {

	static ModelicaUtilities_t callbacks;

	callbacks.ModelicaMessage                       = ModelicaMessage;
	callbacks.ModelicaFormatMessage                 = ModelicaFormatMessage;
	callbacks.ModelicaVFormatMessage                = ModelicaVFormatMessage;
	callbacks.ModelicaError                         = ModelicaError;
	callbacks.ModelicaWarning                       = ModelicaWarning;
	callbacks.ModelicaFormatWarning                 = ModelicaFormatWarning;
	callbacks.ModelicaVFormatWarning                = ModelicaVFormatWarning;
	callbacks.ModelicaFormatError                   = ModelicaFormatError;
	callbacks.ModelicaVFormatError                  = ModelicaVFormatError;
	callbacks.ModelicaAllocateString                = ModelicaAllocateString;
	callbacks.ModelicaAllocateStringWithErrorReturn = ModelicaAllocateStringWithErrorReturn;

	return &callbacks;
}


void ModelicaUtilityFunctions_freeModelicaUtilityFunctions(void *callbacks) {
	// nothing to do
}

#endif // MODELICA_UTILITY_FUNCTIONS_C
