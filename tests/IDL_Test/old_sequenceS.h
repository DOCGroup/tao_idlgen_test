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

#ifndef _TAO_IDL_OLD_SEQUENCES_TLLC9D_H_
#define _TAO_IDL_OLD_SEQUENCES_TLLC9D_H_

#include /**/ "ace/pre.h"

#include "old_sequenceC.h"
#include "simpleS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Fixed_Array_SArgument_T.h"
#include "tao/PortableServer/Var_Array_SArgument_T.h"
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
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::c20>
    : public
        Var_Size_SArg_Traits_T<
            ::c20,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::cc23>
    : public
        Var_Size_SArg_Traits_T<
            ::cc23,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::c24>
    : public
        Var_Size_SArg_Traits_T<
            ::c24,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::c30>
    : public
        Var_Size_SArg_Traits_T<
            ::c30,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::cstring>
    : public
        Var_Size_SArg_Traits_T<
            ::cstring,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::TProgram>
    : public
        Var_Size_SArg_Traits_T<
            ::TProgram,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::sfoo>
    : public
        Fixed_Size_SArg_Traits_T<
            ::sfoo,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::sfoo_ar_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::sfoo_ar_var,
            ::sfoo_ar_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::f_unbounded>
    : public
        Var_Size_SArg_Traits_T<
            ::f_unbounded,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::f_ar_unbounded>
    : public
        Var_Size_SArg_Traits_T<
            ::f_ar_unbounded,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_TESTSEQ__SARG_TRAITS_)
#define _TESTSEQ__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::TestSeq>
    : public Object_SArg_Traits_T<
        ::TestSeq_ptr,
        ::TestSeq_var,
        ::TestSeq_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::TestSeq::also_vec10>
    : public
        Var_Size_SArg_Traits_T<
            ::TestSeq::also_vec10,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_AMH_TESTSEQEXCEPTIONHOLDER__SARG_TRAITS_)
#define _AMH_TESTSEQEXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::AMH_TestSeqExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::AMH_TestSeqExceptionHolder *,
            ::AMH_TestSeqExceptionHolder_var,
            ::AMH_TestSeqExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_AMI_TESTSEQHANDLER__SARG_TRAITS_)
#define _AMI_TESTSEQHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::AMI_TestSeqHandler>
    : public Object_SArg_Traits_T<
        ::AMI_TestSeqHandler_ptr,
        ::AMI_TestSeqHandler_var,
        ::AMI_TestSeqHandler_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_sh.cpp:45

class POA_AMH_TestSeq;
typedef POA_AMH_TestSeq *POA_AMH_TestSeq_ptr;

class TAO_IDL_TEST_STUB_Export POA_AMH_TestSeq
  : public virtual PortableServer::ServantBase
{
protected:
  POA_AMH_TestSeq ();

public:
  POA_AMH_TestSeq (const POA_AMH_TestSeq& rhs);
  virtual ~POA_AMH_TestSeq () = default;


  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest &req,
      TAO::Portable_Server::Servant_Upcall *_servant_upcall);
  
  TestSeq *_this ();

virtual const char* _interface_repository_id () const;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_sh.cpp:126

static void _get_fattr_skel (
    TAO_ServerRequest &_tao_req,
    TAO::Portable_Server::Servant_Upcall *_tao_obj,
    TAO_ServantBase *_tao_servant_upcall);
  
virtual void fattr (
    AMH_TestSeqResponseHandler_ptr _tao_rh
  ) = 0;

// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_sh.cpp:126

static void _set_fattr_skel (
    TAO_ServerRequest &_tao_req,
    TAO::Portable_Server::Servant_Upcall *_tao_obj,
    TAO_ServantBase *_tao_servant_upcall);
  
virtual void fattr (
    AMH_TestSeqResponseHandler_ptr _tao_rh,
    const ::f_unbounded & fattr
  ) = 0;

};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class POA_TestSeq;
typedef POA_TestSeq *POA_TestSeq_ptr;

class _TAO_TestSeq_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export POA_TestSeq
  : public virtual PortableServer::ServantBase
{
protected:
  POA_TestSeq ();

public:
  /// Useful for template programming.
  typedef ::TestSeq _stub_type;
  typedef ::TestSeq_ptr _stub_ptr_type;
  typedef ::TestSeq_var _stub_var_type;

  POA_TestSeq (const POA_TestSeq& rhs) = default;
  virtual ~POA_TestSeq () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::TestSeq *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual ::f_unbounded * fattr () = 0;

  static void _get_fattr_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void fattr (
    const ::f_unbounded & fattr) = 0;

  static void _set_fattr_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_TestSeq_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_TestSeq_Direct_Proxy_Impl ();
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  _get_fattr (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  _set_fattr (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_rh_sh.cpp:49

class POA_TAO_AMH_TestSeqResponseHandler;
typedef POA_TAO_AMH_TestSeqResponseHandler *POA_TAO_AMH_TestSeqResponseHandler_ptr;

class TAO_IDL_TEST_STUB_Export POA_TAO_AMH_TestSeqResponseHandler
  : public TAO_AMH_Response_Handler,
    public ::AMH_TestSeqResponseHandler
{
public:
  POA_TAO_AMH_TestSeqResponseHandler () = default;
  virtual ~POA_TAO_AMH_TestSeqResponseHandler () = default;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void get_fattr (
    const ::f_unbounded & return_value) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void get_fattr_excep (
    ::AMH_TestSeqExceptionHolder * holder) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void set_fattr () override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void set_fattr_excep (
    ::AMH_TestSeqExceptionHolder * holder) override;
};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class POA_AMI_TestSeqHandler;
typedef POA_AMI_TestSeqHandler *POA_AMI_TestSeqHandler_ptr;

class _TAO_AMI_TestSeqHandler_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export POA_AMI_TestSeqHandler
  : public virtual POA_Messaging::ReplyHandler
{
protected:
  POA_AMI_TestSeqHandler ();

public:
  /// Useful for template programming.
  typedef ::AMI_TestSeqHandler _stub_type;
  typedef ::AMI_TestSeqHandler_ptr _stub_ptr_type;
  typedef ::AMI_TestSeqHandler_var _stub_var_type;

  POA_AMI_TestSeqHandler (const POA_AMI_TestSeqHandler& rhs) = default;
  virtual ~POA_AMI_TestSeqHandler () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::AMI_TestSeqHandler *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void get_fattr (
    const ::f_unbounded & ami_return_val) = 0;

  static void get_fattr_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void get_fattr_excep (
    ::Messaging::ExceptionHolder * excep_holder) = 0;

  static void get_fattr_excep_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void set_fattr () = 0;

  static void set_fattr_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void set_fattr_excep (
    ::Messaging::ExceptionHolder * excep_holder) = 0;

  static void set_fattr_excep_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_AMI_TestSeqHandler_Direct_Proxy_Impl
  : public virtual ::POA_Messaging::_TAO_ReplyHandler_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_AMI_TestSeqHandler_Direct_Proxy_Impl ();
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  get_fattr (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  get_fattr_excep (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  set_fattr (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  set_fattr_excep (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////



#include "old_sequenceS_T.h"


#include /**/ "ace/post.h"

#endif /* ifndef */

