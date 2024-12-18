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

#ifndef _TAO_IDL_OLD_ARRAYS_QJXBZR_H_
#define _TAO_IDL_OLD_ARRAYS_QJXBZR_H_

#include /**/ "ace/pre.h"

#include "old_arrayC.h"
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

  template<>
  class SArg_Traits< ::OldArray::str22_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::OldArray::str22_var,
            ::OldArray::str22_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::OldArray::boolarray_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::OldArray::boolarray_var,
            ::OldArray::boolarray_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::OldArray::char_17_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::OldArray::char_17_var,
            ::OldArray::char_17_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::OldArray::char_10_2_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::OldArray::char_10_2_var,
            ::OldArray::char_10_2_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::OldArray::A>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OldArray::A,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::OldArray::B>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OldArray::B,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::OldArray::C>
    : public
        Fixed_Size_SArg_Traits_T<
            ::OldArray::C,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::OldArray::A_matrix_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::OldArray::A_matrix_var,
            ::OldArray::A_matrix_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::OldArray::B_matrix_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::OldArray::B_matrix_var,
            ::OldArray::B_matrix_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::OldArray::C_matrix_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::OldArray::C_matrix_var,
            ::OldArray::C_matrix_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::OldArray::A_rmatrix_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::OldArray::A_rmatrix_var,
            ::OldArray::A_rmatrix_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_OLDARRAY_A_I__SARG_TRAITS_)
#define _OLDARRAY_A_I__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::OldArray::A_i>
    : public Object_SArg_Traits_T<
        ::OldArray::A_i_ptr,
        ::OldArray::A_i_var,
        ::OldArray::A_i_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_OLDARRAY_AMH_A_IEXCEPTIONHOLDER__SARG_TRAITS_)
#define _OLDARRAY_AMH_A_IEXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::OldArray::AMH_A_iExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::OldArray::AMH_A_iExceptionHolder *,
            ::OldArray::AMH_A_iExceptionHolder_var,
            ::OldArray::AMH_A_iExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_OLDARRAY_AMI_A_IHANDLER__SARG_TRAITS_)
#define _OLDARRAY_AMI_A_IHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::OldArray::AMI_A_iHandler>
    : public Object_SArg_Traits_T<
        ::OldArray::AMI_A_iHandler_ptr,
        ::OldArray::AMI_A_iHandler_var,
        ::OldArray::AMI_A_iHandler_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

namespace POA_OldArray
{
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_sh.cpp:45

  class AMH_A_i;
  typedef AMH_A_i *AMH_A_i_ptr;

  class TAO_IDL_TEST_STUB_Export AMH_A_i
    : public virtual PortableServer::ServantBase
  {
  protected:
    AMH_A_i ();
  
  public:
    AMH_A_i (const AMH_A_i& rhs);
    virtual ~AMH_A_i () = default;


    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest &req,
        TAO::Portable_Server::Servant_Upcall *_servant_upcall);
    
    OldArray::A_i *_this ();

  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_sh.cpp:126

  static void op_skel (
      TAO_ServerRequest &_tao_req,
      TAO::Portable_Server::Servant_Upcall *_tao_obj,
      TAO_ServantBase *_tao_servant_upcall);
    
  virtual void op (
      OldArray::AMH_A_iResponseHandler_ptr _tao_rh,
      const ::OldArray::A & a1,
      const ::OldArray::A & a2
    ) = 0;
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_sh.cpp:126

  static void op2_skel (
      TAO_ServerRequest &_tao_req,
      TAO::Portable_Server::Servant_Upcall *_tao_obj,
      TAO_ServantBase *_tao_servant_upcall);
    
  virtual void op2 (
      OldArray::AMH_A_iResponseHandler_ptr _tao_rh,
      const ::OldArray::str22 a1,
      const ::OldArray::str22 a2
    ) = 0;
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_sh.cpp:126

  static void op4_skel (
      TAO_ServerRequest &_tao_req,
      TAO::Portable_Server::Servant_Upcall *_tao_obj,
      TAO_ServantBase *_tao_servant_upcall);
    
  virtual void op4 (
      OldArray::AMH_A_iResponseHandler_ptr _tao_rh,
      const ::OldArray::A & a1,
      const ::OldArray::A & a2
    ) = 0;
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_sh.cpp:126

  static void _get_attribute_array_skel (
      TAO_ServerRequest &_tao_req,
      TAO::Portable_Server::Servant_Upcall *_tao_obj,
      TAO_ServantBase *_tao_servant_upcall);
    
  virtual void attribute_array (
      OldArray::AMH_A_iResponseHandler_ptr _tao_rh
    ) = 0;
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_sh.cpp:126

  static void _set_attribute_array_skel (
      TAO_ServerRequest &_tao_req,
      TAO::Portable_Server::Servant_Upcall *_tao_obj,
      TAO_ServantBase *_tao_servant_upcall);
    
  virtual void attribute_array (
      OldArray::AMH_A_iResponseHandler_ptr _tao_rh,
      const ::OldArray::str22 attribute_array
    ) = 0;
  
};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class A_i;
typedef A_i *A_i_ptr;

