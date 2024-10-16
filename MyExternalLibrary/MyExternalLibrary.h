#include "ModelicaUtilityFunctions.h"


#ifdef _MSC_VER
    #define EXPORT __declspec(dllexport)
#else
    #define EXPORT __attribute__((visibility("default")))
#endif

typedef struct MyExternalObject_t MyExternalObject_t;

EXPORT double MyExternalFunction(double u, ModelicaUtilityFunctions_t* callbacks);

EXPORT void* MyExternalObject_create(ModelicaUtilityFunctions_t* callbacks);

EXPORT void MyExternalObject_free(MyExternalObject_t* externalObject);

EXPORT double MyExternalObjectFunction(double u, MyExternalObject_t* externalObject);
