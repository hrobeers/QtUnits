/****************************************************************************

 Copyright (c) 2014, Hans Robeers
 All rights reserved.

 BSD 2-Clause License

 Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

****************************************************************************/

#include "quantitytests.h"

#include "submodules/qtestrunner/qtestrunner.hpp"
#include <QtUnits>

#include "boost/units/systems/si/length.hpp"
#include "boost/units/systems/cgs/length.hpp"

using namespace qt::units;
using namespace boost::units;
using namespace boost::mpl;

void QuantityTests::testLength()
{
    quantity<si::length, qreal> l(10 * si::meter);
    QCOMPARE(l.value(), 10.0);

    Length ql(l, LengthUnit::cm);
    QCOMPARE(ql.internalValue().value(), 10.0);
    QCOMPARE(ql.value(), 1000.0);
    QCOMPARE(ql.unitSymbol(), QString("cm"));

    ql.setUnit(LengthUnit::m);
    QCOMPARE(ql.value(), 10.0);
    QCOMPARE(ql.unitSymbol(), QString("m"));

    ql.setUnit(LengthUnit::ft);
    QCOMPARE(ql.value(), 10/0.3048);
    QCOMPARE(ql.unitSymbol(), QString("ft"));

    ql.setUnit(LengthUnit::inch);
    QCOMPARE(ql.value(), 10/0.0254);
    QCOMPARE(ql.unitSymbol(), QString("in"));
}

QTR_ADD_TEST(QuantityTests)
