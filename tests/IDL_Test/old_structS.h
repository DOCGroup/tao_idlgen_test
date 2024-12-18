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

#ifndef _TAO_IDL_OLD_STRUCTS_BDAOBU_H_
#define _TAO_IDL_OLD_STRUCTS_BDAOBU_H_

#include /**/ "ace/pre.h"

#include "old_structC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
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

  template<>
  class SArg_Traits< ::string_20_tag>
    : public
        Var_Array_SArg_Traits_T<
            ::string_20_out,
            ::string_20_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::bar1>
    : public
        Var_Size_SArg_Traits_T<
            ::bar1,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::bar2>
    : public
        Var_Size_SArg_Traits_T<
            ::bar2,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::bar3>
    : public
        Fixed_Size_SArg_Traits_T<
            ::bar3,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::bar4>
    : public
        Var_Size_SArg_Traits_T<
            ::bar4,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_FOO1__SARG_TRAITS_)
#define _FOO1__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::foo1>
    : public Object_SArg_Traits_T<
        ::foo1_ptr,
        ::foo1_var,
        ::foo1_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_AMH_FOO1EXCEPTIONHOLDER__SARG_TRAITS_)
#define _AMH_FOO1EXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::AMH_foo1ExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::AMH_foo1ExceptionHolder *,
            ::AMH_foo1ExceptionHolder_var,
            ::AMH_foo1ExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_AMI_FOO1HANDLER__SARG_TRAITS_)
#define _AMI_FOO1HANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::AMI_foo1Handler>
    : public Object_SArg_Traits_T<
        ::AMI_foo1Handler_ptr,
        ::AMI_foo1Handler_var,
        ::AMI_foo1Handler_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_FOO2__SARG_TRAITS_)
#define _FOO2__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::foo2>
    : public Object_SArg_Traits_T<
        ::foo2_ptr,
        ::foo2_var,
        ::foo2_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_AMH_FOO2EXCEPTIONHOLDER__SARG_TRAITS_)
#define _AMH_FOO2EXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::AMH_foo2ExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::AMH_foo2ExceptionHolder *,
            ::AMH_foo2ExceptionHolder_var,
            ::AMH_foo2ExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_AMI_FOO2HANDLER__SARG_TRAITS_)
#define _AMI_FOO2HANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::AMI_foo2Handler>
    : public Object_SArg_Traits_T<
        ::AMI_foo2Handler_ptr,
        ::AMI_foo2Handler_var,
        ::AMI_foo2Handler_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::CellPos>
    : public
        Fixed_Size_SArg_Traits_T<
            ::CellPos,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::CellPos2>
    : public
        Fixed_Size_SArg_Traits_T<
            ::CellPos2,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::CellPos3>
    : public
        Fixed_Size_SArg_Traits_T<
            ::CellPos3,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_sh.cpp:45

class POA_AMH_foo1;
typedef POA_AMH_foo1 *POA_AMH_foo1_ptr;

class TAO_IDL_TEST_STUB_Export POA_AMH_foo1
  : public virtual PortableServer::ServantBase
{
protected:
  POA_AMH_foo1 ();

public:
  POA_AMH_foo1 (const POA_AMH_foo1& rhs);
  virtual ~POA_AMH_foo1 () = default;


  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest &req,
      TAO::Portable_Server::Servant_Upcall *_servant_upcall);
  
  foo1 *_this ();

virtual const char* _interface_repository_id () const;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_sh.cpp:126

static void op_skel (
    TAO_ServerRequest &_tao_req,
    TAO::Portable_Server::Servant_Upcall *_tao_obj,
    TAO_ServantBase *_tao_servant_upcall);
  
virtual void op (
    AMH_foo1ResponseHandler_ptr _tao_rh,
    const ::bar1 & a
  ) = 0;

};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class POA_foo1;
typedef POA_foo1 *POA_foo1_ptr;

