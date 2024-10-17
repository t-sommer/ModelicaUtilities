within ModelicaUtilities.Examples;
model ExternalObjectExample
    extends Modelica.Icons.Example;

  ModelicaUtilities.Examples.Internal.MyExternalObject externalObject=
      ModelicaUtilities.Examples.Internal.MyExternalObject();

    Modelica.Blocks.Interfaces.RealInput u
    annotation (Placement(transformation(extent={{-140,-20},{-100,20}})));
  Modelica.Blocks.Interfaces.RealOutput y
    annotation (Placement(transformation(extent={{100,-10},{120,10}})));



equation

  y =ModelicaUtilities.Examples.Internal.MyExternalObjectFunction(u,
    externalObject);

  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end ExternalObjectExample;
