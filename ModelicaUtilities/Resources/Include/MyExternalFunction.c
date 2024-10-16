#include "ModelicaUtilityFunctions.h"


double MyExternalFunction(double u, ModelicaUtilityFunctions_t* callbacks) {

	callbacks->ModelicaMessage("Hello, I'm MyExternalFunction()!\n");

	return u + 1;
}
