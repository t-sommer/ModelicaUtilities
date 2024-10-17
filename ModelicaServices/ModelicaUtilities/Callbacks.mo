within ModelicaUtilities; /* Should be within ModelicaServices.ModelicaUtilities in the end. */
class Callbacks
  extends ExternalObject;

  function constructor
    output Callbacks callbacks;
  external "C"
    callbacks = ModelicaUtilityFunctions_getModelicaUtilityFunctions()
      annotation (
        Include = "#include \"ModelicaUtilityFunctions.c\"",
        IncludeDirectory="modelica://ModelicaServices.ModelicaUtilities/Resources/Include"
      );
  end constructor;

  function destructor
    input Callbacks callbacks;
  external "C"
    ModelicaUtilityFunctions_freeModelicaUtilityFunctions(callbacks)
      annotation (
        Include = "#include \"ModelicaUtilityFunctions.c\"",
        IncludeDirectory="modelica://ModelicaServices.ModelicaUtilities/Resources/Include"
      );
  end destructor;

end Callbacks;
