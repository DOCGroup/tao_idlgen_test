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

#ifndef _TAO_IDL_BUG_2577_REGRESSIONC_6BSMTA_H_
#define _TAO_IDL_BUG_2577_REGRESSIONC_6BSMTA_H_

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



struct DateTime_T;
using DateTime_T_var = ::TAO_Fixed_Var_T<DateTime_T>;
using DateTime_T_out = DateTime_T&;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/structure_ch.cpp:47



struct TAO_IDL_TEST_STUB_Export DateTime_T
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  
  using _var_type = DateTime_T_var;
  using _out_type = DateTime_T_out;

  static void _tao_any_destructor (void *);
  
  ::CORBA::Short t;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_DateTime_T;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typedef/typedef_ch.cpp:550

typedef DateTime_T WhenLastUpdated_T;
typedef DateTime_T_var WhenLastUpdated_T_var;
typedef DateTime_T_out WhenLastUpdated_T_out;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_WhenLastUpdated_T;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:563



#if !defined (_DATA_T__VAR_OUT_CH_)
#define _DATA_T__VAR_OUT_CH_

class Data_T;
using Data_T_var = TAO_Value_Var_T<Data_T>;
using Data_T_out = TAO_Value_Out_T<Data_T>;

#endif /* end #if !defined */
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:49



class TAO_IDL_TEST_STUB_Export Data_T
  : public virtual ::CORBA::ValueBase
{
public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = Data_T*;
  using _var_type = Data_T_var;
  using _out_type = Data_T_out;

  static void _tao_any_destructor (void *);

  static Data_T* _downcast (::CORBA::ValueBase *v);
  
  /// TAO extensions or internals
  static ::CORBA::Boolean _tao_unmarshal (
      TAO_InputCDR &strm,
      Data_T *&new_object);
  
  virtual const char* _tao_obv_repository_id () const;

  virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &) const;

  static const char* _tao_obv_static_repository_id ();

  virtual ::CORBA::TypeCode_ptr _tao_type () const;

public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/field_ch.cpp:663

  virtual void whenLastUpdated (const WhenLastUpdated_T &) = 0;
  virtual const WhenLastUpdated_T &whenLastUpdated () const = 0;
  virtual WhenLastUpdated_T &whenLastUpdated () = 0;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:236

  

protected:
  Data_T ();
  virtual ~Data_T ();

  virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
  virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
  virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t) const;
  
private:
  Data_T (const Data_T &);
  void operator= (const Data_T &);
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__Data_T (TAO_OutputCDR &, TAO_ChunkInfo &) const = 0;

  virtual ::CORBA::Boolean
  _tao_unmarshal__Data_T (TAO_InputCDR &, TAO_ChunkInfo &) = 0;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_init_ch.cpp:56

class TAO_IDL_TEST_STUB_Export Data_T_init
  : public virtual ::CORBA::ValueFactoryBase
{
public:
  Data_T_init ();

  static Data_T_init* _downcast (::CORBA::ValueFactoryBase *);

  virtual ::CORBA::ValueBase *create_for_unmarshal ();

  // TAO-specific extensions
public:
  virtual const char* tao_repository_id ();

protected:
  virtual ~Data_T_init ();
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_Data_T;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_USER_T__VAR_OUT_CH_)
#define _USER_T__VAR_OUT_CH_

class AMI_User_THandler;
typedef AMI_User_THandler *AMI_User_THandler_ptr;

