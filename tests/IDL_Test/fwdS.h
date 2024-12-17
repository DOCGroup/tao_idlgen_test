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
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:454

#ifndef _TAO_IDL_FWDS_DR8FAT_H_
#define _TAO_IDL_FWDS_DR8FAT_H_

#include /**/ "ace/pre.h"

#include "fwdC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/get_arg.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/Messaging/MessagingS.h"
#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"
#include "tao/Messaging/AMH_Response_Handler.h"

#include /**/ "TAO_IDL_TEST_stub_export.h"
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:64



TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_MESSAGING_EXCEPTIONHOLDER__SARG_TRAITS_)
#define _MESSAGING_EXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::Messaging::ExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::Messaging::ExceptionHolder *,
            ::Messaging::ExceptionHolder_var,
            ::Messaging::ExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_SCOPE_TEST_I_SCOPE_TEST__SARG_TRAITS_)
#define _SCOPE_TEST_I_SCOPE_TEST__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::scope_test::i_scope_test>
    : public Object_SArg_Traits_T<
        ::scope_test::i_scope_test_ptr,
        ::scope_test::i_scope_test_var,
        ::scope_test::i_scope_test_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::scope_test::same_scope_struct>
    : public
        Var_Size_SArg_Traits_T<
            ::scope_test::same_scope_struct,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::mod2::scope_struct>
    : public
        Var_Size_SArg_Traits_T<
            ::mod2::scope_struct,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_MOD2_FWD__SARG_TRAITS_)
#define _MOD2_FWD__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::mod2::fwd>
    : public Object_SArg_Traits_T<
        ::mod2::fwd_ptr,
        ::mod2::fwd_var,
        ::mod2::fwd_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_MOD2_FULL__SARG_TRAITS_)
#define _MOD2_FULL__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::mod2::full>
    : public Object_SArg_Traits_T<
        ::mod2::full_ptr,
        ::mod2::full_var,
        ::mod2::full_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_MOD2_AMH_FULLEXCEPTIONHOLDER__SARG_TRAITS_)
#define _MOD2_AMH_FULLEXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::mod2::AMH_fullExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::mod2::AMH_fullExceptionHolder *,
            ::mod2::AMH_fullExceptionHolder_var,
            ::mod2::AMH_fullExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_MOD2_AMI_FULLHANDLER__SARG_TRAITS_)
#define _MOD2_AMI_FULLHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::mod2::AMI_fullHandler>
    : public Object_SArg_Traits_T<
        ::mod2::AMI_fullHandler_ptr,
        ::mod2::AMI_fullHandler_var,
        ::mod2::AMI_fullHandler_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::mod2::full_seq2>
    : public
        Var_Size_SArg_Traits_T<
            ::mod2::full_seq2,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_MOD2_FWD__SARG_TRAITS_)
#define _MOD2_FWD__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::mod2::fwd>
    : public Object_SArg_Traits_T<
        ::mod2::fwd_ptr,
        ::mod2::fwd_var,
        ::mod2::fwd_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_FWD_MIXED_INTF_MIXED_PARENTS__SARG_TRAITS_)
#define _FWD_MIXED_INTF_MIXED_PARENTS__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::fwd_mixed_intf::mixed_parents>
    : public Object_SArg_Traits_T<
        ::fwd_mixed_intf::mixed_parents_ptr,
        ::fwd_mixed_intf::mixed_parents_var,
        ::fwd_mixed_intf::mixed_parents_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_FWD_MIXED_INTF_CONCRETE_PARENT__SARG_TRAITS_)
#define _FWD_MIXED_INTF_CONCRETE_PARENT__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::fwd_mixed_intf::concrete_parent>
    : public Object_SArg_Traits_T<
        ::fwd_mixed_intf::concrete_parent_ptr,
        ::fwd_mixed_intf::concrete_parent_var,
        ::fwd_mixed_intf::concrete_parent_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_FWD_MIXED_INTF_AMH_CONCRETE_PARENTEXCEPTIONHOLDER__SARG_TRAITS_)
