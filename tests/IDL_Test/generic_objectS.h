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

#ifndef _TAO_IDL_GENERIC_OBJECTS_Q4Y3UB_H_
#define _TAO_IDL_GENERIC_OBJECTS_Q4Y3UB_H_

#include /**/ "ace/pre.h"

#include "generic_objectC.h"
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
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::ObjectType>
    : public
        Basic_SArg_Traits_T<
            ::ObjectType,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::Selecter>
    : public
        Var_Size_SArg_Traits_T<
            ::Selecter,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_GENERIC__SARG_TRAITS_)
#define _GENERIC__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::generic>
    : public Object_SArg_Traits_T<
        ::generic_ptr,
        ::generic_var,
        ::generic_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_AMH_GENERICEXCEPTIONHOLDER__SARG_TRAITS_)
#define _AMH_GENERICEXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::AMH_genericExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::AMH_genericExceptionHolder *,
            ::AMH_genericExceptionHolder_var,
            ::AMH_genericExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_AMI_GENERICHANDLER__SARG_TRAITS_)
#define _AMI_GENERICHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::AMI_genericHandler>
    : public Object_SArg_Traits_T<
        ::AMI_genericHandler_ptr,
        ::AMI_genericHandler_var,
        ::AMI_genericHandler_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_sh.cpp:45

class POA_AMH_generic;
typedef POA_AMH_generic *POA_AMH_generic_ptr;

class TAO_IDL_TEST_STUB_Export POA_AMH_generic
  : public virtual PortableServer::ServantBase
{
protected:
  POA_AMH_generic ();

public:
  POA_AMH_generic (const POA_AMH_generic& rhs);
  virtual ~POA_AMH_generic () = default;


  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest &req,
      TAO::Portable_Server::Servant_Upcall *_servant_upcall);
  
  generic *_this ();

virtual const char* _interface_repository_id () const;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_sh.cpp:126

static void op_skel (
    TAO_ServerRequest &_tao_req,
    TAO::Portable_Server::Servant_Upcall *_tao_obj,
    TAO_ServantBase *_tao_servant_upcall);
  
virtual void op (
    AMH_genericResponseHandler_ptr _tao_rh,
    ::CORBA::Object_ptr inarg,
    ::CORBA::Object_ptr inoutarg
  ) = 0;

};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class POA_generic;
typedef POA_generic *POA_generic_ptr;

class _TAO_generic_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export POA_generic
  : public virtual PortableServer::ServantBase
{
protected:
  POA_generic ();

public:
  /// Useful for template programming.
  typedef ::generic _stub_type;
  typedef ::generic_ptr _stub_ptr_type;
  typedef ::generic_var _stub_var_type;

  POA_generic (const POA_generic& rhs);
  virtual ~POA_generic () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::generic *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual ::CORBA::Object_ptr op (
    ::CORBA::Object_ptr inarg,
    ::CORBA::Object_ptr & inoutarg,
    ::CORBA::Object_out outarg) = 0;

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

class TAO_IDL_TEST_STUB_Export _TAO_generic_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_generic_Direct_Proxy_Impl ();
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

class POA_TAO_AMH_genericResponseHandler;
typedef POA_TAO_AMH_genericResponseHandler *POA_TAO_AMH_genericResponseHandler_ptr;

class TAO_IDL_TEST_STUB_Export POA_TAO_AMH_genericResponseHandler
  : public TAO_AMH_Response_Handler,
    public ::AMH_genericResponseHandler
{
public:
  POA_TAO_AMH_genericResponseHandler () = default;
  virtual ~POA_TAO_AMH_genericResponseHandler () = default;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void op (
    ::CORBA::Object_ptr return_value,
    ::CORBA::Object_ptr inoutarg,
    ::CORBA::Object_ptr outarg) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void op_excep (
    ::AMH_genericExceptionHolder * holder) override;
};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class POA_AMI_genericHandler;
typedef POA_AMI_genericHandler *POA_AMI_genericHandler_ptr;

class _TAO_AMI_genericHandler_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export POA_AMI_genericHandler
  : public virtual POA_Messaging::ReplyHandler
{
protected:
  POA_AMI_genericHandler ();

public:
  /// Useful for template programming.
  typedef ::AMI_genericHandler _stub_type;
  typedef ::AMI_genericHandler_ptr _stub_ptr_type;
  typedef ::AMI_genericHandler_var _stub_var_type;

  POA_AMI_genericHandler (const POA_AMI_genericHandler& rhs);
  virtual ~POA_AMI_genericHandler () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::AMI_genericHandler *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void op (
    ::CORBA::Object_ptr ami_return_val,
    ::CORBA::Object_ptr inoutarg,
    ::CORBA::Object_ptr outarg) = 0;

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

class TAO_IDL_TEST_STUB_Export _TAO_AMI_genericHandler_Direct_Proxy_Impl
  : public virtual ::POA_Messaging::_TAO_ReplyHandler_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_AMI_genericHandler_Direct_Proxy_Impl ();
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



#include "generic_objectS_T.h"


#include /**/ "ace/post.h"

#endif /* ifndef */

