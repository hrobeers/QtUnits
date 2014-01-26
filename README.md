Qt::Units
=========

Qt runtime unit conversion library built using (and compatible with) Boost::Units.

This library is originally developed for the finFoil project (https://github.com/hrobeers/finFoil).


## Dependencies

C++11 compliant compiler

Qt >= 4.8

Boost >= 1.54


## Usage

Qt::Units requires that all internal calculations are performed in SI units.
It is recommended to use boost::units::quantity<T> instead of doubles for every value that has a dimension.

The qt::units::IQuantity interface is implemented by all the runtime unit conversion classes.
e.g. qt::units::Length inherits qt::units::QuantityBase<LengthUnit, boost::units::si::length> which inherits qt::units::IQuantity.

Specific unit widgets, located in the widgets/ folder, can be used to display the converted values in your Qt GUI.


Assume that you want to convert a value of 10m to cm.
In your code you will have the following boost quantity:

'''C++
 quantity<si::length, qreal> l(10 * si::meter);
'''

Create a qt::units::Length object with a display unit cm.
This display unit can be changed at runtime using the setUnit(UnitEnum) method.

'''C++
 Length length(l, LengthUnit::cm);
'''

The following methods on the length object should explain themselves.

'''C++
 length.internalValue().value();     // returns: 10.0

 length.value();                     // returns: 1000.0

 length.unitSymbol();                // returns: QString("cm")
'''

It is also important to note that the internalValue cannot be requested on the IQuantity interface.
This due to the fact that IQuantity does not know which boost quantity type to return.


More usage examples can be found in the tests/ folder or in the finFoil project.
