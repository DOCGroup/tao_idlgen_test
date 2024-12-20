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

#ifndef _TAO_IDL_REOPEN_INCLUDE2C_LTV0PX_H_
#define _TAO_IDL_REOPEN_INCLUDE2C_LTV0PX_H_

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
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "reopen_include1C.h"

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
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:258

  

  struct pug;
  using pug_var = ::TAO_Fixed_Var_T<pug>;
  using pug_out = pug&;

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/structure_ch.cpp:47

  

  struct TAO_IDL_TEST_STUB_Export pug
  {
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    
    using _var_type = pug_var;
    using _out_type = pug_out;

    static void _tao_any_destructor (void *);
    
    ::CORBA::Short leash;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_pug;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module frag
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

namespace XX
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typedef/typedef_ch.cpp:366

  typedef ::CORBA::Long whah;
  typedef ::CORBA::Long_out whah_out;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_whah;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module XX
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

    

#if !defined (_A_B_X2__VAR_OUT_CH_)
#define _A_B_X2__VAR_OUT_CH_

    class AMI_X2Handler;
    typedef AMI_X2Handler *AMI_X2Handler_ptr;

    class X2;
    using X2_ptr = X2*;
    using X2_var = TAO_Objref_Var_T<X2>;
    using X2_out = TAO_Objref_Out_T<X2>;

#endif /* end #if !defined */

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

    

    class TAO_IDL_TEST_STUB_Export X2
      : public virtual ::CORBA::Object
    {
    public:
      friend class TAO::Narrow_Utils<X2>;
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

      using _ptr_type = X2_ptr;
      using _var_type = X2_var;
      using _out_type = X2_out;

      static void _tao_any_destructor (void *);

      // The static operations.
      static X2_ptr _duplicate (X2_ptr obj);

      static void _tao_release (X2_ptr obj);

      static X2_ptr _narrow (::CORBA::Object_ptr obj);
      static X2_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
      static X2_ptr _nil ();

      virtual char * getX2 ();

      virtual void sendc_getX2 (
        ::A::B::AMI_X2Handler_ptr ami_handler);

      
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

      

      virtual ::CORBA::Boolean _is_a (const char *type_id);
      virtual const char* _interface_repository_id () const;
      static const char* _desc_repository_id ();
      static const char* _desc_interface_name ();
      virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
    
    protected:
      // Concrete interface only.
      X2 ();

      // Concrete non-local interface only.
      X2 (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
      
      // Non-local interface only.
      X2 (
          TAO_Stub *objref,
          ::CORBA::Boolean _tao_collocated = false,
          TAO_Abstract_ServantBase *servant = nullptr,
          TAO_ORB_Core *orb_core = nullptr);

      virtual ~X2 () = default;
    
    private:
      // Private and unimplemented for concrete interfaces.
      X2 (const X2 &) = delete;
      X2 (X2 &&) = delete;
      X2 &operator= (const X2 &) = delete;
      X2 &operator= (X2 &&) = delete;
    };
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

    extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_X2;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:563

    

#if !defined (_A_B_AMH_X2EXCEPTIONHOLDER__VAR_OUT_CH_)
#define _A_B_AMH_X2EXCEPTIONHOLDER__VAR_OUT_CH_

    class AMH_X2ExceptionHolder;
    using AMH_X2ExceptionHolder_var = TAO_Value_Var_T<AMH_X2ExceptionHolder>;
    using AMH_X2ExceptionHolder_out = TAO_Value_Out_T<AMH_X2ExceptionHolder>;

#endif /* end #if !defined */
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:49

    

    class TAO_IDL_TEST_STUB_Export AMH_X2ExceptionHolder
      : public virtual ::CORBA::DefaultValueRefCountBase
    {
    public:
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

      using _ptr_type = AMH_X2ExceptionHolder*;
      using _var_type = AMH_X2ExceptionHolder_var;
      using _out_type = AMH_X2ExceptionHolder_out;

      static void _tao_any_destructor (void *);

      AMH_X2ExceptionHolder (::CORBA::Exception *ex)
        : exception (ex)
      {}

      virtual ~AMH_X2ExceptionHolder ();
      virtual ::CORBA::ValueBase *_copy_value ();

      static AMH_X2ExceptionHolder* _downcast (::CORBA::ValueBase *v);
      
      /// TAO extensions or internals
      static ::CORBA::Boolean _tao_unmarshal (
          TAO_InputCDR &strm,
          AMH_X2ExceptionHolder *&new_object);
      
      virtual const char* _tao_obv_repository_id () const;

      virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &) const;

      static const char* _tao_obv_static_repository_id ();

      virtual ::CORBA::TypeCode_ptr _tao_type () const;
    
    public:
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

      
    public:
      virtual void raise_getX2 ();
  
  public:
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

    
  public:
    virtual void raise_sendc_getX2 ();
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:236

  

protected:
  AMH_X2ExceptionHolder ();
  virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
  virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
  virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t) const;
  
private:
  AMH_X2ExceptionHolder (const AMH_X2ExceptionHolder &);
  void operator= (const AMH_X2ExceptionHolder &);
  
  ::CORBA::Exception *exception;
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__A_B_AMH_X2ExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__A_B_AMH_X2ExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_X2ExceptionHolder;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_A_B_AMH_X2RESPONSEHANDLER__VAR_OUT_CH_)
#define _A_B_AMH_X2RESPONSEHANDLER__VAR_OUT_CH_

