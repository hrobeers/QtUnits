/****************************************************************************

 Copyright (c) 2013, Hans Robeers
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

#include "angle.h"

#include "boost/units/systems/angle/degrees.hpp"
#include "boost/mpl/string.hpp"

using namespace qt::units;
using namespace boost::units;
using namespace boost::mpl;

static const UnitConvertor<si::plane_angle, si::plane_angle, string<'rad'> > CONVERTOR_RAD;
static const UnitConvertor<degree::plane_angle, si::plane_angle, string<'deg'> > CONVERTOR_DEG;

static const Angle::insertConvertor rad(AngleUnit::radian, &CONVERTOR_RAD);
static const Angle::insertConvertor deg(AngleUnit::degree, &CONVERTOR_DEG);

Angle::Angle() :
    QuantityBase(quantity<si::plane_angle, qreal>(0 * si::radian), AngleUnit::radian)
{
}

Angle::Angle(boost::units::quantity<si::plane_angle, qreal> internalValue, AngleUnit displayUnit) :
    QuantityBase(internalValue, displayUnit)
{
}
