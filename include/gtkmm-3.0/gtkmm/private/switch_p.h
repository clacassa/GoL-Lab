// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _GTKMM_SWITCH_P_H
#define _GTKMM_SWITCH_P_H


#include <gtkmm/private/widget_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class GTKMM_API Switch_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Switch;
  using BaseObjectType = GtkSwitch;
  using BaseClassType = GtkSwitchClass;
  using CppClassParent = Gtk::Widget_Class;
  using BaseClassParent = GtkWidgetClass;

  friend class Switch;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static gboolean state_set_callback(GtkSwitch* self, gboolean p0);

  //Callbacks (virtual functions):
};


} // namespace Gtk


#endif /* _GTKMM_SWITCH_P_H */

