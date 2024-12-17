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
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:148

#ifndef _TAO_IDL_GENERIC_OBJECTC_Q4Y3UB_H_
#define _TAO_IDL_GENERIC_OBJECTC_Q4Y3UB_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "TAO_IDL_TEST_stub_export.h"
#include "tao/Valuetype/ValueBase.h"
#include "tao/Valuetype/Valuetype_Adapter_Factory_Impl.h"
#include "tao/Valuetype/ValueFactory.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Messaging/Messaging.h"
#include "tao/Valuetype/Value_VarOut_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Basic_Argument_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 4 || TAO_MINOR_VERSION != 0 || TAO_MICRO_VERSION != 2
#error This file should be regenerated with TAO_IDL
#endif
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_root/root_ch.cpp:155


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/enum_ch.cpp:39

enum ObjectType
{
  OT_THIS,
  OT_THAT
};

typedef ObjectType &ObjectType_out;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:258



class Selecter;
using Selecter_var = ::TAO_Var_Var_T<Selecter>;
using Selecter_out = ::TAO_Out_T<Selecter>;

class TAO_IDL_TEST_STUB_Export Selecter
{
public:
  Selecter ();
  Selecter (const Selecter &);
  ~Selecter ();

  Selecter &operator= (const Selecter &);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/discriminant_ch.cpp:66

  

  void _d (ObjectType);
  ObjectType _d () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  
  using _var_type = Selecter_var;
  using _out_type = Selecter_out;

  static void _tao_any_destructor (void *);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/public_ch.cpp:440

  

  void this_object (const ::CORBA::Object_ptr);
  ::CORBA::Object_ptr this_object () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/public_ch.cpp:440

  

  void that_object (const ::CORBA::Object_ptr);
  ::CORBA::Object_ptr that_object () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/union_ch.cpp:120

  

  void _default ();
private:
  ObjectType disc_;

  union
  {
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/private_ch.cpp:369

    
    CORBA::Object_var *this_object_;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/private_ch.cpp:369

    
    CORBA::Object_var *that_object_;
  } u_;

  /// TAO extension - frees any allocated storage.
  void _reset ();
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_GENERIC__VAR_OUT_CH_)
#define _GENERIC__VAR_OUT_CH_

class AMI_genericHandler;
typedef AMI_genericHandler *AMI_genericHandler_ptr;

class generic;
using generic_ptr = generic*;
using generic_var = TAO_Objref_Var_T<generic>;
using generic_out = TAO_Objref_Out_T<generic>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export generic
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<generic>;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = generic_ptr;
  using _var_type = generic_var;
  using _out_type = generic_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static generic_ptr _duplicate (generic_ptr obj);

  static void _tao_release (generic_ptr obj);

  static generic_ptr _narrow (::CORBA::Object_ptr obj);
  static generic_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static generic_ptr _nil ();

  virtual ::CORBA::Object_ptr op (
    ::CORBA::Object_ptr inarg,
    ::CORBA::Object_ptr & inoutarg,
    ::CORBA::Object_out outarg);

  virtual void sendc_op (
    ::AMI_genericHandler_ptr ami_handler,
    ::CORBA::Object_ptr inarg,
    ::CORBA::Object_ptr inoutarg);

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

  

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id () const;
  static const char* _desc_repository_id ();
  static const char* _desc_interface_name ();
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  generic ();

  // Concrete non-local interface only.
  generic (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  generic (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = nullptr,
      TAO_ORB_Core *orb_core = nullptr);

  virtual ~generic () = default;

private:
  // Private and unimplemented for concrete interfaces.
  generic (const generic &) = delete;
  generic (generic &&) = delete;
  generic &operator= (const generic &) = delete;
  generic &operator= (generic &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:563



#if !defined (_AMH_GENERICEXCEPTIONHOLDER__VAR_OUT_CH_)
#define _AMH_GENERICEXCEPTIONHOLDER__VAR_OUT_CH_

class AMH_genericExceptionHolder;
using AMH_genericExceptionHolder_var = TAO_Value_Var_T<AMH_genericExceptionHolder>;
using AMH_genericExceptionHolder_out = TAO_Value_Out_T<AMH_genericExceptionHolder>;

#endif /* end #if !defined */
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:49



class TAO_IDL_TEST_STUB_Export AMH_genericExceptionHolder
  : public virtual ::CORBA::DefaultValueRefCountBase
{
public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMH_genericExceptionHolder*;
  using _var_type = AMH_genericExceptionHolder_var;
  using _out_type = AMH_genericExceptionHolder_out;

  static void _tao_any_destructor (void *);

  AMH_genericExceptionHolder (::CORBA::Exception *ex)
    : exception (ex)
  {}

  virtual ~AMH_genericExceptionHolder ();
  virtual ::CORBA::ValueBase *_copy_value ();

  static AMH_genericExceptionHolder* _downcast (::CORBA::ValueBase *v);
  
  /// TAO extensions or internals
  static ::CORBA::Boolean _tao_unmarshal (
      TAO_InputCDR &strm,
      AMH_genericExceptionHolder *&new_object);
  
  virtual const char* _tao_obv_repository_id () const;

  virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &) const;

  static const char* _tao_obv_static_repository_id ();

  virtual ::CORBA::TypeCode_ptr _tao_type () const;

public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

  
public:
  virtual void raise_op ();

public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

  
public:
  virtual void raise_sendc_op ();
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:236



protected:
  AMH_genericExceptionHolder ();
  virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
  virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
  virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t) const;
  
private:
  AMH_genericExceptionHolder (const AMH_genericExceptionHolder &);
  void operator= (const AMH_genericExceptionHolder &);
  
  ::CORBA::Exception *exception;
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__AMH_genericExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__AMH_genericExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_AMH_GENERICRESPONSEHANDLER__VAR_OUT_CH_)
#define _AMH_GENERICRESPONSEHANDLER__VAR_OUT_CH_

