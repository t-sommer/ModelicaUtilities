within ModelicaUtilities.Examples.Internal;
function MyExternalObjectFunction

  input Real u;
  input ModelicaUtilities.Examples.Internal.MyExternalObject externalObject;
  output Real y;

  external "C" y = MyExternalObjectFunction(u, externalObject) annotation (
    Library={"MyExternalLibrary"});

end MyExternalObjectFunction;