class _TAO_A_i_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export A_i
  : public virtual PortableServer::ServantBase
{
protected:
  A_i ();

public:
  /// Useful for template programming.
  typedef ::OldArray::A_i _stub_type;
  typedef ::OldArray::A_i_ptr _stub_ptr_type;
  typedef ::OldArray::A_i_var _stub_var_type;

  A_i (const A_i& rhs) = default;
  virtual ~A_i () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::OldArray::A_i *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual ::OldArray::A op (
    const ::OldArray::A & a1,
    ::OldArray::A & a2,
    ::OldArray::A_out a3) = 0;

  static void op_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual ::OldArray::str22_slice * op2 (
    const ::OldArray::str22 a1,
    ::OldArray::str22 a2,
    ::OldArray::str22_out a3) = 0;

  static void op2_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual ::OldArray::A_matrix_slice * op4 (
    const ::OldArray::A & a1,
    ::OldArray::A & a2,
    ::OldArray::A_out a3) = 0;

  static void op4_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual ::OldArray::str22_slice * attribute_array () = 0;

  static void _get_attribute_array_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void attribute_array (
    const ::OldArray::str22 attribute_array) = 0;

  static void _set_attribute_array_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_A_i_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_A_i_Direct_Proxy_Impl ();
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  op (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  op2 (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  op4 (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  _get_attribute_array (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  _set_attribute_array (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_rh_sh.cpp:49

class TAO_AMH_A_iResponseHandler;
typedef TAO_AMH_A_iResponseHandler *TAO_AMH_A_iResponseHandler_ptr;

class TAO_IDL_TEST_STUB_Export TAO_AMH_A_iResponseHandler
  : public TAO_AMH_Response_Handler,
    public ::OldArray::AMH_A_iResponseHandler
{
public:
  TAO_AMH_A_iResponseHandler () = default;
  virtual ~TAO_AMH_A_iResponseHandler () = default;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void op (
    const ::OldArray::A & return_value,
    const ::OldArray::A & a2,
    const ::OldArray::A & a3) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void op_excep (
    ::OldArray::AMH_A_iExceptionHolder * holder) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void op2 (
    const ::OldArray::str22 return_value,
    const ::OldArray::str22 a2,
    const ::OldArray::str22 a3) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void op2_excep (
    ::OldArray::AMH_A_iExceptionHolder * holder) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void op4 (
    const ::OldArray::A_matrix return_value,
    const ::OldArray::A & a2,
    const ::OldArray::A & a3) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void op4_excep (
    ::OldArray::AMH_A_iExceptionHolder * holder) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void get_attribute_array (
    const ::OldArray::str22 return_value) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void get_attribute_array_excep (
    ::OldArray::AMH_A_iExceptionHolder * holder) override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void set_attribute_array () override;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_sh.cpp:59

  void set_attribute_array_excep (
    ::OldArray::AMH_A_iExceptionHolder * holder) override;
};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class AMI_A_iHandler;
typedef AMI_A_iHandler *AMI_A_iHandler_ptr;

class _TAO_AMI_A_iHandler_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export AMI_A_iHandler
  : public virtual POA_Messaging::ReplyHandler
{
protected:
  AMI_A_iHandler ();

public:
  /// Useful for template programming.
  typedef ::OldArray::AMI_A_iHandler _stub_type;
  typedef ::OldArray::AMI_A_iHandler_ptr _stub_ptr_type;
  typedef ::OldArray::AMI_A_iHandler_var _stub_var_type;

  AMI_A_iHandler (const AMI_A_iHandler& rhs) = default;
  virtual ~AMI_A_iHandler () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::OldArray::AMI_A_iHandler *_this ();
  
  virtual const char* _interface_repository_id () const;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void op (
    const ::OldArray::A & ami_return_val,
    const ::OldArray::A & a2,
    const ::OldArray::A & a3) = 0;

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
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void op2 (
    const ::OldArray::str22 ami_return_val,
    const ::OldArray::str22 a2,
    const ::OldArray::str22 a3) = 0;

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

  virtual void op4 (
    const ::OldArray::A_matrix ami_return_val,
    const ::OldArray::A & a2,
    const ::OldArray::A & a3) = 0;

  static void op4_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void op4_excep (
    ::Messaging::ExceptionHolder * excep_holder) = 0;

  static void op4_excep_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void get_attribute_array (
    const ::OldArray::str22 ami_return_val) = 0;

  static void get_attribute_array_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void get_attribute_array_excep (
    ::Messaging::ExceptionHolder * excep_holder) = 0;

  static void get_attribute_array_excep_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void set_attribute_array () = 0;

  static void set_attribute_array_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_sh.cpp:35

  virtual void set_attribute_array_excep (
    ::Messaging::ExceptionHolder * excep_holder) = 0;

  static void set_attribute_array_excep_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_AMI_A_iHandler_Direct_Proxy_Impl
  : public virtual ::POA_Messaging::_TAO_ReplyHandler_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_AMI_A_iHandler_Direct_Proxy_Impl ();
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
  op4 (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  op4_excep (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  get_attribute_array (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  get_attribute_array_excep (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  set_attribute_array (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/proxy_impl_xh.cpp:25

  static void
  set_attribute_array_excep (
    TAO_Abstract_ServantBase *servant, TAO::Argument **args);
  
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module OldArray

#include "old_arrayS_T.h"


#include /**/ "ace/post.h"

#endif /* ifndef */