#define _FWD_MIXED_INTF_AMH_CONCRETE_PARENTEXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::fwd_mixed_intf::AMH_concrete_parentExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::fwd_mixed_intf::AMH_concrete_parentExceptionHolder *,
            ::fwd_mixed_intf::AMH_concrete_parentExceptionHolder_var,
            ::fwd_mixed_intf::AMH_concrete_parentExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_FWD_MIXED_INTF_AMI_CONCRETE_PARENTHANDLER__SARG_TRAITS_)
#define _FWD_MIXED_INTF_AMI_CONCRETE_PARENTHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::fwd_mixed_intf::AMI_concrete_parentHandler>
    : public Object_SArg_Traits_T<
        ::fwd_mixed_intf::AMI_concrete_parentHandler_ptr,
        ::fwd_mixed_intf::AMI_concrete_parentHandler_var,
        ::fwd_mixed_intf::AMI_concrete_parentHandler_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_FWD_MIXED_INTF_ABSTRACT_PARENT__SARG_TRAITS_)
#define _FWD_MIXED_INTF_ABSTRACT_PARENT__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::fwd_mixed_intf::abstract_parent>
    : public Object_SArg_Traits_T<
        ::fwd_mixed_intf::abstract_parent_ptr,
        ::fwd_mixed_intf::abstract_parent_var,
        ::fwd_mixed_intf::abstract_parent_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_FWD_MIXED_INTF_MIXED_ABS_FIRST__SARG_TRAITS_)
#define _FWD_MIXED_INTF_MIXED_ABS_FIRST__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::fwd_mixed_intf::mixed_abs_first>
    : public Object_SArg_Traits_T<
        ::fwd_mixed_intf::mixed_abs_first_ptr,
        ::fwd_mixed_intf::mixed_abs_first_var,
        ::fwd_mixed_intf::mixed_abs_first_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_FWD_MIXED_INTF_AMI_MIXED_ABS_FIRSTHANDLER__SARG_TRAITS_)
#define _FWD_MIXED_INTF_AMI_MIXED_ABS_FIRSTHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::fwd_mixed_intf::AMI_mixed_abs_firstHandler>
    : public Object_SArg_Traits_T<
        ::fwd_mixed_intf::AMI_mixed_abs_firstHandler_ptr,
        ::fwd_mixed_intf::AMI_mixed_abs_firstHandler_var,
        ::fwd_mixed_intf::AMI_mixed_abs_firstHandler_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_FWD_MIXED_INTF_MIXED_CONC_FIRST__SARG_TRAITS_)
#define _FWD_MIXED_INTF_MIXED_CONC_FIRST__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::fwd_mixed_intf::mixed_conc_first>
    : public Object_SArg_Traits_T<
        ::fwd_mixed_intf::mixed_conc_first_ptr,
        ::fwd_mixed_intf::mixed_conc_first_var,
        ::fwd_mixed_intf::mixed_conc_first_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_FWD_MIXED_INTF_AMI_MIXED_CONC_FIRSTHANDLER__SARG_TRAITS_)
#define _FWD_MIXED_INTF_AMI_MIXED_CONC_FIRSTHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::fwd_mixed_intf::AMI_mixed_conc_firstHandler>
    : public Object_SArg_Traits_T<
        ::fwd_mixed_intf::AMI_mixed_conc_firstHandler_ptr,
        ::fwd_mixed_intf::AMI_mixed_conc_firstHandler_var,
        ::fwd_mixed_intf::AMI_mixed_conc_firstHandler_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_OBV_FWD_FORWARDEDTYPE__SARG_TRAITS_)
#define _OBV_FWD_FORWARDEDTYPE__SARG_TRAITS_

  template<>
  class SArg_Traits< ::obv_fwd::ForwardedType>
    : public
        Object_SArg_Traits_T<
            ::obv_fwd::ForwardedType *,
            ::obv_fwd::ForwardedType_var,
            ::obv_fwd::ForwardedType_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_OBV_FWD_ENCLOSINGTYPE__SARG_TRAITS_)
#define _OBV_FWD_ENCLOSINGTYPE__SARG_TRAITS_

  template<>
  class SArg_Traits< ::obv_fwd::EnclosingType>
    : public
        Object_SArg_Traits_T<
            ::obv_fwd::EnclosingType *,
            ::obv_fwd::EnclosingType_var,
            ::obv_fwd::EnclosingType_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_OBV_FWD_FORWARDEDTYPE__SARG_TRAITS_)
