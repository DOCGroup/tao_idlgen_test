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

#ifndef _TAO_IDL_TYPEPREFIXC_Z3JRYO_H_
#define _TAO_IDL_TYPEPREFIXC_Z3JRYO_H_

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

namespace A
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742

  

#if !defined (_A_B__VAR_OUT_CH_)
#define _A_B__VAR_OUT_CH_

  class AMI_BHandler;
  typedef AMI_BHandler *AMI_BHandler_ptr;

  class B;
  using B_ptr = B*;
  using B_var = TAO_Objref_Var_T<B>;
  using B_out = TAO_Objref_Out_T<B>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

  

  class TAO_IDL_TEST_STUB_Export B
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<B>;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = B_ptr;
    using _var_type = B_var;
    using _out_type = B_out;

    static void _tao_any_destructor (void *);

    // The static operations.
    static B_ptr _duplicate (B_ptr obj);

    static void _tao_release (B_ptr obj);

    static B_ptr _narrow (::CORBA::Object_ptr obj);
    static B_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static B_ptr _nil ();

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    static const char* _desc_repository_id ();
    static const char* _desc_interface_name ();
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    B ();

    // Concrete non-local interface only.
    B (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    B (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = nullptr,
        TAO_ORB_Core *orb_core = nullptr);

    virtual ~B () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    B (const B &) = delete;
    B (B &&) = delete;
    B &operator= (const B &) = delete;
    B &operator= (B &&) = delete;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_B;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:563

  

#if !defined (_A_AMH_BEXCEPTIONHOLDER__VAR_OUT_CH_)
#define _A_AMH_BEXCEPTIONHOLDER__VAR_OUT_CH_

  class AMH_BExceptionHolder;
  using AMH_BExceptionHolder_var = TAO_Value_Var_T<AMH_BExceptionHolder>;
  using AMH_BExceptionHolder_out = TAO_Value_Out_T<AMH_BExceptionHolder>;

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:49

  

  class TAO_IDL_TEST_STUB_Export AMH_BExceptionHolder
    : public virtual ::CORBA::DefaultValueRefCountBase
  {
  public:
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = AMH_BExceptionHolder*;
    using _var_type = AMH_BExceptionHolder_var;
    using _out_type = AMH_BExceptionHolder_out;

    static void _tao_any_destructor (void *);

    AMH_BExceptionHolder (::CORBA::Exception *ex)
      : exception (ex)
    {}

    virtual ~AMH_BExceptionHolder ();
    virtual ::CORBA::ValueBase *_copy_value ();

    static AMH_BExceptionHolder* _downcast (::CORBA::ValueBase *v);
    
    /// TAO extensions or internals
    static ::CORBA::Boolean _tao_unmarshal (
        TAO_InputCDR &strm,
        AMH_BExceptionHolder *&new_object);
    
    virtual const char* _tao_obv_repository_id () const;

    virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &) const;

    static const char* _tao_obv_static_repository_id ();

    virtual ::CORBA::TypeCode_ptr _tao_type () const;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:236

    
  
  protected:
    AMH_BExceptionHolder ();
    virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
    virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
    virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t) const;
    
  private:
    AMH_BExceptionHolder (const AMH_BExceptionHolder &);
    void operator= (const AMH_BExceptionHolder &);
    
    ::CORBA::Exception *exception;
    
  protected:
    virtual ::CORBA::Boolean
    _tao_marshal__A_AMH_BExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

    virtual ::CORBA::Boolean
    _tao_unmarshal__A_AMH_BExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_init_ch.cpp:56

  class TAO_IDL_TEST_STUB_Export AMH_BExceptionHolder_init
    : public virtual ::CORBA::ValueFactoryBase
  {
  public:
    AMH_BExceptionHolder_init ();

    static AMH_BExceptionHolder_init* _downcast (::CORBA::ValueFactoryBase *);

    virtual ::CORBA::ValueBase *create_for_unmarshal ();

    // TAO-specific extensions
  public:
    virtual const char* tao_repository_id ();
  
  protected:
    virtual ~AMH_BExceptionHolder_init ();
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_BExceptionHolder;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742

  

#if !defined (_A_AMH_BRESPONSEHANDLER__VAR_OUT_CH_)
#define _A_AMH_BRESPONSEHANDLER__VAR_OUT_CH_

  class AMI_AMH_BResponseHandlerHandler;
  typedef AMI_AMH_BResponseHandlerHandler *AMI_AMH_BResponseHandlerHandler_ptr;

  class AMH_BResponseHandler;
  using AMH_BResponseHandler_ptr = AMH_BResponseHandler*;
  using AMH_BResponseHandler_var = TAO_Objref_Var_T<AMH_BResponseHandler>;
  using AMH_BResponseHandler_out = TAO_Objref_Out_T<AMH_BResponseHandler>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

  

  class TAO_IDL_TEST_STUB_Export AMH_BResponseHandler
    : public virtual ::CORBA::Object
  {
  public:
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = AMH_BResponseHandler_ptr;
    using _var_type = AMH_BResponseHandler_var;
    using _out_type = AMH_BResponseHandler_out;

    static void _tao_any_destructor (void *);

    // The static operations.
    static AMH_BResponseHandler_ptr _duplicate (AMH_BResponseHandler_ptr obj);

    static void _tao_release (AMH_BResponseHandler_ptr obj);

    static AMH_BResponseHandler_ptr _narrow (::CORBA::Object_ptr obj);
    static AMH_BResponseHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static AMH_BResponseHandler_ptr _nil ();

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    static const char* _desc_repository_id ();
    static const char* _desc_interface_name ();
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    AMH_BResponseHandler ();

    

    virtual ~AMH_BResponseHandler () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    AMH_BResponseHandler (const AMH_BResponseHandler &) = delete;
    AMH_BResponseHandler (AMH_BResponseHandler &&) = delete;
    AMH_BResponseHandler &operator= (const AMH_BResponseHandler &) = delete;
    AMH_BResponseHandler &operator= (AMH_BResponseHandler &&) = delete;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_BResponseHandler;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742

  

#if !defined (_A_AMI_BHANDLER__VAR_OUT_CH_)
#define _A_AMI_BHANDLER__VAR_OUT_CH_

  class AMI_BHandler;
  using AMI_BHandler_ptr = AMI_BHandler*;
  using AMI_BHandler_var = TAO_Objref_Var_T<AMI_BHandler>;
  using AMI_BHandler_out = TAO_Objref_Out_T<AMI_BHandler>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

  

  class TAO_IDL_TEST_STUB_Export AMI_BHandler
    : public virtual ::Messaging::ReplyHandler
  
  {
  public:
    friend class TAO::Narrow_Utils<AMI_BHandler>;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = AMI_BHandler_ptr;
    using _var_type = AMI_BHandler_var;
    using _out_type = AMI_BHandler_out;

    static void _tao_any_destructor (void *);

    // The static operations.
    static AMI_BHandler_ptr _duplicate (AMI_BHandler_ptr obj);

    static void _tao_release (AMI_BHandler_ptr obj);

    static AMI_BHandler_ptr _narrow (::CORBA::Object_ptr obj);
    static AMI_BHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static AMI_BHandler_ptr _nil ();

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    static const char* _desc_repository_id ();
    static const char* _desc_interface_name ();
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    AMI_BHandler ();

    // Concrete non-local interface only.
    AMI_BHandler (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    AMI_BHandler (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = nullptr,
        TAO_ORB_Core *orb_core = nullptr);

    virtual ~AMI_BHandler () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    AMI_BHandler (const AMI_BHandler &) = delete;
    AMI_BHandler (AMI_BHandler &&) = delete;
    AMI_BHandler &operator= (const AMI_BHandler &) = delete;
    AMI_BHandler &operator= (AMI_BHandler &&) = delete;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMI_BHandler;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742

  

#if !defined (_A_C__VAR_OUT_CH_)
#define _A_C__VAR_OUT_CH_

  class AMI_CHandler;
  typedef AMI_CHandler *AMI_CHandler_ptr;

  class C;
  using C_ptr = C*;
  using C_var = TAO_Objref_Var_T<C>;
  using C_out = TAO_Objref_Out_T<C>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

  

  class TAO_IDL_TEST_STUB_Export C
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<C>;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = C_ptr;
    using _var_type = C_var;
    using _out_type = C_out;

    static void _tao_any_destructor (void *);

    // The static operations.
    static C_ptr _duplicate (C_ptr obj);

    static void _tao_release (C_ptr obj);

    static C_ptr _narrow (::CORBA::Object_ptr obj);
    static C_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static C_ptr _nil ();

    virtual void op (
      ::A::B_ptr a);

    virtual void sendc_op (
      ::A::AMI_CHandler_ptr ami_handler,
      ::A::B_ptr a);

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    static const char* _desc_repository_id ();
    static const char* _desc_interface_name ();
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    C ();

    // Concrete non-local interface only.
    C (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    C (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = nullptr,
        TAO_ORB_Core *orb_core = nullptr);

    virtual ~C () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    C (const C &) = delete;
    C (C &&) = delete;
    C &operator= (const C &) = delete;
    C &operator= (C &&) = delete;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_C;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:563

  

#if !defined (_A_AMH_CEXCEPTIONHOLDER__VAR_OUT_CH_)
#define _A_AMH_CEXCEPTIONHOLDER__VAR_OUT_CH_

  class AMH_CExceptionHolder;
  using AMH_CExceptionHolder_var = TAO_Value_Var_T<AMH_CExceptionHolder>;
  using AMH_CExceptionHolder_out = TAO_Value_Out_T<AMH_CExceptionHolder>;

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:49

  

  class TAO_IDL_TEST_STUB_Export AMH_CExceptionHolder
    : public virtual ::CORBA::DefaultValueRefCountBase
  {
  public:
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = AMH_CExceptionHolder*;
    using _var_type = AMH_CExceptionHolder_var;
    using _out_type = AMH_CExceptionHolder_out;

    static void _tao_any_destructor (void *);

    AMH_CExceptionHolder (::CORBA::Exception *ex)
      : exception (ex)
    {}

    virtual ~AMH_CExceptionHolder ();
    virtual ::CORBA::ValueBase *_copy_value ();

    static AMH_CExceptionHolder* _downcast (::CORBA::ValueBase *v);
    
    /// TAO extensions or internals
    static ::CORBA::Boolean _tao_unmarshal (
        TAO_InputCDR &strm,
        AMH_CExceptionHolder *&new_object);
    
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
  AMH_CExceptionHolder ();
  virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
  virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
  virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t) const;
  
private:
  AMH_CExceptionHolder (const AMH_CExceptionHolder &);
  void operator= (const AMH_CExceptionHolder &);
  
  ::CORBA::Exception *exception;
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__A_AMH_CExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__A_AMH_CExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_CExceptionHolder;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_A_AMH_CRESPONSEHANDLER__VAR_OUT_CH_)
#define _A_AMH_CRESPONSEHANDLER__VAR_OUT_CH_

class AMI_AMH_CResponseHandlerHandler;
typedef AMI_AMH_CResponseHandlerHandler *AMI_AMH_CResponseHandlerHandler_ptr;

class AMH_CResponseHandler;
using AMH_CResponseHandler_ptr = AMH_CResponseHandler*;
using AMH_CResponseHandler_var = TAO_Objref_Var_T<AMH_CResponseHandler>;
using AMH_CResponseHandler_out = TAO_Objref_Out_T<AMH_CResponseHandler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMH_CResponseHandler
  : public virtual ::CORBA::Object
{
public:
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMH_CResponseHandler_ptr;
  using _var_type = AMH_CResponseHandler_var;
  using _out_type = AMH_CResponseHandler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMH_CResponseHandler_ptr _duplicate (AMH_CResponseHandler_ptr obj);

  static void _tao_release (AMH_CResponseHandler_ptr obj);

  static AMH_CResponseHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMH_CResponseHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMH_CResponseHandler_ptr _nil ();

  virtual void op () = 0;

  virtual void op_excep (
    ::A::AMH_CExceptionHolder * holder) = 0;

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

  

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id () const;
  static const char* _desc_repository_id ();
  static const char* _desc_interface_name ();
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Abstract or local interface only.
  AMH_CResponseHandler ();

  

  virtual ~AMH_CResponseHandler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMH_CResponseHandler (const AMH_CResponseHandler &) = delete;
  AMH_CResponseHandler (AMH_CResponseHandler &&) = delete;
  AMH_CResponseHandler &operator= (const AMH_CResponseHandler &) = delete;
  AMH_CResponseHandler &operator= (AMH_CResponseHandler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_CResponseHandler;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742



#if !defined (_A_AMI_CHANDLER__VAR_OUT_CH_)
#define _A_AMI_CHANDLER__VAR_OUT_CH_

class AMI_CHandler;
using AMI_CHandler_ptr = AMI_CHandler*;
using AMI_CHandler_var = TAO_Objref_Var_T<AMI_CHandler>;
using AMI_CHandler_out = TAO_Objref_Out_T<AMI_CHandler>;

#endif /* end #if !defined */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39



class TAO_IDL_TEST_STUB_Export AMI_CHandler
  : public virtual ::Messaging::ReplyHandler

{
public:
  friend class TAO::Narrow_Utils<AMI_CHandler>;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

  using _ptr_type = AMI_CHandler_ptr;
  using _var_type = AMI_CHandler_var;
  using _out_type = AMI_CHandler_out;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMI_CHandler_ptr _duplicate (AMI_CHandler_ptr obj);

  static void _tao_release (AMI_CHandler_ptr obj);

  static AMI_CHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMI_CHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMI_CHandler_ptr _nil ();

  virtual void op ();

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
  AMI_CHandler ();

  // Concrete non-local interface only.
  AMI_CHandler (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  AMI_CHandler (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = nullptr,
      TAO_ORB_Core *orb_core = nullptr);

  virtual ~AMI_CHandler () = default;

private:
  // Private and unimplemented for concrete interfaces.
  AMI_CHandler (const AMI_CHandler &) = delete;
  AMI_CHandler (AMI_CHandler &&) = delete;
  AMI_CHandler &operator= (const AMI_CHandler &) = delete;
  AMI_CHandler &operator= (AMI_CHandler &&) = delete;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMI_CHandler;


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

  

#if !defined (_A_B__ARG_TRAITS_)
#define _A_B__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::A::B>
    : public Object_Arg_Traits_T<
        ::A::B_ptr,
        ::A::B_var,
        ::A::B_out,
        TAO::Objref_Traits<A::B>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_A_AMH_BEXCEPTIONHOLDER__ARG_TRAITS_)
#define _A_AMH_BEXCEPTIONHOLDER__ARG_TRAITS_

  template<>
  class Arg_Traits< ::A::AMH_BExceptionHolder>
    : public
        Object_Arg_Traits_T<
            ::A::AMH_BExceptionHolder *,
            ::A::AMH_BExceptionHolder_var,
            ::A::AMH_BExceptionHolder_out,
            TAO::Value_Traits<A::AMH_BExceptionHolder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_A_AMI_BHANDLER__ARG_TRAITS_)
#define _A_AMI_BHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::A::AMI_BHandler>
    : public Object_Arg_Traits_T<
        ::A::AMI_BHandler_ptr,
        ::A::AMI_BHandler_var,
        ::A::AMI_BHandler_out,
        TAO::Objref_Traits<A::AMI_BHandler>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_A_C__ARG_TRAITS_)
#define _A_C__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::A::C>
    : public Object_Arg_Traits_T<
        ::A::C_ptr,
        ::A::C_var,
        ::A::C_out,
        TAO::Objref_Traits<A::C>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_A_AMH_CEXCEPTIONHOLDER__ARG_TRAITS_)
#define _A_AMH_CEXCEPTIONHOLDER__ARG_TRAITS_

  template<>
  class Arg_Traits< ::A::AMH_CExceptionHolder>
    : public
        Object_Arg_Traits_T<
            ::A::AMH_CExceptionHolder *,
            ::A::AMH_CExceptionHolder_var,
            ::A::AMH_CExceptionHolder_out,
            TAO::Value_Traits<A::AMH_CExceptionHolder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_A_AMI_CHANDLER__ARG_TRAITS_)
#define _A_AMI_CHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::A::AMI_CHandler>
    : public Object_Arg_Traits_T<
        ::A::AMI_CHandler_ptr,
        ::A::AMI_CHandler_var,
        ::A::AMI_CHandler_out,
        TAO::Objref_Traits<A::AMI_CHandler>,
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
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_obv_ch.cpp:43

  

  // OBV_ class
  class TAO_IDL_TEST_STUB_Export AMH_BExceptionHolder
    : public virtual A::AMH_BExceptionHolder,
      public virtual ::CORBA::DefaultValueRefCountBase
  {

public:
  AMH_BExceptionHolder () = default;
  virtual ~AMH_BExceptionHolder ();

public:
  virtual ::CORBA::ValueBase *_copy_value ();
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__A_AMH_BExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__A_AMH_BExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);

  ::CORBA::Boolean _tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo &) const;
  ::CORBA::Boolean _tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo &);
  virtual void truncation_hook ();

private:
  CORBA::Boolean require_truncation_ {false};
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_obv_ch.cpp:43



// OBV_ class
class TAO_IDL_TEST_STUB_Export AMH_CExceptionHolder
  : public virtual A::AMH_CExceptionHolder
{

protected:
  AMH_CExceptionHolder () = default;
  virtual ~AMH_CExceptionHolder ();
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__A_AMH_CExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__A_AMH_CExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);

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

#if !defined (_A_B__TRAITS_)
#define _A_B__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::A::B>
  {
    static ::A::B_ptr duplicate (::A::B_ptr p);
    static void release (::A::B_ptr p);
    static ::A::B_ptr nil ();
    static ::CORBA::Boolean marshal (const ::A::B_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_A_AMH_BEXCEPTIONHOLDER__TRAITS_)
#define _A_AMH_BEXCEPTIONHOLDER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Value_Traits<A::AMH_BExceptionHolder>
  {
    static void add_ref (A::AMH_BExceptionHolder *);
    static void remove_ref (A::AMH_BExceptionHolder *);
    static void release (A::AMH_BExceptionHolder *);
  };

#endif /* end #if !defined */

#if !defined (_A_AMH_BRESPONSEHANDLER__TRAITS_)
#define _A_AMH_BRESPONSEHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::A::AMH_BResponseHandler>
  {
    static ::A::AMH_BResponseHandler_ptr duplicate (::A::AMH_BResponseHandler_ptr p);
    static void release (::A::AMH_BResponseHandler_ptr p);
    static ::A::AMH_BResponseHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::A::AMH_BResponseHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_A_AMI_BHANDLER__TRAITS_)
#define _A_AMI_BHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::A::AMI_BHandler>
  {
    static ::A::AMI_BHandler_ptr duplicate (::A::AMI_BHandler_ptr p);
    static void release (::A::AMI_BHandler_ptr p);
    static ::A::AMI_BHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::A::AMI_BHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_A_C__TRAITS_)
#define _A_C__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::A::C>
  {
    static ::A::C_ptr duplicate (::A::C_ptr p);
    static void release (::A::C_ptr p);
    static ::A::C_ptr nil ();
    static ::CORBA::Boolean marshal (const ::A::C_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_A_AMH_CEXCEPTIONHOLDER__TRAITS_)
#define _A_AMH_CEXCEPTIONHOLDER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Value_Traits<A::AMH_CExceptionHolder>
  {
    static void add_ref (A::AMH_CExceptionHolder *);
    static void remove_ref (A::AMH_CExceptionHolder *);
    static void release (A::AMH_CExceptionHolder *);
  };

#endif /* end #if !defined */

#if !defined (_A_AMH_CRESPONSEHANDLER__TRAITS_)
#define _A_AMH_CRESPONSEHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::A::AMH_CResponseHandler>
  {
    static ::A::AMH_CResponseHandler_ptr duplicate (::A::AMH_CResponseHandler_ptr p);
    static void release (::A::AMH_CResponseHandler_ptr p);
    static ::A::AMH_CResponseHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::A::AMH_CResponseHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_A_AMI_CHANDLER__TRAITS_)
#define _A_AMI_CHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::A::AMI_CHandler>
  {
    static ::A::AMI_CHandler_ptr duplicate (::A::AMI_CHandler_ptr p);
    static void release (::A::AMI_CHandler_ptr p);
    static ::A::AMI_CHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::A::AMI_CHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::B_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::B_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/any_op_ch.cpp:42


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::AMH_BExceptionHolder *); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::AMH_BExceptionHolder **); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::AMH_BExceptionHolder *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::AMH_BResponseHandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::AMH_BResponseHandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::AMH_BResponseHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::AMI_BHandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::AMI_BHandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::AMI_BHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::C_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::C_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::C_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/any_op_ch.cpp:42


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::AMH_CExceptionHolder *); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::AMH_CExceptionHolder **); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::AMH_CExceptionHolder *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::AMH_CResponseHandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::AMH_CResponseHandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::AMH_CResponseHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::AMI_CHandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, A::AMI_CHandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::AMI_CHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::B_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, A::B_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:452


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern TAO_IDL_TEST_STUB_Export void add_ref (A::AMH_BExceptionHolder *);
  extern TAO_IDL_TEST_STUB_Export void remove_ref (A::AMH_BExceptionHolder *);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/cdr_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::AMH_BExceptionHolder *);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, A::AMH_BExceptionHolder *&);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::AMI_BHandler_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, A::AMI_BHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::C_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, A::C_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:452


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern TAO_IDL_TEST_STUB_Export void add_ref (A::AMH_CExceptionHolder *);
  extern TAO_IDL_TEST_STUB_Export void remove_ref (A::AMH_CExceptionHolder *);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/cdr_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::AMH_CExceptionHolder *);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, A::AMH_CExceptionHolder *&);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::AMI_CHandler_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, A::AMI_CHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:1648

#if defined (__ACE_INLINE__)
#include "typeprefixC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

