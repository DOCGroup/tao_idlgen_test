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

#ifndef _TAO_IDL_SIMPLE2C_AHHDAN_H_
#define _TAO_IDL_SIMPLE2C_AHHDAN_H_

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
#include "tao/UserException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/String_Manager_T.h"
#include "tao/Messaging/Messaging.h"
#include "tao/Valuetype/Value_VarOut_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include "tao/AnyTypeCode/Any_Arg_Traits.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "simpleC.h"

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
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_SIMPLE3__VAR_OUT_CH_)
#define _SIMPLE3__VAR_OUT_CH_

class AMI_simple3Handler;
typedef AMI_simple3Handler *AMI_simple3Handler_ptr;

class simple3;
using simple3_ptr = simple3*;
using simple3_var = TAO_Objref_Var_T<simple3>;
using simple3_out = TAO_Objref_Out_T<simple3>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export simple3
  : public virtual ::simple2

{
public:
  friend class TAO::Narrow_Utils<simple3>;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = simple3_ptr;
  using _var_type = simple3_var;
  using _out_type = simple3_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static simple3_ptr _duplicate (simple3_ptr obj);

  static void _tao_release (simple3_ptr obj);

  static simple3_ptr _narrow (::CORBA::Object_ptr obj);
  static simple3_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static simple3_ptr _nil ();
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/exception_ch.cpp:40

  

  class TAO_IDL_TEST_STUB_Export OverFlow : public ::CORBA::UserException
  {
  public:
    ::CORBA::Long a;
    ::TAO::String_Manager msg;

    OverFlow ();
    OverFlow (const OverFlow &);
    ~OverFlow () = default;

    OverFlow &operator= (const OverFlow &);

    static void _tao_any_destructor (void *);

    static OverFlow *_downcast (::CORBA::Exception *);
    static const OverFlow *_downcast (::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc ();

    virtual ::CORBA::Exception *_tao_duplicate () const;

    virtual void _raise () const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/exception_ctor.cpp:50

    

    OverFlow (
        ::CORBA::Long _tao_a,
        const char * _tao_msg);

    virtual ::CORBA::TypeCode_ptr _tao_type () const;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  static ::CORBA::TypeCode_ptr const _tc_OverFlow;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/exception_ch.cpp:40

  

  class TAO_IDL_TEST_STUB_Export UnderFlow : public ::CORBA::UserException
  {
  public:
    ::CORBA::Long b;
    ::TAO::String_Manager msg;

    UnderFlow ();
    UnderFlow (const UnderFlow &);
    ~UnderFlow () = default;

    UnderFlow &operator= (const UnderFlow &);

    static void _tao_any_destructor (void *);

    static UnderFlow *_downcast (::CORBA::Exception *);
    static const UnderFlow *_downcast (::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc ();

    virtual ::CORBA::Exception *_tao_duplicate () const;

    virtual void _raise () const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/exception_ctor.cpp:50

    

    UnderFlow (
        ::CORBA::Long _tao_b,
        const char * _tao_msg);

    virtual ::CORBA::TypeCode_ptr _tao_type () const;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  static ::CORBA::TypeCode_ptr const _tc_UnderFlow;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/exception_ch.cpp:40

  

  class TAO_IDL_TEST_STUB_Export BadNum : public ::CORBA::UserException
  {
  public:
    vec10 c;

    BadNum ();
    BadNum (const BadNum &);
    ~BadNum () = default;

    BadNum &operator= (const BadNum &);

    static void _tao_any_destructor (void *);

    static BadNum *_downcast (::CORBA::Exception *);
    static const BadNum *_downcast (::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc ();

    virtual ::CORBA::Exception *_tao_duplicate () const;

    virtual void _raise () const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/exception_ctor.cpp:50

    

    BadNum (
        const vec10 & _tao_c);

    virtual ::CORBA::TypeCode_ptr _tao_type () const;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  static ::CORBA::TypeCode_ptr const _tc_BadNum;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/exception_ch.cpp:40

  

  class TAO_IDL_TEST_STUB_Export UserError : public ::CORBA::UserException
  {
  public:
    ::CORBA::Any reason;

    UserError ();
    UserError (const UserError &);
    ~UserError () = default;

    UserError &operator= (const UserError &);

    static void _tao_any_destructor (void *);

    static UserError *_downcast (::CORBA::Exception *);
    static const UserError *_downcast (::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc ();

    virtual ::CORBA::Exception *_tao_duplicate () const;

    virtual void _raise () const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/exception_ctor.cpp:50

    

    UserError (
        const ::CORBA::Any & _tao_reason);

    virtual ::CORBA::TypeCode_ptr _tao_type () const;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  static ::CORBA::TypeCode_ptr const _tc_UserError;

  virtual ::CORBA::Long op3 (
    ::CORBA::Long a,
    ::simple3_out b,
    ::simple2_out c,
    ::simple_out d);

  virtual ::CORBA::Any * op4 (
    const ::CORBA::Any & x,
    ::CORBA::Any & y,
    ::CORBA::Any_out z);

  virtual void sendc_op3 (
    ::AMI_simple3Handler_ptr ami_handler,
    ::CORBA::Long a);

  virtual void sendc_op4 (
    ::AMI_simple3Handler_ptr ami_handler,
    const ::CORBA::Any & x,
    const ::CORBA::Any & y);

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

  

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id () const;
  static const char* _desc_repository_id ();
  static const char* _desc_interface_name ();
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  simple3 ();

  // Concrete non-local interface only.
  simple3 (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  simple3 (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = nullptr,
      TAO_ORB_Core *orb_core = nullptr);

  virtual ~simple3 () = default;

private:
  // Private and unimplemented for concrete interfaces.
  simple3 (const simple3 &) = delete;
  simple3 (simple3 &&) = delete;
  simple3 &operator= (const simple3 &) = delete;
  simple3 &operator= (simple3 &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_simple3;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:563



#if !defined (_AMH_SIMPLE3EXCEPTIONHOLDER__VAR_OUT_CH_)
#define _AMH_SIMPLE3EXCEPTIONHOLDER__VAR_OUT_CH_

class AMH_simple3ExceptionHolder;
using AMH_simple3ExceptionHolder_var = TAO_Value_Var_T<AMH_simple3ExceptionHolder>;
using AMH_simple3ExceptionHolder_out = TAO_Value_Out_T<AMH_simple3ExceptionHolder>;

#endif /* end #if !defined */
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:49



class TAO_IDL_TEST_STUB_Export AMH_simple3ExceptionHolder
  : public virtual ::CORBA::DefaultValueRefCountBase
{
public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMH_simple3ExceptionHolder*;
  using _var_type = AMH_simple3ExceptionHolder_var;
  using _out_type = AMH_simple3ExceptionHolder_out;

  static void _tao_any_destructor (void *);

  AMH_simple3ExceptionHolder (::CORBA::Exception *ex)
    : exception (ex)
  {}

  virtual ~AMH_simple3ExceptionHolder ();
  virtual ::CORBA::ValueBase *_copy_value ();

  static AMH_simple3ExceptionHolder* _downcast (::CORBA::ValueBase *v);
  
  /// TAO extensions or internals
  static ::CORBA::Boolean _tao_unmarshal (
      TAO_InputCDR &strm,
      AMH_simple3ExceptionHolder *&new_object);
  
  virtual const char* _tao_obv_repository_id () const;

  virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &) const;

  static const char* _tao_obv_static_repository_id ();

  virtual ::CORBA::TypeCode_ptr _tao_type () const;

public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

  
public:
  virtual void raise_op3 ();

public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

  
public:
  virtual void raise_op4 ();

public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

  
public:
  virtual void raise_sendc_op3 ();

public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

  
public:
  virtual void raise_sendc_op4 ();
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:236



protected:
  AMH_simple3ExceptionHolder ();
  virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
  virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
  virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t) const;
  
private:
  AMH_simple3ExceptionHolder (const AMH_simple3ExceptionHolder &);
  void operator= (const AMH_simple3ExceptionHolder &);
  
  ::CORBA::Exception *exception;
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__AMH_simple3ExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__AMH_simple3ExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_simple3ExceptionHolder;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_AMH_SIMPLE3RESPONSEHANDLER__VAR_OUT_CH_)
#define _AMH_SIMPLE3RESPONSEHANDLER__VAR_OUT_CH_

class AMI_AMH_simple3ResponseHandlerHandler;
typedef AMI_AMH_simple3ResponseHandlerHandler *AMI_AMH_simple3ResponseHandlerHandler_ptr;

class AMH_simple3ResponseHandler;
using AMH_simple3ResponseHandler_ptr = AMH_simple3ResponseHandler*;
using AMH_simple3ResponseHandler_var = TAO_Objref_Var_T<AMH_simple3ResponseHandler>;
using AMH_simple3ResponseHandler_out = TAO_Objref_Out_T<AMH_simple3ResponseHandler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMH_simple3ResponseHandler
  : public virtual ::CORBA::Object
{
public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMH_simple3ResponseHandler_ptr;
  using _var_type = AMH_simple3ResponseHandler_var;
  using _out_type = AMH_simple3ResponseHandler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMH_simple3ResponseHandler_ptr _duplicate (AMH_simple3ResponseHandler_ptr obj);

  static void _tao_release (AMH_simple3ResponseHandler_ptr obj);

  static AMH_simple3ResponseHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMH_simple3ResponseHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMH_simple3ResponseHandler_ptr _nil ();

  virtual void op3 (
    ::CORBA::Long return_value,
    ::simple3_ptr b,
    ::simple2_ptr c,
    ::simple_ptr d) = 0;

  virtual void op3_excep (
    ::AMH_simple3ExceptionHolder * holder) = 0;

  virtual void op4 (
    const ::CORBA::Any & return_value,
    const ::CORBA::Any & y,
    const ::CORBA::Any & z) = 0;

  virtual void op4_excep (
    ::AMH_simple3ExceptionHolder * holder) = 0;

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

  

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id () const;
  static const char* _desc_repository_id ();
  static const char* _desc_interface_name ();
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Abstract or local interface only.
  AMH_simple3ResponseHandler ();

  

  virtual ~AMH_simple3ResponseHandler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMH_simple3ResponseHandler (const AMH_simple3ResponseHandler &) = delete;
  AMH_simple3ResponseHandler (AMH_simple3ResponseHandler &&) = delete;
  AMH_simple3ResponseHandler &operator= (const AMH_simple3ResponseHandler &) = delete;
  AMH_simple3ResponseHandler &operator= (AMH_simple3ResponseHandler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_simple3ResponseHandler;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_AMI_SIMPLE3HANDLER__VAR_OUT_CH_)
#define _AMI_SIMPLE3HANDLER__VAR_OUT_CH_

class AMI_simple3Handler;
using AMI_simple3Handler_ptr = AMI_simple3Handler*;
using AMI_simple3Handler_var = TAO_Objref_Var_T<AMI_simple3Handler>;
using AMI_simple3Handler_out = TAO_Objref_Out_T<AMI_simple3Handler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMI_simple3Handler
  : public virtual ::AMI_simple2Handler

{
public:
  friend class TAO::Narrow_Utils<AMI_simple3Handler>;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMI_simple3Handler_ptr;
  using _var_type = AMI_simple3Handler_var;
  using _out_type = AMI_simple3Handler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMI_simple3Handler_ptr _duplicate (AMI_simple3Handler_ptr obj);

  static void _tao_release (AMI_simple3Handler_ptr obj);

  static AMI_simple3Handler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMI_simple3Handler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMI_simple3Handler_ptr _nil ();

  virtual void op3 (
    ::CORBA::Long ami_return_val,
    ::simple3_ptr b,
    ::simple2_ptr c,
    ::simple_ptr d);

  static void
  op3_reply_stub (
    TAO_InputCDR &_tao_reply_cdr,
    ::Messaging::ReplyHandler_ptr _tao_reply_handler,
    ::CORBA::ULong reply_status);

  virtual void op3_excep (
    ::Messaging::ExceptionHolder * excep_holder);

  virtual void op4 (
    const ::CORBA::Any & ami_return_val,
    const ::CORBA::Any & y,
    const ::CORBA::Any & z);

  static void
  op4_reply_stub (
    TAO_InputCDR &_tao_reply_cdr,
    ::Messaging::ReplyHandler_ptr _tao_reply_handler,
    ::CORBA::ULong reply_status);

  virtual void op4_excep (
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
  AMI_simple3Handler ();

  // Concrete non-local interface only.
  AMI_simple3Handler (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  AMI_simple3Handler (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = nullptr,
      TAO_ORB_Core *orb_core = nullptr);

  virtual ~AMI_simple3Handler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMI_simple3Handler (const AMI_simple3Handler &) = delete;
  AMI_simple3Handler (AMI_simple3Handler &&) = delete;
  AMI_simple3Handler &operator= (const AMI_simple3Handler &) = delete;
  AMI_simple3Handler &operator= (AMI_simple3Handler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMI_simple3Handler;
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
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_SIMPLE3__ARG_TRAITS_)
#define _SIMPLE3__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::simple3>
    : public Object_Arg_Traits_T<
        ::simple3_ptr,
        ::simple3_var,
        ::simple3_out,
        TAO::Objref_Traits<simple3>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_AMH_SIMPLE3EXCEPTIONHOLDER__ARG_TRAITS_)
#define _AMH_SIMPLE3EXCEPTIONHOLDER__ARG_TRAITS_

  template<>
  class Arg_Traits< ::AMH_simple3ExceptionHolder>
    : public
        Object_Arg_Traits_T<
            ::AMH_simple3ExceptionHolder *,
            ::AMH_simple3ExceptionHolder_var,
            ::AMH_simple3ExceptionHolder_out,
            TAO::Value_Traits<AMH_simple3ExceptionHolder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_AMI_SIMPLE3HANDLER__ARG_TRAITS_)
#define _AMI_SIMPLE3HANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::AMI_simple3Handler>
    : public Object_Arg_Traits_T<
        ::AMI_simple3Handler_ptr,
        ::AMI_simple3Handler_var,
        ::AMI_simple3Handler_out,
        TAO::Objref_Traits<AMI_simple3Handler>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_obv_ch.cpp:43



// OBV_ class
class TAO_IDL_TEST_STUB_Export OBV_AMH_simple3ExceptionHolder
  : public virtual AMH_simple3ExceptionHolder
{

protected:
  OBV_AMH_simple3ExceptionHolder () = default;
  virtual ~OBV_AMH_simple3ExceptionHolder ();
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__AMH_simple3ExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__AMH_simple3ExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);

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

#if !defined (_SIMPLE3__TRAITS_)
#define _SIMPLE3__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::simple3>
  {
    static ::simple3_ptr duplicate (::simple3_ptr p);
    static void release (::simple3_ptr p);
    static ::simple3_ptr nil ();
    static ::CORBA::Boolean marshal (const ::simple3_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_AMH_SIMPLE3EXCEPTIONHOLDER__TRAITS_)
#define _AMH_SIMPLE3EXCEPTIONHOLDER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Value_Traits<AMH_simple3ExceptionHolder>
  {
    static void add_ref (AMH_simple3ExceptionHolder *);
    static void remove_ref (AMH_simple3ExceptionHolder *);
    static void release (AMH_simple3ExceptionHolder *);
  };

#endif /* end #if !defined */

#if !defined (_AMH_SIMPLE3RESPONSEHANDLER__TRAITS_)
#define _AMH_SIMPLE3RESPONSEHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::AMH_simple3ResponseHandler>
  {
    static ::AMH_simple3ResponseHandler_ptr duplicate (::AMH_simple3ResponseHandler_ptr p);
    static void release (::AMH_simple3ResponseHandler_ptr p);
    static ::AMH_simple3ResponseHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::AMH_simple3ResponseHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_AMI_SIMPLE3HANDLER__TRAITS_)
#define _AMI_SIMPLE3HANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::AMI_simple3Handler>
  {
    static ::AMI_simple3Handler_ptr duplicate (::AMI_simple3Handler_ptr p);
    static void release (::AMI_simple3Handler_ptr p);
    static ::AMI_simple3Handler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::AMI_simple3Handler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, simple3_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, simple3_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, simple3_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/any_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const simple3::OverFlow &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, simple3::OverFlow*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const simple3::OverFlow *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/any_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const simple3::UnderFlow &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, simple3::UnderFlow*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const simple3::UnderFlow *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/any_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const simple3::BadNum &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, simple3::BadNum*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const simple3::BadNum *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/any_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const simple3::UserError &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, simple3::UserError*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const simple3::UserError *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/any_op_ch.cpp:42


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMH_simple3ExceptionHolder *); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMH_simple3ExceptionHolder **); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMH_simple3ExceptionHolder *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMH_simple3ResponseHandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMH_simple3ResponseHandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMH_simple3ResponseHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMI_simple3Handler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMI_simple3Handler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMI_simple3Handler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const simple3_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, simple3_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/cdr_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const simple3::OverFlow &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, simple3::OverFlow &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/cdr_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const simple3::UnderFlow &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, simple3::UnderFlow &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/cdr_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const simple3::BadNum &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, simple3::BadNum &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/cdr_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const simple3::UserError &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, simple3::UserError &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:452


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern TAO_IDL_TEST_STUB_Export void add_ref (AMH_simple3ExceptionHolder *);
  extern TAO_IDL_TEST_STUB_Export void remove_ref (AMH_simple3ExceptionHolder *);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/cdr_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const AMH_simple3ExceptionHolder *);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, AMH_simple3ExceptionHolder *&);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const AMI_simple3Handler_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, AMI_simple3Handler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:1648

#if defined (__ACE_INLINE__)
#include "simple2C.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

