// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _GTKMM_TEXTATTRIBUTES_H
#define _GTKMM_TEXTATTRIBUTES_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright(C) 1998-2002 The gtkmm Development Team
 *
 * This library is free software, ) you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, ) either
 * version 2.1 of the License, or(at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY, ) without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library, ) if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */


#include <glibmm/value.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _GtkTextAttributes GtkTextAttributes; }
#endif

namespace Gtk
{

/**
 * @ingroup TextView
 */
class GTKMM_API TextAttributes
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = TextAttributes;
  using BaseObjectType = GtkTextAttributes;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type() G_GNUC_CONST;

  TextAttributes();

  explicit TextAttributes(GtkTextAttributes* gobject, bool make_a_copy = true);

  TextAttributes(const TextAttributes& other);
  TextAttributes& operator=(const TextAttributes& other);

  TextAttributes(TextAttributes&& other) noexcept;
  TextAttributes& operator=(TextAttributes&& other) noexcept;

  ~TextAttributes() noexcept;

  void swap(TextAttributes& other) noexcept;

  ///Provides access to the underlying C instance.
  GtkTextAttributes*       gobj()       { return gobject_; }

  ///Provides access to the underlying C instance.
  const GtkTextAttributes* gobj() const { return gobject_; }

  ///Provides access to the underlying C instance. The caller is responsible for freeing it. Use when directly setting fields in structs.
  GtkTextAttributes* gobj_copy() const;

protected:
  GtkTextAttributes* gobject_;

private:

public:


};

} //namespace Gtk


namespace Gtk
{

/** @relates Gtk::TextAttributes
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 */
inline void swap(TextAttributes& lhs, TextAttributes& rhs) noexcept
  { lhs.swap(rhs); }

} // namespace Gtk

namespace Glib
{

/** A Glib::wrap() method for this object.
 *
 * @param object The C instance.
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 *
 * @relates Gtk::TextAttributes
 */

Gtk::TextAttributes wrap(GtkTextAttributes* object, bool take_copy = false);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
template <>
class  Value<Gtk::TextAttributes> : public Glib::Value_Boxed<Gtk::TextAttributes>
{};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} // namespace Glib


#endif /* _GTKMM_TEXTATTRIBUTES_H */

