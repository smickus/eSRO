/*********************************************************************************
 *
 * This file is part of eSRO.
 *
 * eSRO is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * eSRO is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright ⓒ 2013  Rafael Dominguez (npcdoom)
 *
 *********************************************************************************/

#ifndef REFMAPPINGSHOPGROUP_HPP
#define REFMAPPINGSHOPGROUP_HPP

#include <string>
#include <utility>
#include <vector>
#include <boost/function.hpp>

void ParserRefmappingshopgroup (const std::vector<std::string> &entries,
    boost::function<void (const std::pair<std::string,std::string> &)> func);

#endif // REFMAPPINGSHOPGROUP_HPP
