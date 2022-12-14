// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _GDKMM_DRAWINGCONTEXT_H
#define _GDKMM_DRAWINGCONTEXT_H

#include <gdkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2016 The gtkmm Development Team
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
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */


#include <glibmm/object.h>
#include <cairomm/context.h>
#include <cairomm/region.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GdkDrawingContext = struct _GdkDrawingContext;
using GdkDrawingContextClass = struct _GdkDrawingContextClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gdk
{ class GDKMM_API DrawingContext_Class; } // namespace Gdk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gdk
{
class GDKMM_API Window;

/** Drawing context for GDK windows.
 *
 * Gdk::DrawingContext is an object that represents the current drawing
 * state of a Gdk::Window.
 *
 * It's possible to use a Gdk::DrawingContext to draw on a Gdk::Window
 * via rendering API like Cairo or OpenGL.
 *
 * A Gdk::DrawingContext can only be created by calling Gdk::Window::begin_draw_frame()
 * and will be valid until a call to Gdk::Window::end_draw_frame().
 *
 * @newin{3,22}
 */

class GDKMM_API DrawingContext : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = DrawingContext;
  using CppClassType = DrawingContext_Class;
  using BaseObjectType = GdkDrawingContext;
  using BaseClassType = GdkDrawingContextClass;

  // noncopyable
  DrawingContext(const DrawingContext&) = delete;
  DrawingContext& operator=(const DrawingContext&) = delete;

private:  friend class DrawingContext_Class;
  static CppClassType drawingcontext_class_;

protected:
  explicit DrawingContext(const Glib::ConstructParams& construct_params);
  explicit DrawingContext(GdkDrawingContext* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  DrawingContext(DrawingContext&& src) noexcept;
  DrawingContext& operator=(DrawingContext&& src) noexcept;

  ~DrawingContext() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GdkDrawingContext*       gobj()       { return reinterpret_cast<GdkDrawingContext*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GdkDrawingContext* gobj() const { return reinterpret_cast<GdkDrawingContext*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GdkDrawingContext* gobj_copy();

private:


protected:
  DrawingContext();

public:
  
  /** Retrieves the window that created the drawing @a context.
   * 
   * @newin{3,22}
   * 
   * @return A Gdk::Window.
   */
  Glib::RefPtr<Window> get_window();
  
  /** Retrieves the window that created the drawing @a context.
   * 
   * @newin{3,22}
   * 
   * @return A Gdk::Window.
   */
  Glib::RefPtr<const Window> get_window() const;

 
  // This is const because it returns a copy.
  
  /** Retrieves a copy of the clip region used when creating the @a context.
   * 
   * @newin{3,22}
   * 
   * @return A Cairo region.
   */
  ::Cairo::RefPtr< ::Cairo::Region> get_clip() const;

  
  /** Checks whether the given Gdk::DrawingContext is valid.
   * 
   * @newin{3,22}
   * 
   * @return <tt>true</tt> if the context is valid.
   */
  bool is_valid() const;

 
  /** Retrieves a Cairo context to be used to draw on the Gdk::Window
   * that created the Gdk::DrawingContext.
   * 
   * The returned context is guaranteed to be valid as long as the
   * Gdk::DrawingContext is valid, that is between a call to
   * Gdk::Window::begin_draw_frame() and Gdk::Window::end_draw_frame().
   * 
   * @newin{3,22}
   * 
   * @return A Cairo context to be used to draw
   * the contents of the Gdk::Window. The context is owned by the
   * Gdk::DrawingContext and should not be destroyed.
   */
  ::Cairo::RefPtr< ::Cairo::Context> get_cairo_context();
  
  /** Retrieves a Cairo context to be used to draw on the Gdk::Window
   * that created the Gdk::DrawingContext.
   * 
   * The returned context is guaranteed to be valid as long as the
   * Gdk::DrawingContext is valid, that is between a call to
   * Gdk::Window::begin_draw_frame() and Gdk::Window::end_draw_frame().
   * 
   * @newin{3,22}
   * 
   * @return A Cairo context to be used to draw
   * the contents of the Gdk::Window. The context is owned by the
   * Gdk::DrawingContext and should not be destroyed.
   */
  ::Cairo::RefPtr<const ::Cairo::Context> get_cairo_context() const;

 
  /** Retrieves the Gdk::DrawingContext that created the Cairo
   * context @a cr.
   * 
   * @newin{3,22}
   * 
   * @param cr A Cairo context.
   * @return A Gdk::DrawingContext, if any is set.
   */
  static Glib::RefPtr<DrawingContext> get_drawing_context_from_cairo_context(const ::Cairo::RefPtr< ::Cairo::Context>& cr);

  /** The Gdk::Window that created the drawing context.
   * 
   * @newin{3,22}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Window> > property_window() const;


  // A wrapped property_clip() would require a template specialization
  // Glib::Value<Cairo::RefPtr<T>>.
  //_WRAP_PROPERTY("clip", ::Cairo::RefPtr< ::Cairo::Region>)

  // There are no signals or vfuncs.


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gdk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gdk::DrawingContext
   */
  GDKMM_API
  Glib::RefPtr<Gdk::DrawingContext> wrap(GdkDrawingContext* object, bool take_copy = false);
}


#endif /* _GDKMM_DRAWINGCONTEXT_H */