class AMI_AMH_X2ResponseHandlerHandler;
typedef AMI_AMH_X2ResponseHandlerHandler *AMI_AMH_X2ResponseHandlerHandler_ptr;

class AMH_X2ResponseHandler;
using AMH_X2ResponseHandler_ptr = AMH_X2ResponseHandler*;
using AMH_X2ResponseHandler_var = TAO_Objref_Var_T<AMH_X2ResponseHandler>;
using AMH_X2ResponseHandler_out = TAO_Objref_Out_T<AMH_X2ResponseHandler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMH_X2ResponseHandler
  : public virtual ::CORBA::Object
{
public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMH_X2ResponseHandler_ptr;
  using _var_type = AMH_X2ResponseHandler_var;
  using _out_type = AMH_X2ResponseHandler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMH_X2ResponseHandler_ptr _duplicate (AMH_X2ResponseHandler_ptr obj);

  static void _tao_release (AMH_X2ResponseHandler_ptr obj);

  static AMH_X2ResponseHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMH_X2ResponseHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMH_X2ResponseHandler_ptr _nil ();

  virtual void getX2 (
    const char * return_value) = 0;

  virtual void getX2_excep (
    ::A::B::AMH_X2ExceptionHolder * holder) = 0;

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

  

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id () const;
  static const char* _desc_repository_id ();
  static const char* _desc_interface_name ();
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Abstract or local interface only.
  AMH_X2ResponseHandler ();

  

  virtual ~AMH_X2ResponseHandler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMH_X2ResponseHandler (const AMH_X2ResponseHandler &) = delete;
  AMH_X2ResponseHandler (AMH_X2ResponseHandler &&) = delete;
  AMH_X2ResponseHandler &operator= (const AMH_X2ResponseHandler &) = delete;
  AMH_X2ResponseHandler &operator= (AMH_X2ResponseHandler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_X2ResponseHandler;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_A_B_AMI_X2HANDLER__VAR_OUT_CH_)
#define _A_B_AMI_X2HANDLER__VAR_OUT_CH_

class AMI_X2Handler;
using AMI_X2Handler_ptr = AMI_X2Handler*;
using AMI_X2Handler_var = TAO_Objref_Var_T<AMI_X2Handler>;
using AMI_X2Handler_out = TAO_Objref_Out_T<AMI_X2Handler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMI_X2Handler
  : public virtual ::Messaging::ReplyHandler

{
public:
  friend class TAO::Narrow_Utils<AMI_X2Handler>;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMI_X2Handler_ptr;
  using _var_type = AMI_X2Handler_var;
  using _out_type = AMI_X2Handler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMI_X2Handler_ptr _duplicate (AMI_X2Handler_ptr obj);

  static void _tao_release (AMI_X2Handler_ptr obj);

  static AMI_X2Handler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMI_X2Handler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMI_X2Handler_ptr _nil ();

  virtual void getX2 (
    const char * ami_return_val);

  static void
  getX2_reply_stub (
    TAO_InputCDR &_tao_reply_cdr,
    ::Messaging::ReplyHandler_ptr _tao_reply_handler,
    ::CORBA::ULong reply_status);

  virtual void getX2_excep (
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
  AMI_X2Handler ();

  // Concrete non-local interface only.
  AMI_X2Handler (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  AMI_X2Handler (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = nullptr,
      TAO_ORB_Core *orb_core = nullptr);

  virtual ~AMI_X2Handler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMI_X2Handler (const AMI_X2Handler &) = delete;
  AMI_X2Handler (AMI_X2Handler &&) = delete;
  AMI_X2Handler &operator= (const AMI_X2Handler &) = delete;
  AMI_X2Handler &operator= (AMI_X2Handler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMI_X2Handler;


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
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class Arg_Traits< ::frag::pug>
    : public
        Fixed_Size_Arg_Traits_T<
            ::frag::pug,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_A_B_X2__ARG_TRAITS_)
#define _A_B_X2__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::A::B::X2>
    : public Object_Arg_Traits_T<
        ::A::B::X2_ptr,
        ::A::B::X2_var,
        ::A::B::X2_out,
        TAO::Objref_Traits<A::B::X2>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_A_B_AMH_X2EXCEPTIONHOLDER__ARG_TRAITS_)
#define _A_B_AMH_X2EXCEPTIONHOLDER__ARG_TRAITS_

  template<>
  class Arg_Traits< ::A::B::AMH_X2ExceptionHolder>
    : public
        Object_Arg_Traits_T<
            ::A::B::AMH_X2ExceptionHolder *,
            ::A::B::AMH_X2ExceptionHolder_var,
            ::A::B::AMH_X2ExceptionHolder_out,
            TAO::Value_Traits<A::B::AMH_X2ExceptionHolder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_A_B_AMI_X2HANDLER__ARG_TRAITS_)
#define _A_B_AMI_X2HANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::A::B::AMI_X2Handler>
    : public Object_Arg_Traits_T<
        ::A::B::AMI_X2Handler_ptr,
        ::A::B::AMI_X2Handler_var,
        ::A::B::AMI_X2Handler_out,
        TAO::Objref_Traits<A::B::AMI_X2Handler>,
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
    class TAO_IDL_TEST_STUB_Export AMH_X2ExceptionHolder
      : public virtual A::B::AMH_X2ExceptionHolder
    {
  
  protected:
    AMH_X2ExceptionHolder () = default;
    virtual ~AMH_X2ExceptionHolder ();
    
  protected:
    virtual ::CORBA::Boolean
    _tao_marshal__A_B_AMH_X2ExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

    virtual ::CORBA::Boolean
    _tao_unmarshal__A_B_AMH_X2ExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);

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

#if !defined (_A_B_X2__TRAITS_)
#define _A_B_X2__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::A::B::X2>
  {
    static ::A::B::X2_ptr duplicate (::A::B::X2_ptr p);
    static void release (::A::B::X2_ptr p);
    static ::A::B::X2_ptr nil ();
    static ::CORBA::Boolean marshal (const ::A::B::X2_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_A_B_AMH_X2EXCEPTIONHOLDER__TRAITS_)
#define _A_B_AMH_X2EXCEPTIONHOLDER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Value_Traits<A::B::AMH_X2ExceptionHolder>
  {
    static void add_ref (A::B::AMH_X2ExceptionHolder *);
    static void remove_ref (A::B::AMH_X2ExceptionHolder *);
    static void release (A::B::AMH_X2ExceptionHolder *);
  };

#endif /* end #if !defined */

#if !defined (_A_B_AMH_X2RESPONSEHANDLER__TRAITS_)
#define _A_B_AMH_X2RESPONSEHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::A::B::AMH_X2ResponseHandler>
  {
    static ::A::B::AMH_X2ResponseHandler_ptr duplicate (::A::B::AMH_X2ResponseHandler_ptr p);
    static void release (::A::B::AMH_X2ResponseHandler_ptr p);
    static ::A::B::AMH_X2ResponseHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::A::B::AMH_X2ResponseHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_A_B_AMI_X2HANDLER__TRAITS_)
#define _A_B_AMI_X2HANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::A::B::AMI_X2Handler>
  {
    static ::A::B::AMI_X2Handler_ptr duplicate (::A::B::AMI_X2Handler_ptr p);
    static void release (::A::B::AMI_X2Handler_ptr p);
    static ::A::B::AMI_X2Handler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::A::B::AMI_X2Handler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const ::frag::pug &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, ::frag::pug*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::frag::pug *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B::X2_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B::X2_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::B::X2_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/any_op_ch.cpp:42


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B::AMH_X2ExceptionHolder *); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B::AMH_X2ExceptionHolder **); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::B::AMH_X2ExceptionHolder *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B::AMH_X2ResponseHandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B::AMH_X2ResponseHandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::B::AMH_X2ResponseHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B::AMI_X2Handler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B::AMI_X2Handler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::B::AMI_X2Handler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/cdr_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const frag::pug &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, frag::pug &);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::B::X2_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, A::B::X2_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:452


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern TAO_IDL_TEST_STUB_Export void add_ref (A::B::AMH_X2ExceptionHolder *);
  extern TAO_IDL_TEST_STUB_Export void remove_ref (A::B::AMH_X2ExceptionHolder *);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/cdr_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::B::AMH_X2ExceptionHolder *);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, A::B::AMH_X2ExceptionHolder *&);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::B::AMI_X2Handler_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, A::B::AMI_X2Handler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:1648

#if defined (__ACE_INLINE__)
#include "reopen_include2C.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