#define _OBV_FWD_FORWARDEDTYPE__SARG_TRAITS_

  template<>
  class SArg_Traits< ::obv_fwd::ForwardedType>
    : public
        Object_SArg_Traits_T<
            ::obv_fwd::ForwardedType *,
            ::obv_fwd::ForwardedType_var,
            ::obv_fwd::ForwardedType_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

namespace POA_scope_test
{
  


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module scope_test
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

namespace POA_scope_test
{
  


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module scope_test
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

namespace POA_mod2
{
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_sh.cpp:45

  class AMH_full;
  typedef AMH_full *AMH_full_ptr;

  class TAO_IDL_TEST_STUB_Export AMH_full
    : public virtual PortableServer::ServantBase
  {
  protected:
    AMH_full ();
  
  public:
    AMH_full (const AMH_full& rhs);
    virtual ~AMH_full () = default;


    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest &req,
        TAO::Portable_Server::Servant_Upcall *_servant_upcall);
    
    mod2::full *_this ();

  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_sh.cpp:126

  static void op_skel (
      TAO_ServerRequest &_tao_req,
      TAO::Portable_Server::Servant_Upcall *_tao_obj,
      TAO_ServantBase *_tao_servant_upcall);
    
  virtual void op (
      mod2::AMH_fullResponseHandler_ptr _tao_rh,
      ::mod2::fwd_ptr inarg,
      ::mod2::fwd_ptr inoutarg
    ) = 0;
  
};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class full;
typedef full *full_ptr;

class _TAO_full_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export full
  : public virtual PortableServer::ServantBase
{
protected:
  full ();

public:
  /// Useful for template programming.
  typedef ::mod2::full _stub_type;
  typedef ::mod2::full_ptr _stub_ptr_type;
  typedef ::mod2::full_var _stub_var_type;

  full (const full& rhs);
  virtual ~full () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::mod2::full *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual ::mod2::fwd_ptr op (
    ::mod2::fwd_ptr inarg,
    ::mod2::fwd_ptr & inoutarg,
    ::mod2::fwd_out outarg) = 0;

  static void op_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_full_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_full_Direct_Proxy_Impl ();
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  op (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_rh_sh.cpp:49

class TAO_AMH_fullResponseHandler;
typedef TAO_AMH_fullResponseHandler *TAO_AMH_fullResponseHandler_ptr;

class TAO_IDL_TEST_STUB_Export TAO_AMH_fullResponseHandler
  : public TAO_AMH_Response_Handler,
    public ::mod2::AMH_fullResponseHandler
{
public:
  TAO_AMH_fullResponseHandler () = default;
  virtual ~TAO_AMH_fullResponseHandler () = default;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void op (
    ::mod2::fwd_ptr return_value,
    ::mod2::fwd_ptr inoutarg,
    ::mod2::fwd_ptr outarg) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void op_excep (
    ::mod2::AMH_fullExceptionHolder * holder) override;
};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class AMI_fullHandler;
typedef AMI_fullHandler *AMI_fullHandler_ptr;

class _TAO_AMI_fullHandler_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export AMI_fullHandler
  : public virtual POA_Messaging::ReplyHandler
{
protected:
  AMI_fullHandler ();

public:
  /// Useful for template programming.
  typedef ::mod2::AMI_fullHandler _stub_type;
  typedef ::mod2::AMI_fullHandler_ptr _stub_ptr_type;
  typedef ::mod2::AMI_fullHandler_var _stub_var_type;

  AMI_fullHandler (const AMI_fullHandler& rhs);
  virtual ~AMI_fullHandler () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::mod2::AMI_fullHandler *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void op (
    ::mod2::fwd_ptr ami_return_val,
    ::mod2::fwd_ptr inoutarg,
    ::mod2::fwd_ptr outarg) = 0;

  static void op_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void op_excep (
    ::Messaging::ExceptionHolder * excep_holder) = 0;

  static void op_excep_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_AMI_fullHandler_Direct_Proxy_Impl
  : public virtual ::POA_Messaging::_TAO_ReplyHandler_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_AMI_fullHandler_Direct_Proxy_Impl ();
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  op (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  op_excep (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module mod2
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

namespace POA_fwd_mixed_intf
{
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_sh.cpp:45

  class AMH_concrete_parent;
  typedef AMH_concrete_parent *AMH_concrete_parent_ptr;

  class TAO_IDL_TEST_STUB_Export AMH_concrete_parent
    : public virtual PortableServer::ServantBase
  {
  protected:
    AMH_concrete_parent ();
  
  public:
    AMH_concrete_parent (const AMH_concrete_parent& rhs);
    virtual ~AMH_concrete_parent () = default;


    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest &req,
        TAO::Portable_Server::Servant_Upcall *_servant_upcall);
    
    fwd_mixed_intf::concrete_parent *_this ();

  virtual const char* _interface_repository_id () const;
};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class concrete_parent;
typedef concrete_parent *concrete_parent_ptr;

class _TAO_concrete_parent_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export concrete_parent
  : public virtual PortableServer::ServantBase
{
protected:
  concrete_parent ();

public:
  /// Useful for template programming.
  typedef ::fwd_mixed_intf::concrete_parent _stub_type;
  typedef ::fwd_mixed_intf::concrete_parent_ptr _stub_ptr_type;
  typedef ::fwd_mixed_intf::concrete_parent_var _stub_var_type;

  concrete_parent (const concrete_parent& rhs);
  virtual ~concrete_parent () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::fwd_mixed_intf::concrete_parent *_this ();
  
  virtual const char* _interface_repository_id () const;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_concrete_parent_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_concrete_parent_Direct_Proxy_Impl ();
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_rh_sh.cpp:49

class TAO_AMH_concrete_parentResponseHandler;
typedef TAO_AMH_concrete_parentResponseHandler *TAO_AMH_concrete_parentResponseHandler_ptr;

class TAO_IDL_TEST_STUB_Export TAO_AMH_concrete_parentResponseHandler
  : public TAO_AMH_Response_Handler,
    public ::fwd_mixed_intf::AMH_concrete_parentResponseHandler
{
public:
  TAO_AMH_concrete_parentResponseHandler () = default;
  virtual ~TAO_AMH_concrete_parentResponseHandler () = default;
};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class AMI_concrete_parentHandler;
typedef AMI_concrete_parentHandler *AMI_concrete_parentHandler_ptr;

class _TAO_AMI_concrete_parentHandler_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export AMI_concrete_parentHandler
  : public virtual POA_Messaging::ReplyHandler
{
protected:
  AMI_concrete_parentHandler ();

public:
  /// Useful for template programming.
  typedef ::fwd_mixed_intf::AMI_concrete_parentHandler _stub_type;
  typedef ::fwd_mixed_intf::AMI_concrete_parentHandler_ptr _stub_ptr_type;
  typedef ::fwd_mixed_intf::AMI_concrete_parentHandler_var _stub_var_type;

  AMI_concrete_parentHandler (const AMI_concrete_parentHandler& rhs);
  virtual ~AMI_concrete_parentHandler () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::fwd_mixed_intf::AMI_concrete_parentHandler *_this ();
  
  virtual const char* _interface_repository_id () const;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_AMI_concrete_parentHandler_Direct_Proxy_Impl
  : public virtual ::POA_Messaging::_TAO_ReplyHandler_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_AMI_concrete_parentHandler_Direct_Proxy_Impl ();
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class mixed_abs_first;
typedef mixed_abs_first *mixed_abs_first_ptr;

class _TAO_mixed_abs_first_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export mixed_abs_first
  : public virtual POA_fwd_mixed_intf::concrete_parent
{
protected:
  mixed_abs_first ();

public:
  /// Useful for template programming.
  typedef ::fwd_mixed_intf::mixed_abs_first _stub_type;
  typedef ::fwd_mixed_intf::mixed_abs_first_ptr _stub_ptr_type;
  typedef ::fwd_mixed_intf::mixed_abs_first_var _stub_var_type;

  mixed_abs_first (const mixed_abs_first& rhs);
  virtual ~mixed_abs_first () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::fwd_mixed_intf::mixed_abs_first *_this ();
  
  virtual const char* _interface_repository_id () const;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_mixed_abs_first_Direct_Proxy_Impl
  : public virtual ::POA_fwd_mixed_intf::_TAO_concrete_parent_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_mixed_abs_first_Direct_Proxy_Impl ();
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class AMI_mixed_abs_firstHandler;
typedef AMI_mixed_abs_firstHandler *AMI_mixed_abs_firstHandler_ptr;

class _TAO_AMI_mixed_abs_firstHandler_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export AMI_mixed_abs_firstHandler
  : public virtual POA_fwd_mixed_intf::AMI_concrete_parentHandler
{
protected:
  AMI_mixed_abs_firstHandler ();

public:
  /// Useful for template programming.
  typedef ::fwd_mixed_intf::AMI_mixed_abs_firstHandler _stub_type;
  typedef ::fwd_mixed_intf::AMI_mixed_abs_firstHandler_ptr _stub_ptr_type;
  typedef ::fwd_mixed_intf::AMI_mixed_abs_firstHandler_var _stub_var_type;

  AMI_mixed_abs_firstHandler (const AMI_mixed_abs_firstHandler& rhs);
  virtual ~AMI_mixed_abs_firstHandler () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::fwd_mixed_intf::AMI_mixed_abs_firstHandler *_this ();
  
  virtual const char* _interface_repository_id () const;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_AMI_mixed_abs_firstHandler_Direct_Proxy_Impl
  : public virtual ::POA_fwd_mixed_intf::_TAO_AMI_concrete_parentHandler_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_AMI_mixed_abs_firstHandler_Direct_Proxy_Impl ();
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class mixed_conc_first;
typedef mixed_conc_first *mixed_conc_first_ptr;

class _TAO_mixed_conc_first_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export mixed_conc_first
  : public virtual POA_fwd_mixed_intf::concrete_parent
{
protected:
  mixed_conc_first ();

public:
  /// Useful for template programming.
  typedef ::fwd_mixed_intf::mixed_conc_first _stub_type;
  typedef ::fwd_mixed_intf::mixed_conc_first_ptr _stub_ptr_type;
  typedef ::fwd_mixed_intf::mixed_conc_first_var _stub_var_type;

  mixed_conc_first (const mixed_conc_first& rhs);
  virtual ~mixed_conc_first () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::fwd_mixed_intf::mixed_conc_first *_this ();
  
  virtual const char* _interface_repository_id () const;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_mixed_conc_first_Direct_Proxy_Impl
  : public virtual ::POA_fwd_mixed_intf::_TAO_concrete_parent_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_mixed_conc_first_Direct_Proxy_Impl ();
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class AMI_mixed_conc_firstHandler;
typedef AMI_mixed_conc_firstHandler *AMI_mixed_conc_firstHandler_ptr;

class _TAO_AMI_mixed_conc_firstHandler_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export AMI_mixed_conc_firstHandler
  : public virtual POA_fwd_mixed_intf::AMI_concrete_parentHandler
{
protected:
  AMI_mixed_conc_firstHandler ();

public:
  /// Useful for template programming.
  typedef ::fwd_mixed_intf::AMI_mixed_conc_firstHandler _stub_type;
  typedef ::fwd_mixed_intf::AMI_mixed_conc_firstHandler_ptr _stub_ptr_type;
  typedef ::fwd_mixed_intf::AMI_mixed_conc_firstHandler_var _stub_var_type;

  AMI_mixed_conc_firstHandler (const AMI_mixed_conc_firstHandler& rhs);
  virtual ~AMI_mixed_conc_firstHandler () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::fwd_mixed_intf::AMI_mixed_conc_firstHandler *_this ();
  
  virtual const char* _interface_repository_id () const;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_AMI_mixed_conc_firstHandler_Direct_Proxy_Impl
  : public virtual ::POA_fwd_mixed_intf::_TAO_AMI_concrete_parentHandler_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_AMI_mixed_conc_firstHandler_Direct_Proxy_Impl ();
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module fwd_mixed_intf
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

namespace POA_obv_fwd
{
  


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module obv_fwd
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

namespace POA_obv_fwd
{
  


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module obv_fwd
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

namespace POA_obv_fwd
{
  


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module obv_fwd

#include "fwdS_T.h"


#include /**/ "ace/post.h"

#endif /* ifndef */
