within ModelicaUtilities.Examples;
class MyExternalObject
  extends ExternalObject;

  function constructor

    input ModelicaUtilities.Callbacks callbacks = ModelicaUtilities.Callbacks();
    output MyExternalObject externalObject;

    external "C" externalObject = MyExternalObject_create(callbacks) annotation (
      Include = "#include \"MyExternalObject.c\"");

  end constructor;

  function destructor

    input MyExternalObject externalObject;

  external "C" MyExternalObject_free(externalObject) annotation (
      Include = "#include \"MyExternalObject.c\"");

  end destructor;

end MyExternalObject;
