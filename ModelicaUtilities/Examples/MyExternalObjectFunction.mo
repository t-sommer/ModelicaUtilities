within ModelicaUtilities.Examples;
function MyExternalObjectFunction

  input Real u;
  input ModelicaUtilities.Examples.MyExternalObject externalObject;
  output Real y;

  external "C" y = MyExternalObjectFunction(u, externalObject) annotation (
    Include = "#include \"MyExternalObject.c\"");

end MyExternalObjectFunction;
