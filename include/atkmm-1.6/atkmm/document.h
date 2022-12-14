// Generated by gmmproc 2.66.0 -- DO NOT MODIFY!
#ifndef _ATKMM_DOCUMENT_H
#define _ATKMM_DOCUMENT_H

#include <atkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: document.hg,v 1.3 2004/01/19 19:48:36 murrayc Exp $ */

/* Copyright (C) 2003 The gtkmm Development Team
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


#include <glibmm/interface.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
  typedef struct _AtkDocumentIface AtkDocumentIface;
  typedef struct _AtkDocument      AtkDocument;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
using AtkDocument = struct _AtkDocument;
using AtkDocumentClass = struct _AtkDocumentClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Atk
{ class ATKMM_API Document_Class; } // namespace Atk
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Atk
{

class ATKMM_API Object;

/** The ATK interface which allows access to a DOM associated with on object.
 * This interface should be supported by any object that has an associated document object model (DOM). This interface
 * provides the standard mechanism allowing an assistive technology access to the DOM.
 */

class ATKMM_API Document : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = Document;
  using CppClassType = Document_Class;
  using BaseObjectType = AtkDocument;
  using BaseClassType = AtkDocumentIface;

  // noncopyable
  Document(const Document&) = delete;
  Document& operator=(const Document&) = delete;

private:
  friend class Document_Class;
  static CppClassType document_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  Document();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of
   * the Class init() function to ensure that it is properly
   * initialized.
   *
   * @param interface_class The Class object for the derived type.
   */
  explicit Document(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface.
  explicit Document(AtkDocument* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Document(Document&& src) noexcept;
  Document& operator=(Document&& src) noexcept;

  ~Document() noexcept override;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  AtkDocument*       gobj()       { return reinterpret_cast<AtkDocument*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const AtkDocument* gobj() const { return reinterpret_cast<AtkDocument*>(gobject_); }

private:

public:

  
#ifndef ATKMM_DISABLE_DEPRECATED

  /** Gets a string indicating the document type.
   * 
   * Deprecated: Since 2.12. Please use get_attributes() to
   * ask for the document type if it applies.
   * 
   * @deprecated Please use get_attribute() to ask for the document type if it applies.
   * 
   * @return A string indicating the document type.
   */
  Glib::ustring get_document_type() const;
#endif // ATKMM_DISABLE_DEPRECATED


#ifndef ATKMM_DISABLE_DEPRECATED

  /** Gets a %gpointer that points to an instance of the DOM.  It is
   * up to the caller to check atk_document_get_type to determine
   * how to cast this pointer.
   * 
   * Deprecated: Since 2.12. @a document is already a representation of
   * the document. Use it directly, or one of its children, as an
   * instance of the DOM.
   * 
   * @deprecated Document is already a representation of the document. Use it directly, or one of its children, as an instance of the DOM.
   * 
   * @return A %gpointer that points to an instance of the DOM.
   */
  gpointer get_document();
#endif // ATKMM_DISABLE_DEPRECATED


//TODO: AtkAttributeSet*      atk_document_get_attributes (AtkDocument *document);
  
  /** @newin{1,12}
   * 
   * @param attribute_name A character string representing the name of the attribute
   * whose value is being queried.
   * @return A string value associated with the named
   * attribute for this document, or <tt>nullptr</tt> if a value for
   * #attribute_name has not been specified for this document.
   */
  Glib::ustring get_attribute_value(const Glib::ustring& attribute_name) const;
  
  /** @newin{1,12}
   * 
   * @param attribute_name A character string representing the name of the attribute
   * whose value is being set.
   * @param attribute_value A string value to be associated with #attribute_name.
   * @return <tt>true</tt> if #value is successfully associated with #attribute_name
   * for this document, <tt>false</tt> otherwise (e.g. if the document does not
   * allow the attribute to be modified).
   */
  bool set_attribute_value(const Glib::ustring& attribute_name, const Glib::ustring& attribute_value);

protected:
    virtual const gchar* get_document_type_vfunc();

    virtual gpointer get_document_vfunc() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Atk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Atk::Document
   */
  ATKMM_API
  Glib::RefPtr<Atk::Document> wrap(AtkDocument* object, bool take_copy = false);

} // namespace Glib


#endif /* _ATKMM_DOCUMENT_H */

