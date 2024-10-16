within ModelicaUtilities.Examples.Internal;
function MyExternalFunction

  input Real u;
  input ModelicaUtilities.Callbacks callbacks = ModelicaUtilities.Callbacks();
  output Real y;

  external "C" y = MyExternalFunction(u, callbacks) annotation (
    Library={"MyExternalLibrary"});

end MyExternalFunction;
