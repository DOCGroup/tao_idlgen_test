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

#ifndef _TAO_IDL_AMI_TESTC_ARLYJR_H_
#define _TAO_IDL_AMI_TESTC_ARLYJR_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/Valuetype/ValueBase.h"
#include "tao/Valuetype/Valuetype_Adapter_Factory_Impl.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/UserException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
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

namespace A
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/exception_ch.cpp:40

  

  class  DidTheRightThing : public ::CORBA::UserException
  {
  public:
    ::CORBA::Long id;
    ::TAO::String_Manager whatDidTheRightThing;

    DidTheRightThing ();
    DidTheRightThing (const DidTheRightThing &);
    ~DidTheRightThing () = default;

    DidTheRightThing &operator= (const DidTheRightThing &);

    static void _tao_any_destructor (void *);

    static DidTheRightThing *_downcast (::CORBA::Exception *);
    static const DidTheRightThing *_downcast (::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc ();

    virtual ::CORBA::Exception *_tao_duplicate () const;

    virtual void _raise () const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/exception_ctor.cpp:50

    

    DidTheRightThing (
        ::CORBA::Long _tao_id,
        const char * _tao_whatDidTheRightThing);

    virtual ::CORBA::TypeCode_ptr _tao_type () const;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern  ::CORBA::TypeCode_ptr const _tc_DidTheRightThing;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742

  

#if !defined (_A_AMI_TEST__VAR_OUT_CH_)
#define _A_AMI_TEST__VAR_OUT_CH_

  class AMI_AMI_TestHandler;
  typedef AMI_AMI_TestHandler *AMI_AMI_TestHandler_ptr;

  class AMI_Test;
  using AMI_Test_ptr = AMI_Test*;
  using AMI_Test_var = TAO_Objref_Var_T<AMI_Test>;
  using AMI_Test_out = TAO_Objref_Out_T<AMI_Test>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

  

  class  AMI_Test
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<AMI_Test>;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = AMI_Test_ptr;
    using _var_type = AMI_Test_var;
    using _out_type = AMI_Test_out;

    static void _tao_any_destructor (void *);

    // The static operations.
    static AMI_Test_ptr _duplicate (AMI_Test_ptr obj);

    static void _tao_release (AMI_Test_ptr obj);

    static AMI_Test_ptr _narrow (::CORBA::Object_ptr obj);
    static AMI_Test_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static AMI_Test_ptr _nil ();

    virtual ::CORBA::Long foo (
      ::CORBA::Long_out out_l,
      ::CORBA::Long in_l,
      const char * in_str);

    virtual ::CORBA::Long yadda ();

    virtual void yadda (
      ::CORBA::Long yadda);

    virtual void shutdown ();

    virtual void inout_arg_test (
      char *& str);

    virtual void sendc_foo (
      ::A::AMI_AMI_TestHandler_ptr ami_handler,
      ::CORBA::Long in_l,
      const char * in_str);

    virtual void sendc_set_yadda (
      ::A::AMI_AMI_TestHandler_ptr ami_handler,
      ::CORBA::Long yadda);

    virtual void sendc_get_yadda (
      ::A::AMI_AMI_TestHandler_ptr ami_handler);

    virtual void sendc_inout_arg_test (
      ::A::AMI_AMI_TestHandler_ptr ami_handler,
      const char * str);

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    AMI_Test ();

    // Concrete non-local interface only.
    AMI_Test (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    AMI_Test (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = nullptr,
        TAO_ORB_Core *orb_core = nullptr);

    virtual ~AMI_Test () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    AMI_Test (const AMI_Test &) = delete;
    AMI_Test (AMI_Test &&) = delete;
    AMI_Test &operator= (const AMI_Test &) = delete;
    AMI_Test &operator= (AMI_Test &&) = delete;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern  ::CORBA::TypeCode_ptr const _tc_AMI_Test;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742

  

#if !defined (_A_AMI_AMI_TESTHANDLER__VAR_OUT_CH_)
#define _A_AMI_AMI_TESTHANDLER__VAR_OUT_CH_

  class AMI_AMI_TestHandler;
  using AMI_AMI_TestHandler_ptr = AMI_AMI_TestHandler*;
  using AMI_AMI_TestHandler_var = TAO_Objref_Var_T<AMI_AMI_TestHandler>;
  using AMI_AMI_TestHandler_out = TAO_Objref_Out_T<AMI_AMI_TestHandler>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

  

  class  AMI_AMI_TestHandler
    : public virtual ::Messaging::ReplyHandler
  
  {
  public:
    friend class TAO::Narrow_Utils<AMI_AMI_TestHandler>;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = AMI_AMI_TestHandler_ptr;
    using _var_type = AMI_AMI_TestHandler_var;
    using _out_type = AMI_AMI_TestHandler_out;

    static void _tao_any_destructor (void *);

    // The static operations.
    static AMI_AMI_TestHandler_ptr _duplicate (AMI_AMI_TestHandler_ptr obj);

    static void _tao_release (AMI_AMI_TestHandler_ptr obj);

    static AMI_AMI_TestHandler_ptr _narrow (::CORBA::Object_ptr obj);
    static AMI_AMI_TestHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static AMI_AMI_TestHandler_ptr _nil ();

    virtual void foo (
      ::CORBA::Long ami_return_val,
      ::CORBA::Long out_l);

    static void
    foo_reply_stub (
      TAO_InputCDR &_tao_reply_cdr,
      ::Messaging::ReplyHandler_ptr _tao_reply_handler,
      ::CORBA::ULong reply_status);

    virtual void foo_excep (
      ::Messaging::ExceptionHolder * excep_holder);

    virtual void get_yadda (
      ::CORBA::Long ami_return_val);

    static void
    get_yadda_reply_stub (
      TAO_InputCDR &_tao_reply_cdr,
      ::Messaging::ReplyHandler_ptr _tao_reply_handler,
      ::CORBA::ULong reply_status);

    virtual void get_yadda_excep (
      ::Messaging::ExceptionHolder * excep_holder);

    virtual void set_yadda ();

    static void
    set_yadda_reply_stub (
      TAO_InputCDR &_tao_reply_cdr,
      ::Messaging::ReplyHandler_ptr _tao_reply_handler,
      ::CORBA::ULong reply_status);

    virtual void set_yadda_excep (
      ::Messaging::ExceptionHolder * excep_holder);

    virtual void inout_arg_test (
      const char * str);

    static void
    inout_arg_test_reply_stub (
      TAO_InputCDR &_tao_reply_cdr,
      ::Messaging::ReplyHandler_ptr _tao_reply_handler,
      ::CORBA::ULong reply_status);

    virtual void inout_arg_test_excep (
      ::Messaging::ExceptionHolder * excep_holder);

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    AMI_AMI_TestHandler ();

    // Concrete non-local interface only.
    AMI_AMI_TestHandler (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    AMI_AMI_TestHandler (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = nullptr,
        TAO_ORB_Core *orb_core = nullptr);

    virtual ~AMI_AMI_TestHandler () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    AMI_AMI_TestHandler (const AMI_AMI_TestHandler &) = delete;
    AMI_AMI_TestHandler (AMI_AMI_TestHandler &&) = delete;
    AMI_AMI_TestHandler &operator= (const AMI_AMI_TestHandler &) = delete;
    AMI_AMI_TestHandler &operator= (AMI_AMI_TestHandler &&) = delete;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern  ::CORBA::TypeCode_ptr const _tc_AMI_AMI_TestHandler;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742

  

#if !defined (_A_TEST_CHILD__VAR_OUT_CH_)
#define _A_TEST_CHILD__VAR_OUT_CH_

  class AMI_Test_ChildHandler;
  typedef AMI_Test_ChildHandler *AMI_Test_ChildHandler_ptr;

  class Test_Child;
  using Test_Child_ptr = Test_Child*;
  using Test_Child_var = TAO_Objref_Var_T<Test_Child>;
  using Test_Child_out = TAO_Objref_Out_T<Test_Child>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

  

  class  Test_Child
    : public virtual ::A::AMI_Test
  
  {
  public:
    friend class TAO::Narrow_Utils<Test_Child>;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = Test_Child_ptr;
    using _var_type = Test_Child_var;
    using _out_type = Test_Child_out;

    static void _tao_any_destructor (void *);

    // The static operations.
    static Test_Child_ptr _duplicate (Test_Child_ptr obj);

    static void _tao_release (Test_Child_ptr obj);

    static Test_Child_ptr _narrow (::CORBA::Object_ptr obj);
    static Test_Child_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Test_Child_ptr _nil ();

    virtual void child_op ();

    virtual void sendc_child_op (
      ::A::AMI_Test_ChildHandler_ptr ami_handler);

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Test_Child ();

    // Concrete non-local interface only.
    Test_Child (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Test_Child (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = nullptr,
        TAO_ORB_Core *orb_core = nullptr);

    virtual ~Test_Child () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    Test_Child (const Test_Child &) = delete;
    Test_Child (Test_Child &&) = delete;
    Test_Child &operator= (const Test_Child &) = delete;
    Test_Child &operator= (Test_Child &&) = delete;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern  ::CORBA::TypeCode_ptr const _tc_Test_Child;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742

  

#if !defined (_A_AMI_TEST_CHILDHANDLER__VAR_OUT_CH_)
#define _A_AMI_TEST_CHILDHANDLER__VAR_OUT_CH_

  class AMI_Test_ChildHandler;
  using AMI_Test_ChildHandler_ptr = AMI_Test_ChildHandler*;
  using AMI_Test_ChildHandler_var = TAO_Objref_Var_T<AMI_Test_ChildHandler>;
  using AMI_Test_ChildHandler_out = TAO_Objref_Out_T<AMI_Test_ChildHandler>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

  

  class  AMI_Test_ChildHandler
    : public virtual ::A::AMI_AMI_TestHandler
  
  {
  public:
    friend class TAO::Narrow_Utils<AMI_Test_ChildHandler>;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = AMI_Test_ChildHandler_ptr;
    using _var_type = AMI_Test_ChildHandler_var;
    using _out_type = AMI_Test_ChildHandler_out;

    static void _tao_any_destructor (void *);

    // The static operations.
    static AMI_Test_ChildHandler_ptr _duplicate (AMI_Test_ChildHandler_ptr obj);

    static void _tao_release (AMI_Test_ChildHandler_ptr obj);

    static AMI_Test_ChildHandler_ptr _narrow (::CORBA::Object_ptr obj);
    static AMI_Test_ChildHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static AMI_Test_ChildHandler_ptr _nil ();

    virtual void child_op ();

    static void
    child_op_reply_stub (
      TAO_InputCDR &_tao_reply_cdr,
      ::Messaging::ReplyHandler_ptr _tao_reply_handler,
      ::CORBA::ULong reply_status);

    virtual void child_op_excep (
      ::Messaging::ExceptionHolder * excep_holder);

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    AMI_Test_ChildHandler ();

    // Concrete non-local interface only.
    AMI_Test_ChildHandler (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    AMI_Test_ChildHandler (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = nullptr,
        TAO_ORB_Core *orb_core = nullptr);

    virtual ~AMI_Test_ChildHandler () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    AMI_Test_ChildHandler (const AMI_Test_ChildHandler &) = delete;
    AMI_Test_ChildHandler (AMI_Test_ChildHandler &&) = delete;
    AMI_Test_ChildHandler &operator= (const AMI_Test_ChildHandler &) = delete;
    AMI_Test_ChildHandler &operator= (AMI_Test_ChildHandler &&) = delete;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern  ::CORBA::TypeCode_ptr const _tc_AMI_Test_ChildHandler;


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
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_A_AMI_TEST__ARG_TRAITS_)
#define _A_AMI_TEST__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::A::AMI_Test>
    : public Object_Arg_Traits_T<
        ::A::AMI_Test_ptr,
        ::A::AMI_Test_var,
        ::A::AMI_Test_out,
        TAO::Objref_Traits<A::AMI_Test>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_A_AMI_AMI_TESTHANDLER__ARG_TRAITS_)
#define _A_AMI_AMI_TESTHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::A::AMI_AMI_TestHandler>
    : public Object_Arg_Traits_T<
        ::A::AMI_AMI_TestHandler_ptr,
        ::A::AMI_AMI_TestHandler_var,
        ::A::AMI_AMI_TestHandler_out,
        TAO::Objref_Traits<A::AMI_AMI_TestHandler>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_A_TEST_CHILD__ARG_TRAITS_)
#define _A_TEST_CHILD__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::A::Test_Child>
    : public Object_Arg_Traits_T<
        ::A::Test_Child_ptr,
        ::A::Test_Child_var,
        ::A::Test_Child_out,
        TAO::Objref_Traits<A::Test_Child>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_A_AMI_TEST_CHILDHANDLER__ARG_TRAITS_)
#define _A_AMI_TEST_CHILDHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::A::AMI_Test_ChildHandler>
    : public Object_Arg_Traits_T<
        ::A::AMI_Test_ChildHandler_ptr,
        ::A::AMI_Test_ChildHandler_var,
        ::A::AMI_Test_ChildHandler_out,
        TAO::Objref_Traits<A::AMI_Test_ChildHandler>,
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
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_traits.cpp:58



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_A_AMI_TEST__TRAITS_)
#define _A_AMI_TEST__TRAITS_

  template<>
  struct  Objref_Traits< ::A::AMI_Test>
  {
    static ::A::AMI_Test_ptr duplicate (::A::AMI_Test_ptr p);
    static void release (::A::AMI_Test_ptr p);
    static ::A::AMI_Test_ptr nil ();
    static ::CORBA::Boolean marshal (const ::A::AMI_Test_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_A_AMI_AMI_TESTHANDLER__TRAITS_)
#define _A_AMI_AMI_TESTHANDLER__TRAITS_

  template<>
  struct  Objref_Traits< ::A::AMI_AMI_TestHandler>
  {
    static ::A::AMI_AMI_TestHandler_ptr duplicate (::A::AMI_AMI_TestHandler_ptr p);
    static void release (::A::AMI_AMI_TestHandler_ptr p);
    static ::A::AMI_AMI_TestHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::A::AMI_AMI_TestHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_A_TEST_CHILD__TRAITS_)
#define _A_TEST_CHILD__TRAITS_

  template<>
  struct  Objref_Traits< ::A::Test_Child>
  {
    static ::A::Test_Child_ptr duplicate (::A::Test_Child_ptr p);
    static void release (::A::Test_Child_ptr p);
    static ::A::Test_Child_ptr nil ();
    static ::CORBA::Boolean marshal (const ::A::Test_Child_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_A_AMI_TEST_CHILDHANDLER__TRAITS_)
#define _A_AMI_TEST_CHILDHANDLER__TRAITS_

  template<>
  struct  Objref_Traits< ::A::AMI_Test_ChildHandler>
  {
    static ::A::AMI_Test_ChildHandler_ptr duplicate (::A::AMI_Test_ChildHandler_ptr p);
    static void release (::A::AMI_Test_ChildHandler_ptr p);
    static ::A::AMI_Test_ChildHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::A::AMI_Test_ChildHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/any_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



 void operator<<= (::CORBA::Any &, const A::DidTheRightThing &); // copying version
 void operator<<= (::CORBA::Any &, A::DidTheRightThing*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const A::DidTheRightThing *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

 void operator<<= (::CORBA::Any &, A::AMI_Test_ptr); // copying
 void operator<<= (::CORBA::Any &, A::AMI_Test_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::AMI_Test_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

 void operator<<= (::CORBA::Any &, A::AMI_AMI_TestHandler_ptr); // copying
 void operator<<= (::CORBA::Any &, A::AMI_AMI_TestHandler_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::AMI_AMI_TestHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

 void operator<<= (::CORBA::Any &, A::Test_Child_ptr); // copying
 void operator<<= (::CORBA::Any &, A::Test_Child_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::Test_Child_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

 void operator<<= (::CORBA::Any &, A::AMI_Test_ChildHandler_ptr); // copying
 void operator<<= (::CORBA::Any &, A::AMI_Test_ChildHandler_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::AMI_Test_ChildHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/cdr_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::DidTheRightThing &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, A::DidTheRightThing &);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::AMI_Test_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, A::AMI_Test_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::AMI_AMI_TestHandler_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, A::AMI_AMI_TestHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::Test_Child_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, A::Test_Child_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::AMI_Test_ChildHandler_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, A::AMI_Test_ChildHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:1648

#if defined (__ACE_INLINE__)
#include "ami_testC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */
