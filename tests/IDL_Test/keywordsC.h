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

#ifndef _TAO_IDL_KEYWORDSC_W8W3SM_H_
#define _TAO_IDL_KEYWORDSC_W8W3SM_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "TAO_IDL_TEST_stub_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/Valuetype/ValueBase.h"
#include "tao/Valuetype/Valuetype_Adapter_Factory_Impl.h"
#include "tao/Valuetype/ValueFactory.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Messaging/Messaging.h"
#include "tao/Sequence_T.h"
#include "tao/Valuetype/Value_VarOut_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include "tao/UB_String_Arguments.h"
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
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:258



struct Keywords;
using Keywords_var = ::TAO_Fixed_Var_T<Keywords>;
using Keywords_out = Keywords&;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/structure_ch.cpp:47



struct TAO_IDL_TEST_STUB_Export Keywords
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  
  using _var_type = Keywords_var;
  using _out_type = Keywords_out;

  static void _tao_any_destructor (void *);
  
  ::CORBA::UShort _cxx_or;
  ::CORBA::Char _cxx_or_eq;
  ::CORBA::Octet _cxx_private;
  ::CORBA::Boolean _cxx_protected;
  ::CORBA::Float _cxx_public;
  ::CORBA::Double _cxx_int;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_Keywords;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:258



struct Object;
using Object_var = ::TAO_Fixed_Var_T<Object>;
using Object_out = Object&;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/structure_ch.cpp:47



struct TAO_IDL_TEST_STUB_Export Object
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  
  using _var_type = Object_var;
  using _out_type = Object_out;

  static void _tao_any_destructor (void *);
  
  ::CORBA::LongLong id;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_Object;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_sequence/sequence_ch.cpp:98



#if !defined (_OBJECTSEQ_CH_)
#define _OBJECTSEQ_CH_

class ObjectSeq;
typedef ::TAO_FixedSeq_Var_T<ObjectSeq> ObjectSeq_var;
typedef ::TAO_Seq_Out_T<ObjectSeq> ObjectSeq_out;


class TAO_IDL_TEST_STUB_Export ObjectSeq
  : public
      ::TAO::unbounded_value_sequence< Object>
{
public:
  ObjectSeq () = default;
  ObjectSeq (::CORBA::ULong max);
  ObjectSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    Object* buffer,
    ::CORBA::Boolean release = false);
  ObjectSeq (const ObjectSeq &) = default;
  ObjectSeq (ObjectSeq &&) = default;
  ObjectSeq& operator= (const ObjectSeq &) = default;
  ObjectSeq& operator= (ObjectSeq &&) = default;
  virtual ~ObjectSeq () = default;
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  
  using _var_type = ObjectSeq_var;
  using _out_type = ObjectSeq_out;

  static void _tao_any_destructor (void *);
};

#endif /* end #if !defined */
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_ObjectSeq;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:258



struct Objects;
using Objects_var = ::TAO_Var_Var_T<Objects>;
using Objects_out = ::TAO_Out_T<Objects>;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/structure_ch.cpp:47



struct TAO_IDL_TEST_STUB_Export Objects
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  
  using _var_type = Objects_var;
  using _out_type = Objects_out;

  static void _tao_any_destructor (void *);
  
  ObjectSeq objs;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_Objects;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_TESTING__VAR_OUT_CH_)
#define _TESTING__VAR_OUT_CH_

class AMI_TestingHandler;
typedef AMI_TestingHandler *AMI_TestingHandler_ptr;

