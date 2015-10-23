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

#include "length.h"
#include "boost/units/systems/cgs/length.hpp"
#include "systems.hpp"

using namespace qt::units;
using namespace boost::units;

namespace
{
    constexpr auto M_SYMBOL  = "m";
    constexpr auto CM_SYMBOL = "cm";
    constexpr auto FT_SYMBOL = "ft";
    constexpr auto IN_SYMBOL = "in";

    constexpr UnitConvertor<si::length, si::length> CONVERTOR_M(M_SYMBOL);
    constexpr UnitConvertor<cgs::length, si::length> CONVERTOR_CM(CM_SYMBOL);
    constexpr UnitConvertor<ft::length, si::length> CONVERTOR_FT(FT_SYMBOL);
    constexpr UnitConvertor<inch::length, si::length> CONVERTOR_IN(IN_SYMBOL);

    const Length::insertConvertor m(LengthUnit::m, &CONVERTOR_M);
    const Length::insertConvertor cm(LengthUnit::cm, &CONVERTOR_CM);
    const Length::insertConvertor ft(LengthUnit::ft, &CONVERTOR_FT);
    const Length::insertConvertor inch(LengthUnit::inch, &CONVERTOR_IN);
}

Length::Length() :
    QuantityBase(quantity<si::length, qreal>(0 * si::meter), LengthUnit::cm)
{
}

Length::Length(boost::units::quantity<si::length, qreal> internalValue, LengthUnit displayUnit) :
    QuantityBase(internalValue, displayUnit)
{
}
