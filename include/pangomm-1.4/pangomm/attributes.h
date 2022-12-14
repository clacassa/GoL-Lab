// Generated by gmmproc 2.66.2 -- DO NOT MODIFY!
#ifndef _PANGOMM_ATTRIBUTES_H
#define _PANGOMM_ATTRIBUTES_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* attributes.h
 *
 * Copyright (C) 2002 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <pangomm/language.h>
#include <pangomm/rectangle.h>
#include <pangomm/color.h>
#include <pangomm/fontdescription.h>
#include <pango/pango.h>
#include <glibmm/slisthandle.h>


namespace Pango
{
/** @addtogroup pangommEnums pangomm Enums and Flags */

/**  Pango::AttrType distinguishes between different types of attributes.
 * Along with the predefined values, it is possible to allocate additional values for
 * custom attributes using Pango::Attribute::register_type(). The predefined values
 * are given below. The type of structure used to store the
 * attribute is listed in parentheses after the description.
 *  @var AttrType ATTR_INVALID
 * Does not happen.
 * 
 *  @var AttrType ATTR_LANGUAGE
 * Language (Pango::AttrLanguage).
 * 
 *  @var AttrType ATTR_FAMILY
 * Font family name list (Pango::AttrString).
 * 
 *  @var AttrType ATTR_STYLE
 * Font slant style (Pango::AttrInt).
 * 
 *  @var AttrType ATTR_WEIGHT
 * Font weight (Pango::AttrInt).
 * 
 *  @var AttrType ATTR_VARIANT
 * Font variant (normal or small caps) (Pango::AttrInt).
 * 
 *  @var AttrType ATTR_STRETCH
 * Font stretch (Pango::AttrInt).
 * 
 *  @var AttrType ATTR_SIZE
 * Font size in points scaled by Pango::SCALE (Pango::AttrInt).
 * 
 *  @var AttrType ATTR_FONT_DESC
 * Font description (Pango::AttrFontDesc).
 * 
 *  @var AttrType ATTR_FOREGROUND
 * Foreground color (Pango::AttrColor).
 * 
 *  @var AttrType ATTR_BACKGROUND
 * Background color (Pango::AttrColor).
 * 
 *  @var AttrType ATTR_UNDERLINE
 * Whether the text has an underline (Pango::AttrInt).
 * 
 *  @var AttrType ATTR_STRIKETHROUGH
 * Whether the text is struck-through (Pango::AttrInt).
 * 
 *  @var AttrType ATTR_RISE
 * Baseline displacement (Pango::AttrInt).
 * 
 *  @var AttrType ATTR_SHAPE
 * Shape (Pango::AttrShape).
 * 
 *  @var AttrType ATTR_SCALE
 * Font size scale factor (Pango::AttrFloat).
 * 
 *  @var AttrType ATTR_FALLBACK
 * Whether fallback is enabled (Pango::AttrInt).
 * 
 *  @var AttrType ATTR_LETTER_SPACING
 * Letter spacing (Pango::AttrInt).
 * 
 *  @var AttrType ATTR_UNDERLINE_COLOR
 * Underline color (Pango::AttrColor).
 * 
 *  @var AttrType ATTR_STRIKETHROUGH_COLOR
 * Strikethrough color (Pango::AttrColor).
 * 
 *  @var AttrType ATTR_ABSOLUTE_SIZE
 * Font size in pixels scaled by Pango::SCALE (Pango::AttrInt).
 * 
 *  @var AttrType ATTR_GRAVITY
 * Base text gravity (Pango::AttrInt).
 * 
 *  @var AttrType ATTR_GRAVITY_HINT
 * Gravity hint (Pango::AttrInt).
 * 
 *  @var AttrType ATTR_FONT_FEATURES
 * OpenType font features (Pango::AttrString). @newin{1,38}
 * 
 *  @var AttrType ATTR_FOREGROUND_ALPHA
 * Foreground alpha (Pango::AttrInt). @newin{1,38}
 * 
 *  @var AttrType ATTR_BACKGROUND_ALPHA
 * Background alpha (Pango::AttrInt). @newin{1,38}
 * 
 *  @var AttrType ATTR_ALLOW_BREAKS
 * Whether breaks are allowed (Pango::AttrInt). @newin{1,44}
 * 
 *  @var AttrType ATTR_SHOW
 * How to render invisible characters (Pango::AttrInt). @newin{1,44}
 * 
 *  @var AttrType ATTR_INSERT_HYPHENS
 * Whether to insert hyphens at intra-word line breaks (Pango::AttrInt). @newin{1,44}
 * 
 *  @var AttrType ATTR_OVERLINE
 * Whether the text has an overline (Pango::AttrInt). @newin{1,46}
 * 
 *  @var AttrType ATTR_OVERLINE_COLOR
 * Overline color (Pango::AttrColor). @newin{1,46}
 * 
 *  @enum AttrType
 * 
 * The Pango::AttrType
 * distinguishes between different types of attributes. Along with the
 * predefined values, it is possible to allocate additional values
 * for custom attributes using pango_attr_type_register(). The predefined
 * values are given below. The type of structure used to store the
 * attribute is listed in parentheses after the description.
 *
 * @ingroup pangommEnums
 */
enum AttrType
{
  ATTR_INVALID,
  ATTR_LANGUAGE,
  ATTR_FAMILY,
  ATTR_STYLE,
  ATTR_WEIGHT,
  ATTR_VARIANT,
  ATTR_STRETCH,
  ATTR_SIZE,
  ATTR_FONT_DESC,
  ATTR_FOREGROUND,
  ATTR_BACKGROUND,
  ATTR_UNDERLINE,
  ATTR_STRIKETHROUGH,
  ATTR_RISE,
  ATTR_SHAPE,
  ATTR_SCALE,
  ATTR_FALLBACK,
  ATTR_LETTER_SPACING,
  ATTR_UNDERLINE_COLOR,
  ATTR_STRIKETHROUGH_COLOR,
  ATTR_ABSOLUTE_SIZE,
  ATTR_GRAVITY,
  ATTR_GRAVITY_HINT,
  ATTR_FONT_FEATURES,
  ATTR_FOREGROUND_ALPHA,
  ATTR_BACKGROUND_ALPHA,
  ATTR_ALLOW_BREAKS,
  ATTR_SHOW,
  ATTR_INSERT_HYPHENS,
  ATTR_OVERLINE,
  ATTR_OVERLINE_COLOR
};

} // namespace Pango

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class PANGOMM_API Value<Pango::AttrType> : public Glib::Value_Enum<Pango::AttrType>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Pango
{


/** 
 *  @var Underline UNDERLINE_NONE
 * No underline should be drawn.
 * 
 *  @var Underline UNDERLINE_SINGLE
 * A single underline should be drawn.
 * 
 *  @var Underline UNDERLINE_DOUBLE
 * A double underline should be drawn.
 * 
 *  @var Underline UNDERLINE_LOW
 * A single underline should be drawn at a
 * position beneath the ink extents of the text being
 * underlined. This should be used only for underlining
 * single characters, such as for keyboard accelerators.
 * Pango::UNDERLINE_SINGLE should be used for extended
 * portions of text.
 * 
 *  @var Underline UNDERLINE_ERROR
 * A wavy underline should be drawn below.
 * This underline is typically used to indicate an error such
 * as a possible mispelling; in some cases a contrasting color
 * may automatically be used. This type of underlining is
 * available since Pango 1.4.
 * 
 *  @var Underline UNDERLINE_SINGLE_LINE
 * Like @a PANGO_UNDERLINE_SINGLE, but
 * drawn continuously across multiple runs. This type
 * of underlining is available since Pango 1.46.
 * 
 *  @var Underline UNDERLINE_DOUBLE_LINE
 * Like @a PANGO_UNDERLINE_DOUBLE, but
 * drawn continuously across multiple runs. This type
 * of underlining is available since Pango 1.46.
 * 
 *  @var Underline UNDERLINE_ERROR_LINE
 * Like @a PANGO_UNDERLINE_ERROR, but
 * drawn continuously across multiple runs. This type
 * of underlining is available since Pango 1.46.
 * 
 *  @enum Underline
 * 
 * The Pango::Underline enumeration is used to specify
 * whether text should be underlined, and if so, the type
 * of underlining.
 *
 * @ingroup pangommEnums
 */
enum Underline
{
  UNDERLINE_NONE,
  UNDERLINE_SINGLE,
  UNDERLINE_DOUBLE,
  UNDERLINE_LOW,
  UNDERLINE_ERROR,
  UNDERLINE_SINGLE_LINE,
  UNDERLINE_DOUBLE_LINE,
  UNDERLINE_ERROR_LINE
};

} // namespace Pango

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class PANGOMM_API Value<Pango::Underline> : public Glib::Value_Enum<Pango::Underline>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Pango
{

/** 
 *  @var Overline OVERLINE_NONE
 * No overline should be drawn.
 * 
 *  @var Overline OVERLINE_SINGLE
 * Draw a single line above the ink
 * extents of the text being underlined.
 * 
 *  @enum Overline
 * 
 * The Pango::Overline enumeration is used to specify
 * whether text should be overlined, and if so, the type
 * of line.
 * 
 * @newin{1,46}
 *
 * @ingroup pangommEnums
 */
enum Overline
{
  OVERLINE_NONE,
  OVERLINE_SINGLE
};

} // namespace Pango

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class PANGOMM_API Value<Pango::Overline> : public Glib::Value_Enum<Pango::Overline>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Pango
{

/** 
 *  @var ShowFlags SHOW_NONE
 * No special treatment for invisible characters.
 * 
 *  @var ShowFlags SHOW_SPACES
 * Render spaces, tabs and newlines visibly.
 * 
 *  @var ShowFlags SHOW_LINE_BREAKS
 * Render line breaks visibly.
 * 
 *  @var ShowFlags SHOW_IGNORABLES
 * Render default-ignorable Unicode
 * characters visibly.
 * 
 *  @enum ShowFlags
 * 
 * These flags affect how Pango treats characters that are normally
 * not visible in the output.
 *
 * @ingroup pangommEnums
 * @par Bitwise operators:
 * <tt>%ShowFlags operator|(ShowFlags, ShowFlags)</tt><br>
 * <tt>%ShowFlags operator&(ShowFlags, ShowFlags)</tt><br>
 * <tt>%ShowFlags operator^(ShowFlags, ShowFlags)</tt><br>
 * <tt>%ShowFlags operator~(ShowFlags)</tt><br>
 * <tt>%ShowFlags& operator|=(ShowFlags&, ShowFlags)</tt><br>
 * <tt>%ShowFlags& operator&=(ShowFlags&, ShowFlags)</tt><br>
 * <tt>%ShowFlags& operator^=(ShowFlags&, ShowFlags)</tt><br>
 */
enum ShowFlags
{
  SHOW_NONE = 0x0,
  SHOW_SPACES = 1 << 0,
  SHOW_LINE_BREAKS = 1 << 1,
  SHOW_IGNORABLES = 1 << 2
};

/** @ingroup pangommEnums */
inline ShowFlags operator|(ShowFlags lhs, ShowFlags rhs)
  { return static_cast<ShowFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup pangommEnums */
inline ShowFlags operator&(ShowFlags lhs, ShowFlags rhs)
  { return static_cast<ShowFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup pangommEnums */
inline ShowFlags operator^(ShowFlags lhs, ShowFlags rhs)
  { return static_cast<ShowFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup pangommEnums */
inline ShowFlags operator~(ShowFlags flags)
  { return static_cast<ShowFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup pangommEnums */
inline ShowFlags& operator|=(ShowFlags& lhs, ShowFlags rhs)
  { return (lhs = static_cast<ShowFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup pangommEnums */
inline ShowFlags& operator&=(ShowFlags& lhs, ShowFlags rhs)
  { return (lhs = static_cast<ShowFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup pangommEnums */
inline ShowFlags& operator^=(ShowFlags& lhs, ShowFlags rhs)
  { return (lhs = static_cast<ShowFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Pango

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class PANGOMM_API Value<Pango::ShowFlags> : public Glib::Value_Flags<Pango::ShowFlags>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Pango
{


/** A Pango::LogAttr stores information about the attributes of a single character.
 */
typedef PangoLogAttr LogAttr;

class PANGOMM_API AttrString;
class PANGOMM_API AttrLanguage;
class PANGOMM_API AttrColor;
class PANGOMM_API AttrInt;
class PANGOMM_API AttrFloat;
class PANGOMM_API AttrFontDesc;
class PANGOMM_API AttrShape;

/** The Pango::Attribute structure represents the common portions of all attributes.
 * Particular types of attributes derive this class. It holds the range in which the
 * value in the type-specific part of the attribute applies.
 *
 * Attributed text is used in a number of places in pango. It is used as the input to
 * the itemization process and also when creating a Pango::Layout.
 */
class PANGOMM_API Attribute
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Attribute;
  using BaseObjectType = PangoAttribute;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:

  
public:
  /** Constructs an invalid attribute.
   */
  Attribute();

  Attribute(const Attribute& src);
  explicit Attribute(PangoAttribute* castitem, bool take_copy=true);
  ~Attribute();

  Attribute& operator=(const Attribute& src);

  /** Gets the type ID for this attribute.
   * @return The type ID for this attribute or ATTR_INVALID if the attribute is invalid.
   */
  AttrType get_type() const;

  /** Allocate a new attribute type ID.
   *
   * The attribute type name can be accessed later by using get_type_name().
   *
   * @param name An identifier for the type.
   * @return The new type ID.
   */
  static AttrType register_type(const Glib::ustring& name);

  /** Fetches the attribute type name passed in when registering the type using
   * register_type().
   *
   * @newin{2,46}
   *
   * @param type An attribute type ID to fetch the name for.
   * @return The type ID name (which may be an empty string), or an empty string
   *         if @a type is a built-in Pango attribute type or invalid.
   */
  static Glib::ustring get_type_name(AttrType type);
  // _WRAP_METHOD() can't be used here, because glibmm/tools/defs_gen/h2def.py
  // assumes that pango_attr_type_get_name() is a method of a class named PangoAttrType.

  /** Gets the start index of the range.
   * @return The start index of the range.
   */
  unsigned int get_start_index() const;

  /** Gets the end index of the range. The character at this index is not included in the range.
   * @return The end index of the range.
   */
  unsigned int get_end_index() const;

  /** Sets the start index of the range.
   * @param value The new start index (in bytes).
   */
  void set_start_index(const unsigned int& value);

  /** Sets the end index of the range. The character at this index is not included in the range.
   * @param value The new end index (in bytes).
   */
  void set_end_index(const unsigned int& value);

  
  /** Compare two attributes for equality. This compares only the
   * actual value of the two attributes and not the ranges that the
   * attributes apply to.
   * 
   * @param attr2 Another Pango::Attribute.
   * @return <tt>true</tt> if the two attributes have the same value.
   */
  bool equal(const Attribute& attr2) const;

  /// Provides access to the underlying C GObject.  
  PangoAttribute*       gobj()       { return gobject_; }
  /// Provides access to the underlying C GObject.
  const PangoAttribute* gobj() const { return gobject_; }

  /** Create a new font family attribute.
   * @param family The family or comma separated list of families.
   * @return An attribute of type AttrString.
   */
  static AttrString create_attr_family(const Glib::ustring& family);

  /** Create a new language tag attribute
   * @param language The language tag.
   * @return An attribute of type AttrLanguage.
   */
  static AttrLanguage create_attr_language(const Language& language);

  /** Create a new foreground color attribute.
   * @param red The red value (ranging from 0 to 65535).
   * @param green The green value (ranging from 0 to 65535).
   * @param blue The blue value (ranging from 0 to 65535).
   * @return An attribute of type AttrColor.
   */
  static AttrColor create_attr_foreground(guint16 red, guint16 green, guint16 blue);

  /** Create a new background color attribute.
   * @param red The red value (ranging from 0 to 65535).
   * @param green The green value (ranging from 0 to 65535).
   * @param blue The blue value (ranging from 0 to 65535).
   * @return An attribute of type AttrColor.
   */
  static AttrColor create_attr_background(guint16 red, guint16 green, guint16 blue);

  /** Create a new foreground alpha attribute.
   * @param alpha The alpha value, between 1 and 65536.
   */
  static AttrInt create_attr_foreground_alpha(guint16 alpha);

  /** Create a new background alpha attribute.
   * @param alpha The alpha value, between 1 and 65536.
   */
  static AttrInt create_attr_background_alpha(guint16 alpha);

  /** Create a new font-size attribute.
   * @param size The font size, in 1024ths of a point.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_size(int size);

  /** Create a new font-size attribute.
   *
   * @newin{2,42}
   *
   * @param size The font size, in 1024ths of a device unit.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_size_absolute(int size);

  /** Create a new font slant style attribute.
   * @param style The slant style.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_style(Style style);

  /** Create a new font weight attribute.
   * @param weight The weight.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_weight(Weight weight);

  /** Create a new font variant attribute (normal or small caps).
   * @param variant The variant.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_variant(Variant variant);

  /** Create a new font stretch attribute.
   * @param stretch The stretch.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_stretch(Stretch stretch);

  /** Create a new font description attribute.
   * This attribute allows setting family, style, weight, variant, stretch, and size simultaneously.
   * @param desc The font description.
   * @return An attribute of type AttrFontDesc.
   */
  static AttrFontDesc create_attr_font_desc(const FontDescription& desc);

  /** Create a new underline-style object.
   * @param underline The underline style.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_underline(Underline underline);

  /** Create a new underline color attribute.
   * This attribute modifies the color of underlines. If not set,
   * underlines will use the foreground color.
   *
   * @newin{2,42}
   *
   * @param red The red value (ranging from 0 to 65535).
   * @param green The green value (ranging from 0 to 65535).
   * @param blue The blue value (ranging from 0 to 65535).
   * @return An attribute of type AttrColor.
   */
  static AttrColor create_attr_underline_color(guint16 red, guint16 green, guint16 blue);

  /** Create a new overline-style object.
   *
   * @newin{2,46}
   *
   * @param overline The overline style.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_overline(Overline overline);

  /** Create a new overline color attribute.
   *
   * This attribute modifies the color of overlines. If not set,
   * overlines will use the foreground color.
   *
   * @newin{2,46}
   *
   * @param red The red value (ranging from 0 to 65535).
   * @param green The green value (ranging from 0 to 65535).
   * @param blue The blue value (ranging from 0 to 65535).
   * @return An attribute of type AttrColor.
   */
  static AttrColor create_attr_overline_color(guint16 red, guint16 green, guint16 blue);

  /** Create a new font strike-through attribute.
   * @param strikethrough True indicates the text should be struck-through.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_strikethrough(bool strikethrough);

  /** Create a new strikethrough color attribute.
   * This attribute modifies the color of strikethrough lines. If not set,
   * strikethrough lines will use the foreground color.
   *
   * @newin{2,42}
   *
   * @param red The red value (ranging from 0 to 65535).
   * @param green The green value (ranging from 0 to 65535).
   * @param blue The blue value (ranging from 0 to 65535).
   * @return An attribute of type AttrColor.
   */
  static AttrColor create_attr_strikethrough_color(guint16 red, guint16 green, guint16 blue);

  /** Create a new baseline displacement attribute.
   * @param rise The amount that the text should be displaced vertically, in 10'000ths of an em. Positive values displace the text upwards.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_rise(int rise);

  /** Create a new font size scale attribute.
   * The base font for the affected text will have its size multiplied by scale_factor.
   * @param scale_factor Factor to scale the font.
   * @return An attribute of type AttrFloat.
   */
  static AttrFloat create_attr_scale(double scale_factor);

  /** Create a new font fallback attribute.
   * If fallback is disabled, characters will only be used from the
   * closest matching font on the system. No fallback will be done to
   * other fonts on the system that might contain the characters in the text.
   *
   * @newin{2,42}
   *
   * @param enable_fallback <tt>true</tt> if we should fall back on other fonts
   *                        for characters the active font is missing.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_fallback(bool enable_fallback);

  /** Create a new letter-spacing attribute.
   *
   * @newin{2,42}
   *
   * @param letter_spacing Amount of extra space to add between graphemes
   *                       of the text, in Pango units.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_letter_spacing(int letter_spacing);

  /** Create a new shape attribute.
   * A shape is used to impose a particular ink and logical rect on the result of shaping a particular glyph.
   * This might be used, for instance, for embedding a picture or a widget inside a PangoLayout.
   * @param ink_rect Ink rectangle to assign to each character.
   * @param logical_rect Logical rectangle assign to each character.
   * @return An attribute of type AttrShape.
   */
  static AttrShape create_attr_shape(const Rectangle& ink_rect, const Rectangle& logical_rect);

  /** Create a new gravity attribute.
   *
   * @newin{2,42}
   *
   * @param gravity The gravity value; should not be Pango::Gravity::AUTO.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_gravity(Gravity gravity);

  /** Create a new gravity hint attribute.
   *
   * @newin{2,42}
   *
   * @param hint The gravity hint value. Shall be a Pango::GravityHint value.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_gravity_hint(int hint);

  /** Create a new font features tag attribute.
   *
   * @newin{2,42}
   *
   * @param features A string with OpenType font features, in CSS syntax.
   * @return An attribute of type AttrString.
   */
  static AttrString create_attr_font_features(const Glib::ustring& features);

  /** Create a new allow-breaks attribute.
   *
   * If breaks are disabled, the range will be kept in a
   * single run, as far as possible.
   *
   * @newin{2,46}
   *
   * @param allow_breaks <tt>true</tt> if line breaks are allowed.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_allow_breaks(bool allow_breaks);

  /** Create a new insert-hyphens attribute.
   *
   * Pangomm will insert hyphens when breaking lines in the middle
   * of a word. This attribute can be used to suppress the hyphen.
   *
   * @newin{2,46}
   *
   * @param insert_hyphens <tt>true</tt> if hyphens should be inserted.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_insert_hyphens(bool insert_hyphens);

  /** Create a new attribute that influences how invisible characters are rendered.
   *
   * @newin{2,46}
   *
   * @param flags Pango::ShowFlags to apply.
   * @return An attribute of type AttrInt.
   */
  static AttrInt create_attr_show(ShowFlags show);

protected:
  PangoAttribute* gobject_;


};

/** @relates Pango::Attribute */
inline bool operator==(const Attribute& lhs, const Attribute& rhs)
{
  return lhs.equal(rhs);
}

/** @relates Pango::Attribute */
inline bool operator!=(const Attribute& lhs, const Attribute& rhs)
{
  return !lhs.equal(rhs);
}


/** A Pango::AttrString is used to represent an attribute with a string value.
 */
class PANGOMM_API AttrString : public Attribute
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = AttrString;
  using BaseObjectType = PangoAttrString;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:


protected:
  AttrString();
public:
  AttrString(const AttrString& src);
  explicit AttrString(PangoAttrString* castitem, bool take_copy=true);

  AttrString& operator=(const AttrString& src);

  /** Gets the string which is the value of the attribute.
   * @return The string value of the attribute.
   */
  Glib::ustring get_string() const;

  /** Sets the string which is the value of the attribute.
   * @param string The new string value for the attribute.
   */
  void set_string(const Glib::ustring& string);

  /// Provides access to the underlying C GObject.  
  PangoAttrString*       gobj()       { return reinterpret_cast<PangoAttrString*>(gobject_); }
  /// Provides access to the underlying C GObject.
  const PangoAttrString* gobj() const { return reinterpret_cast<const PangoAttrString*>(gobject_); }


};


/** A Pango::AttrLanguage is used to represent an attribute that is a language.
 */
class PANGOMM_API AttrLanguage : public Attribute
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = AttrLanguage;
  using BaseObjectType = PangoAttrLanguage;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:


protected:
  AttrLanguage();
public:
  AttrLanguage(const AttrLanguage& src);
  explicit AttrLanguage(PangoAttrLanguage* castitem, bool take_copy=true);

  AttrLanguage& operator=(const AttrLanguage& src);

  /** Gets the language which is the value of the attribute.
   * @return The language tag of the attribute.
   */
  Language get_language() const;

  /** Sets the language which is the value of the attribute.
   * @param value The new language tag for the attribute.
   */
  void set_language(const Language& value);

  /// Provides access to the underlying C GObject.  
  PangoAttrLanguage*       gobj()       { return reinterpret_cast<PangoAttrLanguage*>(gobject_); }
  /// Provides access to the underlying C GObject.
  const PangoAttrLanguage* gobj() const { return reinterpret_cast<const PangoAttrLanguage*>(gobject_); }


};


/** A Pango::AttrColor is used to represent an attribute which is a color.
 */
class PANGOMM_API AttrColor : public Attribute
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = AttrColor;
  using BaseObjectType = PangoAttrColor;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:


protected:
  AttrColor();
public:
  AttrColor(const AttrColor& src);
  explicit AttrColor(PangoAttrColor* castitem, bool take_copy=true);

  AttrColor& operator=(const AttrColor& src);

  /** Gets the color which is the value of the attribute.
   * @return The color value of the attribute.
   */
  Color get_color() const;

  /** Sets the color which is the value of the attribute.
   * @param value The new color value for the attribute.
   */
  void set_color(const Color& value);

  /// Provides access to the underlying C GObject.  
  PangoAttrColor*       gobj()       { return reinterpret_cast<PangoAttrColor*>(gobject_); }
  /// Provides access to the underlying C GObject.
  const PangoAttrColor* gobj() const { return reinterpret_cast<const PangoAttrColor*>(gobject_); }


};


/** A Pango::AttrInt is used to represent an attribute with an integer or enumeration value.
 */
class PANGOMM_API AttrInt : public Attribute
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = AttrInt;
  using BaseObjectType = PangoAttrInt;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:


protected:
  AttrInt();
public:
  AttrInt(const AttrInt& src);
  explicit AttrInt(PangoAttrInt* castitem, bool take_copy=true);

  AttrInt& operator=(const AttrInt& src);

  /** Gets the integer value of the attribute.
   * @return The integer value of the attribute.
   */
  int get_value() const;

  /** Sets the integer value of the attribute.
   * @param value The new integer value for the attribute.
   */
  void set_value(const int& value);

  /// Provides access to the underlying C GObject.  
  PangoAttrInt*       gobj()       { return reinterpret_cast<PangoAttrInt*>(gobject_); }
  /// Provides access to the underlying C GObject.
  const PangoAttrInt* gobj() const { return reinterpret_cast<const PangoAttrInt*>(gobject_); }


};


/** A Pango::AttrFloat is used to represent an attribute with a float or double value.
 */
class PANGOMM_API AttrFloat : public Attribute
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = AttrFloat;
  using BaseObjectType = PangoAttrFloat;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:


protected:
  AttrFloat();
public:
  AttrFloat(const AttrFloat& src);
  explicit AttrFloat(PangoAttrFloat* castitem, bool take_copy=true);

  AttrFloat& operator=(const AttrFloat& src);

  /** Gets the floating point value of the attribute.
   * @return The floating point value of the attribute.
   */
  double get_value() const;

  /** Sets the floating point value of the attribute.
   * @param value The new floating point value for the attribute.
   */
  void set_value(const double& value);

  /// Provides access to the underlying C GObject.
  PangoAttrFloat*       gobj()       { return reinterpret_cast<PangoAttrFloat*>(gobject_); }
  /// Provides access to the underlying C GObject.
  const PangoAttrFloat* gobj() const { return reinterpret_cast<const PangoAttrFloat*>(gobject_); }


};


/** A Pango::AttrFontDesc is used to represent an attribute that sets all aspects of the font description at once.
 */
class PANGOMM_API AttrFontDesc : public Attribute
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = AttrFontDesc;
  using BaseObjectType = PangoAttrFontDesc;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:


protected:
  AttrFontDesc();
public:
  AttrFontDesc(const AttrFontDesc& src);
  explicit AttrFontDesc(PangoAttrFontDesc* castitem, bool take_copy=true);

  AttrFontDesc& operator=(const AttrFontDesc& src);

  /** Gets the font description which is the value of the attribute.
   * @return The font description of the attribute.
   */
  FontDescription get_desc() const;

  /** Sets the font description which is the value of the attribute.
   * @param desc The new font description for the attribute.
   */
  void set_desc(const FontDescription& desc);
  
  /// Provides access to the underlying C GObject.
  PangoAttrFontDesc*       gobj()       { return reinterpret_cast<PangoAttrFontDesc*>(gobject_); }
  /// Provides access to the underlying C GObject.
  const PangoAttrFontDesc* gobj() const { return reinterpret_cast<const PangoAttrFontDesc*>(gobject_); }


};


/** A Pango::AttrShape structure is used to represent an attribute which imposes shape restrictions.
 */
class PANGOMM_API AttrShape : public Attribute
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = AttrShape;
  using BaseObjectType = PangoAttrShape;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:


protected:
  AttrShape();
public:
  AttrShape(const AttrShape& src);
  explicit AttrShape(PangoAttrShape* castitem, bool take_copy=true);

  AttrShape& operator=(const AttrShape& src);

  /** Gets the ink rectangle to restrict to.
   * @return The ink rectangle of the attribute.
   */
  Rectangle get_ink_rect() const;

  /** Gets the logical rectangle to restrict to.
   * @return The logical rectangle of the attribute.
   */
  Rectangle get_logical_rect() const;

  /** Sets the ink rectangle to restrict to.
   * @param value The new ink rectangle for the attribute.
   */
  void set_ink_rect(const Rectangle& value);

  /** Sets the logical rectangle to restrict to.
   * @param value The new logical rectangle for the attribute.
   */
  void set_logical_rect(const Rectangle& value);

  /// Provides access to the underlying C GObject.  
  PangoAttrShape*       gobj()       { return reinterpret_cast<PangoAttrShape*>(gobject_); }
  /// Provides access to the underlying C GObject.
  const PangoAttrShape* gobj() const { return reinterpret_cast<const PangoAttrShape*>(gobject_); }


};


struct AttributeTraits
{
  typedef Pango::Attribute      CppType;
  typedef const PangoAttribute* CType;
  typedef PangoAttribute*       CTypeNonConst;

  static CType   to_c_type      (const CppType& obj) { return obj.gobj(); }
  static CType   to_c_type      (CType ptr) { return ptr; }
  static CppType to_cpp_type    (CType ptr) { return CppType(const_cast<CTypeNonConst>(ptr), true); }
  static void    release_c_type (CType ptr) { pango_attribute_destroy(const_cast<CTypeNonConst>(ptr)); }
};

typedef Glib::SListHandle<Attribute, AttributeTraits> SListHandle_Attribute;

} // namespace Pango


namespace Glib
{

/** @relates Pango::Attribute */
PANGOMM_API
Pango::Attribute wrap(PangoAttribute* object, bool take_copy = false);

/** @relates Pango::AttrString */
PANGOMM_API
Pango::AttrString wrap(PangoAttrString* object, bool take_copy = false);

/** @relates Pango::AttrLanguage */
PANGOMM_API
Pango::AttrLanguage wrap(PangoAttrLanguage* object, bool take_copy = false);

/** @relates Pango::AttrColor */
PANGOMM_API
Pango::AttrColor wrap(PangoAttrColor* object, bool take_copy = false);

/** @relates Pango::AttrInt */
PANGOMM_API
Pango::AttrInt wrap(PangoAttrInt* object, bool take_copy = false);

/** @relates Pango::AttrFloat */
PANGOMM_API
Pango::AttrFloat wrap(PangoAttrFloat* object, bool take_copy = false);

/** @relates Pango::AttrFontDesc */
PANGOMM_API
Pango::AttrFontDesc wrap(PangoAttrFontDesc* object, bool take_copy = false);

/** @relates Pango::AttrShape */
PANGOMM_API
Pango::AttrShape wrap(PangoAttrShape* object, bool take_copy = false);

} //namespace Glib


#endif /* _PANGOMM_ATTRIBUTES_H */