class AMI_AMH_genericResponseHandlerHandler;
typedef AMI_AMH_genericResponseHandlerHandler *AMI_AMH_genericResponseHandlerHandler_ptr;

class AMH_genericResponseHandler;
using AMH_genericResponseHandler_ptr = AMH_genericResponseHandler*;
using AMH_genericResponseHandler_var = TAO_Objref_Var_T<AMH_genericResponseHandler>;
using AMH_genericResponseHandler_out = TAO_Objref_Out_T<AMH_genericResponseHandler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMH_genericResponseHandler
  : public virtual ::CORBA::Object
{
public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMH_genericResponseHandler_ptr;
  using _var_type = AMH_genericResponseHandler_var;
  using _out_type = AMH_genericResponseHandler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMH_genericResponseHandler_ptr _duplicate (AMH_genericResponseHandler_ptr obj);

  static void _tao_release (AMH_genericResponseHandler_ptr obj);

  static AMH_genericResponseHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMH_genericResponseHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMH_genericResponseHandler_ptr _nil ();

  virtual void op (
    ::CORBA::Object_ptr return_value,
    ::CORBA::Object_ptr inoutarg,
    ::CORBA::Object_ptr outarg) = 0;

  virtual void op_excep (
    ::AMH_genericExceptionHolder * holder) = 0;

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

  

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id () const;
  static const char* _desc_repository_id ();
  static const char* _desc_interface_name ();
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Abstract or local interface only.
  AMH_genericResponseHandler ();

  

  virtual ~AMH_genericResponseHandler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMH_genericResponseHandler (const AMH_genericResponseHandler &) = delete;
  AMH_genericResponseHandler (AMH_genericResponseHandler &&) = delete;
  AMH_genericResponseHandler &operator= (const AMH_genericResponseHandler &) = delete;
  AMH_genericResponseHandler &operator= (AMH_genericResponseHandler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_AMI_GENERICHANDLER__VAR_OUT_CH_)
#define _AMI_GENERICHANDLER__VAR_OUT_CH_

class AMI_genericHandler;
using AMI_genericHandler_ptr = AMI_genericHandler*;
using AMI_genericHandler_var = TAO_Objref_Var_T<AMI_genericHandler>;
using AMI_genericHandler_out = TAO_Objref_Out_T<AMI_genericHandler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMI_genericHandler
  : public virtual ::Messaging::ReplyHandler

{
public:
  friend class TAO::Narrow_Utils<AMI_genericHandler>;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMI_genericHandler_ptr;
  using _var_type = AMI_genericHandler_var;
  using _out_type = AMI_genericHandler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMI_genericHandler_ptr _duplicate (AMI_genericHandler_ptr obj);

  static void _tao_release (AMI_genericHandler_ptr obj);

  static AMI_genericHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMI_genericHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMI_genericHandler_ptr _nil ();

  virtual void op (
    ::CORBA::Object_ptr ami_return_val,
    ::CORBA::Object_ptr inoutarg,
    ::CORBA::Object_ptr outarg);

  static void
  op_reply_stub (
    TAO_InputCDR &_tao_reply_cdr,
    ::Messaging::ReplyHandler_ptr _tao_reply_handler,
    ::CORBA::ULong reply_status);

  virtual void op_excep (
    ::Messaging::ExceptionHolder * excep_holder);

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

  

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id () const;
  static const char* _desc_repository_id ();
  static const char* _desc_interface_name ();
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  AMI_genericHandler ();

  // Concrete non-local interface only.
  AMI_genericHandler (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  AMI_genericHandler (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = nullptr,
      TAO_ORB_Core *orb_core = nullptr);

  virtual ~AMI_genericHandler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMI_genericHandler (const AMI_genericHandler &) = delete;
  AMI_genericHandler (AMI_genericHandler &&) = delete;
  AMI_genericHandler &operator= (const AMI_genericHandler &) = delete;
  AMI_genericHandler &operator= (AMI_genericHandler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:64



TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_MESSAGING_EXCEPTIONHOLDER__ARG_TRAITS_)
#define _MESSAGING_EXCEPTIONHOLDER__ARG_TRAITS_

  template<>
  class Arg_Traits< ::Messaging::ExceptionHolder>
    : public
        Object_Arg_Traits_T<
            ::Messaging::ExceptionHolder *,
            ::Messaging::ExceptionHolder_var,
            ::Messaging::ExceptionHolder_out,
            TAO::Value_Traits<Messaging::ExceptionHolder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class Arg_Traits< ::ObjectType>
    : public
        Basic_Arg_Traits_T<
            ::ObjectType,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class Arg_Traits< ::Selecter>
    : public
        Var_Size_Arg_Traits_T<
            ::Selecter,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_GENERIC__ARG_TRAITS_)
#define _GENERIC__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::generic>
    : public Object_Arg_Traits_T<
        ::generic_ptr,
        ::generic_var,
        ::generic_out,
        TAO::Objref_Traits<generic>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_AMH_GENERICEXCEPTIONHOLDER__ARG_TRAITS_)
#define _AMH_GENERICEXCEPTIONHOLDER__ARG_TRAITS_

  template<>
  class Arg_Traits< ::AMH_genericExceptionHolder>
    : public
        Object_Arg_Traits_T<
            ::AMH_genericExceptionHolder *,
            ::AMH_genericExceptionHolder_var,
            ::AMH_genericExceptionHolder_out,
            TAO::Value_Traits<AMH_genericExceptionHolder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_AMI_GENERICHANDLER__ARG_TRAITS_)
