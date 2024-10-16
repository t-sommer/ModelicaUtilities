#include "ModelicaUtilityFunctions.h"


void* MyExternalObject_create(ModelicaUtilityFunctions_t* callbacks) {
	return callbacks;
}

void MyExternalObject_free(void* externalObject) {
	// nothing to do
}

double MyExternalObjectFunction(double u, void* externalObject) {

	ModelicaUtilityFunctions_t* callbacks = (ModelicaUtilityFunctions_t*)externalObject;

	callbacks->ModelicaMessage("Hello, I'm MyExternalObjectFunction()!\n");

	return u + 2;
}
