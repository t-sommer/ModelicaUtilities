#include "ModelicaUtilityFunctions.h"


#ifdef _MSC_VER
    #define EXPORT __declspec(dllexport)
#else
    #define EXPORT __attribute__((visibility("default")))
#endif

EXPORT double MyExternalFunction(double u, ModelicaUtilityFunctions_t* callbacks);

EXPORT void* MyExternalObject_create(ModelicaUtilityFunctions_t* callbacks);

EXPORT void MyExternalObject_free(void* externalObject);

EXPORT double MyExternalObjectFunction(double u, void* externalObject);