class _TAO_foo1_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export POA_foo1
  : public virtual PortableServer::ServantBase
{
protected:
  POA_foo1 ();

public:
  /// Useful for template programming.
  typedef ::foo1 _stub_type;
  typedef ::foo1_ptr _stub_ptr_type;
  typedef ::foo1_var _stub_var_type;

  POA_foo1 (const POA_foo1& rhs) = default;
  virtual ~POA_foo1 () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::foo1 *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual ::CORBA::Long op (
    const ::bar1 & a,
    ::bar2_out b) = 0;

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

class TAO_IDL_TEST_STUB_Export _TAO_foo1_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_foo1_Direct_Proxy_Impl ();
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

class POA_TAO_AMH_foo1ResponseHandler;
typedef POA_TAO_AMH_foo1ResponseHandler *POA_TAO_AMH_foo1ResponseHandler_ptr;

class TAO_IDL_TEST_STUB_Export POA_TAO_AMH_foo1ResponseHandler
  : public TAO_AMH_Response_Handler,
    public ::AMH_foo1ResponseHandler
{
public:
  POA_TAO_AMH_foo1ResponseHandler () = default;
  virtual ~POA_TAO_AMH_foo1ResponseHandler () = default;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void op (
    ::CORBA::Long return_value,
    const ::bar2 & b) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void op_excep (
    ::AMH_foo1ExceptionHolder * holder) override;
};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class POA_AMI_foo1Handler;
typedef POA_AMI_foo1Handler *POA_AMI_foo1Handler_ptr;

class _TAO_AMI_foo1Handler_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export POA_AMI_foo1Handler
  : public virtual POA_Messaging::ReplyHandler
{
protected:
  POA_AMI_foo1Handler ();

public:
  /// Useful for template programming.
  typedef ::AMI_foo1Handler _stub_type;
  typedef ::AMI_foo1Handler_ptr _stub_ptr_type;
  typedef ::AMI_foo1Handler_var _stub_var_type;

  POA_AMI_foo1Handler (const POA_AMI_foo1Handler& rhs) = default;
  virtual ~POA_AMI_foo1Handler () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::AMI_foo1Handler *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void op (
    ::CORBA::Long ami_return_val,
    const ::bar2 & b) = 0;

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

class TAO_IDL_TEST_STUB_Export _TAO_AMI_foo1Handler_Direct_Proxy_Impl
  : public virtual ::POA_Messaging::_TAO_ReplyHandler_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_AMI_foo1Handler_Direct_Proxy_Impl ();
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
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_sh.cpp:45

class POA_AMH_foo2;
typedef POA_AMH_foo2 *POA_AMH_foo2_ptr;

class TAO_IDL_TEST_STUB_Export POA_AMH_foo2
  : public virtual POA_AMH_foo1
    
{
protected:
  POA_AMH_foo2 ();

public:
  POA_AMH_foo2 (const POA_AMH_foo2& rhs);
  virtual ~POA_AMH_foo2 () = default;


  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest &req,
      TAO::Portable_Server::Servant_Upcall *_servant_upcall);
  
  foo2 *_this ();

virtual const char* _interface_repository_id () const;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_sh.cpp:126

static void op2_skel (
    TAO_ServerRequest &_tao_req,
    TAO::Portable_Server::Servant_Upcall *_tao_obj,
    TAO_ServantBase *_tao_servant_upcall);
  
virtual void op2 (
    AMH_foo2ResponseHandler_ptr _tao_rh,
    const ::bar2 & a
  ) = 0;

// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_sh.cpp:126

static void op3_skel (
    TAO_ServerRequest &_tao_req,
    TAO::Portable_Server::Servant_Upcall *_tao_obj,
    TAO_ServantBase *_tao_servant_upcall);
  
virtual void op3 (
    AMH_foo2ResponseHandler_ptr _tao_rh,
    ::CORBA::Long a
  ) = 0;

};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class POA_foo2;
typedef POA_foo2 *POA_foo2_ptr;

class _TAO_foo2_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export POA_foo2
  : public virtual POA_foo1
{
protected:
  POA_foo2 ();

public:
  /// Useful for template programming.
  typedef ::foo2 _stub_type;
  typedef ::foo2_ptr _stub_ptr_type;
  typedef ::foo2_var _stub_var_type;

  POA_foo2 (const POA_foo2& rhs) = default;
  virtual ~POA_foo2 () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::foo2 *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual ::bar1 * op2 (
    const ::bar2 & a) = 0;

  static void op2_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual ::CORBA::Long op3 (
    ::CORBA::Long a,
    ::CORBA::Char_out b) = 0;

  static void op3_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_foo2_Direct_Proxy_Impl
  : public virtual ::_TAO_foo1_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_foo2_Direct_Proxy_Impl ();
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  op2 (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  op3 (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_rh_sh.cpp:49

class POA_TAO_AMH_foo2ResponseHandler;
typedef POA_TAO_AMH_foo2ResponseHandler *POA_TAO_AMH_foo2ResponseHandler_ptr;

class TAO_IDL_TEST_STUB_Export POA_TAO_AMH_foo2ResponseHandler
  : public TAO_AMH_Response_Handler,
    public ::AMH_foo2ResponseHandler
{
public:
  POA_TAO_AMH_foo2ResponseHandler () = default;
  virtual ~POA_TAO_AMH_foo2ResponseHandler () = default;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void op2 (
    const ::bar1 & return_value) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void op2_excep (
    ::AMH_foo2ExceptionHolder * holder) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void op3 (
    ::CORBA::Long return_value,
    ::CORBA::Char b) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void op3_excep (
    ::AMH_foo2ExceptionHolder * holder) override;
};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class POA_AMI_foo2Handler;
typedef POA_AMI_foo2Handler *POA_AMI_foo2Handler_ptr;

class _TAO_AMI_foo2Handler_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export POA_AMI_foo2Handler
  : public virtual POA_AMI_foo1Handler
{
protected:
  POA_AMI_foo2Handler ();

public:
  /// Useful for template programming.
  typedef ::AMI_foo2Handler _stub_type;
  typedef ::AMI_foo2Handler_ptr _stub_ptr_type;
  typedef ::AMI_foo2Handler_var _stub_var_type;

  POA_AMI_foo2Handler (const POA_AMI_foo2Handler& rhs) = default;
  virtual ~POA_AMI_foo2Handler () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::AMI_foo2Handler *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void op2 (
    const ::bar1 & ami_return_val) = 0;

  static void op2_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void op2_excep (
    ::Messaging::ExceptionHolder * excep_holder) = 0;

  static void op2_excep_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void op3 (
    ::CORBA::Long ami_return_val,
    ::CORBA::Char b) = 0;

  static void op3_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void op3_excep (
    ::Messaging::ExceptionHolder * excep_holder) = 0;

  static void op3_excep_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_AMI_foo2Handler_Direct_Proxy_Impl
  : public virtual ::_TAO_AMI_foo1Handler_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_AMI_foo2Handler_Direct_Proxy_Impl ();
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  op2 (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  op2_excep (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  op3 (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  op3_excep (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////



#include "old_structS_T.h"


#include /**/ "ace/post.h"

#endif /* ifndef */

