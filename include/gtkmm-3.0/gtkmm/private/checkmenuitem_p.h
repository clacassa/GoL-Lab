// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _GTKMM_CHECKMENUITEM_P_H
#define _GTKMM_CHECKMENUITEM_P_H


#include <gtkmm/private/menuitem_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class GTKMM_API CheckMenuItem_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = CheckMenuItem;
  using BaseObjectType = GtkCheckMenuItem;
  using BaseClassType = GtkCheckMenuItemClass;
  using CppClassParent = Gtk::MenuItem_Class;
  using BaseClassParent = GtkMenuItemClass;

  friend class CheckMenuItem;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void toggled_callback(GtkCheckMenuItem* self);

  //Callbacks (virtual functions):
  static void draw_indicator_vfunc_callback(GtkCheckMenuItem* self, cairo_t* cr);
};


} // namespace Gtk


#endif /* _GTKMM_CHECKMENUITEM_P_H */