#define _AMI_GENERICHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::AMI_genericHandler>
    : public Object_Arg_Traits_T<
        ::AMI_genericHandler_ptr,
        ::AMI_genericHandler_var,
        ::AMI_genericHandler_out,
        TAO::Objref_Traits<AMI_genericHandler>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_obv_ch.cpp:43



// OBV_ class
class TAO_IDL_TEST_STUB_Export OBV_AMH_genericExceptionHolder
  : public virtual AMH_genericExceptionHolder
{

protected:
  OBV_AMH_genericExceptionHolder () = default;
  virtual ~OBV_AMH_genericExceptionHolder ();
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__AMH_genericExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__AMH_genericExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);

  ::CORBA::Boolean _tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo &) const;
  ::CORBA::Boolean _tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo &);
  virtual void truncation_hook ();

private:
  CORBA::Boolean require_truncation_ {false};
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_traits.cpp:58



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_GENERIC__TRAITS_)
#define _GENERIC__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::generic>
  {
    static ::generic_ptr duplicate (::generic_ptr p);
    static void release (::generic_ptr p);
    static ::generic_ptr nil ();
    static ::CORBA::Boolean marshal (const ::generic_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_AMH_GENERICEXCEPTIONHOLDER__TRAITS_)
#define _AMH_GENERICEXCEPTIONHOLDER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Value_Traits<AMH_genericExceptionHolder>
  {
    static void add_ref (AMH_genericExceptionHolder *);
    static void remove_ref (AMH_genericExceptionHolder *);
    static void release (AMH_genericExceptionHolder *);
  };

#endif /* end #if !defined */

#if !defined (_AMH_GENERICRESPONSEHANDLER__TRAITS_)
#define _AMH_GENERICRESPONSEHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::AMH_genericResponseHandler>
  {
    static ::AMH_genericResponseHandler_ptr duplicate (::AMH_genericResponseHandler_ptr p);
    static void release (::AMH_genericResponseHandler_ptr p);
    static ::AMH_genericResponseHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::AMH_genericResponseHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_AMI_GENERICHANDLER__TRAITS_)
#define _AMI_GENERICHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::AMI_genericHandler>
  {
    static ::AMI_genericHandler_ptr duplicate (::AMI_genericHandler_ptr p);
    static void release (::AMI_genericHandler_ptr p);
    static ::AMI_genericHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::AMI_genericHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/cdr_op_ch.cpp:33


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, ObjectType _tao_enumerator);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &strm, ObjectType &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/cdr_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Selecter &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Selecter &);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const generic_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, generic_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:452


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern TAO_IDL_TEST_STUB_Export void add_ref (AMH_genericExceptionHolder *);
  extern TAO_IDL_TEST_STUB_Export void remove_ref (AMH_genericExceptionHolder *);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/cdr_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const AMH_genericExceptionHolder *);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, AMH_genericExceptionHolder *&);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const AMI_genericHandler_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, AMI_genericHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:1648

#if defined (__ACE_INLINE__)
#include "generic_objectC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */
