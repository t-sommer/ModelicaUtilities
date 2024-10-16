within ModelicaUtilities;
class Callbacks
  extends ExternalObject;

  function constructor

    output Callbacks functions;

    external "C" functions = ModelicaUtilityFunctions_getModelicaUtilityFunctions() annotation (
      Include = "#include \"ModelicaUtilityFunctions.c\"",
      IncludeDirectory="modelica://ModelicaUtilities/Resources/Include");

  end constructor;

  function destructor

    input Callbacks functions;

    external "C" ModelicaUtilityFunctions_freeModelicaUtilityFunctions(functions) annotation (
      Include = "#include \"ModelicaUtilityFunctions.c\"",
      IncludeDirectory="modelica://ModelicaUtilities/Resources/Include");

  end destructor;

end Callbacks;