class User_T;
using User_T_ptr = User_T*;
using User_T_var = TAO_Objref_Var_T<User_T>;
using User_T_out = TAO_Objref_Out_T<User_T>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export User_T
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<User_T>;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = User_T_ptr;
  using _var_type = User_T_var;
  using _out_type = User_T_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static User_T_ptr _duplicate (User_T_ptr obj);

  static void _tao_release (User_T_ptr obj);

  static User_T_ptr _narrow (::CORBA::Object_ptr obj);
  static User_T_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static User_T_ptr _nil ();

  virtual ::DateTime_T getLoginTime ();

  virtual void sendc_getLoginTime (
    ::AMI_User_THandler_ptr ami_handler);

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

  

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id () const;
  static const char* _desc_repository_id ();
  static const char* _desc_interface_name ();
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  User_T ();

  // Concrete non-local interface only.
  User_T (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  User_T (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = nullptr,
      TAO_ORB_Core *orb_core = nullptr);

  virtual ~User_T () = default;

private:
  // Private and unimplemented for concrete interfaces.
  User_T (const User_T &) = delete;
  User_T (User_T &&) = delete;
  User_T &operator= (const User_T &) = delete;
  User_T &operator= (User_T &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_User_T;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:563



#if !defined (_AMH_USER_TEXCEPTIONHOLDER__VAR_OUT_CH_)
#define _AMH_USER_TEXCEPTIONHOLDER__VAR_OUT_CH_

class AMH_User_TExceptionHolder;
using AMH_User_TExceptionHolder_var = TAO_Value_Var_T<AMH_User_TExceptionHolder>;
using AMH_User_TExceptionHolder_out = TAO_Value_Out_T<AMH_User_TExceptionHolder>;

#endif /* end #if !defined */
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:49



class TAO_IDL_TEST_STUB_Export AMH_User_TExceptionHolder
  : public virtual ::CORBA::DefaultValueRefCountBase
{
public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMH_User_TExceptionHolder*;
  using _var_type = AMH_User_TExceptionHolder_var;
  using _out_type = AMH_User_TExceptionHolder_out;

  static void _tao_any_destructor (void *);

  AMH_User_TExceptionHolder (::CORBA::Exception *ex)
    : exception (ex)
  {}

  virtual ~AMH_User_TExceptionHolder ();
  virtual ::CORBA::ValueBase *_copy_value ();

  static AMH_User_TExceptionHolder* _downcast (::CORBA::ValueBase *v);
  
  /// TAO extensions or internals
  static ::CORBA::Boolean _tao_unmarshal (
      TAO_InputCDR &strm,
      AMH_User_TExceptionHolder *&new_object);
  
  virtual const char* _tao_obv_repository_id () const;

  virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &) const;

  static const char* _tao_obv_static_repository_id ();

  virtual ::CORBA::TypeCode_ptr _tao_type () const;

public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

  
public:
  virtual void raise_getLoginTime ();

public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

  
public:
  virtual void raise_sendc_getLoginTime ();
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:236



protected:
  AMH_User_TExceptionHolder ();
  virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
  virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
  virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t) const;
  
private:
  AMH_User_TExceptionHolder (const AMH_User_TExceptionHolder &);
  void operator= (const AMH_User_TExceptionHolder &);
  
  ::CORBA::Exception *exception;
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__AMH_User_TExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__AMH_User_TExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_User_TExceptionHolder;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_AMH_USER_TRESPONSEHANDLER__VAR_OUT_CH_)
#define _AMH_USER_TRESPONSEHANDLER__VAR_OUT_CH_

class AMI_AMH_User_TResponseHandlerHandler;
typedef AMI_AMH_User_TResponseHandlerHandler *AMI_AMH_User_TResponseHandlerHandler_ptr;

