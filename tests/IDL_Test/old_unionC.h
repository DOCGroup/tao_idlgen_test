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

#ifndef _TAO_IDL_OLD_UNIONC_PHIPSF_H_
#define _TAO_IDL_OLD_UNIONC_PHIPSF_H_

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
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

namespace OldUnion
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:258

  

  struct Bar;
  using Bar_var = ::TAO_Fixed_Var_T<Bar>;
  using Bar_out = Bar&;

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/structure_ch.cpp:47

  

  struct TAO_IDL_TEST_STUB_Export Bar
  {
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    
    using _var_type = Bar_var;
    using _out_type = Bar_out;

    static void _tao_any_destructor (void *);
    
    ::CORBA::Long b1;
    ::CORBA::Char b2;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_Bar;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:258

  

  class Foo;
  using Foo_var = ::TAO_Fixed_Var_T<Foo>;
  using Foo_out = Foo&;

  class TAO_IDL_TEST_STUB_Export Foo
  {
  public:
    Foo ();
    Foo (const Foo &);
    ~Foo ();

    Foo &operator= (const Foo &);
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/discriminant_ch.cpp:98

    

    void _d ( ::CORBA::Long);
    ::CORBA::Long _d () const;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    
    using _var_type = Foo_var;
    using _out_type = Foo_out;

    static void _tao_any_destructor (void *);
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/public_ch.cpp:440

    

    void x ( ::CORBA::Long);
    ::CORBA::Long x () const;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/public_ch.cpp:643

    

    void y (const OldUnion::Bar &);
    const OldUnion::Bar &y () const;
    OldUnion::Bar &y ();
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/public_ch.cpp:440

    

    void z ( ::CORBA::Char);
    ::CORBA::Char z () const;
  private:
    ::CORBA::Long disc_;

    union
    {
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/private_ch.cpp:369

      
      ::CORBA::Long x_;
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/private_ch.cpp:508

      
      OldUnion::Bar y_;
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/private_ch.cpp:369

      
      ::CORBA::Char z_;
    } u_;

    /// TAO extension - frees any allocated storage.
    void _reset ();
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_Foo;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:258

  

  class Foo2;
  using Foo2_var = ::TAO_Fixed_Var_T<Foo2>;
  using Foo2_out = Foo2&;

  class TAO_IDL_TEST_STUB_Export Foo2
  {
  public:
    Foo2 ();
    Foo2 (const Foo2 &);
    ~Foo2 ();

    Foo2 &operator= (const Foo2 &);
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/discriminant_ch.cpp:98

    

    void _d ( ::CORBA::Char);
    ::CORBA::Char _d () const;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    
    using _var_type = Foo2_var;
    using _out_type = Foo2_out;

    static void _tao_any_destructor (void *);
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/public_ch.cpp:440

    

    void x ( ::CORBA::Long);
    ::CORBA::Long x () const;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/public_ch.cpp:735

    

    void y (const OldUnion::Foo &);
    const OldUnion::Foo &y () const;
    OldUnion::Foo &y ();
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/union_ch.cpp:120

    

    void _default ();
  private:
    ::CORBA::Char disc_;

    union
    {
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/private_ch.cpp:369

      
      ::CORBA::Long x_;
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/private_ch.cpp:587

      
      OldUnion::Foo *y_;
    } u_;

    /// TAO extension - frees any allocated storage.
    void _reset ();
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_Foo2;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742

  

#if !defined (_OLDUNION_A__VAR_OUT_CH_)
#define _OLDUNION_A__VAR_OUT_CH_

  class AMI_aHandler;
  typedef AMI_aHandler *AMI_aHandler_ptr;

  class a;
  using a_ptr = a*;
  using a_var = TAO_Objref_Var_T<a>;
  using a_out = TAO_Objref_Out_T<a>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

  

  class TAO_IDL_TEST_STUB_Export a
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<a>;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = a_ptr;
    using _var_type = a_var;
    using _out_type = a_out;

    static void _tao_any_destructor (void *);

    // The static operations.
    static a_ptr _duplicate (a_ptr obj);

    static void _tao_release (a_ptr obj);

    static a_ptr _narrow (::CORBA::Object_ptr obj);
    static a_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static a_ptr _nil ();
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:258

    

    struct astruct;
    using astruct_var = ::TAO_Fixed_Var_T<astruct>;
    using astruct_out = astruct&;

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/structure_ch.cpp:47

    

    struct TAO_IDL_TEST_STUB_Export astruct
    {
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

      
      using _var_type = astruct_var;
      using _out_type = astruct_out;

      static void _tao_any_destructor (void *);
      
      

      OldUnion::Foo2 a1;
      

      OldUnion::Foo a2;
      OldUnion::Bar a3;
    };
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

    static ::CORBA::TypeCode_ptr const _tc_astruct;

    virtual ::OldUnion::Foo2 opA (
      const ::OldUnion::a::astruct & b);

    virtual void sendc_opA (
      ::OldUnion::AMI_aHandler_ptr ami_handler,
      const ::OldUnion::a::astruct & b);

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    static const char* _desc_repository_id ();
    static const char* _desc_interface_name ();
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    a ();

    // Concrete non-local interface only.
    a (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    a (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = nullptr,
        TAO_ORB_Core *orb_core = nullptr);

    virtual ~a () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    a (const a &) = delete;
    a (a &&) = delete;
    a &operator= (const a &) = delete;
    a &operator= (a &&) = delete;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_a;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:563

  

#if !defined (_OLDUNION_AMH_AEXCEPTIONHOLDER__VAR_OUT_CH_)
#define _OLDUNION_AMH_AEXCEPTIONHOLDER__VAR_OUT_CH_

  class AMH_aExceptionHolder;
  using AMH_aExceptionHolder_var = TAO_Value_Var_T<AMH_aExceptionHolder>;
  using AMH_aExceptionHolder_out = TAO_Value_Out_T<AMH_aExceptionHolder>;

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:49

  

  class TAO_IDL_TEST_STUB_Export AMH_aExceptionHolder
    : public virtual ::CORBA::DefaultValueRefCountBase
  {
  public:
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = AMH_aExceptionHolder*;
    using _var_type = AMH_aExceptionHolder_var;
    using _out_type = AMH_aExceptionHolder_out;

    static void _tao_any_destructor (void *);

    AMH_aExceptionHolder (::CORBA::Exception *ex)
      : exception (ex)
    {}

    virtual ~AMH_aExceptionHolder ();
    virtual ::CORBA::ValueBase *_copy_value ();

    static AMH_aExceptionHolder* _downcast (::CORBA::ValueBase *v);
    
    /// TAO extensions or internals
    static ::CORBA::Boolean _tao_unmarshal (
        TAO_InputCDR &strm,
        AMH_aExceptionHolder *&new_object);
    
    virtual const char* _tao_obv_repository_id () const;

    virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &) const;

    static const char* _tao_obv_static_repository_id ();

    virtual ::CORBA::TypeCode_ptr _tao_type () const;
  
  public:
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

    
  public:
    virtual void raise_opA ();

public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:397

  
public:
  virtual void raise_sendc_opA ();
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:236



protected:
  AMH_aExceptionHolder ();
  virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
  virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
  virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t) const;
  
private:
  AMH_aExceptionHolder (const AMH_aExceptionHolder &);
  void operator= (const AMH_aExceptionHolder &);
  
  ::CORBA::Exception *exception;
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__OldUnion_AMH_aExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__OldUnion_AMH_aExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_aExceptionHolder;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_OLDUNION_AMH_ARESPONSEHANDLER__VAR_OUT_CH_)
#define _OLDUNION_AMH_ARESPONSEHANDLER__VAR_OUT_CH_

class AMI_AMH_aResponseHandlerHandler;
typedef AMI_AMH_aResponseHandlerHandler *AMI_AMH_aResponseHandlerHandler_ptr;

class AMH_aResponseHandler;
using AMH_aResponseHandler_ptr = AMH_aResponseHandler*;
using AMH_aResponseHandler_var = TAO_Objref_Var_T<AMH_aResponseHandler>;
using AMH_aResponseHandler_out = TAO_Objref_Out_T<AMH_aResponseHandler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMH_aResponseHandler
  : public virtual ::CORBA::Object
{
public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMH_aResponseHandler_ptr;
  using _var_type = AMH_aResponseHandler_var;
  using _out_type = AMH_aResponseHandler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMH_aResponseHandler_ptr _duplicate (AMH_aResponseHandler_ptr obj);

  static void _tao_release (AMH_aResponseHandler_ptr obj);

  static AMH_aResponseHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMH_aResponseHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMH_aResponseHandler_ptr _nil ();

  virtual void opA (
    const ::OldUnion::Foo2 & return_value) = 0;

  virtual void opA_excep (
    ::OldUnion::AMH_aExceptionHolder * holder) = 0;

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

  

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id () const;
  static const char* _desc_repository_id ();
  static const char* _desc_interface_name ();
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Abstract or local interface only.
  AMH_aResponseHandler ();

  

  virtual ~AMH_aResponseHandler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMH_aResponseHandler (const AMH_aResponseHandler &) = delete;
  AMH_aResponseHandler (AMH_aResponseHandler &&) = delete;
  AMH_aResponseHandler &operator= (const AMH_aResponseHandler &) = delete;
  AMH_aResponseHandler &operator= (AMH_aResponseHandler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_aResponseHandler;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_OLDUNION_AMI_AHANDLER__VAR_OUT_CH_)
#define _OLDUNION_AMI_AHANDLER__VAR_OUT_CH_

class AMI_aHandler;
using AMI_aHandler_ptr = AMI_aHandler*;
using AMI_aHandler_var = TAO_Objref_Var_T<AMI_aHandler>;
using AMI_aHandler_out = TAO_Objref_Out_T<AMI_aHandler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMI_aHandler
  : public virtual ::Messaging::ReplyHandler

{
public:
  friend class TAO::Narrow_Utils<AMI_aHandler>;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMI_aHandler_ptr;
  using _var_type = AMI_aHandler_var;
  using _out_type = AMI_aHandler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMI_aHandler_ptr _duplicate (AMI_aHandler_ptr obj);

  static void _tao_release (AMI_aHandler_ptr obj);

  static AMI_aHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMI_aHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMI_aHandler_ptr _nil ();

  virtual void opA (
    const ::OldUnion::Foo2 & ami_return_val);

  static void
  opA_reply_stub (
    TAO_InputCDR &_tao_reply_cdr,
    ::Messaging::ReplyHandler_ptr _tao_reply_handler,
    ::CORBA::ULong reply_status);

  virtual void opA_excep (
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
  AMI_aHandler ();

  // Concrete non-local interface only.
  AMI_aHandler (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  AMI_aHandler (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = nullptr,
      TAO_ORB_Core *orb_core = nullptr);

  virtual ~AMI_aHandler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMI_aHandler (const AMI_aHandler &) = delete;
  AMI_aHandler (AMI_aHandler &&) = delete;
  AMI_aHandler &operator= (const AMI_aHandler &) = delete;
  AMI_aHandler &operator= (AMI_aHandler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMI_aHandler;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module OldUnion
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
  class Arg_Traits< ::OldUnion::Bar>
    : public
        Fixed_Size_Arg_Traits_T<
            ::OldUnion::Bar,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class Arg_Traits< ::OldUnion::Foo>
    : public
        Fixed_Size_Arg_Traits_T<
            ::OldUnion::Foo,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class Arg_Traits< ::OldUnion::Foo2>
    : public
        Fixed_Size_Arg_Traits_T<
            ::OldUnion::Foo2,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_OLDUNION_A__ARG_TRAITS_)
#define _OLDUNION_A__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::OldUnion::a>
    : public Object_Arg_Traits_T<
        ::OldUnion::a_ptr,
        ::OldUnion::a_var,
        ::OldUnion::a_out,
        TAO::Objref_Traits<OldUnion::a>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class Arg_Traits< ::OldUnion::a::astruct>
    : public
        Fixed_Size_Arg_Traits_T<
            ::OldUnion::a::astruct,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_OLDUNION_AMH_AEXCEPTIONHOLDER__ARG_TRAITS_)
#define _OLDUNION_AMH_AEXCEPTIONHOLDER__ARG_TRAITS_

  template<>
  class Arg_Traits< ::OldUnion::AMH_aExceptionHolder>
    : public
        Object_Arg_Traits_T<
            ::OldUnion::AMH_aExceptionHolder *,
            ::OldUnion::AMH_aExceptionHolder_var,
            ::OldUnion::AMH_aExceptionHolder_out,
            TAO::Value_Traits<OldUnion::AMH_aExceptionHolder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_OLDUNION_AMI_AHANDLER__ARG_TRAITS_)
#define _OLDUNION_AMI_AHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::OldUnion::AMI_aHandler>
    : public Object_Arg_Traits_T<
        ::OldUnion::AMI_aHandler_ptr,
        ::OldUnion::AMI_aHandler_var,
        ::OldUnion::AMI_aHandler_out,
        TAO::Objref_Traits<OldUnion::AMI_aHandler>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/obv_module.cpp:43

namespace OBV_OldUnion
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_obv_ch.cpp:43

  

  // OBV_ class
  class TAO_IDL_TEST_STUB_Export AMH_aExceptionHolder
    : public virtual OldUnion::AMH_aExceptionHolder
  {

protected:
  AMH_aExceptionHolder () = default;
  virtual ~AMH_aExceptionHolder ();
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__OldUnion_AMH_aExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__OldUnion_AMH_aExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);

  ::CORBA::Boolean _tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo &) const;
  ::CORBA::Boolean _tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo &);
  virtual void truncation_hook ();

private:
  CORBA::Boolean require_truncation_ {false};
};
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_traits.cpp:58



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_OLDUNION_A__TRAITS_)
#define _OLDUNION_A__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::OldUnion::a>
  {
    static ::OldUnion::a_ptr duplicate (::OldUnion::a_ptr p);
    static void release (::OldUnion::a_ptr p);
    static ::OldUnion::a_ptr nil ();
    static ::CORBA::Boolean marshal (const ::OldUnion::a_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_OLDUNION_AMH_AEXCEPTIONHOLDER__TRAITS_)
#define _OLDUNION_AMH_AEXCEPTIONHOLDER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Value_Traits<OldUnion::AMH_aExceptionHolder>
  {
    static void add_ref (OldUnion::AMH_aExceptionHolder *);
    static void remove_ref (OldUnion::AMH_aExceptionHolder *);
    static void release (OldUnion::AMH_aExceptionHolder *);
  };

#endif /* end #if !defined */

#if !defined (_OLDUNION_AMH_ARESPONSEHANDLER__TRAITS_)
#define _OLDUNION_AMH_ARESPONSEHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::OldUnion::AMH_aResponseHandler>
  {
    static ::OldUnion::AMH_aResponseHandler_ptr duplicate (::OldUnion::AMH_aResponseHandler_ptr p);
    static void release (::OldUnion::AMH_aResponseHandler_ptr p);
    static ::OldUnion::AMH_aResponseHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::OldUnion::AMH_aResponseHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_OLDUNION_AMI_AHANDLER__TRAITS_)
#define _OLDUNION_AMI_AHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::OldUnion::AMI_aHandler>
  {
    static ::OldUnion::AMI_aHandler_ptr duplicate (::OldUnion::AMI_aHandler_ptr p);
    static void release (::OldUnion::AMI_aHandler_ptr p);
    static ::OldUnion::AMI_aHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::OldUnion::AMI_aHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const ::OldUnion::Bar &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, ::OldUnion::Bar*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::OldUnion::Bar *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/any_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const OldUnion::Foo &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldUnion::Foo*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const OldUnion::Foo *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/any_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const OldUnion::Foo2 &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldUnion::Foo2*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const OldUnion::Foo2 *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldUnion::a_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldUnion::a_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, OldUnion::a_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const ::OldUnion::a::astruct &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, ::OldUnion::a::astruct*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::OldUnion::a::astruct *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/any_op_ch.cpp:42


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldUnion::AMH_aExceptionHolder *); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldUnion::AMH_aExceptionHolder **); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, OldUnion::AMH_aExceptionHolder *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldUnion::AMH_aResponseHandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldUnion::AMH_aResponseHandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, OldUnion::AMH_aResponseHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldUnion::AMI_aHandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, OldUnion::AMI_aHandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, OldUnion::AMI_aHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/cdr_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OldUnion::Bar &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OldUnion::Bar &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/cdr_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OldUnion::Foo &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OldUnion::Foo &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/cdr_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OldUnion::Foo2 &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OldUnion::Foo2 &);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OldUnion::a_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OldUnion::a_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/cdr_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OldUnion::a::astruct &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OldUnion::a::astruct &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:452


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern TAO_IDL_TEST_STUB_Export void add_ref (OldUnion::AMH_aExceptionHolder *);
  extern TAO_IDL_TEST_STUB_Export void remove_ref (OldUnion::AMH_aExceptionHolder *);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/cdr_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OldUnion::AMH_aExceptionHolder *);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OldUnion::AMH_aExceptionHolder *&);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const OldUnion::AMI_aHandler_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, OldUnion::AMI_aHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:1648

#if defined (__ACE_INLINE__)
#include "old_unionC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

