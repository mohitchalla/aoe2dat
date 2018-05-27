/*
    geniedat - A library for reading and writing data files of genie
               engine games.
    Copyright (C) 2011 - 2013  Armin Preiml
    Copyright (C) 2011 - 2017  Mikko "Tapsa" P

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef GENIE_UNITHEADER_H
#define GENIE_UNITHEADER_H
#include "genie/file/ISerializable.h"
#include "UnitCommand.h"

namespace genie
{

class UnitHeader : public ISerializable
{
public:
  UnitHeader();
  virtual ~UnitHeader();
  virtual void setGameVersion(GameVersion gv);

  int8_t Exists = 1;
  std::vector<Task> TaskList;

private:
  virtual void serializeObject(void);
};

}

#endif // GENIE_UNITHEADER_H
