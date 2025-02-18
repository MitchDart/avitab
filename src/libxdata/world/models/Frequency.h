/*
 *   AviTab - Aviator's Virtual Tablet
 *   Copyright (C) 2018 Folke Will <folko@solhost.org>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU Affero General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Affero General Public License for more details.
 *
 *   You should have received a copy of the GNU Affero General Public License
 *   along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef SRC_LIBXDATA_WORLD_MODELS_FREQUENCY_H_
#define SRC_LIBXDATA_WORLD_MODELS_FREQUENCY_H_

#include <string>

namespace xdata {

class Frequency {
public:
    enum class Unit {
        NONE,
        MHZ,
        KHZ
    };

    Frequency() = default;
    Frequency(int frq, int places, Unit unit, const std::string &desc);
    std::string getFrequencyString() const;
    const std::string &getDescription() const;

    operator bool() const;
private:
    int frequency = 0;
    int places = 0;
    Unit unit = Unit::NONE;
    std::string description;
};

} /* namespace xdata */

#endif /* SRC_LIBXDATA_WORLD_MODELS_FREQUENCY_H_ */
