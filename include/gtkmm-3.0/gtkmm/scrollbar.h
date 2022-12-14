// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _GTKMM_SCROLLBAR_H
#define _GTKMM_SCROLLBAR_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
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

#include <gtkmm/range.h>
#include <gtkmm/orientable.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkScrollbar = struct _GtkScrollbar;
using GtkScrollbarClass = struct _GtkScrollbarClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API Scrollbar_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A Scrollbar.
 *
 * The #Scrollbar widget is a horizontal or vertical scrollbar,
 * depending on the value of the orientation property.
 *
 * The position of the thumb in a scrollbar is controlled by the scroll
 * adjustments. See Gtk::Adjustment for the fields in an adjustment - for
 * Gtk::Scrollbar, the "value" field represents the position of the scrollbar,
 * which must be between the "lower" field and "upper - page_size." The
 * "page_size" field represents the size of the visible scrollable area. The
 * "step_increment" and "page_increment" fields are used when the user asks
 * to step down (using the small stepper arrows) or page down (using for
 * example the PageDown key).
 *
 * @ingroup Widgets
 */

class GTKMM_API Scrollbar
 : public Range,
   public Orientable
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Scrollbar CppObjectType;
  typedef Scrollbar_Class CppClassType;
  typedef GtkScrollbar BaseObjectType;
  typedef GtkScrollbarClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Scrollbar(Scrollbar&& src) noexcept;
  Scrollbar& operator=(Scrollbar&& src) noexcept;

  // noncopyable
  Scrollbar(const Scrollbar&) = delete;
  Scrollbar& operator=(const Scrollbar&) = delete;

  ~Scrollbar() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class GTKMM_API Scrollbar_Class;
  static CppClassType scrollbar_class_;

protected:
  explicit Scrollbar(const Glib::ConstructParams& construct_params);
  explicit Scrollbar(GtkScrollbar* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkScrollbar*       gobj()       { return reinterpret_cast<GtkScrollbar*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkScrollbar* gobj() const { return reinterpret_cast<GtkScrollbar*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

  
public:
  Scrollbar();

  //Note that we try to use the same defaul parameter value as the default property value.
  explicit Scrollbar(const Glib::RefPtr<Adjustment>& adjustment, Orientation orientation = ORIENTATION_HORIZONTAL);
  

};

} //namespace Gtk


//Include the deprecated header,
//whose classes were previously in this header,
//to preserve the "API" of the includes.
#include <gtkmm/hvscrollbar.h>


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Scrollbar
   */
  GTKMM_API
  Gtk::Scrollbar* wrap(GtkScrollbar* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_SCROLLBAR_H */

