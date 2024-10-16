within ModelicaUtilities.Examples;
model ExternalFunctionExample
  extends Modelica.Icons.Example;

  Modelica.Blocks.Interfaces.RealInput u
    annotation (Placement(transformation(extent={{-140,-20},{-100,20}})));
  Modelica.Blocks.Interfaces.RealOutput y
    annotation (Placement(transformation(extent={{100,-10},{120,10}})));


equation

  y =ModelicaUtilities.Examples.Internal.MyExternalFunction(u);

end ExternalFunctionExample;
