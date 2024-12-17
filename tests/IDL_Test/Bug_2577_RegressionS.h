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

#ifndef _TAO_IDL_BUG_2577_REGRESSIONS_GNFMK3_H_
#define _TAO_IDL_BUG_2577_REGRESSIONS_GNFMK3_H_

#include /**/ "ace/pre.h"

#include "Bug_2577_RegressionC.h"
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
  class SArg_Traits< ::DateTime_T>
    : public
        Fixed_Size_SArg_Traits_T<
            ::DateTime_T,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_DATA_T__SARG_TRAITS_)
#define _DATA_T__SARG_TRAITS_

  template<>
  class SArg_Traits< ::Data_T>
    : public
        Object_SArg_Traits_T<
            ::Data_T *,
            ::Data_T_var,
            ::Data_T_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_USER_T__SARG_TRAITS_)
#define _USER_T__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::User_T>
    : public Object_SArg_Traits_T<
        ::User_T_ptr,
        ::User_T_var,
        ::User_T_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_AMH_USER_TEXCEPTIONHOLDER__SARG_TRAITS_)
#define _AMH_USER_TEXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::AMH_User_TExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::AMH_User_TExceptionHolder *,
            ::AMH_User_TExceptionHolder_var,
            ::AMH_User_TExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_AMI_USER_THANDLER__SARG_TRAITS_)
#define _AMI_USER_THANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::AMI_User_THandler>
    : public Object_SArg_Traits_T<
        ::AMI_User_THandler_ptr,
        ::AMI_User_THandler_var,
        ::AMI_User_THandler_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_sh.cpp:45

class POA_AMH_User_T;
typedef POA_AMH_User_T *POA_AMH_User_T_ptr;

class TAO_IDL_TEST_STUB_Export POA_AMH_User_T
  : public virtual PortableServer::ServantBase
{
protected:
  POA_AMH_User_T ();

public:
  POA_AMH_User_T (const POA_AMH_User_T& rhs);
  virtual ~POA_AMH_User_T () = default;


  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest &req,
      TAO::Portable_Server::Servant_Upcall *_servant_upcall);
  
  User_T *_this ();

virtual const char* _interface_repository_id () const;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_sh.cpp:126

static void getLoginTime_skel (
    TAO_ServerRequest &_tao_req,
    TAO::Portable_Server::Servant_Upcall *_tao_obj,
    TAO_ServantBase *_tao_servant_upcall);
  
virtual void getLoginTime (
    AMH_User_TResponseHandler_ptr _tao_rh
  ) = 0;

};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class POA_User_T;
typedef POA_User_T *POA_User_T_ptr;

class _TAO_User_T_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export POA_User_T
  : public virtual PortableServer::ServantBase
{
protected:
  POA_User_T ();

public:
  /// Useful for template programming.
  typedef ::User_T _stub_type;
  typedef ::User_T_ptr _stub_ptr_type;
  typedef ::User_T_var _stub_var_type;

  POA_User_T (const POA_User_T& rhs);
  virtual ~POA_User_T () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::User_T *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual ::DateTime_T getLoginTime () = 0;

  static void getLoginTime_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_User_T_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_User_T_Direct_Proxy_Impl ();
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  getLoginTime (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_rh_sh.cpp:49

class POA_TAO_AMH_User_TResponseHandler;
typedef POA_TAO_AMH_User_TResponseHandler *POA_TAO_AMH_User_TResponseHandler_ptr;

class TAO_IDL_TEST_STUB_Export POA_TAO_AMH_User_TResponseHandler
  : public TAO_AMH_Response_Handler,
    public ::AMH_User_TResponseHandler
{
public:
  POA_TAO_AMH_User_TResponseHandler () = default;
  virtual ~POA_TAO_AMH_User_TResponseHandler () = default;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void getLoginTime (
    const ::DateTime_T & return_value) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void getLoginTime_excep (
    ::AMH_User_TExceptionHolder * holder) override;
};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class POA_AMI_User_THandler;
typedef POA_AMI_User_THandler *POA_AMI_User_THandler_ptr;

class _TAO_AMI_User_THandler_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export POA_AMI_User_THandler
  : public virtual POA_Messaging::ReplyHandler
{
protected:
  POA_AMI_User_THandler ();

public:
  /// Useful for template programming.
  typedef ::AMI_User_THandler _stub_type;
  typedef ::AMI_User_THandler_ptr _stub_ptr_type;
  typedef ::AMI_User_THandler_var _stub_var_type;

  POA_AMI_User_THandler (const POA_AMI_User_THandler& rhs);
  virtual ~POA_AMI_User_THandler () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::AMI_User_THandler *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void getLoginTime (
    const ::DateTime_T & ami_return_val) = 0;

  static void getLoginTime_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void getLoginTime_excep (
    ::Messaging::ExceptionHolder * excep_holder) = 0;

  static void getLoginTime_excep_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_AMI_User_THandler_Direct_Proxy_Impl
  : public virtual ::POA_Messaging::_TAO_ReplyHandler_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_AMI_User_THandler_Direct_Proxy_Impl ();
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  getLoginTime (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  getLoginTime_excep (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////



#include "Bug_2577_RegressionS_T.h"


#include /**/ "ace/post.h"

#endif /* ifndef */

