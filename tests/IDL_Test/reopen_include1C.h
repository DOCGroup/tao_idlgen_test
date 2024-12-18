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

#ifndef _TAO_IDL_REOPEN_INCLUDE1C_FBFACW_H_
#define _TAO_IDL_REOPEN_INCLUDE1C_FBFACW_H_

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
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

namespace frag
{

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_sequence/sequence_ch.cpp:98

  

#if !defined (_FRAG_DUB_SEQ_CH_)
#define _FRAG_DUB_SEQ_CH_

  class dub_seq;
  typedef ::TAO_FixedSeq_Var_T<dub_seq> dub_seq_var;
  typedef ::TAO_Seq_Out_T<dub_seq> dub_seq_out;
  

  class TAO_IDL_TEST_STUB_Export dub_seq
    : public
        ::TAO::unbounded_value_sequence< ::CORBA::Double>
  {
  public:
    dub_seq () = default;
    dub_seq (::CORBA::ULong max);
    dub_seq (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Double* buffer,
      ::CORBA::Boolean release = false);
    dub_seq (const dub_seq &) = default;
    dub_seq (dub_seq &&) = default;
    dub_seq& operator= (const dub_seq &) = default;
    dub_seq& operator= (dub_seq &&) = default;
    virtual ~dub_seq () = default;
    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    
    using _var_type = dub_seq_var;
    using _out_type = dub_seq_out;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_dub_seq;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module frag
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

namespace A
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

  namespace B
  {
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742

    

#if !defined (_A_B_X1__VAR_OUT_CH_)
#define _A_B_X1__VAR_OUT_CH_

    class AMI_X1Handler;
    typedef AMI_X1Handler *AMI_X1Handler_ptr;

    class X1;
    using X1_ptr = X1*;
    using X1_var = TAO_Objref_Var_T<X1>;
    using X1_out = TAO_Objref_Out_T<X1>;

#endif /* end #if !defined */

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

    

    class TAO_IDL_TEST_STUB_Export X1
      : public virtual ::CORBA::Object
    {
    public:
      friend class TAO::Narrow_Utils<X1>;
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

      using _ptr_type = X1_ptr;
      using _var_type = X1_var;
      using _out_type = X1_out;

      static void _tao_any_destructor (void *);

      // The static operations.
      static X1_ptr _duplicate (X1_ptr obj);

      static void _tao_release (X1_ptr obj);

      static X1_ptr _narrow (::CORBA::Object_ptr obj);
      static X1_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
      static X1_ptr _nil ();

      virtual char * getX1 ();

      virtual void sendc_getX1 (
        ::A::B::AMI_X1Handler_ptr ami_handler);

      
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

      

      virtual ::CORBA::Boolean _is_a (const char *type_id);
      virtual const char* _interface_repository_id () const;
      static const char* _desc_repository_id ();
      static const char* _desc_interface_name ();
      virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
    
    protected:
      // Concrete interface only.
      X1 ();

      // Concrete non-local interface only.
      X1 (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
      
      // Non-local interface only.
      X1 (
          TAO_Stub *objref,
          ::CORBA::Boolean _tao_collocated = false,
          TAO_Abstract_ServantBase *servant = nullptr,
          TAO_ORB_Core *orb_core = nullptr);

      virtual ~X1 () = default;
    
    private:
      // Private and unimplemented for concrete interfaces.
      X1 (const X1 &) = delete;
      X1 (X1 &&) = delete;
      X1 &operator= (const X1 &) = delete;
      X1 &operator= (X1 &&) = delete;
    };
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

    extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_X1;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:563

    

#if !defined (_A_B_AMH_X1EXCEPTIONHOLDER__VAR_OUT_CH_)
#define _A_B_AMH_X1EXCEPTIONHOLDER__VAR_OUT_CH_

    class AMH_X1ExceptionHolder;
    using AMH_X1ExceptionHolder_var = TAO_Value_Var_T<AMH_X1ExceptionHolder>;
    using AMH_X1ExceptionHolder_out = TAO_Value_Out_T<AMH_X1ExceptionHolder>;

#endif /* end #if !defined */
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:49

    

    class TAO_IDL_TEST_STUB_Export AMH_X1ExceptionHolder
      : public virtual ::CORBA::DefaultValueRefCountBase
    {
    public:
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

      using _ptr_type = AMH_X1ExceptionHolder*;
      using _var_type = AMH_X1ExceptionHolder_var;
      using _out_type = AMH_X1ExceptionHolder_out;

      static void _tao_any_destructor (void *);

      AMH_X1ExceptionHolder (::CORBA::Exception *ex)
        : exception (ex)
      {}

      virtual ~AMH_X1ExceptionHolder ();
      virtual ::CORBA::ValueBase *_copy_value ();

      static AMH_X1ExceptionHolder* _downcast (::CORBA::ValueBase *v);
      
      /// TAO extensions or internals
      static ::CORBA::Boolean _tao_unmarshal (
          TAO_InputCDR &strm,
          AMH_X1ExceptionHolder *&new_object);
      
      virtual const char* _tao_obv_repository_id () const;

      virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &) const;

      static const char* _tao_obv_static_repository_id ();

      virtual ::CORBA::TypeCode_ptr _tao_type () const;
    
    public:
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

      
    public:
      virtual void raise_getX1 ();
  
  public:
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

    
  public:
    virtual void raise_sendc_getX1 ();
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:236

  

protected:
  AMH_X1ExceptionHolder ();
  virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
  virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
  virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t) const;
  
private:
  AMH_X1ExceptionHolder (const AMH_X1ExceptionHolder &);
  void operator= (const AMH_X1ExceptionHolder &);
  
  ::CORBA::Exception *exception;
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__A_B_AMH_X1ExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__A_B_AMH_X1ExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_X1ExceptionHolder;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_A_B_AMH_X1RESPONSEHANDLER__VAR_OUT_CH_)
#define _A_B_AMH_X1RESPONSEHANDLER__VAR_OUT_CH_

class AMI_AMH_X1ResponseHandlerHandler;
typedef AMI_AMH_X1ResponseHandlerHandler *AMI_AMH_X1ResponseHandlerHandler_ptr;

class AMH_X1ResponseHandler;
using AMH_X1ResponseHandler_ptr = AMH_X1ResponseHandler*;
using AMH_X1ResponseHandler_var = TAO_Objref_Var_T<AMH_X1ResponseHandler>;
using AMH_X1ResponseHandler_out = TAO_Objref_Out_T<AMH_X1ResponseHandler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMH_X1ResponseHandler
  : public virtual ::CORBA::Object
{
public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMH_X1ResponseHandler_ptr;
  using _var_type = AMH_X1ResponseHandler_var;
  using _out_type = AMH_X1ResponseHandler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMH_X1ResponseHandler_ptr _duplicate (AMH_X1ResponseHandler_ptr obj);

  static void _tao_release (AMH_X1ResponseHandler_ptr obj);

  static AMH_X1ResponseHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMH_X1ResponseHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMH_X1ResponseHandler_ptr _nil ();

  virtual void getX1 (
    const char * return_value) = 0;

  virtual void getX1_excep (
    ::A::B::AMH_X1ExceptionHolder * holder) = 0;

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

  

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id () const;
  static const char* _desc_repository_id ();
  static const char* _desc_interface_name ();
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Abstract or local interface only.
  AMH_X1ResponseHandler ();

  

  virtual ~AMH_X1ResponseHandler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMH_X1ResponseHandler (const AMH_X1ResponseHandler &) = delete;
  AMH_X1ResponseHandler (AMH_X1ResponseHandler &&) = delete;
  AMH_X1ResponseHandler &operator= (const AMH_X1ResponseHandler &) = delete;
  AMH_X1ResponseHandler &operator= (AMH_X1ResponseHandler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_X1ResponseHandler;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_A_B_AMI_X1HANDLER__VAR_OUT_CH_)
#define _A_B_AMI_X1HANDLER__VAR_OUT_CH_

class AMI_X1Handler;
using AMI_X1Handler_ptr = AMI_X1Handler*;
using AMI_X1Handler_var = TAO_Objref_Var_T<AMI_X1Handler>;
using AMI_X1Handler_out = TAO_Objref_Out_T<AMI_X1Handler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMI_X1Handler
  : public virtual ::Messaging::ReplyHandler

{
public:
  friend class TAO::Narrow_Utils<AMI_X1Handler>;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMI_X1Handler_ptr;
  using _var_type = AMI_X1Handler_var;
  using _out_type = AMI_X1Handler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMI_X1Handler_ptr _duplicate (AMI_X1Handler_ptr obj);

  static void _tao_release (AMI_X1Handler_ptr obj);

  static AMI_X1Handler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMI_X1Handler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMI_X1Handler_ptr _nil ();

  virtual void getX1 (
    const char * ami_return_val);

  static void
  getX1_reply_stub (
    TAO_InputCDR &_tao_reply_cdr,
    ::Messaging::ReplyHandler_ptr _tao_reply_handler,
    ::CORBA::ULong reply_status);

  virtual void getX1_excep (
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
  AMI_X1Handler ();

  // Concrete non-local interface only.
  AMI_X1Handler (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  AMI_X1Handler (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = nullptr,
      TAO_ORB_Core *orb_core = nullptr);

  virtual ~AMI_X1Handler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMI_X1Handler (const AMI_X1Handler &) = delete;
  AMI_X1Handler (AMI_X1Handler &&) = delete;
  AMI_X1Handler &operator= (const AMI_X1Handler &) = delete;
  AMI_X1Handler &operator= (AMI_X1Handler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMI_X1Handler;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module A::B


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module A
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
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:671

  

  template<>
  class Arg_Traits< ::frag::dub_seq>
    : public
        Var_Size_Arg_Traits_T<
            ::frag::dub_seq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_A_B_X1__ARG_TRAITS_)
#define _A_B_X1__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::A::B::X1>
    : public Object_Arg_Traits_T<
        ::A::B::X1_ptr,
        ::A::B::X1_var,
        ::A::B::X1_out,
        TAO::Objref_Traits<A::B::X1>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_A_B_AMH_X1EXCEPTIONHOLDER__ARG_TRAITS_)
#define _A_B_AMH_X1EXCEPTIONHOLDER__ARG_TRAITS_

  template<>
  class Arg_Traits< ::A::B::AMH_X1ExceptionHolder>
    : public
        Object_Arg_Traits_T<
            ::A::B::AMH_X1ExceptionHolder *,
            ::A::B::AMH_X1ExceptionHolder_var,
            ::A::B::AMH_X1ExceptionHolder_out,
            TAO::Value_Traits<A::B::AMH_X1ExceptionHolder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_A_B_AMI_X1HANDLER__ARG_TRAITS_)
#define _A_B_AMI_X1HANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::A::B::AMI_X1Handler>
    : public Object_Arg_Traits_T<
        ::A::B::AMI_X1Handler_ptr,
        ::A::B::AMI_X1Handler_var,
        ::A::B::AMI_X1Handler_out,
        TAO::Objref_Traits<A::B::AMI_X1Handler>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/obv_module.cpp:43

namespace OBV_A
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/obv_module.cpp:43

  namespace B
  {
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_obv_ch.cpp:43

    

    // OBV_ class
    class TAO_IDL_TEST_STUB_Export AMH_X1ExceptionHolder
      : public virtual A::B::AMH_X1ExceptionHolder
    {
  
  protected:
    AMH_X1ExceptionHolder () = default;
    virtual ~AMH_X1ExceptionHolder ();
    
  protected:
    virtual ::CORBA::Boolean
    _tao_marshal__A_B_AMH_X1ExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

    virtual ::CORBA::Boolean
    _tao_unmarshal__A_B_AMH_X1ExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);

    ::CORBA::Boolean _tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo &) const;
    ::CORBA::Boolean _tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo &);
    virtual void truncation_hook ();
  
  private:
    CORBA::Boolean require_truncation_ {false};
  };
}
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_traits.cpp:58



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_A_B_X1__TRAITS_)
#define _A_B_X1__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::A::B::X1>
  {
    static ::A::B::X1_ptr duplicate (::A::B::X1_ptr p);
    static void release (::A::B::X1_ptr p);
    static ::A::B::X1_ptr nil ();
    static ::CORBA::Boolean marshal (const ::A::B::X1_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_A_B_AMH_X1EXCEPTIONHOLDER__TRAITS_)
#define _A_B_AMH_X1EXCEPTIONHOLDER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Value_Traits<A::B::AMH_X1ExceptionHolder>
  {
    static void add_ref (A::B::AMH_X1ExceptionHolder *);
    static void remove_ref (A::B::AMH_X1ExceptionHolder *);
    static void release (A::B::AMH_X1ExceptionHolder *);
  };

#endif /* end #if !defined */

#if !defined (_A_B_AMH_X1RESPONSEHANDLER__TRAITS_)
#define _A_B_AMH_X1RESPONSEHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::A::B::AMH_X1ResponseHandler>
  {
    static ::A::B::AMH_X1ResponseHandler_ptr duplicate (::A::B::AMH_X1ResponseHandler_ptr p);
    static void release (::A::B::AMH_X1ResponseHandler_ptr p);
    static ::A::B::AMH_X1ResponseHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::A::B::AMH_X1ResponseHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_A_B_AMI_X1HANDLER__TRAITS_)
#define _A_B_AMI_X1HANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::A::B::AMI_X1Handler>
  {
    static ::A::B::AMI_X1Handler_ptr duplicate (::A::B::AMI_X1Handler_ptr p);
    static void release (::A::B::AMI_X1Handler_ptr p);
    static ::A::B::AMI_X1Handler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::A::B::AMI_X1Handler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_sequence/any_op_ch.cpp:46




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const ::frag::dub_seq &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, ::frag::dub_seq*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::frag::dub_seq *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B::X1_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B::X1_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::B::X1_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/any_op_ch.cpp:42


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B::AMH_X1ExceptionHolder *); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B::AMH_X1ExceptionHolder **); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::B::AMH_X1ExceptionHolder *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B::AMH_X1ResponseHandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B::AMH_X1ResponseHandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::B::AMH_X1ResponseHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B::AMI_X1Handler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B::AMI_X1Handler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::B::AMI_X1Handler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_sequence/cdr_op_ch.cpp:64



#if !defined _TAO_CDR_OP_frag_dub_seq_H_
#define _TAO_CDR_OP_frag_dub_seq_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const frag::dub_seq &_tao_sequence);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    frag::dub_seq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_frag_dub_seq_H_ */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::B::X1_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, A::B::X1_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:452


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern TAO_IDL_TEST_STUB_Export void add_ref (A::B::AMH_X1ExceptionHolder *);
  extern TAO_IDL_TEST_STUB_Export void remove_ref (A::B::AMH_X1ExceptionHolder *);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/cdr_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::B::AMH_X1ExceptionHolder *);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, A::B::AMH_X1ExceptionHolder *&);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::B::AMI_X1Handler_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, A::B::AMI_X1Handler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:1648

#if defined (__ACE_INLINE__)
#include "reopen_include1C.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

