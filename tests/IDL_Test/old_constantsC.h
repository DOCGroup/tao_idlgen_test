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

#ifndef _TAO_IDL_OLD_CONSTANTSC_BWAXPF_H_
#define _TAO_IDL_OLD_CONSTANTSC_BWAXPF_H_

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
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

namespace OldConstants
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34

  

  const CORBA::Short l = 4;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/enum_ch.cpp:39

  enum N
  {
    zero,
    un,
    deux,
    trois
  };

  typedef N &N_out;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_N;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/exception_ch.cpp:40

  

  class TAO_IDL_TEST_STUB_Export E : public ::CORBA::UserException
  {
  public:
    ::CORBA::Short cause;

    E ();
    E (const E &);
    ~E () = default;

    E &operator= (const E &);

    static void _tao_any_destructor (void *);

    static E *_downcast (::CORBA::Exception *);
    static const E *_downcast (::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc ();

    virtual ::CORBA::Exception *_tao_duplicate () const;

    virtual void _raise () const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/exception_ctor.cpp:50

    

    E (
        ::CORBA::Short _tao_cause);

    virtual ::CORBA::TypeCode_ptr _tao_type () const;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_E;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

  namespace M
  {
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34

    

    const CORBA::Short l = 4;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/enum_ch.cpp:39

    enum N
    {
      zero,
      un,
      deux,
      trois
    };

    typedef N &N_out;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

    extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_N;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/exception_ch.cpp:40

    

    class TAO_IDL_TEST_STUB_Export E : public ::CORBA::UserException
    {
    public:
      ::CORBA::Short cause;

      E ();
      E (const E &);
      ~E () = default;

      E &operator= (const E &);

      static void _tao_any_destructor (void *);

      static E *_downcast (::CORBA::Exception *);
      static const E *_downcast (::CORBA::Exception const *);

      static ::CORBA::Exception *_alloc ();

      virtual ::CORBA::Exception *_tao_duplicate () const;

      virtual void _raise () const;

      virtual void _tao_encode (TAO_OutputCDR &cdr) const;
      virtual void _tao_decode (TAO_InputCDR &cdr);
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/exception_ctor.cpp:50

      

      E (
          ::CORBA::Short _tao_cause);

      virtual ::CORBA::TypeCode_ptr _tao_type () const;
    };
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

    extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_E;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742

    

#if !defined (_OLDCONSTANTS_M_A__VAR_OUT_CH_)
#define _OLDCONSTANTS_M_A__VAR_OUT_CH_

    class AMI_AHandler;
    typedef AMI_AHandler *AMI_AHandler_ptr;

    class A;
    using A_ptr = A*;
    using A_var = TAO_Objref_Var_T<A>;
    using A_out = TAO_Objref_Out_T<A>;

#endif /* end #if !defined */

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

    

    class TAO_IDL_TEST_STUB_Export A
      : public virtual ::CORBA::Object
    {
    public:
      friend class TAO::Narrow_Utils<A>;
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

      using _ptr_type = A_ptr;
      using _var_type = A_var;
      using _out_type = A_out;

      static void _tao_any_destructor (void *);

      // The static operations.
      static A_ptr _duplicate (A_ptr obj);

      static void _tao_release (A_ptr obj);

      static A_ptr _narrow (::CORBA::Object_ptr obj);
      static A_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
      static A_ptr _nil ();
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34

      

      static const CORBA::Short l = 4;
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/enum_ch.cpp:39

      enum N
      {
        zero,
        un,
        deux,
        trois
      };

      typedef N &N_out;
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

      static ::CORBA::TypeCode_ptr const _tc_N;
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/exception_ch.cpp:40

      

      class TAO_IDL_TEST_STUB_Export E : public ::CORBA::UserException
      {
      public:
        ::CORBA::Short cause;

        E ();
        E (const E &);
        ~E () = default;

        E &operator= (const E &);

        static void _tao_any_destructor (void *);

        static E *_downcast (::CORBA::Exception *);
        static const E *_downcast (::CORBA::Exception const *);

        static ::CORBA::Exception *_alloc ();

        virtual ::CORBA::Exception *_tao_duplicate () const;

        virtual void _raise () const;

        virtual void _tao_encode (TAO_OutputCDR &cdr) const;
        virtual void _tao_decode (TAO_InputCDR &cdr);
        // TAO_IDL - Generated from
        // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/exception_ctor.cpp:50

        

        E (
            ::CORBA::Short _tao_cause);

        virtual ::CORBA::TypeCode_ptr _tao_type () const;
      };
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

      static ::CORBA::TypeCode_ptr const _tc_E;

      virtual ::OldConstants::M::A::N foo (
        ::OldConstants::M::A::N x,
        ::OldConstants::M::A::N_out y,
        ::OldConstants::M::A::N & z);

      virtual void sendc_foo (
        ::OldConstants::M::AMI_AHandler_ptr ami_handler,
        ::OldConstants::M::A::N x,
        ::OldConstants::M::A::N z);

      
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

      

      virtual ::CORBA::Boolean _is_a (const char *type_id);
      virtual const char* _interface_repository_id () const;
      static const char* _desc_repository_id ();
      static const char* _desc_interface_name ();
      virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
    
    protected:
      // Concrete interface only.
      A ();

      // Concrete non-local interface only.
      A (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
      
      // Non-local interface only.
      A (
          TAO_Stub *objref,
          ::CORBA::Boolean _tao_collocated = false,
          TAO_Abstract_ServantBase *servant = nullptr,
          TAO_ORB_Core *orb_core = nullptr);

      virtual ~A () = default;
    
    private:
      // Private and unimplemented for concrete interfaces.
      A (const A &) = delete;
      A (A &&) = delete;
      A &operator= (const A &) = delete;
      A &operator= (A &&) = delete;
    };
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

    extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_A;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:563

    

#if !defined (_OLDCONSTANTS_M_AMH_AEXCEPTIONHOLDER__VAR_OUT_CH_)
#define _OLDCONSTANTS_M_AMH_AEXCEPTIONHOLDER__VAR_OUT_CH_

    class AMH_AExceptionHolder;
    using AMH_AExceptionHolder_var = TAO_Value_Var_T<AMH_AExceptionHolder>;
    using AMH_AExceptionHolder_out = TAO_Value_Out_T<AMH_AExceptionHolder>;

#endif /* end #if !defined */
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:49

    

    class TAO_IDL_TEST_STUB_Export AMH_AExceptionHolder
      : public virtual ::CORBA::DefaultValueRefCountBase
    {
    public:
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

      using _ptr_type = AMH_AExceptionHolder*;
      using _var_type = AMH_AExceptionHolder_var;
      using _out_type = AMH_AExceptionHolder_out;

      static void _tao_any_destructor (void *);

      AMH_AExceptionHolder (::CORBA::Exception *ex)
        : exception (ex)
      {}

      virtual ~AMH_AExceptionHolder ();
      virtual ::CORBA::ValueBase *_copy_value ();

      static AMH_AExceptionHolder* _downcast (::CORBA::ValueBase *v);
      
      /// TAO extensions or internals
      static ::CORBA::Boolean _tao_unmarshal (
          TAO_InputCDR &strm,
          AMH_AExceptionHolder *&new_object);
      
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
    virtual void raise_sendc_foo ();
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:236

  

protected:
  AMH_AExceptionHolder ();
  virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
  virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
  virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t) const;
  
private:
  AMH_AExceptionHolder (const AMH_AExceptionHolder &);
  void operator= (const AMH_AExceptionHolder &);
  
  ::CORBA::Exception *exception;
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__OldConstants_M_AMH_AExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__OldConstants_M_AMH_AExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_AExceptionHolder;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_OLDCONSTANTS_M_AMH_ARESPONSEHANDLER__VAR_OUT_CH_)
#define _OLDCONSTANTS_M_AMH_ARESPONSEHANDLER__VAR_OUT_CH_

class AMI_AMH_AResponseHandlerHandler;
typedef AMI_AMH_AResponseHandlerHandler *AMI_AMH_AResponseHandlerHandler_ptr;

class AMH_AResponseHandler;
using AMH_AResponseHandler_ptr = AMH_AResponseHandler*;
using AMH_AResponseHandler_var = TAO_Objref_Var_T<AMH_AResponseHandler>;
using AMH_AResponseHandler_out = TAO_Objref_Out_T<AMH_AResponseHandler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMH_AResponseHandler
  : public virtual ::CORBA::Object
{
public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMH_AResponseHandler_ptr;
  using _var_type = AMH_AResponseHandler_var;
  using _out_type = AMH_AResponseHandler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMH_AResponseHandler_ptr _duplicate (AMH_AResponseHandler_ptr obj);

  static void _tao_release (AMH_AResponseHandler_ptr obj);

  static AMH_AResponseHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMH_AResponseHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMH_AResponseHandler_ptr _nil ();

  virtual void foo (
    ::OldConstants::M::A::N return_value,
    ::OldConstants::M::A::N y,
    ::OldConstants::M::A::N z) = 0;

  virtual void foo_excep (
    ::OldConstants::M::AMH_AExceptionHolder * holder) = 0;

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

  

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id () const;
  static const char* _desc_repository_id ();
  static const char* _desc_interface_name ();
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Abstract or local interface only.
  AMH_AResponseHandler ();

  

  virtual ~AMH_AResponseHandler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMH_AResponseHandler (const AMH_AResponseHandler &) = delete;
  AMH_AResponseHandler (AMH_AResponseHandler &&) = delete;
  AMH_AResponseHandler &operator= (const AMH_AResponseHandler &) = delete;
  AMH_AResponseHandler &operator= (AMH_AResponseHandler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_AResponseHandler;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_OLDCONSTANTS_M_AMI_AHANDLER__VAR_OUT_CH_)
#define _OLDCONSTANTS_M_AMI_AHANDLER__VAR_OUT_CH_

class AMI_AHandler;
using AMI_AHandler_ptr = AMI_AHandler*;
using AMI_AHandler_var = TAO_Objref_Var_T<AMI_AHandler>;
using AMI_AHandler_out = TAO_Objref_Out_T<AMI_AHandler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMI_AHandler
  : public virtual ::Messaging::ReplyHandler

{
public:
  friend class TAO::Narrow_Utils<AMI_AHandler>;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMI_AHandler_ptr;
  using _var_type = AMI_AHandler_var;
  using _out_type = AMI_AHandler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMI_AHandler_ptr _duplicate (AMI_AHandler_ptr obj);

  static void _tao_release (AMI_AHandler_ptr obj);

  static AMI_AHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMI_AHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMI_AHandler_ptr _nil ();

  virtual void foo (
    ::OldConstants::M::A::N ami_return_val,
    ::OldConstants::M::A::N y,
    ::OldConstants::M::A::N z);

  static void
  foo_reply_stub (
    TAO_InputCDR &_tao_reply_cdr,
    ::Messaging::ReplyHandler_ptr _tao_reply_handler,
    ::CORBA::ULong reply_status);

  virtual void foo_excep (
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
  AMI_AHandler ();

  // Concrete non-local interface only.
  AMI_AHandler (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  AMI_AHandler (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = nullptr,
      TAO_ORB_Core *orb_core = nullptr);

  virtual ~AMI_AHandler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMI_AHandler (const AMI_AHandler &) = delete;
  AMI_AHandler (AMI_AHandler &&) = delete;
  AMI_AHandler &operator= (const AMI_AHandler &) = delete;
  AMI_AHandler &operator= (AMI_AHandler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMI_AHandler;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module OldConstants::M


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module OldConstants
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
  class Arg_Traits< ::OldConstants::N>
    : public
        Basic_Arg_Traits_T<
            ::OldConstants::N,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class Arg_Traits< ::OldConstants::M::N>
    : public
        Basic_Arg_Traits_T<
            ::OldConstants::M::N,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_OLDCONSTANTS_M_A__ARG_TRAITS_)
#define _OLDCONSTANTS_M_A__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::OldConstants::M::A>
    : public Object_Arg_Traits_T<
        ::OldConstants::M::A_ptr,
        ::OldConstants::M::A_var,
        ::OldConstants::M::A_out,
        TAO::Objref_Traits<OldConstants::M::A>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class Arg_Traits< ::OldConstants::M::A::N>
    : public
        Basic_Arg_Traits_T<
            ::OldConstants::M::A::N,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_OLDCONSTANTS_M_AMH_AEXCEPTIONHOLDER__ARG_TRAITS_)
#define _OLDCONSTANTS_M_AMH_AEXCEPTIONHOLDER__ARG_TRAITS_

  template<>
  class Arg_Traits< ::OldConstants::M::AMH_AExceptionHolder>
    : public
        Object_Arg_Traits_T<
            ::OldConstants::M::AMH_AExceptionHolder *,
            ::OldConstants::M::AMH_AExceptionHolder_var,
            ::OldConstants::M::AMH_AExceptionHolder_out,
            TAO::Value_Traits<OldConstants::M::AMH_AExceptionHolder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_OLDCONSTANTS_M_AMI_AHANDLER__ARG_TRAITS_)
#define _OLDCONSTANTS_M_AMI_AHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::OldConstants::M::AMI_AHandler>
    : public Object_Arg_Traits_T<
        ::OldConstants::M::AMI_AHandler_ptr,
        ::OldConstants::M::AMI_AHandler_var,
        ::OldConstants::M::AMI_AHandler_out,
        TAO::Objref_Traits<OldConstants::M::AMI_AHandler>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/obv_module.cpp:43

namespace OBV_OldConstants
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/obv_module.cpp:43

  namespace M
  {
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_obv_ch.cpp:43

    

    // OBV_ class
    class TAO_IDL_TEST_STUB_Export AMH_AExceptionHolder
      : public virtual OldConstants::M::AMH_AExceptionHolder
    {
  
  protected:
    AMH_AExceptionHolder () = default;
    virtual ~AMH_AExceptionHolder ();
    
  protected:
    virtual ::CORBA::Boolean
    _tao_marshal__OldConstants_M_AMH_AExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

    virtual ::CORBA::Boolean
    _tao_unmarshal__OldConstants_M_AMH_AExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);

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

#if !defined (_OLDCONSTANTS_M_A__TRAITS_)
#define _OLDCONSTANTS_M_A__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::OldConstants::M::A>
  {
    static ::OldConstants::M::A_ptr duplicate (::OldConstants::M::A_ptr p);
    static void release (::OldConstants::M::A_ptr p);
    static ::OldConstants::M::A_ptr nil ();
    static ::CORBA::Boolean marshal (const ::OldConstants::M::A_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_OLDCONSTANTS_M_AMH_AEXCEPTIONHOLDER__TRAITS_)
#define _OLDCONSTANTS_M_AMH_AEXCEPTIONHOLDER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Value_Traits<OldConstants::M::AMH_AExceptionHolder>
  {
    static void add_ref (OldConstants::M::AMH_AExceptionHolder *);
    static void remove_ref (OldConstants::M::AMH_AExceptionHolder *);
    static void release (OldConstants::M::AMH_AExceptionHolder *);
  };

#endif /* end #if !defined */

#if !defined (_OLDCONSTANTS_M_AMH_ARESPONSEHANDLER__TRAITS_)
#define _OLDCONSTANTS_M_AMH_ARESPONSEHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::OldConstants::M::AMH_AResponseHandler>
  {
    static ::OldConstants::M::AMH_AResponseHandler_ptr duplicate (::OldConstants::M::AMH_AResponseHandler_ptr p);
    static void release (::OldConstants::M::AMH_AResponseHandler_ptr p);
    static ::OldConstants::M::AMH_AResponseHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::OldConstants::M::AMH_AResponseHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_OLDCONSTANTS_M_AMI_AHANDLER__TRAITS_)
#define _OLDCONSTANTS_M_AMI_AHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::OldConstants::M::AMI_AHandler>
  {
    static ::OldConstants::M::AMI_AHandler_ptr duplicate (::OldConstants::M::AMI_AHandler_ptr p);
    static void release (::OldConstants::M::AMI_AHandler_ptr p);
    static ::OldConstants::M::AMI_AHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::OldConstants::M::AMI_AHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/any_op_ch.cpp:31


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldConstants::N);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, OldConstants::N &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/any_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const OldConstants::E &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldConstants::E*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const OldConstants::E *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/any_op_ch.cpp:31


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldConstants::M::N);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, OldConstants::M::N &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/any_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const OldConstants::M::E &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldConstants::M::E*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const OldConstants::M::E *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldConstants::M::A_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldConstants::M::A_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, OldConstants::M::A_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/any_op_ch.cpp:31


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldConstants::M::A::N);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, OldConstants::M::A::N &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/any_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const OldConstants::M::A::E &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldConstants::M::A::E*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const OldConstants::M::A::E *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/any_op_ch.cpp:42


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldConstants::M::AMH_AExceptionHolder *); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldConstants::M::AMH_AExceptionHolder **); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, OldConstants::M::AMH_AExceptionHolder *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldConstants::M::AMH_AResponseHandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldConstants::M::AMH_AResponseHandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, OldConstants::M::AMH_AResponseHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldConstants::M::AMI_AHandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldConstants::M::AMI_AHandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, OldConstants::M::AMI_AHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/cdr_op_ch.cpp:33


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, OldConstants::N _tao_enumerator);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &strm, OldConstants::N &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/cdr_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OldConstants::E &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OldConstants::E &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/cdr_op_ch.cpp:33


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, OldConstants::M::N _tao_enumerator);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &strm, OldConstants::M::N &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/cdr_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OldConstants::M::E &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OldConstants::M::E &);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OldConstants::M::A_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OldConstants::M::A_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/cdr_op_ch.cpp:33


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, OldConstants::M::A::N _tao_enumerator);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &strm, OldConstants::M::A::N &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_exception/cdr_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OldConstants::M::A::E &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OldConstants::M::A::E &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:452


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern TAO_IDL_TEST_STUB_Export void add_ref (OldConstants::M::AMH_AExceptionHolder *);
  extern TAO_IDL_TEST_STUB_Export void remove_ref (OldConstants::M::AMH_AExceptionHolder *);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/cdr_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OldConstants::M::AMH_AExceptionHolder *);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OldConstants::M::AMH_AExceptionHolder *&);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OldConstants::M::AMI_AHandler_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OldConstants::M::AMI_AHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:1648

#if defined (__ACE_INLINE__)
#include "old_constantsC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