class Testing;
using Testing_ptr = Testing*;
using Testing_var = TAO_Objref_Var_T<Testing>;
using Testing_out = TAO_Objref_Out_T<Testing>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export Testing
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<Testing>;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = Testing_ptr;
  using _var_type = Testing_var;
  using _out_type = Testing_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static Testing_ptr _duplicate (Testing_ptr obj);

  static void _tao_release (Testing_ptr obj);

  static Testing_ptr _narrow (::CORBA::Object_ptr obj);
  static Testing_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static Testing_ptr _nil ();

  virtual void foo (
    const char * _cxx_namespace);

  virtual void bar (
    const ::Objects & foo);

  virtual void sendc_foo (
    ::AMI_TestingHandler_ptr ami_handler,
    const char * _cxx_namespace);

  virtual void sendc_bar (
    ::AMI_TestingHandler_ptr ami_handler,
    const ::Objects & foo);

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

  

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id () const;
  static const char* _desc_repository_id ();
  static const char* _desc_interface_name ();
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  Testing ();

  // Concrete non-local interface only.
  Testing (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  Testing (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = nullptr,
      TAO_ORB_Core *orb_core = nullptr);

  virtual ~Testing () = default;

private:
  // Private and unimplemented for concrete interfaces.
  Testing (const Testing &) = delete;
  Testing (Testing &&) = delete;
  Testing &operator= (const Testing &) = delete;
  Testing &operator= (Testing &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_Testing;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:563



#if !defined (_AMH_TESTINGEXCEPTIONHOLDER__VAR_OUT_CH_)
#define _AMH_TESTINGEXCEPTIONHOLDER__VAR_OUT_CH_

class AMH_TestingExceptionHolder;
using AMH_TestingExceptionHolder_var = TAO_Value_Var_T<AMH_TestingExceptionHolder>;
using AMH_TestingExceptionHolder_out = TAO_Value_Out_T<AMH_TestingExceptionHolder>;

#endif /* end #if !defined */
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:49



class TAO_IDL_TEST_STUB_Export AMH_TestingExceptionHolder
  : public virtual ::CORBA::DefaultValueRefCountBase
{
public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMH_TestingExceptionHolder*;
  using _var_type = AMH_TestingExceptionHolder_var;
  using _out_type = AMH_TestingExceptionHolder_out;

  static void _tao_any_destructor (void *);

  AMH_TestingExceptionHolder (::CORBA::Exception *ex)
    : exception (ex)
  {}

  virtual ~AMH_TestingExceptionHolder ();
  virtual ::CORBA::ValueBase *_copy_value ();

  static AMH_TestingExceptionHolder* _downcast (::CORBA::ValueBase *v);
  
  /// TAO extensions or internals
  static ::CORBA::Boolean _tao_unmarshal (
      TAO_InputCDR &strm,
      AMH_TestingExceptionHolder *&new_object);
  
  virtual const char* _tao_obv_repository_id () const;

  virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &) const;

  static const char* _tao_obv_static_repository_id ();

  virtual ::CORBA::TypeCode_ptr _tao_type () const;

public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

  
public:
  virtual void raise_foo ();

public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

  
public:
  virtual void raise_bar ();

public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

  
public:
  virtual void raise_sendc_foo ();

public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

  
public:
  virtual void raise_sendc_bar ();
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:236



protected:
  AMH_TestingExceptionHolder ();
  virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
  virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
  virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t) const;
  
private:
  AMH_TestingExceptionHolder (const AMH_TestingExceptionHolder &);
  void operator= (const AMH_TestingExceptionHolder &);
  
  ::CORBA::Exception *exception;
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__AMH_TestingExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__AMH_TestingExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_TestingExceptionHolder;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_AMH_TESTINGRESPONSEHANDLER__VAR_OUT_CH_)
#define _AMH_TESTINGRESPONSEHANDLER__VAR_OUT_CH_

class AMI_AMH_TestingResponseHandlerHandler;
typedef AMI_AMH_TestingResponseHandlerHandler *AMI_AMH_TestingResponseHandlerHandler_ptr;

