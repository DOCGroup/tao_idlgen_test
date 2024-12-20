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


#include "reopen_include2C.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/AnyTypeCode/Value_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Value_Field.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Messaging/Asynch_Invocation_Adapter.h"
#include "tao/Messaging/ExceptionHolder_i.h"
#include "tao/Object_T.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "cstring"
#include "memory"

#if !defined (__ACE_INLINE__)
#include "reopen_include2C.inl"
#endif /* !defined INLINE */
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/struct_typecode.cpp:84

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_frag_pug[] =
      {
        { "leash", &CORBA::_tc_short }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_frag_pug (
  ::CORBA::tk_struct,
  "IDL:frag/pug:1.0",
  "pug",
  _tao_fields_frag_pug,
  1);


namespace frag
{
  ::CORBA::TypeCode_ptr const _tc_pug =
    &_tao_tc_frag_pug;
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/structure_cs.cpp:55

void
frag::pug::_tao_any_destructor (
    void *_tao_void_pointer)
{
  pug *_tao_tmp_pointer =
    static_cast<pug *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/alias_typecode.cpp:46

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_XX_whah (
    ::CORBA::tk_alias,
    "IDL:XX/whah:1.0",
    "whah",
    &CORBA::_tc_long);
  

namespace XX
{
  ::CORBA::TypeCode_ptr const _tc_whah =
    &_tao_tc_XX_whah;
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_cs.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for A::B::X2.

A::B::X2_ptr
TAO::Objref_Traits<A::B::X2>::duplicate (A::B::X2_ptr p)
{
  return A::B::X2::_duplicate (p);
}

void
TAO::Objref_Traits<A::B::X2>::release (A::B::X2_ptr p)
{
  ::CORBA::release (p);
}

A::B::X2_ptr
TAO::Objref_Traits<A::B::X2>::nil ()
{
  return A::B::X2::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<A::B::X2>::marshal (const A::B::X2_ptr p,TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_cs.cpp:87

char *
A::B::X2::getX2 ()
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< char *>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      std::addressof(_tao_retval)
    };

  TAO::Invocation_Adapter _invocation_call (
      this,
      _the_tao_operation_signature,
      1,
      "getX2",
      5,
      TAO::TAO_CO_NONE | TAO::TAO_CO_DIRECT_STRATEGY | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _invocation_call.invoke (nullptr, 0);

  return _tao_retval.retn ();
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/ami_cs.cpp:54



void
A::B::X2::sendc_getX2 (
  ::A::B::AMI_X2Handler_ptr ami_handler)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  

  TAO::Argument ** _the_tao_operation_signature {};

  TAO::Asynch_Invocation_Adapter _invocation_call (
      this,
      _the_tao_operation_signature,
      0,
      "getX2",
      5,
      TAO::TAO_CO_NONE | TAO::TAO_CO_DIRECT_STRATEGY | TAO::TAO_CO_THRU_POA_STRATEGY
    );

  _invocation_call.invoke (
      ami_handler,
      &A::B::AMI_X2Handler::getX2_reply_stub
    );
}

A::B::X2::X2 ()
{
}
void
A::B::X2::_tao_any_destructor (void *_tao_void_pointer)
{
  X2 *_tao_tmp_pointer =
    static_cast<X2 *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

A::B::X2_ptr
A::B::X2::_narrow (::CORBA::Object_ptr _tao_objref)
{
  return TAO::Narrow_Utils<X2>::narrow (_tao_objref, "IDL:A/B/X2:1.0");
}

A::B::X2_ptr
A::B::X2::_unchecked_narrow (::CORBA::Object_ptr _tao_objref)
{
  return TAO::Narrow_Utils<X2>::unchecked_narrow (_tao_objref);
}

A::B::X2_ptr
A::B::X2::_nil ()
{
  return nullptr;
}

A::B::X2_ptr
A::B::X2::_duplicate (X2_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
A::B::X2::_tao_release (X2_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
A::B::X2::_is_a (const char *value)
{
  if (
      std::strcmp (value, "IDL:A/B/X2:1.0") == 0 ||
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

const char* A::B::X2::_interface_repository_id () const
{
  return "IDL:A/B/X2:1.0";
}

const char* A::B::X2::_desc_repository_id ()
{
  return "IDL:A/B/X2:1.0";
}

const char* A::B::X2::_desc_interface_name ()
{
  return "X2";
}

::CORBA::Boolean
A::B::X2::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/objref_typecode.cpp:68

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_A_B_X2 (
    ::CORBA::tk_objref,
    "IDL:A/B/X2:1.0",
    "X2");
  

namespace A
{
  
  namespace B
  {
    ::CORBA::TypeCode_ptr const _tc_X2 =
      &_tao_tc_A_B_X2;
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/value_typecode.cpp:63

static TAO::TypeCode::Value_Field<char const *, ::CORBA::TypeCode_ptr const *> const * const _tao_fields_A_B_AMH_X2ExceptionHolder = 0;
static TAO::TypeCode::Value<char const *,
                     ::CORBA::TypeCode_ptr const *,
                     TAO::TypeCode::Value_Field<char const *, ::CORBA::TypeCode_ptr const *> const *,
                     TAO::Null_RefCount_Policy>
  _tao_tc_A_B_AMH_X2ExceptionHolder (
    ::CORBA::tk_value,
    "IDL:A/B/AMH_X2ExceptionHolder:1.0",
    "AMH_X2ExceptionHolder",
    ::CORBA::VM_NONE,
    &::CORBA::_tc_null,
    _tao_fields_A_B_AMH_X2ExceptionHolder,
    0);
  

namespace A
{
  
  namespace B
  {
    ::CORBA::TypeCode_ptr const _tc_AMH_X2ExceptionHolder =
      &_tao_tc_A_B_AMH_X2ExceptionHolder;
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_cs.cpp:52



TAO_BEGIN_VERSIONED_NAMESPACE_DECL


void
TAO::Value_Traits<A::B::AMH_X2ExceptionHolder>::add_ref (A::B::AMH_X2ExceptionHolder * p)
{
  ::CORBA::add_ref (p);
}

void
TAO::Value_Traits<A::B::AMH_X2ExceptionHolder>::remove_ref (A::B::AMH_X2ExceptionHolder * p)
{
  ::CORBA::remove_ref (p);
}

void
TAO::Value_Traits<A::B::AMH_X2ExceptionHolder>::release (A::B::AMH_X2ExceptionHolder * p)
{
  ::CORBA::remove_ref (p);
}

TAO_END_VERSIONED_NAMESPACE_DECL



A::B::AMH_X2ExceptionHolder *
A::B::AMH_X2ExceptionHolder::_downcast (::CORBA::ValueBase *v)
{
  return dynamic_cast<::A::B::AMH_X2ExceptionHolder *> (v);
}

const char *
A::B::AMH_X2ExceptionHolder::_tao_obv_repository_id () const
{
  return this->_tao_obv_static_repository_id ();
}

void
A::B::AMH_X2ExceptionHolder::_tao_obv_truncatable_repo_ids (Repository_Id_List& ids) const
{
  ids.push_back (this->_tao_obv_static_repository_id ());
}

void
A::B::AMH_X2ExceptionHolder::_tao_any_destructor (void *_tao_void_pointer)
{
  AMH_X2ExceptionHolder *_tao_tmp_pointer =
    static_cast<AMH_X2ExceptionHolder *> (_tao_void_pointer);
  ::CORBA::remove_ref (_tao_tmp_pointer);
}

// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr A::B::AMH_X2ExceptionHolder::_tao_type () const
{
  return ::A::B::_tc_AMH_X2ExceptionHolder;
}

A::B::AMH_X2ExceptionHolder::~AMH_X2ExceptionHolder ()
{}

::CORBA::ValueBase *
A::B::AMH_X2ExceptionHolder::_copy_value ()
{
  ::CORBA::ValueBase *ret_val {};
  ACE_NEW_THROW_EX (
    ret_val,
    AMH_X2ExceptionHolder (),
    ::CORBA::NO_MEMORY ());
  return ret_val;
}

::CORBA::Boolean
A::B::AMH_X2ExceptionHolder::_tao_marshal_v (TAO_OutputCDR &) const
{
  return true;
}

::CORBA::Boolean
A::B::AMH_X2ExceptionHolder::_tao_unmarshal_v (TAO_InputCDR &)
{
  return true;
}

::CORBA::Boolean
A::B::AMH_X2ExceptionHolder::_tao_match_formal_type (ptrdiff_t) const
{
  return false;
}

::CORBA::Boolean
A::B::AMH_X2ExceptionHolder::_tao_marshal__A_B_AMH_X2ExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo&) const
{
  return true;
}

::CORBA::Boolean
A::B::AMH_X2ExceptionHolder::_tao_unmarshal__A_B_AMH_X2ExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo&)
{
  return true;
}

::CORBA::Boolean
A::B::AMH_X2ExceptionHolder::_tao_unmarshal (
    TAO_InputCDR &strm,
    AMH_X2ExceptionHolder *&new_object)
{
  ::CORBA::ValueBase *base {};
  ::CORBA::Boolean is_indirected = false;
  ::CORBA::Boolean is_null_object = false;
  ::CORBA::Boolean const retval =
    ::CORBA::ValueBase::_tao_unmarshal_pre (
        strm,
        base,
        AMH_X2ExceptionHolder::_tao_obv_static_repository_id (),
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
  new_object = AMH_X2ExceptionHolder::_downcast (base);
  if (nullptr == new_object)
    return false;
  
  if (is_indirected)
    new_object->_add_ref ();
  
  owner._retn ();
  return true;
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_cs.cpp:442

void
A::B::AMH_X2ExceptionHolder::raise_getX2 ()
{
  std::unique_ptr< ::CORBA::Exception> safety (this->exception);
  this->exception->_raise ();
}

// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_cs.cpp:442

void
A::B::AMH_X2ExceptionHolder::raise_sendc_getX2 ()
{
  std::unique_ptr< ::CORBA::Exception> safety (this->exception);
  this->exception->_raise ();
}

// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_cs.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for A::B::AMH_X2ResponseHandler.

A::B::AMH_X2ResponseHandler_ptr
TAO::Objref_Traits<A::B::AMH_X2ResponseHandler>::duplicate (A::B::AMH_X2ResponseHandler_ptr p)
{
  return A::B::AMH_X2ResponseHandler::_duplicate (p);
}

void
TAO::Objref_Traits<A::B::AMH_X2ResponseHandler>::release (A::B::AMH_X2ResponseHandler_ptr p)
{
  ::CORBA::release (p);
}

A::B::AMH_X2ResponseHandler_ptr
TAO::Objref_Traits<A::B::AMH_X2ResponseHandler>::nil ()
{
  return A::B::AMH_X2ResponseHandler::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<A::B::AMH_X2ResponseHandler>::marshal (const A::B::AMH_X2ResponseHandler_ptr p,TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL



A::B::AMH_X2ResponseHandler::AMH_X2ResponseHandler ()
{}void
A::B::AMH_X2ResponseHandler::_tao_any_destructor (void *_tao_void_pointer)
{
  AMH_X2ResponseHandler *_tao_tmp_pointer =
    static_cast<AMH_X2ResponseHandler *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

A::B::AMH_X2ResponseHandler_ptr
A::B::AMH_X2ResponseHandler::_narrow (::CORBA::Object_ptr _tao_objref)
{
  return AMH_X2ResponseHandler::_duplicate (
      dynamic_cast<AMH_X2ResponseHandler_ptr> (_tao_objref));
}

A::B::AMH_X2ResponseHandler_ptr
A::B::AMH_X2ResponseHandler::_unchecked_narrow (::CORBA::Object_ptr _tao_objref)
{
  return AMH_X2ResponseHandler::_duplicate (
      dynamic_cast<AMH_X2ResponseHandler_ptr> (_tao_objref));
}

A::B::AMH_X2ResponseHandler_ptr
A::B::AMH_X2ResponseHandler::_nil ()
{
  return nullptr;
}

A::B::AMH_X2ResponseHandler_ptr
A::B::AMH_X2ResponseHandler::_duplicate (AMH_X2ResponseHandler_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
A::B::AMH_X2ResponseHandler::_tao_release (AMH_X2ResponseHandler_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
A::B::AMH_X2ResponseHandler::_is_a (const char *value)
{
  if (
      std::strcmp (value, "IDL:A/B/AMH_X2ResponseHandler:1.0") == 0 ||
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

const char* A::B::AMH_X2ResponseHandler::_interface_repository_id () const
{
  return "IDL:A/B/AMH_X2ResponseHandler:1.0";
}

const char* A::B::AMH_X2ResponseHandler::_desc_repository_id ()
{
  return "IDL:A/B/AMH_X2ResponseHandler:1.0";
}

const char* A::B::AMH_X2ResponseHandler::_desc_interface_name ()
{
  return "AMH_X2ResponseHandler";
}

::CORBA::Boolean
A::B::AMH_X2ResponseHandler::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/objref_typecode.cpp:68

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_A_B_AMH_X2ResponseHandler (
    ::CORBA::tk_local_interface,
    "IDL:A/B/AMH_X2ResponseHandler:1.0",
    "AMH_X2ResponseHandler");
  

namespace A
{
  
  namespace B
  {
    ::CORBA::TypeCode_ptr const _tc_AMH_X2ResponseHandler =
      &_tao_tc_A_B_AMH_X2ResponseHandler;
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_cs.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for A::B::AMI_X2Handler.

A::B::AMI_X2Handler_ptr
TAO::Objref_Traits<A::B::AMI_X2Handler>::duplicate (A::B::AMI_X2Handler_ptr p)
{
  return A::B::AMI_X2Handler::_duplicate (p);
}

void
TAO::Objref_Traits<A::B::AMI_X2Handler>::release (A::B::AMI_X2Handler_ptr p)
{
  ::CORBA::release (p);
}

A::B::AMI_X2Handler_ptr
TAO::Objref_Traits<A::B::AMI_X2Handler>::nil ()
{
  return A::B::AMI_X2Handler::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<A::B::AMI_X2Handler>::marshal (const A::B::AMI_X2Handler_ptr p,TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_cs.cpp:87

void
A::B::AMI_X2Handler::getX2 (
  const char * ami_return_val)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_ami_return_val (ami_return_val);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      std::addressof(_tao_retval),
      std::addressof(_tao_ami_return_val)
    };

  TAO::Invocation_Adapter _invocation_call (
      this,
      _the_tao_operation_signature,
      2,
      "getX2",
      5,
      TAO::TAO_CO_NONE | TAO::TAO_CO_DIRECT_STRATEGY | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _invocation_call.invoke (nullptr, 0);
}

void
A::B::AMI_X2Handler::getX2_reply_stub (
  TAO_InputCDR &_tao_in,
  ::Messaging::ReplyHandler_ptr _tao_reply_handler,
  ::CORBA::ULong reply_status)
{
  // Retrieve Reply Handler object.
  A::B::AMI_X2Handler_var _tao_reply_handler_object =
    A::B::AMI_X2Handler::_narrow (_tao_reply_handler);

  // Exception handling
  switch (reply_status)
  {
    case TAO_AMI_REPLY_OK:
    {

      ::CORBA::String_var ami_return_val;      // Demarshall all the arguments.
      if (!(

            (_tao_in >> ami_return_val.out ())
         ))
        throw ::CORBA::MARSHAL ();
      
      // Invoke the call back method.
      _tao_reply_handler_object->getX2 (
          
          ami_return_val.in ()
        );
      break;
    }
    case TAO_AMI_REPLY_USER_EXCEPTION:
    case TAO_AMI_REPLY_SYSTEM_EXCEPTION:
    {
      const ACE_Message_Block* cdr = _tao_in.start ();
      ::CORBA::OctetSeq _tao_marshaled_exception (
          static_cast <CORBA::ULong> (cdr->length ()),
          static_cast <CORBA::ULong> (cdr->length ()),
          reinterpret_cast <unsigned char*> (cdr->rd_ptr ()),
          0);
      ::Messaging::ExceptionHolder* exception_holder_ptr {};
      ACE_NEW (
          exception_holder_ptr,
          ::TAO::ExceptionHolder (
            (reply_status == TAO_AMI_REPLY_SYSTEM_EXCEPTION),
            _tao_in.byte_order (),
            _tao_marshaled_exception,
            0,
            0,
            _tao_in.char_translator (),
            _tao_in.wchar_translator ()));
        
      ::Messaging::ExceptionHolder_var exception_holder_var = exception_holder_ptr;
      _tao_reply_handler_object->getX2_excep (
          exception_holder_var);
      break;
    }
    case TAO_AMI_REPLY_NOT_OK:
      // @@ Michael: Not even the spec mentions this case.
      //             We have to think about this case.
      break;
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_cs.cpp:87

void
A::B::AMI_X2Handler::getX2_excep (
  ::Messaging::ExceptionHolder * excep_holder)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Messaging::ExceptionHolder>::in_arg_val _tao_excep_holder (excep_holder);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      std::addressof(_tao_retval),
      std::addressof(_tao_excep_holder)
    };

  TAO::Invocation_Adapter _invocation_call (
      this,
      _the_tao_operation_signature,
      2,
      "getX2_excep",
      11,
      TAO::TAO_CO_NONE | TAO::TAO_CO_DIRECT_STRATEGY | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _invocation_call.invoke (nullptr, 0);
}

A::B::AMI_X2Handler::AMI_X2Handler ()
{
}
void
A::B::AMI_X2Handler::_tao_any_destructor (void *_tao_void_pointer)
{
  AMI_X2Handler *_tao_tmp_pointer =
    static_cast<AMI_X2Handler *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

A::B::AMI_X2Handler_ptr
A::B::AMI_X2Handler::_narrow (::CORBA::Object_ptr _tao_objref)
{
  return TAO::Narrow_Utils<AMI_X2Handler>::narrow (_tao_objref, "IDL:A/B/AMI_X2Handler:1.0");
}

A::B::AMI_X2Handler_ptr
A::B::AMI_X2Handler::_unchecked_narrow (::CORBA::Object_ptr _tao_objref)
{
  return TAO::Narrow_Utils<AMI_X2Handler>::unchecked_narrow (_tao_objref);
}

A::B::AMI_X2Handler_ptr
A::B::AMI_X2Handler::_nil ()
{
  return nullptr;
}

A::B::AMI_X2Handler_ptr
A::B::AMI_X2Handler::_duplicate (AMI_X2Handler_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
A::B::AMI_X2Handler::_tao_release (AMI_X2Handler_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
A::B::AMI_X2Handler::_is_a (const char *value)
{
  if (
      std::strcmp (value, "IDL:omg.org/Messaging/ReplyHandler:1.0") == 0 ||
      std::strcmp (value, "IDL:A/B/AMI_X2Handler:1.0") == 0 ||
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

const char* A::B::AMI_X2Handler::_interface_repository_id () const
{
  return "IDL:A/B/AMI_X2Handler:1.0";
}

const char* A::B::AMI_X2Handler::_desc_repository_id ()
{
  return "IDL:A/B/AMI_X2Handler:1.0";
}

const char* A::B::AMI_X2Handler::_desc_interface_name ()
{
  return "AMI_X2Handler";
}

::CORBA::Boolean
A::B::AMI_X2Handler::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/objref_typecode.cpp:68

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_A_B_AMI_X2Handler (
    ::CORBA::tk_objref,
    "IDL:A/B/AMI_X2Handler:1.0",
    "AMI_X2Handler");
  

namespace A
{
  
  namespace B
  {
    ::CORBA::TypeCode_ptr const _tc_AMI_X2Handler =
      &_tao_tc_A_B_AMI_X2Handler;
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_obv_cs.cpp:43

OBV_A::B::AMH_X2ExceptionHolder::~AMH_X2ExceptionHolder ()
{}

::CORBA::Boolean
OBV_A::B::AMH_X2ExceptionHolder::_tao_marshal__A_B_AMH_X2ExceptionHolder (TAO_OutputCDR &strm, TAO_ChunkInfo& ci) const
{
  return _tao_marshal_state (strm, ci);
}

::CORBA::Boolean
OBV_A::B::AMH_X2ExceptionHolder::_tao_unmarshal__A_B_AMH_X2ExceptionHolder (TAO_InputCDR &strm, TAO_ChunkInfo& ci)
{
  return _tao_unmarshal_state (strm, ci);
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/any_op_cs.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const ::frag::pug &_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::frag::pug>::insert_copy (
    _tao_any,
    ::frag::pug::_tao_any_destructor,
    frag::_tc_pug,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  ::frag::pug *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::frag::pug>::insert (
    _tao_any,
    ::frag::pug::_tao_any_destructor,
    frag::_tc_pug,
    _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const ::frag::pug *&_tao_elem)
{
  return TAO::Any_Dual_Impl_T< ::frag::pug>::extract (
    _tao_any,
    ::frag::pug::_tao_any_destructor,
    frag::_tc_pug,
    _tao_elem);
}
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_cs.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<A::B::X2>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



/// Copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  A::B::X2_ptr _tao_elem)
{
  A::B::X2_ptr _tao_objptr =
    A::B::X2::_duplicate (_tao_elem);
  _tao_any <<= std::addressof(_tao_objptr);
}

/// Non-copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  A::B::X2_ptr *_tao_elem)
{
  TAO::Any_Impl_T<A::B::X2>::insert (
    _tao_any,
    A::B::X2::_tao_any_destructor,
    A::B::_tc_X2,
    *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    A::B::X2_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<A::B::X2>::extract (
        _tao_any,
        A::B::X2::_tao_any_destructor,
        A::B::_tc_X2,
        _tao_elem);
}

}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/any_op_cs.cpp:44


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<A::B::AMH_X2ExceptionHolder>::to_value (
      ::CORBA::ValueBase *&_tao_elem) const
  {
    ::CORBA::add_ref (this->value_);
    _tao_elem = this->value_;
    return true;
  }
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

/// Copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  A::B::AMH_X2ExceptionHolder *_tao_elem)
{
  #ifdef TAO_VALUETYPE_COPYING_ANY_INSERTION_USES_COPY_VALUE
    A::B::AMH_X2ExceptionHolder *_tao_copy =
      _tao_elem ?
        A::B::AMH_X2ExceptionHolder::_downcast (_tao_elem->_copy_value ())
        : nullptr;
    _tao_any <<= std::addressof(_tao_copy);
  #else
    ::CORBA::add_ref (_tao_elem);
    _tao_any <<= std::addressof(_tao_elem);
  #endif
}

/// Non-copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  A::B::AMH_X2ExceptionHolder **_tao_elem)
{
  TAO::Any_Impl_T<A::B::AMH_X2ExceptionHolder>::insert (
    _tao_any,
    A::B::AMH_X2ExceptionHolder::_tao_any_destructor,
    A::B::_tc_AMH_X2ExceptionHolder,
    *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    A::B::AMH_X2ExceptionHolder *&_tao_elem)
{
  return
    TAO::Any_Impl_T<A::B::AMH_X2ExceptionHolder>::extract (
        _tao_any,
        A::B::AMH_X2ExceptionHolder::_tao_any_destructor,
        A::B::_tc_AMH_X2ExceptionHolder,
        _tao_elem);
}


}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_cs.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<A::B::AMH_X2ResponseHandler>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<A::B::AMH_X2ResponseHandler>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<A::B::AMH_X2ResponseHandler>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



/// Copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  A::B::AMH_X2ResponseHandler_ptr _tao_elem)
{
  A::B::AMH_X2ResponseHandler_ptr _tao_objptr =
    A::B::AMH_X2ResponseHandler::_duplicate (_tao_elem);
  _tao_any <<= std::addressof(_tao_objptr);
}

/// Non-copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  A::B::AMH_X2ResponseHandler_ptr *_tao_elem)
{
  TAO::Any_Impl_T<A::B::AMH_X2ResponseHandler>::insert (
    _tao_any,
    A::B::AMH_X2ResponseHandler::_tao_any_destructor,
    A::B::_tc_AMH_X2ResponseHandler,
    *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    A::B::AMH_X2ResponseHandler_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<A::B::AMH_X2ResponseHandler>::extract (
        _tao_any,
        A::B::AMH_X2ResponseHandler::_tao_any_destructor,
        A::B::_tc_AMH_X2ResponseHandler,
        _tao_elem);
}

}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_cs.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<A::B::AMI_X2Handler>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



/// Copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  A::B::AMI_X2Handler_ptr _tao_elem)
{
  A::B::AMI_X2Handler_ptr _tao_objptr =
    A::B::AMI_X2Handler::_duplicate (_tao_elem);
  _tao_any <<= std::addressof(_tao_objptr);
}

/// Non-copying insertion.
void
operator<<= (
  ::CORBA::Any &_tao_any,
  A::B::AMI_X2Handler_ptr *_tao_elem)
{
  TAO::Any_Impl_T<A::B::AMI_X2Handler>::insert (
    _tao_any,
    A::B::AMI_X2Handler::_tao_any_destructor,
    A::B::_tc_AMI_X2Handler,
    *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    A::B::AMI_X2Handler_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<A::B::AMI_X2Handler>::extract (
        _tao_any,
        A::B::AMI_X2Handler::_tao_any_destructor,
        A::B::_tc_AMI_X2Handler,
        _tao_elem);
}

}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/cdr_op_cs.cpp:48


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const frag::pug &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.leash) &&
    true;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    frag::pug &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.leash) &&
    true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_cs.cpp:50


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const A::B::X2_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    A::B::X2_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  // Narrow to the right type.
  _tao_objref = TAO::Narrow_Utils< ::A::B::X2>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:506



TAO_BEGIN_VERSIONED_NAMESPACE_DECL
void
CORBA::add_ref (A::B::AMH_X2ExceptionHolder * vt)
{
  if (vt != 0)
    {
      vt->_add_ref ();
    }
}

void
CORBA::remove_ref (A::B::AMH_X2ExceptionHolder * vt)
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
    const A::B::AMH_X2ExceptionHolder *_tao_valuetype)
{
  return
    ::CORBA::ValueBase::_tao_marshal (
        strm,
        _tao_valuetype,
        reinterpret_cast<ptrdiff_t> (&A::B::AMH_X2ExceptionHolder::_downcast));
}

::CORBA::Boolean
operator>> (
    TAO_InputCDR &strm,
    A::B::AMH_X2ExceptionHolder *&_tao_valuetype)
{
  return A::B::AMH_X2ExceptionHolder::_tao_unmarshal (strm, _tao_valuetype);
}


TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/marshal_cs.cpp:189

::CORBA::Boolean
OBV_A::B::AMH_X2ExceptionHolder::_tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo &) const
{
  return true;
}

::CORBA::Boolean
OBV_A::B::AMH_X2ExceptionHolder::_tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo &)
{
  return true;
}

void
OBV_A::B::AMH_X2ExceptionHolder::truncation_hook ()
{
  this->require_truncation_ = true;
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_cs.cpp:50


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const A::B::AMI_X2Handler_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    A::B::AMI_X2Handler_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  // Narrow to the right type.
  _tao_objref = TAO::Narrow_Utils< ::A::B::AMI_X2Handler>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



