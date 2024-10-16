within ModelicaUtilities.Examples;
function MyExternalFunction

  input Real u;
  input ModelicaUtilities.Callbacks callbacks = ModelicaUtilities.Callbacks();
  output Real y;

  external "C" y = MyExternalFunction(u, callbacks) annotation (
    Include = "#include \"MyExternalFunction.c\"");

end MyExternalFunction;
