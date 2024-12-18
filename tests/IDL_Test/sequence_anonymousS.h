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

#ifndef _TAO_IDL_SEQUENCE_ANONYMOUSS_ZENZRK_H_
#define _TAO_IDL_SEQUENCE_ANONYMOUSS_ZENZRK_H_

#include /**/ "ace/pre.h"

#include "sequence_anonymousC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/BD_String_SArgument_T.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/AnyTypeCode/Any.h"
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

  

#if !defined (_SEQTEST__SARG_TRAITS_)
#define _SEQTEST__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::seqTest>
    : public Object_SArg_Traits_T<
        ::seqTest_ptr,
        ::seqTest_var,
        ::seqTest_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::seqTest::dozens>
    : public
        Var_Size_SArg_Traits_T<
            ::seqTest::dozens,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_AMH_SEQTESTEXCEPTIONHOLDER__SARG_TRAITS_)
#define _AMH_SEQTESTEXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::AMH_seqTestExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::AMH_seqTestExceptionHolder *,
            ::AMH_seqTestExceptionHolder_var,
            ::AMH_seqTestExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_AMI_SEQTESTHANDLER__SARG_TRAITS_)
#define _AMI_SEQTESTHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::AMI_seqTestHandler>
    : public Object_SArg_Traits_T<
        ::AMI_seqTestHandler_ptr,
        ::AMI_seqTestHandler_var,
        ::AMI_seqTestHandler_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::twinStruct>
    : public
        Var_Size_SArg_Traits_T<
            ::twinStruct,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::outside>
    : public
        Var_Size_SArg_Traits_T<
            ::outside,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::nestedSeqStruct>
    : public
        Var_Size_SArg_Traits_T<
            ::nestedSeqStruct,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_sh.cpp:45

class POA_AMH_seqTest;
typedef POA_AMH_seqTest *POA_AMH_seqTest_ptr;

class TAO_IDL_TEST_STUB_Export POA_AMH_seqTest
  : public virtual PortableServer::ServantBase
{
protected:
  POA_AMH_seqTest ();

public:
  POA_AMH_seqTest (const POA_AMH_seqTest& rhs);
  virtual ~POA_AMH_seqTest () = default;


  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest &req,
      TAO::Portable_Server::Servant_Upcall *_servant_upcall);
  
  seqTest *_this ();

virtual const char* _interface_repository_id () const;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_sh.cpp:126

static void send_dozen_skel (
    TAO_ServerRequest &_tao_req,
    TAO::Portable_Server::Servant_Upcall *_tao_obj,
    TAO_ServantBase *_tao_servant_upcall);
  
virtual void send_dozen (
    AMH_seqTestResponseHandler_ptr _tao_rh,
    const ::seqTest::dozens & bouquets
  ) = 0;

};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class POA_seqTest;
typedef POA_seqTest *POA_seqTest_ptr;

class _TAO_seqTest_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export POA_seqTest
  : public virtual PortableServer::ServantBase
{
protected:
  POA_seqTest ();

public:
  /// Useful for template programming.
  typedef ::seqTest _stub_type;
  typedef ::seqTest_ptr _stub_ptr_type;
  typedef ::seqTest_var _stub_var_type;

  POA_seqTest (const POA_seqTest& rhs) = default;
  virtual ~POA_seqTest () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::seqTest *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void send_dozen (
    ::seqTest::dozens & bouquets) = 0;

  static void send_dozen_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_seqTest_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_seqTest_Direct_Proxy_Impl ();
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  send_dozen (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_rh_sh.cpp:49

class POA_TAO_AMH_seqTestResponseHandler;
typedef POA_TAO_AMH_seqTestResponseHandler *POA_TAO_AMH_seqTestResponseHandler_ptr;

class TAO_IDL_TEST_STUB_Export POA_TAO_AMH_seqTestResponseHandler
  : public TAO_AMH_Response_Handler,
    public ::AMH_seqTestResponseHandler
{
public:
  POA_TAO_AMH_seqTestResponseHandler () = default;
  virtual ~POA_TAO_AMH_seqTestResponseHandler () = default;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void send_dozen (
    const ::seqTest::dozens & bouquets) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void send_dozen_excep (
    ::AMH_seqTestExceptionHolder * holder) override;
};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class POA_AMI_seqTestHandler;
typedef POA_AMI_seqTestHandler *POA_AMI_seqTestHandler_ptr;

class _TAO_AMI_seqTestHandler_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export POA_AMI_seqTestHandler
  : public virtual POA_Messaging::ReplyHandler
{
protected:
  POA_AMI_seqTestHandler ();

public:
  /// Useful for template programming.
  typedef ::AMI_seqTestHandler _stub_type;
  typedef ::AMI_seqTestHandler_ptr _stub_ptr_type;
  typedef ::AMI_seqTestHandler_var _stub_var_type;

  POA_AMI_seqTestHandler (const POA_AMI_seqTestHandler& rhs) = default;
  virtual ~POA_AMI_seqTestHandler () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::AMI_seqTestHandler *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void send_dozen (
    const ::seqTest::dozens & bouquets) = 0;

  static void send_dozen_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void send_dozen_excep (
    ::Messaging::ExceptionHolder * excep_holder) = 0;

  static void send_dozen_excep_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_AMI_seqTestHandler_Direct_Proxy_Impl
  : public virtual ::POA_Messaging::_TAO_ReplyHandler_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_AMI_seqTestHandler_Direct_Proxy_Impl ();
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  send_dozen (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  send_dozen_excep (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////



#include "sequence_anonymousS_T.h"


#include /**/ "ace/post.h"

#endif /* ifndef */

