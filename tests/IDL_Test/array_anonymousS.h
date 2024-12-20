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

#ifndef _TAO_IDL_ARRAY_ANONYMOUSS_KPVZPL_H_
#define _TAO_IDL_ARRAY_ANONYMOUSS_KPVZPL_H_

#include /**/ "ace/pre.h"

#include "array_anonymousC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Fixed_Array_SArgument_T.h"
#include "tao/PortableServer/Var_Array_SArgument_T.h"
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

  

#if !defined (_TDEF__SARG_TRAITS_)
#define _TDEF__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::tdef>
    : public Object_SArg_Traits_T<
        ::tdef_ptr,
        ::tdef_var,
        ::tdef_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */

  template<>
  class SArg_Traits< ::tdef::Bytes_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::tdef::Bytes_var,
            ::tdef::Bytes_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::tdef::bytes_or_longs>
    : public
        Fixed_Size_SArg_Traits_T<
            ::tdef::bytes_or_longs,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_AMH_TDEFEXCEPTIONHOLDER__SARG_TRAITS_)
#define _AMH_TDEFEXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::AMH_tdefExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::AMH_tdefExceptionHolder *,
            ::AMH_tdefExceptionHolder_var,
            ::AMH_tdefExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_AMI_TDEFHANDLER__SARG_TRAITS_)
#define _AMI_TDEFHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::AMI_tdefHandler>
    : public Object_SArg_Traits_T<
        ::AMI_tdefHandler_ptr,
        ::AMI_tdefHandler_var,
        ::AMI_tdefHandler_out,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::ABCModule::RmtPhysicalInfo>
    : public
        Fixed_Size_SArg_Traits_T<
            ::ABCModule::RmtPhysicalInfo,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::ABCModule::bbbBubBubBubBaby>
    : public
        Fixed_Size_SArg_Traits_T<
            ::ABCModule::bbbBubBubBubBaby,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_sh.cpp:45

class POA_AMH_tdef;
typedef POA_AMH_tdef *POA_AMH_tdef_ptr;

class TAO_IDL_TEST_STUB_Export POA_AMH_tdef
  : public virtual PortableServer::ServantBase
{
protected:
  POA_AMH_tdef ();

public:
  POA_AMH_tdef (const POA_AMH_tdef& rhs);
  virtual ~POA_AMH_tdef () = default;


  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest &req,
      TAO::Portable_Server::Servant_Upcall *_servant_upcall);
  
  tdef *_this ();

virtual const char* _interface_repository_id () const;
};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class POA_tdef;
typedef POA_tdef *POA_tdef_ptr;

class _TAO_tdef_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export POA_tdef
  : public virtual PortableServer::ServantBase
{
protected:
  POA_tdef ();

public:
  /// Useful for template programming.
  typedef ::tdef _stub_type;
  typedef ::tdef_ptr _stub_ptr_type;
  typedef ::tdef_var _stub_var_type;

  POA_tdef (const POA_tdef& rhs) = default;
  virtual ~POA_tdef () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::tdef *_this ();
  
  virtual const char* _interface_repository_id () const;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_tdef_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_tdef_Direct_Proxy_Impl ();
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_rh_sh.cpp:49

class POA_TAO_AMH_tdefResponseHandler;
typedef POA_TAO_AMH_tdefResponseHandler *POA_TAO_AMH_tdefResponseHandler_ptr;

class TAO_IDL_TEST_STUB_Export POA_TAO_AMH_tdefResponseHandler
  : public TAO_AMH_Response_Handler,
    public ::AMH_tdefResponseHandler
{
public:
  POA_TAO_AMH_tdefResponseHandler () = default;
  virtual ~POA_TAO_AMH_tdefResponseHandler () = default;
};


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_sh.cpp:72



class POA_AMI_tdefHandler;
typedef POA_AMI_tdefHandler *POA_AMI_tdefHandler_ptr;

class _TAO_AMI_tdefHandler_Direct_Proxy_Impl;

class TAO_IDL_TEST_STUB_Export POA_AMI_tdefHandler
  : public virtual POA_Messaging::ReplyHandler
{
protected:
  POA_AMI_tdefHandler ();

public:
  /// Useful for template programming.
  typedef ::AMI_tdefHandler _stub_type;
  typedef ::AMI_tdefHandler_ptr _stub_ptr_type;
  typedef ::AMI_tdefHandler_var _stub_var_type;

  POA_AMI_tdefHandler (const POA_AMI_tdefHandler& rhs) = default;
  virtual ~POA_AMI_tdefHandler () = default;

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::AMI_tdefHandler *_this ();
  
  virtual const char* _interface_repository_id () const;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/direct_proxy_impl_sh.cpp:23



///////////////////////////////////////////////////////////////////////
//                    Direct  Impl. Declaration
//

class TAO_IDL_TEST_STUB_Export _TAO_AMI_tdefHandler_Direct_Proxy_Impl
  : public virtual ::POA_Messaging::_TAO_ReplyHandler_Direct_Proxy_Impl
{
public:
  virtual ~_TAO_AMI_tdefHandler_Direct_Proxy_Impl ();
};

//
//                Direct  Proxy Impl. Declaration
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

namespace POA_ABCModule
{
  


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module ABCModule

#include "array_anonymousS_T.h"


#include /**/ "ace/post.h"

#endif /* ifndef */

