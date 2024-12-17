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
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:631

#ifndef _TAO_IDL_BUG_2582_REGRESSIONS_2HN2TC_CPP_
#define _TAO_IDL_BUG_2582_REGRESSIONS_2HN2TC_CPP_


#include "Bug_2582_RegressionS.h"
#include "tao/PortableServer/Operation_Table_Perfect_Hash.h"
#include "tao/PortableServer/Direct_Collocation_Upcall_Wrapper.h"
#include "tao/Exception_Data.h"
#include "tao/Messaging/ExceptionHolder_i.h"
#include "tao/PortableServer/Upcall_Command.h"
#include "tao/PortableServer/Upcall_Wrapper.h"
#include "tao/TAO_Server_Request.h"
#include "tao/ORB_Core.h"
#include "tao/Profile.h"
#include "tao/Stub.h"
#include "tao/IFR_Client_Adapter.h"
#include "tao/Object_T.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/DynamicC.h"
#include "tao/CDR.h"
#include "tao/operation_details.h"
#include "tao/PortableInterceptor.h"
#include "tao/Thread_Lane_Resources.h"
#include "tao/Buffer_Allocator_T.h"
#include "tao/Messaging/AMH_Skeletons.h"
#include "ace/Auto_Functor.h"
#include "ace/Dynamic_Service.h"
#include "ace/Malloc_Allocator.h"
#include "cstring"
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:1853

class TAO_AMH_FieldDevice_T_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_AMH_FieldDevice_T_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_AMH_FieldDevice_T_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static constexpr unsigned char asso_values[] =
    {
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19,  5, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19,  0, 19,  0, 19, 19,
      0,  5, 19,  0, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19,  0, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_AMH_FieldDevice_T_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 7,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 18,
      HASH_VALUE_RANGE = 14,
      DUPLICATES = 0,
      WORDLIST_SIZE = 12
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", std::addressof(TAO_AMH_Skeletons::_is_a_amh_skel), nullptr},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", std::addressof(TAO_AMH_Skeletons::_component_amh_skel), nullptr},
      {"getEncoding", std::addressof(POA_AMH_FieldDevice_T::getEncoding_skel), std::addressof(_TAO_FieldDevice_T_Direct_Proxy_Impl::getEncoding)},
      {"",0,0},
      {"_non_existent", std::addressof(TAO_AMH_Skeletons::_non_existent_amh_skel), nullptr},
      {"_repository_id", std::addressof(TAO_AMH_Skeletons::_repository_id_amh_skel), nullptr},
      {"_interface", std::addressof(TAO_AMH_Skeletons::_interface_amh_skel), nullptr},
      {"",0,0},{"",0,0},
      {"getEncodingID", std::addressof(POA_AMH_FieldDevice_T::getEncodingID_skel), std::addressof(_TAO_FieldDevice_T_Direct_Proxy_Impl::getEncodingID)},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int const key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_AMH_FieldDevice_T_Perfect_Hash_OpTable tao_AMH_FieldDevice_T_optable;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_AMH_FieldDevice_T::POA_AMH_FieldDevice_T ()
  : TAO_ServantBase ()
{
  this->optable_ = std::addressof(tao_AMH_FieldDevice_T_optable);
}

