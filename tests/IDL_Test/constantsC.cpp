// -*- C++ -*-
/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v4.0.2
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       https://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     https://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:372


#include "constantsC.h"
#include "tao/CDR.h"
#include "tao/Messaging/Asynch_Invocation_Adapter.h"
#include "tao/Messaging/ExceptionHolder_i.h"
#include "tao/Object_T.h"
#include "cstring"
#include "memory"

#if !defined (__ACE_INLINE__)
#include "constantsC.inl"
#endif /* !defined INLINE */
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_cs.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for ClassConstants::Iface.

ClassConstants::Iface_ptr
TAO::Objref_Traits<ClassConstants::Iface>::duplicate (ClassConstants::Iface_ptr p)
{
  return ClassConstants::Iface::_duplicate (p);
}

void
TAO::Objref_Traits<ClassConstants::Iface>::release (ClassConstants::Iface_ptr p)
{
  ::CORBA::release (p);
}

ClassConstants::Iface_ptr
TAO::Objref_Traits<ClassConstants::Iface>::nil ()
{
  return ClassConstants::Iface::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<ClassConstants::Iface>::marshal (const ClassConstants::Iface_ptr p,TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_cs.cpp:53



const CORBA::Long ClassConstants::Iface::iface_long;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_cs.cpp:53



const char *const ClassConstants::Iface::iface_str = "iface_str";
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_cs.cpp:53



const CORBA::WChar *const ClassConstants::Iface::iface_wstr = L"iface_wstr";

ClassConstants::Iface::Iface ()
{
}
void
ClassConstants::Iface::_tao_any_destructor (void *_tao_void_pointer)
{
  Iface *_tao_tmp_pointer =
    static_cast<Iface *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

ClassConstants::Iface_ptr
ClassConstants::Iface::_narrow (::CORBA::Object_ptr _tao_objref)
{
  return TAO::Narrow_Utils<Iface>::narrow (_tao_objref, "IDL:ClassConstants/Iface:1.0");
}

ClassConstants::Iface_ptr
ClassConstants::Iface::_unchecked_narrow (::CORBA::Object_ptr _tao_objref)
{
  return TAO::Narrow_Utils<Iface>::unchecked_narrow (_tao_objref);
}

ClassConstants::Iface_ptr
ClassConstants::Iface::_nil ()
{
  return nullptr;
}

ClassConstants::Iface_ptr
ClassConstants::Iface::_duplicate (Iface_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
ClassConstants::Iface::_tao_release (Iface_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
ClassConstants::Iface::_is_a (const char *value)
{
  if (
      std::strcmp (value, "IDL:ClassConstants/Iface:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
      )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* ClassConstants::Iface::_interface_repository_id () const
{
  return "IDL:ClassConstants/Iface:1.0";
}

const char* ClassConstants::Iface::_desc_repository_id ()
{
  return "IDL:ClassConstants/Iface:1.0";
}

const char* ClassConstants::Iface::_desc_interface_name ()
{
  return "Iface";
}

::CORBA::Boolean
ClassConstants::Iface::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_cs.cpp:52



TAO_BEGIN_VERSIONED_NAMESPACE_DECL


void
TAO::Value_Traits<ClassConstants::AMH_IfaceExceptionHolder>::add_ref (ClassConstants::AMH_IfaceExceptionHolder * p)
{
  ::CORBA::add_ref (p);
}

void
TAO::Value_Traits<ClassConstants::AMH_IfaceExceptionHolder>::remove_ref (ClassConstants::AMH_IfaceExceptionHolder * p)
{
  ::CORBA::remove_ref (p);
}

void
TAO::Value_Traits<ClassConstants::AMH_IfaceExceptionHolder>::release (ClassConstants::AMH_IfaceExceptionHolder * p)
{
  ::CORBA::remove_ref (p);
}

TAO_END_VERSIONED_NAMESPACE_DECL



ClassConstants::AMH_IfaceExceptionHolder *
ClassConstants::AMH_IfaceExceptionHolder::_downcast (::CORBA::ValueBase *v)
{
  return dynamic_cast<::ClassConstants::AMH_IfaceExceptionHolder *> (v);
}

const char *
ClassConstants::AMH_IfaceExceptionHolder::_tao_obv_repository_id () const
{
  return this->_tao_obv_static_repository_id ();
}

void
ClassConstants::AMH_IfaceExceptionHolder::_tao_obv_truncatable_repo_ids (Repository_Id_List& ids) const
{
  ids.push_back (this->_tao_obv_static_repository_id ());
}

void
ClassConstants::AMH_IfaceExceptionHolder::_tao_any_destructor (void *_tao_void_pointer)
{
  AMH_IfaceExceptionHolder *_tao_tmp_pointer =
    static_cast<AMH_IfaceExceptionHolder *> (_tao_void_pointer);
  ::CORBA::remove_ref (_tao_tmp_pointer);
}

ClassConstants::AMH_IfaceExceptionHolder::~AMH_IfaceExceptionHolder ()
{}

::CORBA::ValueBase *
ClassConstants::AMH_IfaceExceptionHolder::_copy_value ()
{
  ::CORBA::ValueBase *ret_val {};
  ACE_NEW_THROW_EX (
    ret_val,
    AMH_IfaceExceptionHolder (),
    ::CORBA::NO_MEMORY ());
  return ret_val;
}

::CORBA::Boolean
ClassConstants::AMH_IfaceExceptionHolder::_tao_marshal_v (TAO_OutputCDR &) const
{
  return true;
}

::CORBA::Boolean
ClassConstants::AMH_IfaceExceptionHolder::_tao_unmarshal_v (TAO_InputCDR &)
{
  return true;
}

::CORBA::Boolean
ClassConstants::AMH_IfaceExceptionHolder::_tao_match_formal_type (ptrdiff_t) const
{
  return false;
}

::CORBA::Boolean
ClassConstants::AMH_IfaceExceptionHolder::_tao_marshal__ClassConstants_AMH_IfaceExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo&) const
{
  return true;
}

::CORBA::Boolean
ClassConstants::AMH_IfaceExceptionHolder::_tao_unmarshal__ClassConstants_AMH_IfaceExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo&)
{
  return true;
}

::CORBA::Boolean
ClassConstants::AMH_IfaceExceptionHolder::_tao_unmarshal (
    TAO_InputCDR &strm,
    AMH_IfaceExceptionHolder *&new_object)
{
  ::CORBA::ValueBase *base {};
  ::CORBA::Boolean is_indirected = false;
  ::CORBA::Boolean is_null_object = false;
  ::CORBA::Boolean const retval =
    ::CORBA::ValueBase::_tao_unmarshal_pre (
        strm,
        base,
        AMH_IfaceExceptionHolder::_tao_obv_static_repository_id (),
        is_null_object,
        is_indirected
      );
  
  ::CORBA::ValueBase_var owner (base);

  if (!retval)
    return false;
  
  if (is_null_object)
    return true;
  
  if (!is_indirected && !base->_tao_unmarshal_v (strm))
    return false;
  
  // Now base must point to the unmarshaled object.
  // Align the pointer to the right subobject.
  new_object = AMH_IfaceExceptionHolder::_downcast (base);
  if (nullptr == new_object)
    return false;
  
  if (is_indirected)
    new_object->_add_ref ();
  
  owner._retn ();
  return true;
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_init_cs.cpp:72



ClassConstants::AMH_IfaceExceptionHolder_init::AMH_IfaceExceptionHolder_init ()
{
}

ClassConstants::AMH_IfaceExceptionHolder_init::~AMH_IfaceExceptionHolder_init ()
{
}

ClassConstants::AMH_IfaceExceptionHolder_init *
ClassConstants::AMH_IfaceExceptionHolder_init::_downcast (::CORBA::ValueFactoryBase *v)
{
  return dynamic_cast<::ClassConstants::AMH_IfaceExceptionHolder_init *> (v);
}

const char*
ClassConstants::AMH_IfaceExceptionHolder_init::tao_repository_id ()
{
  return ::ClassConstants::AMH_IfaceExceptionHolder::_tao_obv_static_repository_id ();
}

::CORBA::ValueBase *
ClassConstants::AMH_IfaceExceptionHolder_init::create_for_unmarshal ()
{
  ::CORBA::ValueBase *ret_val = nullptr;
  ACE_NEW_THROW_EX (
      ret_val,
      OBV_ClassConstants::AMH_IfaceExceptionHolder,
      ::CORBA::NO_MEMORY ());
  return ret_val;
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_cs.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for ClassConstants::AMH_IfaceResponseHandler.

ClassConstants::AMH_IfaceResponseHandler_ptr
TAO::Objref_Traits<ClassConstants::AMH_IfaceResponseHandler>::duplicate (ClassConstants::AMH_IfaceResponseHandler_ptr p)
{
  return ClassConstants::AMH_IfaceResponseHandler::_duplicate (p);
}

void
TAO::Objref_Traits<ClassConstants::AMH_IfaceResponseHandler>::release (ClassConstants::AMH_IfaceResponseHandler_ptr p)
{
  ::CORBA::release (p);
}

ClassConstants::AMH_IfaceResponseHandler_ptr
TAO::Objref_Traits<ClassConstants::AMH_IfaceResponseHandler>::nil ()
{
  return ClassConstants::AMH_IfaceResponseHandler::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<ClassConstants::AMH_IfaceResponseHandler>::marshal (const ClassConstants::AMH_IfaceResponseHandler_ptr p,TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL



ClassConstants::AMH_IfaceResponseHandler::AMH_IfaceResponseHandler ()
{}void
ClassConstants::AMH_IfaceResponseHandler::_tao_any_destructor (void *_tao_void_pointer)
{
  AMH_IfaceResponseHandler *_tao_tmp_pointer =
    static_cast<AMH_IfaceResponseHandler *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

ClassConstants::AMH_IfaceResponseHandler_ptr
ClassConstants::AMH_IfaceResponseHandler::_narrow (::CORBA::Object_ptr _tao_objref)
{
  return AMH_IfaceResponseHandler::_duplicate (
      dynamic_cast<AMH_IfaceResponseHandler_ptr> (_tao_objref));
}

ClassConstants::AMH_IfaceResponseHandler_ptr
ClassConstants::AMH_IfaceResponseHandler::_unchecked_narrow (::CORBA::Object_ptr _tao_objref)
{
  return AMH_IfaceResponseHandler::_duplicate (
      dynamic_cast<AMH_IfaceResponseHandler_ptr> (_tao_objref));
}

ClassConstants::AMH_IfaceResponseHandler_ptr
ClassConstants::AMH_IfaceResponseHandler::_nil ()
{
  return nullptr;
}

ClassConstants::AMH_IfaceResponseHandler_ptr
ClassConstants::AMH_IfaceResponseHandler::_duplicate (AMH_IfaceResponseHandler_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
ClassConstants::AMH_IfaceResponseHandler::_tao_release (AMH_IfaceResponseHandler_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
ClassConstants::AMH_IfaceResponseHandler::_is_a (const char *value)
{
  if (
      std::strcmp (value, "IDL:ClassConstants/AMH_IfaceResponseHandler:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/LocalObject:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
      )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* ClassConstants::AMH_IfaceResponseHandler::_interface_repository_id () const
{
  return "IDL:ClassConstants/AMH_IfaceResponseHandler:1.0";
}

const char* ClassConstants::AMH_IfaceResponseHandler::_desc_repository_id ()
{
  return "IDL:ClassConstants/AMH_IfaceResponseHandler:1.0";
}

const char* ClassConstants::AMH_IfaceResponseHandler::_desc_interface_name ()
{
  return "AMH_IfaceResponseHandler";
}

::CORBA::Boolean
ClassConstants::AMH_IfaceResponseHandler::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_cs.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for ClassConstants::AMI_IfaceHandler.

ClassConstants::AMI_IfaceHandler_ptr
TAO::Objref_Traits<ClassConstants::AMI_IfaceHandler>::duplicate (ClassConstants::AMI_IfaceHandler_ptr p)
{
  return ClassConstants::AMI_IfaceHandler::_duplicate (p);
}

void
TAO::Objref_Traits<ClassConstants::AMI_IfaceHandler>::release (ClassConstants::AMI_IfaceHandler_ptr p)
{
  ::CORBA::release (p);
}

ClassConstants::AMI_IfaceHandler_ptr
TAO::Objref_Traits<ClassConstants::AMI_IfaceHandler>::nil ()
{
  return ClassConstants::AMI_IfaceHandler::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<ClassConstants::AMI_IfaceHandler>::marshal (const ClassConstants::AMI_IfaceHandler_ptr p,TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL



ClassConstants::AMI_IfaceHandler::AMI_IfaceHandler ()
{
}
void
ClassConstants::AMI_IfaceHandler::_tao_any_destructor (void *_tao_void_pointer)
{
  AMI_IfaceHandler *_tao_tmp_pointer =
    static_cast<AMI_IfaceHandler *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

ClassConstants::AMI_IfaceHandler_ptr
ClassConstants::AMI_IfaceHandler::_narrow (::CORBA::Object_ptr _tao_objref)
{
  return TAO::Narrow_Utils<AMI_IfaceHandler>::narrow (_tao_objref, "IDL:ClassConstants/AMI_IfaceHandler:1.0");
}

ClassConstants::AMI_IfaceHandler_ptr
ClassConstants::AMI_IfaceHandler::_unchecked_narrow (::CORBA::Object_ptr _tao_objref)
{
  return TAO::Narrow_Utils<AMI_IfaceHandler>::unchecked_narrow (_tao_objref);
}

ClassConstants::AMI_IfaceHandler_ptr
ClassConstants::AMI_IfaceHandler::_nil ()
{
  return nullptr;
}

ClassConstants::AMI_IfaceHandler_ptr
ClassConstants::AMI_IfaceHandler::_duplicate (AMI_IfaceHandler_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
ClassConstants::AMI_IfaceHandler::_tao_release (AMI_IfaceHandler_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
ClassConstants::AMI_IfaceHandler::_is_a (const char *value)
{
  if (
      std::strcmp (value, "IDL:omg.org/Messaging/ReplyHandler:1.0") == 0 ||
      std::strcmp (value, "IDL:ClassConstants/AMI_IfaceHandler:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
      )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* ClassConstants::AMI_IfaceHandler::_interface_repository_id () const
{
  return "IDL:ClassConstants/AMI_IfaceHandler:1.0";
}

const char* ClassConstants::AMI_IfaceHandler::_desc_repository_id ()
{
  return "IDL:ClassConstants/AMI_IfaceHandler:1.0";
}

const char* ClassConstants::AMI_IfaceHandler::_desc_interface_name ()
{
  return "AMI_IfaceHandler";
}

::CORBA::Boolean
ClassConstants::AMI_IfaceHandler::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_cs.cpp:52



TAO_BEGIN_VERSIONED_NAMESPACE_DECL


void
TAO::Value_Traits<ClassConstants::Vt>::add_ref (ClassConstants::Vt * p)
{
  ::CORBA::add_ref (p);
}

void
TAO::Value_Traits<ClassConstants::Vt>::remove_ref (ClassConstants::Vt * p)
{
  ::CORBA::remove_ref (p);
}

void
TAO::Value_Traits<ClassConstants::Vt>::release (ClassConstants::Vt * p)
{
  ::CORBA::remove_ref (p);
}

TAO_END_VERSIONED_NAMESPACE_DECL



ClassConstants::Vt *
ClassConstants::Vt::_downcast (::CORBA::ValueBase *v)
{
  return dynamic_cast<::ClassConstants::Vt *> (v);
}

const char *
ClassConstants::Vt::_tao_obv_repository_id () const
{
  return this->_tao_obv_static_repository_id ();
}

void
ClassConstants::Vt::_tao_obv_truncatable_repo_ids (Repository_Id_List& ids) const
{
  ids.push_back (this->_tao_obv_static_repository_id ());
}

void
ClassConstants::Vt::_tao_any_destructor (void *_tao_void_pointer)
{
  Vt *_tao_tmp_pointer =
    static_cast<Vt *> (_tao_void_pointer);
  ::CORBA::remove_ref (_tao_tmp_pointer);
}

ClassConstants::Vt::~Vt ()
{}

::CORBA::Boolean
ClassConstants::Vt::_tao_marshal_v (TAO_OutputCDR & strm) const
{
  TAO_ChunkInfo ci (this->is_truncatable_ || this->chunking_);
  return this->_tao_marshal__ClassConstants_Vt (strm, ci);
}

::CORBA::Boolean
ClassConstants::Vt::_tao_unmarshal_v (TAO_InputCDR & strm)
{
  TAO_ChunkInfo ci (this->is_truncatable_ || this->chunking_, 1);
  return this->_tao_unmarshal__ClassConstants_Vt (strm,ci);
}

::CORBA::Boolean
ClassConstants::Vt::_tao_match_formal_type (ptrdiff_t formal_type_id) const
{
  return formal_type_id == reinterpret_cast<ptrdiff_t> (ClassConstants::Vt::_downcast);
}

::CORBA::Boolean
ClassConstants::Vt::_tao_unmarshal (
    TAO_InputCDR &strm,
    Vt *&new_object)
{
  ::CORBA::ValueBase *base {};
  ::CORBA::Boolean is_indirected = false;
  ::CORBA::Boolean is_null_object = false;
  ::CORBA::Boolean const retval =
    ::CORBA::ValueBase::_tao_unmarshal_pre (
        strm,
        base,
        Vt::_tao_obv_static_repository_id (),
        is_null_object,
        is_indirected
      );
  
  ::CORBA::ValueBase_var owner (base);

  if (!retval)
    return false;
  
  if (is_null_object)
    return true;
  
  if (!is_indirected && !base->_tao_unmarshal_v (strm))
    return false;
  
  // Now base must point to the unmarshaled object.
  // Align the pointer to the right subobject.
  new_object = Vt::_downcast (base);
  if (nullptr == new_object)
    return false;
  
  if (is_indirected)
    new_object->_add_ref ();
  
  owner._retn ();
  return true;
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_cs.cpp:53



const CORBA::Double ClassConstants::Vt::vt_long =                    66.66;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_cs.cpp:53



const char *const ClassConstants::Vt::vt_str = "vt_str";
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_cs.cpp:53



const CORBA::WChar *const ClassConstants::Vt::vt_wstr = L"vt_wstr";
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_init_cs.cpp:72



ClassConstants::Vt_init::Vt_init ()
{
}

ClassConstants::Vt_init::~Vt_init ()
{
}

ClassConstants::Vt_init *
ClassConstants::Vt_init::_downcast (::CORBA::ValueFactoryBase *v)
{
  return dynamic_cast<::ClassConstants::Vt_init *> (v);
}

const char*
ClassConstants::Vt_init::tao_repository_id ()
{
  return ::ClassConstants::Vt::_tao_obv_static_repository_id ();
}

::CORBA::ValueBase *
ClassConstants::Vt_init::create_for_unmarshal ()
{
  ::CORBA::ValueBase *ret_val = nullptr;
  ACE_NEW_THROW_EX (
      ret_val,
      OBV_ClassConstants::Vt,
      ::CORBA::NO_MEMORY ());
  return ret_val;
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_obv_cs.cpp:43

OBV_ClassConstants::AMH_IfaceExceptionHolder::~AMH_IfaceExceptionHolder ()
{}

::CORBA::ValueBase *
OBV_ClassConstants::AMH_IfaceExceptionHolder::_copy_value ()
{
  ::CORBA::ValueBase *ret_val {};
  ACE_NEW_THROW_EX (
    ret_val,
    AMH_IfaceExceptionHolder (),
    ::CORBA::NO_MEMORY ());
  return ret_val;
}

::CORBA::Boolean
OBV_ClassConstants::AMH_IfaceExceptionHolder::_tao_marshal__ClassConstants_AMH_IfaceExceptionHolder (TAO_OutputCDR &strm, TAO_ChunkInfo& ci) const
{
  return _tao_marshal_state (strm, ci);
}

::CORBA::Boolean
OBV_ClassConstants::AMH_IfaceExceptionHolder::_tao_unmarshal__ClassConstants_AMH_IfaceExceptionHolder (TAO_InputCDR &strm, TAO_ChunkInfo& ci)
{
  return _tao_unmarshal_state (strm, ci);
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_obv_cs.cpp:43

OBV_ClassConstants::Vt::~Vt ()
{}

::CORBA::ValueBase *
OBV_ClassConstants::Vt::_copy_value ()
{
  ::CORBA::ValueBase *ret_val {};
  ACE_NEW_THROW_EX (
    ret_val,
    Vt (),
    ::CORBA::NO_MEMORY ());
  return ret_val;
}

::CORBA::Boolean
OBV_ClassConstants::Vt::_tao_marshal__ClassConstants_Vt (TAO_OutputCDR &strm, TAO_ChunkInfo& ci) const
{
  return _tao_marshal_state (strm, ci);
}

::CORBA::Boolean
OBV_ClassConstants::Vt::_tao_unmarshal__ClassConstants_Vt (TAO_InputCDR &strm, TAO_ChunkInfo& ci)
{
  return _tao_unmarshal_state (strm, ci);
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/cdr_op_cs.cpp:29


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, m_a::enum_a _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, m_a::enum_a & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<m_a::enum_a> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_cs.cpp:50


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const ClassConstants::Iface_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    ClassConstants::Iface_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  // Narrow to the right type.
  _tao_objref = TAO::Narrow_Utils< ::ClassConstants::Iface>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:506



TAO_BEGIN_VERSIONED_NAMESPACE_DECL
void
CORBA::add_ref (ClassConstants::AMH_IfaceExceptionHolder * vt)
{
  if (vt != 0)
    {
      vt->_add_ref ();
    }
}

void
CORBA::remove_ref (ClassConstants::AMH_IfaceExceptionHolder * vt)
{
  if (vt != 0)
    {
      vt->_remove_ref ();
    }
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/cdr_op_cs.cpp:59


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean
operator<< (
    TAO_OutputCDR &strm,
    const ClassConstants::AMH_IfaceExceptionHolder *_tao_valuetype)
{
  return
    ::CORBA::ValueBase::_tao_marshal (
        strm,
        _tao_valuetype,
        reinterpret_cast<ptrdiff_t> (&ClassConstants::AMH_IfaceExceptionHolder::_downcast));
}

::CORBA::Boolean
operator>> (
    TAO_InputCDR &strm,
    ClassConstants::AMH_IfaceExceptionHolder *&_tao_valuetype)
{
  return ClassConstants::AMH_IfaceExceptionHolder::_tao_unmarshal (strm, _tao_valuetype);
}


TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/marshal_cs.cpp:189

::CORBA::Boolean
OBV_ClassConstants::AMH_IfaceExceptionHolder::_tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo &) const
{
  return true;
}

::CORBA::Boolean
OBV_ClassConstants::AMH_IfaceExceptionHolder::_tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo &)
{
  return true;
}

void
OBV_ClassConstants::AMH_IfaceExceptionHolder::truncation_hook ()
{
  this->require_truncation_ = true;
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_cs.cpp:50


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const ClassConstants::AMI_IfaceHandler_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    ClassConstants::AMI_IfaceHandler_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  // Narrow to the right type.
  _tao_objref = TAO::Narrow_Utils< ::ClassConstants::AMI_IfaceHandler>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:506



TAO_BEGIN_VERSIONED_NAMESPACE_DECL
void
CORBA::add_ref (ClassConstants::Vt * vt)
{
  if (vt != 0)
    {
      vt->_add_ref ();
    }
}

void
CORBA::remove_ref (ClassConstants::Vt * vt)
{
  if (vt != 0)
    {
      vt->_remove_ref ();
    }
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/cdr_op_cs.cpp:59


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean
operator<< (
    TAO_OutputCDR &strm,
    const ClassConstants::Vt *_tao_valuetype)
{
  return
    ::CORBA::ValueBase::_tao_marshal (
        strm,
        _tao_valuetype,
        reinterpret_cast<ptrdiff_t> (&ClassConstants::Vt::_downcast));
}

::CORBA::Boolean
operator>> (
    TAO_InputCDR &strm,
    ClassConstants::Vt *&_tao_valuetype)
{
  return ClassConstants::Vt::_tao_unmarshal (strm, _tao_valuetype);
}


TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/marshal_cs.cpp:189

::CORBA::Boolean
OBV_ClassConstants::Vt::_tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo &) const
{
  return true;
}

::CORBA::Boolean
OBV_ClassConstants::Vt::_tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo &)
{
  return true;
}

void
OBV_ClassConstants::Vt::truncation_hook ()
{
  this->require_truncation_ = true;
}


