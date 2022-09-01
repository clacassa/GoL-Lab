// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _GTKMM_TOOLBUTTON_H
#define _GTKMM_TOOLBUTTON_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2003 The gtkmm Development Team
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

#include <gtkmm/toolitem.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkToolButton = struct _GtkToolButton;
using GtkToolButtonClass = struct _GtkToolButtonClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API ToolButton_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

//TODO: Derive from (and implement) Actionable when we can break ABI.

/** A Gtk::ToolItem subclass that displays buttons.
 *
 * A ToolButton is are Gtk::ToolItem containing a button.
 * @ingroup Widgets
 */

class GTKMM_API ToolButton : public ToolItem
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ToolButton CppObjectType;
  typedef ToolButton_Class CppClassType;
  typedef GtkToolButton BaseObjectType;
  typedef GtkToolButtonClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  ToolButton(ToolButton&& src) noexcept;
  ToolButton& operator=(ToolButton&& src) noexcept;

  // noncopyable
  ToolButton(const ToolButton&) = delete;
  ToolButton& operator=(const ToolButton&) = delete;

  ~ToolButton() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class GTKMM_API ToolButton_Class;
  static CppClassType toolbutton_class_;

protected:
  explicit ToolButton(const Glib::ConstructParams& construct_params);
  explicit ToolButton(GtkToolButton* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkToolButton*       gobj()       { return reinterpret_cast<GtkToolButton*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkToolButton* gobj() const { return reinterpret_cast<GtkToolButton*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_clicked().
  virtual void on_clicked();


private:

public:

  /** Creates a new ToolButton.
   */
  ToolButton();

  // _WRAP_CTOR does not take a 'deprecated' parameter.
  // _WRAP_CTOR(ToolButton(const Gtk::StockID& stock_id), gtk_tool_button_new_from_stock)
#ifndef GTKMM_DISABLE_DEPRECATED
  /** Creates a new ToolButton from a StockID.
   *
   * The ToolButton will be created according to the @a stock_id properties.
   *
   * @param stock_id The StockID which determines the look of the ToolButton.
   * @deprecated Use the constructor with @a icon_widget and @a label parameters instead.
   */
   explicit ToolButton(const Gtk::StockID& stock_id);
   
#endif // GTKMM_DISABLE_DEPRECATED

  /** Creates a new ToolButton with a label.
   *
   * The ToolButton will have the label @a label.
   *
   * @param label The string used to display the label for this ToolButton.
   */
  explicit ToolButton(const Glib::ustring& label);

  /** Creates a new ToolButton with an image.
   *
   * The ToolButton will have the label @a label and an image widget @a icon_widget.
   *
   * @param icon_widget The widget placed as the ToolButton's icon.
   * @param label The string used to display the label for this ToolButton.
   */
    explicit ToolButton(Widget& icon_widget, const Glib::ustring& label =  Glib::ustring());


  /** Sets @a label as the label used for the tool button. The Gtk::ToolButton::property_label()
   * property only has an effect if not overridden by a non-<tt>nullptr</tt> 
   * Gtk::ToolButton::property_label_widget() property. If both the Gtk::ToolButton::property_label_widget()
   * and Gtk::ToolButton::property_label() properties are <tt>nullptr</tt>, the label is determined by the
   * Gtk::ToolButton::property_stock_id() property. If the Gtk::ToolButton::property_stock_id() property is
   * also <tt>nullptr</tt>, @a button will not have a label.
   * 
   * @newin{2,4}
   * 
   * @param label A string that will be used as label, or <tt>nullptr</tt>.
   */
  void set_label(const Glib::ustring& label);
  
  /** Returns the label used by the tool button, or <tt>nullptr</tt> if the tool button
   * doesn’t have a label. or uses a the label from a stock item. The returned
   * string is owned by GTK+, and must not be modified or freed.
   * 
   * @newin{2,4}
   * 
   * @return The label, or <tt>nullptr</tt>.
   */
  Glib::ustring get_label() const;
  
  /** If set, an underline in the label property indicates that the next character
   * should be used for the mnemonic accelerator key in the overflow menu. For
   * example, if the label property is “_Open” and @a use_underline is <tt>true</tt>,
   * the label on the tool button will be “Open” and the item on the overflow
   * menu will have an underlined “O”.
   * 
   * Labels shown on tool buttons never have mnemonics on them; this property
   * only affects the menu item on the overflow menu.
   * 
   * @newin{2,4}
   * 
   * @param use_underline Whether the button label has the form “_Open”.
   */
  void set_use_underline(bool use_underline =  true);
  
  /** Returns whether underscores in the label property are used as mnemonics
   * on menu items on the overflow menu. See set_use_underline().
   * 
   * @newin{2,4}
   * 
   * @return <tt>true</tt> if underscores in the label property are used as
   * mnemonics on menu items on the overflow menu.
   */
  bool get_use_underline() const;
  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets the name of the stock item. See the ToolButton::ToolButton(const Gtk::StockID& stock_id, IconSize size) constructor.
   *     The stock_id property only has an effect if not
   *     overridden by "label" and "icon_widget" properties.
   * 
   *     @newin{2,4}
   * 
   * @deprecated Use set_icon_name() instead.
   * 
   * @param stock_id A name of a stock item, or <tt>nullptr</tt>.
   */
  void set_stock_id(const Gtk::StockID& stock_id);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Returns the name of the stock item. See set_stock_id().
   * The returned string is owned by GTK+ and must not be freed or modifed.
   * 
   * @newin{2,4}
   * 
   * Deprecated: 3.10: Use get_icon_name() instead.
   * 
   * @deprecated Use get_icon_name() instead.
   * 
   * @return The name of the stock item for @a button.
   */
  Glib::ustring get_stock_id() const;
#endif // GTKMM_DISABLE_DEPRECATED


  /** Sets the icon for the tool button from a named themed icon.
   * See the docs for Gtk::IconTheme for more details.
   * The Gtk::ToolButton::property_icon_name() property only has an effect if not
   * overridden by non-<tt>nullptr</tt> Gtk::ToolButton::property_label_widget(), 
   * Gtk::ToolButton::property_icon_widget() and Gtk::ToolButton::property_stock_id() properties.
   * 
   * @newin{2,8}
   * 
   * @param icon_name The name of the themed icon.
   */
  void set_icon_name(const Glib::ustring& icon_name);
  
  /** Returns the name of the themed icon for the tool button,
   * see set_icon_name().
   * 
   * @newin{2,8}
   * 
   * @return The icon name or <tt>nullptr</tt> if the tool button has
   * no themed icon.
   */
  Glib::ustring get_icon_name() const;
  
  /** Sets @a icon as the widget used as icon on @a button. If @a icon_widget is
   * <tt>nullptr</tt> the icon is determined by the Gtk::ToolButton::property_stock_id() property. If the
   * Gtk::ToolButton::property_stock_id() property is also <tt>nullptr</tt>, @a button will not have an icon.
   * 
   * @newin{2,4}
   * 
   * @param icon_widget The widget used as icon, or <tt>nullptr</tt>.
   */
  void set_icon_widget(Widget& icon_widget);
  
  /** Return the widget used as icon widget on @a button.
   * See set_icon_widget().
   * 
   * @newin{2,4}
   * 
   * @return The widget used as icon
   * on @a button, or <tt>nullptr</tt>.
   */
  Widget* get_icon_widget();
  
  /** Return the widget used as icon widget on @a button.
   * See set_icon_widget().
   * 
   * @newin{2,4}
   * 
   * @return The widget used as icon
   * on @a button, or <tt>nullptr</tt>.
   */
  const Widget* get_icon_widget() const;
  
  /** Sets @a label_widget as the widget that will be used as the label
   * for @a button. If @a label_widget is <tt>nullptr</tt> the Gtk::ToolButton::property_label() property is used
   * as label. If Gtk::ToolButton::property_label() is also <tt>nullptr</tt>, the label in the stock item
   * determined by the Gtk::ToolButton::property_stock_id() property is used as label. If
   * Gtk::ToolButton::property_stock_id() is also <tt>nullptr</tt>, @a button does not have a label.
   * 
   * @newin{2,4}
   * 
   * @param label_widget The widget used as label, or <tt>nullptr</tt>.
   */
  void set_label_widget(Widget& label_widget);
  
  /** Returns the widget used as label on @a button.
   * See set_label_widget().
   * 
   * @newin{2,4}
   * 
   * @return The widget used as label
   * on @a button, or <tt>nullptr</tt>.
   */
  Widget* get_label_widget();
  
  /** Returns the widget used as label on @a button.
   * See set_label_widget().
   * 
   * @newin{2,4}
   * 
   * @return The widget used as label
   * on @a button, or <tt>nullptr</tt>.
   */
  const Widget* get_label_widget() const;

 //TODO: We use this in toolbar.ccg. Check if it should really be deprecated.
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%clicked()</tt>
   *
   * Flags: Run First, Action
   *
   * This signal is emitted when the tool button is clicked with the mouse
   * or activated with the keyboard.
   */

  Glib::SignalProxy< void > signal_clicked();


  /** Text to show in the item.
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_label() ;

/** Text to show in the item.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_label() const;

  /** If set, an underline in the label property indicates that the next character should be used for the mnemonic accelerator key in the overflow menu.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_use_underline() ;

/** If set, an underline in the label property indicates that the next character should be used for the mnemonic accelerator key in the overflow menu.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_use_underline() const;

  /** Widget to use as the item label.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gtk::Widget* > property_label_widget() ;

/** Widget to use as the item label.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gtk::Widget* > property_label_widget() const;

  
#ifndef GTKMM_DISABLE_DEPRECATED

/** The stock icon displayed on the item.
   *
   * Deprecated: 3.10: Use Gtk::ToolButton::property_icon_name() instead.
   * 
   * @deprecated Use property_icon_name() instead.
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_stock_id() ;

/** The stock icon displayed on the item.
   *
   * Deprecated: 3.10: Use Gtk::ToolButton::property_icon_name() instead.
   * 
   * @deprecated Use property_icon_name() instead.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_stock_id() const;

#endif // GTKMM_DISABLE_DEPRECATED

  /** The name of the themed icon displayed on the item.
   * This property only has an effect if not overridden by
   * Gtk::ToolButton::property_label_widget(), Gtk::ToolButton::property_icon_widget() or
   * Gtk::ToolButton::property_stock_id() properties.
   * 
   * @newin{2,8}
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_icon_name() ;

/** The name of the themed icon displayed on the item.
   * This property only has an effect if not overridden by
   * Gtk::ToolButton::property_label_widget(), Gtk::ToolButton::property_icon_widget() or
   * Gtk::ToolButton::property_stock_id() properties.
   * 
   * @newin{2,8}
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_icon_name() const;

  /** Icon widget to display in the item.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gtk::Widget > property_icon_widget() ;

/** Icon widget to display in the item.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gtk::Widget > property_icon_widget() const;


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::ToolButton
   */
  GTKMM_API
  Gtk::ToolButton* wrap(GtkToolButton* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_TOOLBUTTON_H */