class AMH_User_TResponseHandler;
using AMH_User_TResponseHandler_ptr = AMH_User_TResponseHandler*;
using AMH_User_TResponseHandler_var = TAO_Objref_Var_T<AMH_User_TResponseHandler>;
using AMH_User_TResponseHandler_out = TAO_Objref_Out_T<AMH_User_TResponseHandler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMH_User_TResponseHandler
  : public virtual ::CORBA::Object
{
public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMH_User_TResponseHandler_ptr;
  using _var_type = AMH_User_TResponseHandler_var;
  using _out_type = AMH_User_TResponseHandler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMH_User_TResponseHandler_ptr _duplicate (AMH_User_TResponseHandler_ptr obj);

  static void _tao_release (AMH_User_TResponseHandler_ptr obj);

  static AMH_User_TResponseHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMH_User_TResponseHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMH_User_TResponseHandler_ptr _nil ();

  virtual void getLoginTime (
    const ::DateTime_T & return_value) = 0;

  virtual void getLoginTime_excep (
    ::AMH_User_TExceptionHolder * holder) = 0;

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

  

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id () const;
  static const char* _desc_repository_id ();
  static const char* _desc_interface_name ();
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Abstract or local interface only.
  AMH_User_TResponseHandler ();

  

  virtual ~AMH_User_TResponseHandler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMH_User_TResponseHandler (const AMH_User_TResponseHandler &) = delete;
  AMH_User_TResponseHandler (AMH_User_TResponseHandler &&) = delete;
  AMH_User_TResponseHandler &operator= (const AMH_User_TResponseHandler &) = delete;
  AMH_User_TResponseHandler &operator= (AMH_User_TResponseHandler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_User_TResponseHandler;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_AMI_USER_THANDLER__VAR_OUT_CH_)
#define _AMI_USER_THANDLER__VAR_OUT_CH_

class AMI_User_THandler;
using AMI_User_THandler_ptr = AMI_User_THandler*;
using AMI_User_THandler_var = TAO_Objref_Var_T<AMI_User_THandler>;
using AMI_User_THandler_out = TAO_Objref_Out_T<AMI_User_THandler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMI_User_THandler
  : public virtual ::Messaging::ReplyHandler

{
public:
  friend class TAO::Narrow_Utils<AMI_User_THandler>;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMI_User_THandler_ptr;
  using _var_type = AMI_User_THandler_var;
  using _out_type = AMI_User_THandler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMI_User_THandler_ptr _duplicate (AMI_User_THandler_ptr obj);

  static void _tao_release (AMI_User_THandler_ptr obj);

  static AMI_User_THandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMI_User_THandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMI_User_THandler_ptr _nil ();

  virtual void getLoginTime (
    const ::DateTime_T & ami_return_val);

  static void
  getLoginTime_reply_stub (
    TAO_InputCDR &_tao_reply_cdr,
    ::Messaging::ReplyHandler_ptr _tao_reply_handler,
    ::CORBA::ULong reply_status);

  virtual void getLoginTime_excep (
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
  AMI_User_THandler ();

  // Concrete non-local interface only.
  AMI_User_THandler (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  AMI_User_THandler (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = nullptr,
      TAO_ORB_Core *orb_core = nullptr);

  virtual ~AMI_User_THandler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMI_User_THandler (const AMI_User_THandler &) = delete;
  AMI_User_THandler (AMI_User_THandler &&) = delete;
  AMI_User_THandler &operator= (const AMI_User_THandler &) = delete;
  AMI_User_THandler &operator= (AMI_User_THandler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMI_User_THandler;
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
  class Arg_Traits< ::DateTime_T>
    : public
        Fixed_Size_Arg_Traits_T<
            ::DateTime_T,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_DATA_T__ARG_TRAITS_)
#define _DATA_T__ARG_TRAITS_

  template<>
  class Arg_Traits< ::Data_T>
    : public
        Object_Arg_Traits_T<
            ::Data_T *,
            ::Data_T_var,
            ::Data_T_out,
            TAO::Value_Traits<Data_T>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_USER_T__ARG_TRAITS_)
#define _USER_T__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::User_T>
    : public Object_Arg_Traits_T<
        ::User_T_ptr,
        ::User_T_var,
        ::User_T_out,
        TAO::Objref_Traits<User_T>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_AMH_USER_TEXCEPTIONHOLDER__ARG_TRAITS_)
#define _AMH_USER_TEXCEPTIONHOLDER__ARG_TRAITS_

  template<>
  class Arg_Traits< ::AMH_User_TExceptionHolder>
    : public
        Object_Arg_Traits_T<
            ::AMH_User_TExceptionHolder *,
            ::AMH_User_TExceptionHolder_var,
            ::AMH_User_TExceptionHolder_out,
            TAO::Value_Traits<AMH_User_TExceptionHolder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_AMI_USER_THANDLER__ARG_TRAITS_)
#define _AMI_USER_THANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::AMI_User_THandler>
    : public Object_Arg_Traits_T<
        ::AMI_User_THandler_ptr,
        ::AMI_User_THandler_var,
        ::AMI_User_THandler_out,
        TAO::Objref_Traits<AMI_User_THandler>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_obv_ch.cpp:43



// OBV_ class
class TAO_IDL_TEST_STUB_Export OBV_Data_T
  : public virtual Data_T,
    public virtual ::CORBA::DefaultValueRefCountBase
{

public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/field_ch.cpp:663

  virtual void whenLastUpdated (const WhenLastUpdated_T &);
  virtual const WhenLastUpdated_T &whenLastUpdated () const;
  virtual WhenLastUpdated_T &whenLastUpdated ();

public:
  OBV_Data_T () = default;
  OBV_Data_T (
      const ::WhenLastUpdated_T & _tao_init_whenLastUpdated
    );
  virtual ~OBV_Data_T ();

public:
  virtual ::CORBA::ValueBase *_copy_value ();
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__Data_T (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__Data_T (TAO_InputCDR &, TAO_ChunkInfo &);

  ::CORBA::Boolean _tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo &) const;
  ::CORBA::Boolean _tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo &);
  virtual void truncation_hook ();

private:
  WhenLastUpdated_T _pd_whenLastUpdated;
  CORBA::Boolean require_truncation_ {false};
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_obv_ch.cpp:43



// OBV_ class
class TAO_IDL_TEST_STUB_Export OBV_AMH_User_TExceptionHolder
  : public virtual AMH_User_TExceptionHolder
{

protected:
  OBV_AMH_User_TExceptionHolder () = default;
  virtual ~OBV_AMH_User_TExceptionHolder ();
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__AMH_User_TExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__AMH_User_TExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);

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

#if !defined (_DATA_T__TRAITS_)
#define _DATA_T__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Value_Traits<Data_T>
  {
    static void add_ref (Data_T *);
    static void remove_ref (Data_T *);
    static void release (Data_T *);
  };

#endif /* end #if !defined */

#if !defined (_USER_T__TRAITS_)
#define _USER_T__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::User_T>
  {
    static ::User_T_ptr duplicate (::User_T_ptr p);
    static void release (::User_T_ptr p);
    static ::User_T_ptr nil ();
    static ::CORBA::Boolean marshal (const ::User_T_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_AMH_USER_TEXCEPTIONHOLDER__TRAITS_)
#define _AMH_USER_TEXCEPTIONHOLDER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Value_Traits<AMH_User_TExceptionHolder>
  {
    static void add_ref (AMH_User_TExceptionHolder *);
    static void remove_ref (AMH_User_TExceptionHolder *);
    static void release (AMH_User_TExceptionHolder *);
  };

#endif /* end #if !defined */

#if !defined (_AMH_USER_TRESPONSEHANDLER__TRAITS_)
#define _AMH_USER_TRESPONSEHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::AMH_User_TResponseHandler>
  {
    static ::AMH_User_TResponseHandler_ptr duplicate (::AMH_User_TResponseHandler_ptr p);
    static void release (::AMH_User_TResponseHandler_ptr p);
    static ::AMH_User_TResponseHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::AMH_User_TResponseHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_AMI_USER_THANDLER__TRAITS_)
#define _AMI_USER_THANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::AMI_User_THandler>
  {
    static ::AMI_User_THandler_ptr duplicate (::AMI_User_THandler_ptr p);
    static void release (::AMI_User_THandler_ptr p);
    static ::AMI_User_THandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::AMI_User_THandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const ::DateTime_T &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, ::DateTime_T*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::DateTime_T *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/any_op_ch.cpp:42


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, Data_T *); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, Data_T **); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Data_T *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, User_T_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, User_T_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, User_T_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/any_op_ch.cpp:42


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMH_User_TExceptionHolder *); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMH_User_TExceptionHolder **); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMH_User_TExceptionHolder *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMH_User_TResponseHandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMH_User_TResponseHandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMH_User_TResponseHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMI_User_THandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMI_User_THandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMI_User_THandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/cdr_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const DateTime_T &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, DateTime_T &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:452


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern TAO_IDL_TEST_STUB_Export void add_ref (Data_T *);
  extern TAO_IDL_TEST_STUB_Export void remove_ref (Data_T *);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/cdr_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Data_T *);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Data_T *&);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const User_T_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, User_T_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:452


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern TAO_IDL_TEST_STUB_Export void add_ref (AMH_User_TExceptionHolder *);
  extern TAO_IDL_TEST_STUB_Export void remove_ref (AMH_User_TExceptionHolder *);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/cdr_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const AMH_User_TExceptionHolder *);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, AMH_User_TExceptionHolder *&);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const AMI_User_THandler_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, AMI_User_THandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:1648

#if defined (__ACE_INLINE__)
#include "Bug_2577_RegressionC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

