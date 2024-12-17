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

#ifndef _TAO_IDL_PARAMSS_3ZPUER_H_
#define _TAO_IDL_PARAMSS_3ZPUER_H_

#include /**/ "ace/pre.h"

#include "paramsC.h"
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
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::foo::theDate>
    : public
        Fixed_Size_SArg_Traits_T<
            ::foo::theDate,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::foo::bar::theDate>
    : public
        Fixed_Size_SArg_Traits_T<
            ::foo::bar::theDate,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_FOO_BAR_FOOBAR__SARG_TRAITS_)
#define _FOO_BAR_FOOBAR__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::foo::bar::fooBar>
    : public Object_SArg_Traits_T<
        ::foo::bar::fooBar_ptr,
        ::foo::bar::fooBar_var,
        ::foo::bar::fooBar_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_FOO_BAR_AMH_FOOBAREXCEPTIONHOLDER__SARG_TRAITS_)
#define _FOO_BAR_AMH_FOOBAREXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::foo::bar::AMH_fooBarExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::foo::bar::AMH_fooBarExceptionHolder *,
            ::foo::bar::AMH_fooBarExceptionHolder_var,
            ::foo::bar::AMH_fooBarExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_FOO_BAR_AMI_FOOBARHANDLER__SARG_TRAITS_)
#define _FOO_BAR_AMI_FOOBARHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::foo::bar::AMI_fooBarHandler>
    : public Object_SArg_Traits_T<
        ::foo::bar::AMI_fooBarHandler_ptr,
        ::foo::bar::AMI_fooBarHandler_var,
        ::foo::bar::AMI_fooBarHandler_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

namespace POA_foo
{
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

  namespace bar
  {
    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_sh.cpp:45

    class AMH_fooBar;
    typedef AMH_fooBar *AMH_fooBar_ptr;

    class TAO_IDL_TEST_STUB_Export AMH_fooBar
      : public virtual PortableServer::ServantBase
    {
    protected:
      AMH_fooBar ();
    
    public:
      AMH_fooBar (const AMH_fooBar& rhs);
      virtual ~AMH_fooBar () = default;


      virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

      virtual void _dispatch (
          TAO_ServerRequest &req,
          TAO::Portable_Server::Servant_Upcall *_servant_upcall);
      
      foo::bar::fooBar *_this ();

    virtual const char* _interface_repository_id () const;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_sh.cpp:126

    static void getDate_skel (
        TAO_ServerRequest &_tao_req,
        TAO::Portable_Server::Servant_Upcall *_tao_obj,
        TAO_ServantBase *_tao_servant_upcall);
      
    virtual void getDate (
        foo::bar::AMH_fooBarResponseHandler_ptr _tao_rh,
        const ::foo::theDate & a,
        const ::foo::theDate & b
      ) = 0;
    
  };

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72

  

  class fooBar;
  typedef fooBar *fooBar_ptr;

  class _TAO_fooBar_Direct_Proxy_Impl;

  class TAO_IDL_TEST_STUB_Export fooBar
    : public virtual PortableServer::ServantBase
  {
  protected:
    fooBar ();
  
  public:
    /// Useful for template programming.
    typedef ::foo::bar::fooBar _stub_type;
    typedef ::foo::bar::fooBar_ptr _stub_ptr_type;
    typedef ::foo::bar::fooBar_var _stub_var_type;

    fooBar (const fooBar& rhs);
    virtual ~fooBar () = default;

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::foo::bar::fooBar *_this ();
    
    virtual const char* _interface_repository_id () const;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

    virtual ::foo::theDate getDate (
      const ::foo::theDate & a,
      ::foo::theDate & b,
      ::foo::theDate_out c) = 0;

    static void getDate_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23

  

  ///////////////////////////////////////////////////////////////////////
  //                    Direct  Impl. Declaration
  //

  class TAO_IDL_TEST_STUB_Export _TAO_fooBar_Direct_Proxy_Impl
  {
  public:
    virtual ~_TAO_fooBar_Direct_Proxy_Impl ();
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

    static void
    getDate (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
  };

  //
  //                Direct  Proxy Impl. Declaration
  ///////////////////////////////////////////////////////////////////////

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_rh_sh.cpp:49

  class TAO_AMH_fooBarResponseHandler;
  typedef TAO_AMH_fooBarResponseHandler *TAO_AMH_fooBarResponseHandler_ptr;

  class TAO_IDL_TEST_STUB_Export TAO_AMH_fooBarResponseHandler
    : public TAO_AMH_Response_Handler,
      public ::foo::bar::AMH_fooBarResponseHandler
  {
  public:
    TAO_AMH_fooBarResponseHandler () = default;
    virtual ~TAO_AMH_fooBarResponseHandler () = default;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

    void getDate (
      const ::foo::theDate & return_value,
      const ::foo::theDate & b,
      const ::foo::theDate & c) override;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

    void getDate_excep (
      ::foo::bar::AMH_fooBarExceptionHolder * holder) override;
  };

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72

  

  class AMI_fooBarHandler;
  typedef AMI_fooBarHandler *AMI_fooBarHandler_ptr;

  class _TAO_AMI_fooBarHandler_Direct_Proxy_Impl;

  class TAO_IDL_TEST_STUB_Export AMI_fooBarHandler
    : public virtual POA_Messaging::ReplyHandler
  {
  protected:
    AMI_fooBarHandler ();
  
  public:
    /// Useful for template programming.
    typedef ::foo::bar::AMI_fooBarHandler _stub_type;
    typedef ::foo::bar::AMI_fooBarHandler_ptr _stub_ptr_type;
    typedef ::foo::bar::AMI_fooBarHandler_var _stub_var_type;

    AMI_fooBarHandler (const AMI_fooBarHandler& rhs);
    virtual ~AMI_fooBarHandler () = default;

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::foo::bar::AMI_fooBarHandler *_this ();
    
    virtual const char* _interface_repository_id () const;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

    virtual void getDate (
      const ::foo::theDate & ami_return_val,
      const ::foo::theDate & b,
      const ::foo::theDate & c) = 0;

    static void getDate_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

    virtual void getDate_excep (
      ::Messaging::ExceptionHolder * excep_holder) = 0;

    static void getDate_excep_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23

  

  ///////////////////////////////////////////////////////////////////////
  //                    Direct  Impl. Declaration
  //

  class TAO_IDL_TEST_STUB_Export _TAO_AMI_fooBarHandler_Direct_Proxy_Impl
    : public virtual ::POA_Messaging::_TAO_ReplyHandler_Direct_Proxy_Impl
  {
  public:
    virtual ~_TAO_AMI_fooBarHandler_Direct_Proxy_Impl ();
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

    static void
    getDate (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

    static void
    getDate_excep (
      TAO_Abstract_ServantBase *servant, TAO::Argument **args);
    
  };

  //
  //                Direct  Proxy Impl. Declaration
  ///////////////////////////////////////////////////////////////////////

  


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module foo::bar


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module foo

#include "paramsS_T.h"


#include /**/ "ace/post.h"

#endif /* ifndef */

