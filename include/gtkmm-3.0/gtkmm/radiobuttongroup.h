#ifndef _GTKMM_RADIOBUTTONGROUP_H
#define _GTKMM_RADIOBUTTONGROUP_H
/* radiobuttongroup.h
 *
 * Copyright(C) 2001-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or(at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtkmmconfig.h> // Can define GTKMM_DISABLE_DEPRECATED

#include <glibmm/object.h> //For Glib::RefPtr<> and std::size_t

#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
  typedef struct _GSList GSList;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gtk
{

class GTKMM_API RadioButton;
class GTKMM_API RadioMenuItem;
class GTKMM_API RadioAction; //deprecated
class GTKMM_API RadioToolButton;

/** RadioButtonGroup, identifier for RadioButtons.
 * To set up this RadioButtonGroup, construct a RadioButtonGroup and then pass it
 * to the constructor of all radio items.  You do not need
 * to keep the RadioButtonGroup beyond the initial construction.
 * It should not be instantiated with new, and it will be invalid after the RadioButtons have been deleted.
 */
class GTKMM_API RadioButtonGroup
{
public:
  RadioButtonGroup();
  RadioButtonGroup(const RadioButtonGroup& src);

  RadioButtonGroup& operator=(const RadioButtonGroup& src);

protected:
  explicit RadioButtonGroup(GSList* group);

  friend class Gtk::RadioButton;
  friend class Gtk::RadioMenuItem;
  friend class Gtk::RadioAction; //deprecated
  friend class Gtk::RadioToolButton;


  //These all have similar interfaces.
  //TODO: Add a common multiply-inherited base class, with set_group()=0?
  //      Would that anything useful other than being tidy? murrayc
  void add(RadioButton& item);
  void add(RadioMenuItem& item);
#ifndef GTKMM_DISABLE_DEPRECATED
  /** @deprecated Because Gtk::RadioAction is deprecated.
   */
  void add(const Glib::RefPtr<RadioAction>& item);
#endif // GTKMM_DISABLE_DEPRECATED
  void add(RadioToolButton& item);

  void* operator new(std::size_t); // not implemented

  GSList* group_;
};

} // namespace Gtk


#endif /* _GTKMM_RADIOBUTTONGROUP_H */
