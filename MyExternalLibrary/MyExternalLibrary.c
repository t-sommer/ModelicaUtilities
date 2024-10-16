#include <stdlib.h>
#include "MyExternalLibrary.h"


double MyExternalFunction(double u, ModelicaUtilityFunctions_t* callbacks) {

	if (callbacks && callbacks->ModelicaMessage) {
		callbacks->ModelicaMessage("Hello, I'm MyExternalFunction()!\n");
	}

	return u + 1;
}


typedef void (*ModelicaMessage_t)(const char* string);

struct MyExternalObject_t {

	ModelicaMessage_t modelicaMessage;

};

void* MyExternalObject_create(ModelicaUtilityFunctions_t* callbacks) {

	if (!callbacks || !callbacks->ModelicaMessage) {
		return NULL;
	}

	MyExternalObject_t* instance = (MyExternalObject_t*)malloc(sizeof(MyExternalObject_t));

	if (!instance) {
		return NULL;
	}

	instance->modelicaMessage = callbacks->ModelicaMessage;

	return instance;
}

void MyExternalObject_free(MyExternalObject_t* instance) {

	if (instance) {
		free((void*)instance);
	}
}

double MyExternalObjectFunction(double u, MyExternalObject_t* instance) {

	if (instance && instance->modelicaMessage) {
		instance->modelicaMessage("Hello, I'm MyExternalObjectFunction()!\n");
	}

	return u + 2;
}
