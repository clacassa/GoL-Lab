// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _GDKMM_COLOR_H
#define _GDKMM_COLOR_H

#include <gdkmmconfig.h>

#ifndef GDKMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 1998-2002 The gtkmm Development Team
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

// This is for including the config header before any code (such as
// the #ifndef GDKMM_DISABLE_DEPRECATED in deprecated classes) is generated:


#include <glibmm/value.h>
#include <gdk/gdk.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _GdkColor GdkColor; }
#endif

namespace Gdk
{

//This is not actually deprecated in C, because of https://bugzilla.gnome.org/show_bug.cgi?id=636695
//but all our uses of it in the gtkmm API are deprecated (and in C) so we can deprecate it in gtkmm.

/** Gdk::Color is used to describe an allocated or unallocated color.
 * It contains the following data:
 * - pixel: For allocated colors, the value used to draw this color on the screen.
 * - red: The red component of the color. This is a value between 0 and 65535, with 65535 indicating full intensitiy.
 * - green: The green component of the color.
 * - blue: The blue component of the color.
 *
 * @deprecated Use Gdk::RGBA instead.
 */
class GDKMM_API Color
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Color;
  using BaseObjectType = GdkColor;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type() G_GNUC_CONST;


  explicit Color(GdkColor* gobject, bool make_a_copy = true);

  Color(const Color& other);
  Color& operator=(const Color& other);

  Color(Color&& other) noexcept;
  Color& operator=(Color&& other) noexcept;

  ~Color() noexcept;

  void swap(Color& other) noexcept;

  ///Provides access to the underlying C instance.
  GdkColor*       gobj()       { return gobject_; }

  ///Provides access to the underlying C instance.
  const GdkColor* gobj() const { return gobject_; }

  ///Provides access to the underlying C instance. The caller is responsible for freeing it. Use when directly setting fields in structs.
  GdkColor* gobj_copy() const;

protected:
  GdkColor* gobject_;

private:

  
public:

  
  /** Instantiate a new Gdk::Color.
   * You should then use the set methods.
   */
  Color();

  /** Instantiate a new Gdk::Color.
   * The text string can be in any of the forms accepted by XParseColor; these include names for a color from rgb.txt,
   * such as DarkSlateGray, or a hex specification such as 305050.
   * @param value the string specifying the color.
   */
  explicit Color(const Glib::ustring& value);

  /** Set a grey color, by using the same value for all color components.
   * @param value The value to be used for the red, green, and blue components.
   */
  void set_grey(gushort value);

  /** Set a grey color, by using the same value for all color components.
   * @param g The value to be used for the red, green, and blue components, as a fraction.
   */
  void set_grey_p(double g);

  /** Set the color, by specifying red, green, and blue color component values.
   * @param red_ The red component of the color.
   * @param green_ The green component of the color.
   * @param blue_ The blue component of the color.
   */
  void set_rgb(gushort red_, gushort green_, gushort blue_);

  /** Set the color, by specifying red, green, and blue color component values, as fractions.
   * @param red_ The red component of the color, as a fraction.
   * @param green_ The green component of the color, as a fraction.
   * @param blue_ The blue component of the color, as a fraction.
   */
  void set_rgb_p(double red_, double green_, double blue_);

  /** Set the color, by specifying hue, saturation, and value (brightness).
   * @param h Hue, in the range 0..360 degrees.
   * @param s Saturation, in the range 0..1.
   * @param v Value (a.k.a. brightness), in the range 0..1.
   */
  void set_hsv(double h, double s, double v);

  /** Set the color, by specifying hue, saturation, and lightness.
   * @param h Hue, in the range 0..360 degrees.
   * @param s Saturation, in the range 0..1.
   * @param l Lightness, in the range 0..1.
   */
  void set_hsl(double h, double s, double l);

  /** Parses a textual specification of a color and fills in the red, green, and blue values.
  * The text string can be in any of the forms accepted by XParseColor; these include names for a color from rgb.txt,
  * such as DarkSlateGray, or a hex specification such as 305050.
  *
  * @param value the string specifying the color.
  * @result true if the parsing succeeded.
  */
  bool set(const Glib::ustring& value);

  /** Get the red component of the color.
   * @result The red component of the color.
   */
  gushort get_red() const;

  /** Get the green component of the color.
   * @result The green component of the color.
   */
  gushort get_green() const;

  /** Get the blue component of the color.
   * @result The blue component of the color.
   */
  gushort get_blue() const;

  /** Set the red component of the color.
   * @param value The red component of the color.
   */
  void set_red(gushort value);

  /** Set the green component of the color.
   * @param value The green component of the color.
   */
  void set_green(gushort value);

  /** Set the blue component of the color.
   * @param value The blue component of the color.
   */
  void set_blue(gushort value);

  /** Get the pixel value, for allocated colors.
   * @result For allocated colors, the value used to draw this color on the screen.
   */
  guint get_pixel() const;

  /** Get the red component of the color, as a fraction.
   * @result The red component of the color, as a fraction.
   */
  double get_red_p() const;

  /** Get the green component of the color, as a fraction.
   * @result The green component of the color, as a fraction.
   */
  double get_green_p() const;

  /** Get the blue component of the color, as a fraction.
   * @result The blue component of the color, as a fraction.
   */
  double get_blue_p() const;

  /** Get a textual specification of color in the hexadecimal form \#rrrrggggbbbb,
   * where r, g and b are hex digits representing the red, green and blue components respectively.
   *
   * @result The string representation.
   *
   * @newin{2,14}
   */
  Glib::ustring to_string() const;


};


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/* These traits are for arrays of GdkColor structs -- not pointer arrays.
 */
struct ColorTraits
{
  typedef Gdk::Color  CppType;
  typedef GdkColor    CType;
  typedef GdkColor    CTypeNonConst;

  static CType   to_c_type      (const CppType& obj) { return *obj.gobj(); }
  static CType   to_c_type      (const CType&   obj) { return obj; }
  static CppType to_cpp_type    (const CType&   obj) { return CppType(const_cast<CType*>(&obj), true); }
  static void    release_c_type (const CType&)       {}
};
#endif //DOXYGEN_SHOULD_SKIP_THIS

} // namespace Gdk


namespace Gdk
{

/** @relates Gdk::Color
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 * @result The result
 */
GDKMM_API
bool operator==(const Color& lhs, const Color& rhs);

/** @relates Gdk::Color
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 * @result The result
 */
GDKMM_API
bool operator!=(const Color& lhs, const Color& rhs);


} // namespace Gdk


namespace Gdk
{

/** @relates Gdk::Color
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 */
inline void swap(Color& lhs, Color& rhs) noexcept
  { lhs.swap(rhs); }

} // namespace Gdk

namespace Glib
{

/** A Glib::wrap() method for this object.
 *
 * @param object The C instance.
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 *
 * @relates Gdk::Color
 */
GDKMM_API
Gdk::Color wrap(GdkColor* object, bool take_copy = false);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
template <>
class GDKMM_API Value<Gdk::Color> : public Glib::Value_Boxed<Gdk::Color>
{};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} // namespace Glib


#endif // GDKMM_DISABLE_DEPRECATED


#endif /* _GDKMM_COLOR_H */

