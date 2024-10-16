#ifndef MODELICA_UTILITY_FUNCTIONS_C
#define MODELICA_UTILITY_FUNCTIONS_C

#include "ModelicaUtilities.h"
#include "ModelicaUtilityFunctions.h"


void * ModelicaUtilityFunctions_getModelicaUtilityFunctions() {

	static ModelicaUtilityFunctions_t s_ModelicaUtilityFunctions;

	s_ModelicaUtilityFunctions.ModelicaMessage                       = ModelicaMessage;
	s_ModelicaUtilityFunctions.ModelicaFormatMessage                 = ModelicaFormatMessage;
	s_ModelicaUtilityFunctions.ModelicaVFormatMessage                = ModelicaVFormatMessage;
	s_ModelicaUtilityFunctions.ModelicaError                         = ModelicaError;
	s_ModelicaUtilityFunctions.ModelicaFormatError                   = ModelicaFormatError;
	s_ModelicaUtilityFunctions.ModelicaVFormatError                  = ModelicaVFormatError;
	s_ModelicaUtilityFunctions.ModelicaAllocateString                = ModelicaAllocateString;
	s_ModelicaUtilityFunctions.ModelicaAllocateStringWithErrorReturn = ModelicaAllocateStringWithErrorReturn;

	return &s_ModelicaUtilityFunctions;
}


void ModelicaUtilityFunctions_freeModelicaUtilityFunctions(void *functions) {
	// nothing to do
}

#endif // MODELICA_UTILITY_FUNCTIONS_C