POA_AMH_FieldDevice_T::POA_AMH_FieldDevice_T (const POA_AMH_FieldDevice_T& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_ss.cpp:303

void
POA_AMH_FieldDevice_T::getEncodingID_skel (
    TAO_ServerRequest & _tao_server_request,
    TAO::Portable_Server::Servant_Upcall * /* context */,
    TAO_ServantBase * _tao_servant)
{
  POA_AMH_FieldDevice_T * const _tao_impl =
    dynamic_cast<POA_AMH_FieldDevice_T *> (_tao_servant);
  if (!_tao_impl)
    throw ::CORBA::INTERNAL ();
  
  TAO_ORB_Core *orb_core =
    _tao_server_request.orb ()->orb_core ();
  
  TAO_AMH_BUFFER_ALLOCATOR* amh_allocator =
    orb_core->lane_resources ().amh_response_handler_allocator ();
  
  TAO::TAO_Buffer_Allocator<
      POA_TAO_AMH_FieldDevice_TResponseHandler,
      TAO_AMH_BUFFER_ALLOCATOR
    > buffer_allocator (amh_allocator);
  
  POA_TAO_AMH_FieldDevice_TResponseHandler_ptr _tao_rh_ptr = 
    buffer_allocator.allocate();
  
  if (!_tao_rh_ptr) 
    throw ::CORBA::NO_MEMORY ();
  
  _tao_rh_ptr->init (_tao_server_request, amh_allocator);
  
  ACE_Utils::Auto_Functor <POA_TAO_AMH_FieldDevice_TResponseHandler, TAO::ARH_Refcount_Functor> safe_rd_(_tao_rh_ptr);
  
  _tao_impl->getEncodingID (
      safe_rd_.get ()
    );
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_ss.cpp:303

void
POA_AMH_FieldDevice_T::getEncoding_skel (
    TAO_ServerRequest & _tao_server_request,
    TAO::Portable_Server::Servant_Upcall * /* context */,
    TAO_ServantBase * _tao_servant)
{
  POA_AMH_FieldDevice_T * const _tao_impl =
    dynamic_cast<POA_AMH_FieldDevice_T *> (_tao_servant);
  if (!_tao_impl)
    throw ::CORBA::INTERNAL ();
  
  TAO_ORB_Core *orb_core =
    _tao_server_request.orb ()->orb_core ();
  
  TAO_AMH_BUFFER_ALLOCATOR* amh_allocator =
    orb_core->lane_resources ().amh_response_handler_allocator ();
  
  TAO::TAO_Buffer_Allocator<
      POA_TAO_AMH_FieldDevice_TResponseHandler,
      TAO_AMH_BUFFER_ALLOCATOR
    > buffer_allocator (amh_allocator);
  
  POA_TAO_AMH_FieldDevice_TResponseHandler_ptr _tao_rh_ptr = 
    buffer_allocator.allocate();
  
  if (!_tao_rh_ptr) 
    throw ::CORBA::NO_MEMORY ();
  
  _tao_rh_ptr->init (_tao_server_request, amh_allocator);
  
  ACE_Utils::Auto_Functor <POA_TAO_AMH_FieldDevice_TResponseHandler, TAO::ARH_Refcount_Functor> safe_rd_(_tao_rh_ptr);
  
  _tao_impl->getEncoding (
      safe_rd_.get ()
    );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:155





::CORBA::Boolean POA_AMH_FieldDevice_T::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:FieldDevice_T:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_AMH_FieldDevice_T::_interface_repository_id () const
{
  return "IDL:FieldDevice_T:1.0";
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_ss.cpp:106

void
POA_AMH_FieldDevice_T::_dispatch (
    TAO_ServerRequest &req,
    TAO::Portable_Server::Servant_Upcall *context)
{
  this->asynchronous_upcall_dispatch (req,context,this);
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_ss.cpp:64

FieldDevice_T*
POA_AMH_FieldDevice_T::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::FieldDevice_T>::unchecked_narrow (obj.in ());
      
    }
  return {};
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:1853

class TAO_FieldDevice_T_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_FieldDevice_T_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_FieldDevice_T_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static constexpr unsigned char asso_values[] =
    {
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19,  5, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19,  0, 19,  0, 19, 19,
      0,  5, 19,  0, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19,  0, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_FieldDevice_T_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 7,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 18,
      HASH_VALUE_RANGE = 14,
      DUPLICATES = 0,
      WORDLIST_SIZE = 12
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", std::addressof(TAO_ServantBase::_is_a_thru_poa_skel), nullptr},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", std::addressof(TAO_ServantBase::_component_thru_poa_skel), nullptr},
      {"getEncoding", std::addressof(POA_FieldDevice_T::getEncoding_skel), std::addressof(_TAO_FieldDevice_T_Direct_Proxy_Impl::getEncoding)},
      {"",0,0},
      {"_non_existent", std::addressof(TAO_ServantBase::_non_existent_thru_poa_skel), nullptr},
      {"_repository_id", std::addressof(TAO_ServantBase::_repository_id_thru_poa_skel), nullptr},
      {"_interface", std::addressof(TAO_ServantBase::_interface_skel), nullptr},
      {"",0,0},{"",0,0},
      {"getEncodingID", std::addressof(POA_FieldDevice_T::getEncodingID_skel), std::addressof(_TAO_FieldDevice_T_Direct_Proxy_Impl::getEncodingID)},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int const key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_FieldDevice_T_Perfect_Hash_OpTable tao_FieldDevice_T_optable;

///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

_TAO_FieldDevice_T_Direct_Proxy_Impl::~_TAO_FieldDevice_T_Direct_Proxy_Impl ()
{
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
_TAO_FieldDevice_T_Direct_Proxy_Impl::getEncodingID (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_FieldDevice_T_ptr _tao_ptr = 
    dynamic_cast<POA_FieldDevice_T_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  ((TAO::Arg_Traits< ::EncodingID_T>::ret_val *) args[0])->arg () =
    _tao_ptr->getEncodingID (
        );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
_TAO_FieldDevice_T_Direct_Proxy_Impl::getEncoding (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_FieldDevice_T_ptr _tao_ptr = 
    dynamic_cast<POA_FieldDevice_T_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  ((TAO::Arg_Traits< ::Encoding_T>::ret_val *) args[0])->arg () =
    _tao_ptr->getEncoding (
        );
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_FieldDevice_T::POA_FieldDevice_T ()
  : TAO_ServantBase ()
{
  this->optable_ = std::addressof(tao_FieldDevice_T_optable);
}

POA_FieldDevice_T::POA_FieldDevice_T (const POA_FieldDevice_T& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/upcall_command_ss.cpp:79

class getEncodingID_FieldDevice_T
  : public TAO::Upcall_Command
{
public:
  inline getEncodingID_FieldDevice_T (
    POA_FieldDevice_T * servant,
    TAO_Operation_Details const * operation_details,
    TAO::Argument * const args[])
    : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
  {
  }

  void execute () override
  {
    TAO::SArg_Traits< ::EncodingID_T>::ret_arg_type retval =
      TAO::Portable_Server::get_ret_arg< ::EncodingID_T> (
        this->operation_details_,
        this->args_);
    
    retval =
      this->servant_->getEncodingID ();
  }

private:
  POA_FieldDevice_T * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_FieldDevice_T::getEncodingID_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< ::EncodingID_T>::ret_val retval;

  TAO::Argument * const args[] =
    {
      std::addressof(retval)
    };
  
  POA_FieldDevice_T * const impl =
    dynamic_cast<POA_FieldDevice_T *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  getEncodingID_FieldDevice_T command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , 1
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , nullptr
                         , 0
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/upcall_command_ss.cpp:79

class getEncoding_FieldDevice_T
  : public TAO::Upcall_Command
{
public:
  inline getEncoding_FieldDevice_T (
    POA_FieldDevice_T * servant,
    TAO_Operation_Details const * operation_details,
    TAO::Argument * const args[])
    : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
  {
  }

  void execute () override
  {
    TAO::SArg_Traits< ::Encoding_T>::ret_arg_type retval =
      TAO::Portable_Server::get_ret_arg< ::Encoding_T> (
        this->operation_details_,
        this->args_);
    
    retval =
      this->servant_->getEncoding ();
  }

private:
  POA_FieldDevice_T * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_FieldDevice_T::getEncoding_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< ::Encoding_T>::ret_val retval;

  TAO::Argument * const args[] =
    {
      std::addressof(retval)
    };
  
  POA_FieldDevice_T * const impl =
    dynamic_cast<POA_FieldDevice_T *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  getEncoding_FieldDevice_T command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , 1
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , nullptr
                         , 0
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:155





::CORBA::Boolean POA_FieldDevice_T::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:FieldDevice_T:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_FieldDevice_T::_interface_repository_id () const
{
  return "IDL:FieldDevice_T:1.0";
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:394



void POA_FieldDevice_T::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:354



FieldDevice_T *
POA_FieldDevice_T::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean const _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::FieldDevice_T>::unchecked_narrow (obj.in ());
    }
  return {};
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_rh_ss.cpp:67


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_ss.cpp:76

void
POA_TAO_AMH_FieldDevice_TResponseHandler::getEncodingID (
  ::EncodingID2_T return_value)
{
  this->_tao_rh_init_reply ();

  if (!(
      (_tao_out << return_value)
    ))
    {
      throw ::CORBA::MARSHAL();
    }
  
  this->_tao_rh_send_reply ();
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_ss.cpp:76

void
POA_TAO_AMH_FieldDevice_TResponseHandler::getEncodingID_excep (
  ::AMH_FieldDevice_TExceptionHolder * holder)
{
  try
  {
    holder->raise_getEncodingID ();
  }
  catch (const ::CORBA::Exception& ex)
  {
    this->_tao_rh_send_exception (ex);
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_ss.cpp:76

void
POA_TAO_AMH_FieldDevice_TResponseHandler::getEncoding (
  const ::Encoding_T & return_value)
{
  this->_tao_rh_init_reply ();

  if (!(
      (_tao_out << return_value)
    ))
    {
      throw ::CORBA::MARSHAL();
    }
  
  this->_tao_rh_send_reply ();
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_ss.cpp:76

void
POA_TAO_AMH_FieldDevice_TResponseHandler::getEncoding_excep (
  ::AMH_FieldDevice_TExceptionHolder * holder)
{
  try
  {
    holder->raise_getEncoding ();
  }
  catch (const ::CORBA::Exception& ex)
  {
    this->_tao_rh_send_exception (ex);
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:1853

class TAO_AMI_FieldDevice_THandler_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_AMI_FieldDevice_THandler_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_AMI_FieldDevice_THandler_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static constexpr unsigned char asso_values[] =
    {
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20,  5, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20,  0, 20,  0, 20, 20,
      0,  5, 20,  0, 20, 20, 20, 20, 20, 20,
     20, 20,  0, 20, 20, 20,  0, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_AMI_FieldDevice_THandler_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 9,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 19,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 19,
      HASH_VALUE_RANGE = 15,
      DUPLICATES = 0,
      WORDLIST_SIZE = 14
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", std::addressof(TAO_ServantBase::_is_a_thru_poa_skel), nullptr},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", std::addressof(TAO_ServantBase::_component_thru_poa_skel), nullptr},
      {"getEncoding", std::addressof(POA_AMI_FieldDevice_THandler::getEncoding_skel), std::addressof(_TAO_AMI_FieldDevice_THandler_Direct_Proxy_Impl::getEncoding)},
      {"",0,0},
      {"_non_existent", std::addressof(TAO_ServantBase::_non_existent_thru_poa_skel), nullptr},
      {"_repository_id", std::addressof(TAO_ServantBase::_repository_id_thru_poa_skel), nullptr},
      {"_interface", std::addressof(TAO_ServantBase::_interface_skel), nullptr},
      {"",0,0},
      {"getEncoding_excep", std::addressof(POA_AMI_FieldDevice_THandler::getEncoding_excep_skel), std::addressof(_TAO_AMI_FieldDevice_THandler_Direct_Proxy_Impl::getEncoding_excep)},
      {"getEncodingID", std::addressof(POA_AMI_FieldDevice_THandler::getEncodingID_skel), std::addressof(_TAO_AMI_FieldDevice_THandler_Direct_Proxy_Impl::getEncodingID)},
      {"getEncodingID_excep", std::addressof(POA_AMI_FieldDevice_THandler::getEncodingID_excep_skel), std::addressof(_TAO_AMI_FieldDevice_THandler_Direct_Proxy_Impl::getEncodingID_excep)},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int const key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_AMI_FieldDevice_THandler_Perfect_Hash_OpTable tao_AMI_FieldDevice_THandler_optable;

///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

_TAO_AMI_FieldDevice_THandler_Direct_Proxy_Impl::~_TAO_AMI_FieldDevice_THandler_Direct_Proxy_Impl ()
{
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
_TAO_AMI_FieldDevice_THandler_Direct_Proxy_Impl::getEncodingID (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_AMI_FieldDevice_THandler_ptr _tao_ptr = 
    dynamic_cast<POA_AMI_FieldDevice_THandler_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->getEncodingID (
        ((TAO::Arg_Traits< ::EncodingID_T>::in_arg_val *) args[1])->arg ()
      );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
_TAO_AMI_FieldDevice_THandler_Direct_Proxy_Impl::getEncodingID_excep (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_AMI_FieldDevice_THandler_ptr _tao_ptr = 
    dynamic_cast<POA_AMI_FieldDevice_THandler_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->getEncodingID_excep (
        ((TAO::Arg_Traits< ::Messaging::ExceptionHolder>::in_arg_val *) args[1])->arg ()
      );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
_TAO_AMI_FieldDevice_THandler_Direct_Proxy_Impl::getEncoding (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_AMI_FieldDevice_THandler_ptr _tao_ptr = 
    dynamic_cast<POA_AMI_FieldDevice_THandler_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->getEncoding (
        ((TAO::Arg_Traits< ::Encoding_T>::in_arg_val *) args[1])->arg ()
      );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
_TAO_AMI_FieldDevice_THandler_Direct_Proxy_Impl::getEncoding_excep (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_AMI_FieldDevice_THandler_ptr _tao_ptr = 
    dynamic_cast<POA_AMI_FieldDevice_THandler_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->getEncoding_excep (
        ((TAO::Arg_Traits< ::Messaging::ExceptionHolder>::in_arg_val *) args[1])->arg ()
      );
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_AMI_FieldDevice_THandler::POA_AMI_FieldDevice_THandler ()
  : TAO_ServantBase ()
{
  this->optable_ = std::addressof(tao_AMI_FieldDevice_THandler_optable);
}

POA_AMI_FieldDevice_THandler::POA_AMI_FieldDevice_THandler (const POA_AMI_FieldDevice_THandler& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs),
    ::POA_Messaging::ReplyHandler (rhs)
{
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/upcall_command_ss.cpp:79

class getEncodingID_AMI_FieldDevice_THandler
  : public TAO::Upcall_Command
{
public:
  inline getEncodingID_AMI_FieldDevice_THandler (
    POA_AMI_FieldDevice_THandler * servant,
    TAO_Operation_Details const * operation_details,
    TAO::Argument * const args[])
    : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
  {
  }

  void execute () override
  {
    TAO::SArg_Traits< ::EncodingID_T>::in_arg_type arg_1 =
      TAO::Portable_Server::get_in_arg< ::EncodingID_T> (
        this->operation_details_,
        this->args_,
        1);
      
    this->servant_->getEncodingID (
      arg_1);
  }

private:
  POA_AMI_FieldDevice_THandler * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_AMI_FieldDevice_THandler::getEncodingID_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::EncodingID_T>::in_arg_val _tao_ami_return_val;

  TAO::Argument * const args[] =
    {
      std::addressof(retval),
      std::addressof(_tao_ami_return_val)
    };
  
  POA_AMI_FieldDevice_THandler * const impl =
    dynamic_cast<POA_AMI_FieldDevice_THandler *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  getEncodingID_AMI_FieldDevice_THandler command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , 2
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , nullptr
                         , 0
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/upcall_command_ss.cpp:79

class getEncodingID_excep_AMI_FieldDevice_THandler
  : public TAO::Upcall_Command
{
public:
  inline getEncodingID_excep_AMI_FieldDevice_THandler (
    POA_AMI_FieldDevice_THandler * servant,
    TAO_Operation_Details const * operation_details,
    TAO::Argument * const args[])
    : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
  {
  }

  void execute () override
  {
    TAO::SArg_Traits< ::Messaging::ExceptionHolder>::in_arg_type arg_1 =
      TAO::Portable_Server::get_in_arg< ::Messaging::ExceptionHolder> (
        this->operation_details_,
        this->args_,
        1);
      
    this->servant_->getEncodingID_excep (
      arg_1);
  }

private:
  POA_AMI_FieldDevice_THandler * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_AMI_FieldDevice_THandler::getEncodingID_excep_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::Messaging::ExceptionHolder>::in_arg_val _tao_excep_holder;

  TAO::Argument * const args[] =
    {
      std::addressof(retval),
      std::addressof(_tao_excep_holder)
    };
  
  POA_AMI_FieldDevice_THandler * const impl =
    dynamic_cast<POA_AMI_FieldDevice_THandler *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  getEncodingID_excep_AMI_FieldDevice_THandler command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , 2
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , nullptr
                         , 0
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/upcall_command_ss.cpp:79

class getEncoding_AMI_FieldDevice_THandler
  : public TAO::Upcall_Command
{
public:
  inline getEncoding_AMI_FieldDevice_THandler (
    POA_AMI_FieldDevice_THandler * servant,
    TAO_Operation_Details const * operation_details,
    TAO::Argument * const args[])
    : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
  {
  }

  void execute () override
  {
    TAO::SArg_Traits< ::Encoding_T>::in_arg_type arg_1 =
      TAO::Portable_Server::get_in_arg< ::Encoding_T> (
        this->operation_details_,
        this->args_,
        1);
      
    this->servant_->getEncoding (
      arg_1);
  }

private:
  POA_AMI_FieldDevice_THandler * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_AMI_FieldDevice_THandler::getEncoding_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::Encoding_T>::in_arg_val _tao_ami_return_val;

  TAO::Argument * const args[] =
    {
      std::addressof(retval),
      std::addressof(_tao_ami_return_val)
    };
  
  POA_AMI_FieldDevice_THandler * const impl =
    dynamic_cast<POA_AMI_FieldDevice_THandler *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  getEncoding_AMI_FieldDevice_THandler command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , 2
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , nullptr
                         , 0
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/upcall_command_ss.cpp:79

class getEncoding_excep_AMI_FieldDevice_THandler
  : public TAO::Upcall_Command
{
public:
  inline getEncoding_excep_AMI_FieldDevice_THandler (
    POA_AMI_FieldDevice_THandler * servant,
    TAO_Operation_Details const * operation_details,
    TAO::Argument * const args[])
    : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
  {
  }

  void execute () override
  {
    TAO::SArg_Traits< ::Messaging::ExceptionHolder>::in_arg_type arg_1 =
      TAO::Portable_Server::get_in_arg< ::Messaging::ExceptionHolder> (
        this->operation_details_,
        this->args_,
        1);
      
    this->servant_->getEncoding_excep (
      arg_1);
  }

private:
  POA_AMI_FieldDevice_THandler * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_AMI_FieldDevice_THandler::getEncoding_excep_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::Messaging::ExceptionHolder>::in_arg_val _tao_excep_holder;

  TAO::Argument * const args[] =
    {
      std::addressof(retval),
      std::addressof(_tao_excep_holder)
    };
  
  POA_AMI_FieldDevice_THandler * const impl =
    dynamic_cast<POA_AMI_FieldDevice_THandler *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  getEncoding_excep_AMI_FieldDevice_THandler command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , 2
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , nullptr
                         , 0
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:155





::CORBA::Boolean POA_AMI_FieldDevice_THandler::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:omg.org/Messaging/ReplyHandler:1.0") == 0 ||
      std::strcmp (value, "IDL:AMI_FieldDevice_THandler:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_AMI_FieldDevice_THandler::_interface_repository_id () const
{
  return "IDL:AMI_FieldDevice_THandler:1.0";
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:394



void POA_AMI_FieldDevice_THandler::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:354



AMI_FieldDevice_THandler *
POA_AMI_FieldDevice_THandler::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean const _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::AMI_FieldDevice_THandler>::unchecked_narrow (obj.in ());
    }
  return {};
}

#endif /* ifndef */