class AMH_TestingResponseHandler;
using AMH_TestingResponseHandler_ptr = AMH_TestingResponseHandler*;
using AMH_TestingResponseHandler_var = TAO_Objref_Var_T<AMH_TestingResponseHandler>;
using AMH_TestingResponseHandler_out = TAO_Objref_Out_T<AMH_TestingResponseHandler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMH_TestingResponseHandler
  : public virtual ::CORBA::Object
{
public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMH_TestingResponseHandler_ptr;
  using _var_type = AMH_TestingResponseHandler_var;
  using _out_type = AMH_TestingResponseHandler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMH_TestingResponseHandler_ptr _duplicate (AMH_TestingResponseHandler_ptr obj);

  static void _tao_release (AMH_TestingResponseHandler_ptr obj);

  static AMH_TestingResponseHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMH_TestingResponseHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMH_TestingResponseHandler_ptr _nil ();

  virtual void foo () = 0;

  virtual void foo_excep (
    ::AMH_TestingExceptionHolder * holder) = 0;

  virtual void bar () = 0;

  virtual void bar_excep (
    ::AMH_TestingExceptionHolder * holder) = 0;

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

  

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id () const;
  static const char* _desc_repository_id ();
  static const char* _desc_interface_name ();
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Abstract or local interface only.
  AMH_TestingResponseHandler ();

  

  virtual ~AMH_TestingResponseHandler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMH_TestingResponseHandler (const AMH_TestingResponseHandler &) = delete;
  AMH_TestingResponseHandler (AMH_TestingResponseHandler &&) = delete;
  AMH_TestingResponseHandler &operator= (const AMH_TestingResponseHandler &) = delete;
  AMH_TestingResponseHandler &operator= (AMH_TestingResponseHandler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_TestingResponseHandler;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_AMI_TESTINGHANDLER__VAR_OUT_CH_)
#define _AMI_TESTINGHANDLER__VAR_OUT_CH_

class AMI_TestingHandler;
using AMI_TestingHandler_ptr = AMI_TestingHandler*;
using AMI_TestingHandler_var = TAO_Objref_Var_T<AMI_TestingHandler>;
using AMI_TestingHandler_out = TAO_Objref_Out_T<AMI_TestingHandler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMI_TestingHandler
  : public virtual ::Messaging::ReplyHandler

{
public:
  friend class TAO::Narrow_Utils<AMI_TestingHandler>;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMI_TestingHandler_ptr;
  using _var_type = AMI_TestingHandler_var;
  using _out_type = AMI_TestingHandler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMI_TestingHandler_ptr _duplicate (AMI_TestingHandler_ptr obj);

  static void _tao_release (AMI_TestingHandler_ptr obj);

  static AMI_TestingHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMI_TestingHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMI_TestingHandler_ptr _nil ();

  virtual void foo ();

  static void
  foo_reply_stub (
    TAO_InputCDR &_tao_reply_cdr,
    ::Messaging::ReplyHandler_ptr _tao_reply_handler,
    ::CORBA::ULong reply_status);

  virtual void foo_excep (
    ::Messaging::ExceptionHolder * excep_holder);

  virtual void bar ();

  static void
  bar_reply_stub (
    TAO_InputCDR &_tao_reply_cdr,
    ::Messaging::ReplyHandler_ptr _tao_reply_handler,
    ::CORBA::ULong reply_status);

  virtual void bar_excep (
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
  AMI_TestingHandler ();

  // Concrete non-local interface only.
  AMI_TestingHandler (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  AMI_TestingHandler (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = nullptr,
      TAO_ORB_Core *orb_core = nullptr);

  virtual ~AMI_TestingHandler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMI_TestingHandler (const AMI_TestingHandler &) = delete;
  AMI_TestingHandler (AMI_TestingHandler &&) = delete;
  AMI_TestingHandler &operator= (const AMI_TestingHandler &) = delete;
  AMI_TestingHandler &operator= (AMI_TestingHandler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMI_TestingHandler;
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
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class Arg_Traits< ::Keywords>
    : public
        Fixed_Size_Arg_Traits_T<
            ::Keywords,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class Arg_Traits< ::Object>
    : public
        Fixed_Size_Arg_Traits_T<
            ::Object,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:671

  

  template<>
  class Arg_Traits< ::ObjectSeq>
    : public
        Var_Size_Arg_Traits_T<
            ::ObjectSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class Arg_Traits< ::Objects>
    : public
        Var_Size_Arg_Traits_T<
            ::Objects,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_TESTING__ARG_TRAITS_)
#define _TESTING__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Testing>
    : public Object_Arg_Traits_T<
        ::Testing_ptr,
        ::Testing_var,
        ::Testing_out,
        TAO::Objref_Traits<Testing>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_AMH_TESTINGEXCEPTIONHOLDER__ARG_TRAITS_)
#define _AMH_TESTINGEXCEPTIONHOLDER__ARG_TRAITS_

  template<>
  class Arg_Traits< ::AMH_TestingExceptionHolder>
    : public
        Object_Arg_Traits_T<
            ::AMH_TestingExceptionHolder *,
            ::AMH_TestingExceptionHolder_var,
            ::AMH_TestingExceptionHolder_out,
            TAO::Value_Traits<AMH_TestingExceptionHolder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_AMI_TESTINGHANDLER__ARG_TRAITS_)
#define _AMI_TESTINGHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::AMI_TestingHandler>
    : public Object_Arg_Traits_T<
        ::AMI_TestingHandler_ptr,
        ::AMI_TestingHandler_var,
        ::AMI_TestingHandler_out,
        TAO::Objref_Traits<AMI_TestingHandler>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_obv_ch.cpp:43



// OBV_ class
class TAO_IDL_TEST_STUB_Export OBV_AMH_TestingExceptionHolder
  : public virtual AMH_TestingExceptionHolder
{

protected:
  OBV_AMH_TestingExceptionHolder () = default;
  virtual ~OBV_AMH_TestingExceptionHolder ();
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__AMH_TestingExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__AMH_TestingExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);

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

#if !defined (_TESTING__TRAITS_)
#define _TESTING__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::Testing>
  {
    static ::Testing_ptr duplicate (::Testing_ptr p);
    static void release (::Testing_ptr p);
    static ::Testing_ptr nil ();
    static ::CORBA::Boolean marshal (const ::Testing_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_AMH_TESTINGEXCEPTIONHOLDER__TRAITS_)
#define _AMH_TESTINGEXCEPTIONHOLDER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Value_Traits<AMH_TestingExceptionHolder>
  {
    static void add_ref (AMH_TestingExceptionHolder *);
    static void remove_ref (AMH_TestingExceptionHolder *);
    static void release (AMH_TestingExceptionHolder *);
  };

#endif /* end #if !defined */

#if !defined (_AMH_TESTINGRESPONSEHANDLER__TRAITS_)
#define _AMH_TESTINGRESPONSEHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::AMH_TestingResponseHandler>
  {
    static ::AMH_TestingResponseHandler_ptr duplicate (::AMH_TestingResponseHandler_ptr p);
    static void release (::AMH_TestingResponseHandler_ptr p);
    static ::AMH_TestingResponseHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::AMH_TestingResponseHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_AMI_TESTINGHANDLER__TRAITS_)
#define _AMI_TESTINGHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::AMI_TestingHandler>
  {
    static ::AMI_TestingHandler_ptr duplicate (::AMI_TestingHandler_ptr p);
    static void release (::AMI_TestingHandler_ptr p);
    static ::AMI_TestingHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::AMI_TestingHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const ::Keywords &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, ::Keywords*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Keywords *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const ::Object &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, ::Object*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Object *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_sequence/any_op_ch.cpp:46




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const ::ObjectSeq &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, ::ObjectSeq*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::ObjectSeq *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const ::Objects &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, ::Objects*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Objects *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, Testing_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, Testing_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Testing_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/any_op_ch.cpp:42


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMH_TestingExceptionHolder *); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMH_TestingExceptionHolder **); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMH_TestingExceptionHolder *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMH_TestingResponseHandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMH_TestingResponseHandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMH_TestingResponseHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMI_TestingHandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMI_TestingHandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMI_TestingHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/cdr_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Keywords &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Keywords &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/cdr_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Object &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Object &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_sequence/cdr_op_ch.cpp:64



#if !defined _TAO_CDR_OP_ObjectSeq_H_
#define _TAO_CDR_OP_ObjectSeq_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const ObjectSeq &_tao_sequence);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    ObjectSeq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_ObjectSeq_H_ */
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/cdr_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Objects &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Objects &);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Testing_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Testing_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:452


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern TAO_IDL_TEST_STUB_Export void add_ref (AMH_TestingExceptionHolder *);
  extern TAO_IDL_TEST_STUB_Export void remove_ref (AMH_TestingExceptionHolder *);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/cdr_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const AMH_TestingExceptionHolder *);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, AMH_TestingExceptionHolder *&);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const AMI_TestingHandler_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, AMI_TestingHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:1648

#if defined (__ACE_INLINE__)
#include "keywordsC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

