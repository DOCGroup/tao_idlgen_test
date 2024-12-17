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

#ifndef _TAO_IDL_GENERIC_OBJECTS_9RGO9V_CPP_
#define _TAO_IDL_GENERIC_OBJECTS_9RGO9V_CPP_


#include "generic_objectS.h"
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

class TAO_AMH_generic_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_AMH_generic_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_AMH_generic_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static constexpr unsigned char asso_values[] =
    {
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16,  0, 16,  0, 16, 16,
      0,  5, 16, 16, 16, 16, 16, 16, 16, 16,
     16,  0,  0, 16, 16, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_AMH_generic_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 6,
      MIN_WORD_LENGTH = 2,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 2,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 14,
      DUPLICATES = 0,
      WORDLIST_SIZE = 8
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},
      {"op", std::addressof(POA_AMH_generic::op_skel), std::addressof(_TAO_generic_Direct_Proxy_Impl::op)},
      {"",0,0},{"",0,0},
      {"_is_a", std::addressof(TAO_AMH_Skeletons::_is_a_amh_skel), nullptr},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", std::addressof(TAO_AMH_Skeletons::_component_amh_skel), nullptr},
      {"",0,0},{"",0,0},
      {"_non_existent", std::addressof(TAO_AMH_Skeletons::_non_existent_amh_skel), nullptr},
      {"_repository_id", std::addressof(TAO_AMH_Skeletons::_repository_id_amh_skel), nullptr},
      {"_interface", std::addressof(TAO_AMH_Skeletons::_interface_amh_skel), nullptr},
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

static TAO_AMH_generic_Perfect_Hash_OpTable tao_AMH_generic_optable;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_AMH_generic::POA_AMH_generic ()
  : TAO_ServantBase ()
{
  this->optable_ = std::addressof(tao_AMH_generic_optable);
}

POA_AMH_generic::POA_AMH_generic (const POA_AMH_generic& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_ss.cpp:303

void
POA_AMH_generic::op_skel (
    TAO_ServerRequest & _tao_server_request,
    TAO::Portable_Server::Servant_Upcall * /* context */,
    TAO_ServantBase * _tao_servant)
{
  POA_AMH_generic * const _tao_impl =
    dynamic_cast<POA_AMH_generic *> (_tao_servant);
  if (!_tao_impl)
    throw ::CORBA::INTERNAL ();
  
  ::CORBA::Object_var inarg;
  ::CORBA::Object_var inoutarg;
  TAO_InputCDR & _tao_in = *_tao_server_request.incoming ();

  if (!(
      (_tao_in >> inarg.out ()) &&
      (_tao_in >> inoutarg.out ())
    ))
    throw ::CORBA::MARSHAL();
  
  TAO_ORB_Core *orb_core =
    _tao_server_request.orb ()->orb_core ();
  
  TAO_AMH_BUFFER_ALLOCATOR* amh_allocator =
    orb_core->lane_resources ().amh_response_handler_allocator ();
  
  TAO::TAO_Buffer_Allocator<
      POA_TAO_AMH_genericResponseHandler,
      TAO_AMH_BUFFER_ALLOCATOR
    > buffer_allocator (amh_allocator);
  
  POA_TAO_AMH_genericResponseHandler_ptr _tao_rh_ptr = 
    buffer_allocator.allocate();
  
  if (!_tao_rh_ptr) 
    throw ::CORBA::NO_MEMORY ();
  
  _tao_rh_ptr->init (_tao_server_request, amh_allocator);
  
  ACE_Utils::Auto_Functor <POA_TAO_AMH_genericResponseHandler, TAO::ARH_Refcount_Functor> safe_rd_(_tao_rh_ptr);
  
  _tao_impl->op (
      safe_rd_.get (),
      inarg.in (),
      inoutarg.in ()
    );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:155





::CORBA::Boolean POA_AMH_generic::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:generic:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_AMH_generic::_interface_repository_id () const
{
  return "IDL:generic:1.0";
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_ss.cpp:106

void
POA_AMH_generic::_dispatch (
    TAO_ServerRequest &req,
    TAO::Portable_Server::Servant_Upcall *context)
{
  this->asynchronous_upcall_dispatch (req,context,this);
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_ss.cpp:64

generic*
POA_AMH_generic::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::generic>::unchecked_narrow (obj.in ());
      
    }
  return {};
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:1853

class TAO_generic_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_generic_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_generic_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static constexpr unsigned char asso_values[] =
    {
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16,  0, 16,  0, 16, 16,
      0,  5, 16, 16, 16, 16, 16, 16, 16, 16,
     16,  0,  0, 16, 16, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_generic_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 6,
      MIN_WORD_LENGTH = 2,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 2,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 14,
      DUPLICATES = 0,
      WORDLIST_SIZE = 8
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},
      {"op", std::addressof(POA_generic::op_skel), std::addressof(_TAO_generic_Direct_Proxy_Impl::op)},
      {"",0,0},{"",0,0},
      {"_is_a", std::addressof(TAO_ServantBase::_is_a_thru_poa_skel), nullptr},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", std::addressof(TAO_ServantBase::_component_thru_poa_skel), nullptr},
      {"",0,0},{"",0,0},
      {"_non_existent", std::addressof(TAO_ServantBase::_non_existent_thru_poa_skel), nullptr},
      {"_repository_id", std::addressof(TAO_ServantBase::_repository_id_thru_poa_skel), nullptr},
      {"_interface", std::addressof(TAO_ServantBase::_interface_skel), nullptr},
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

static TAO_generic_Perfect_Hash_OpTable tao_generic_optable;

///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

_TAO_generic_Direct_Proxy_Impl::~_TAO_generic_Direct_Proxy_Impl ()
{
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
_TAO_generic_Direct_Proxy_Impl::op (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_generic_ptr _tao_ptr = 
    dynamic_cast<POA_generic_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  ((TAO::Arg_Traits< ::CORBA::Object>::ret_val *) args[0])->arg () =
    _tao_ptr->op (
          ((TAO::Arg_Traits< ::CORBA::Object>::in_arg_val *) args[1])->arg (),
          ((TAO::Arg_Traits< ::CORBA::Object>::inout_arg_val *) args[2])->arg (),
          ((TAO::Arg_Traits< ::CORBA::Object>::out_arg_val *) args[3])->arg ()
        );
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_generic::POA_generic ()
  : TAO_ServantBase ()
{
  this->optable_ = std::addressof(tao_generic_optable);
}

POA_generic::POA_generic (const POA_generic& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/upcall_command_ss.cpp:79

class op_generic
  : public TAO::Upcall_Command
{
public:
  inline op_generic (
    POA_generic * servant,
    TAO_Operation_Details const * operation_details,
    TAO::Argument * const args[])
    : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
  {
  }

  void execute () override
  {
    TAO::SArg_Traits< ::CORBA::Object>::ret_arg_type retval =
      TAO::Portable_Server::get_ret_arg< ::CORBA::Object> (
        this->operation_details_,
        this->args_);
    
    TAO::SArg_Traits< ::CORBA::Object>::in_arg_type arg_1 =
      TAO::Portable_Server::get_in_arg< ::CORBA::Object> (
        this->operation_details_,
        this->args_,
        1);
      
    TAO::SArg_Traits< ::CORBA::Object>::inout_arg_type arg_2 =
      TAO::Portable_Server::get_inout_arg< ::CORBA::Object> (
        this->operation_details_,
        this->args_,
        2);
      
    TAO::SArg_Traits< ::CORBA::Object>::out_arg_type arg_3 =
      TAO::Portable_Server::get_out_arg< ::CORBA::Object> (
        this->operation_details_,
        this->args_,
        3);
      
    retval =
      this->servant_->op (
        arg_1
        , arg_2
        , arg_3);
  }

private:
  POA_generic * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_generic::op_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< ::CORBA::Object>::ret_val retval;
  TAO::SArg_Traits< ::CORBA::Object>::in_arg_val _tao_inarg;
  TAO::SArg_Traits< ::CORBA::Object>::inout_arg_val _tao_inoutarg;
  TAO::SArg_Traits< ::CORBA::Object>::out_arg_val _tao_outarg;

  TAO::Argument * const args[] =
    {
      std::addressof(retval),
      std::addressof(_tao_inarg),
      std::addressof(_tao_inoutarg),
      std::addressof(_tao_outarg)
    };
  
  POA_generic * const impl =
    dynamic_cast<POA_generic *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  op_generic command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , 4
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





::CORBA::Boolean POA_generic::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:generic:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_generic::_interface_repository_id () const
{
  return "IDL:generic:1.0";
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:394



void POA_generic::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:354



generic *
POA_generic::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean const _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::generic>::unchecked_narrow (obj.in ());
    }
  return {};
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_rh_ss.cpp:67


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_ss.cpp:76

void
POA_TAO_AMH_genericResponseHandler::op (
  ::CORBA::Object_ptr return_value,
  ::CORBA::Object_ptr inoutarg,
  ::CORBA::Object_ptr outarg)
{
  this->_tao_rh_init_reply ();

  if (!(
      (_tao_out << return_value) &&
      (_tao_out << inoutarg) &&
      (_tao_out << outarg)
    ))
    {
      throw ::CORBA::MARSHAL();
    }
  
  this->_tao_rh_send_reply ();
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_ss.cpp:76

void
POA_TAO_AMH_genericResponseHandler::op_excep (
  ::AMH_genericExceptionHolder * holder)
{
  try
  {
    holder->raise_op ();
  }
  catch (const ::CORBA::Exception& ex)
  {
    this->_tao_rh_send_exception (ex);
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:1853

class TAO_AMI_genericHandler_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_AMI_genericHandler_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_AMI_genericHandler_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static constexpr unsigned char asso_values[] =
    {
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16,  0, 16,  0, 16, 16,
      0,  5, 16, 16, 16, 16, 16, 16, 16, 16,
     16,  0,  0, 16, 16, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_AMI_genericHandler_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 7,
      MIN_WORD_LENGTH = 2,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 2,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 14,
      DUPLICATES = 0,
      WORDLIST_SIZE = 9
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},
      {"op", std::addressof(POA_AMI_genericHandler::op_skel), std::addressof(_TAO_AMI_genericHandler_Direct_Proxy_Impl::op)},
      {"",0,0},{"",0,0},
      {"_is_a", std::addressof(TAO_ServantBase::_is_a_thru_poa_skel), nullptr},
      {"",0,0},{"",0,0},
      {"op_excep", std::addressof(POA_AMI_genericHandler::op_excep_skel), std::addressof(_TAO_AMI_genericHandler_Direct_Proxy_Impl::op_excep)},
      {"",0,0},
      {"_component", std::addressof(TAO_ServantBase::_component_thru_poa_skel), nullptr},
      {"",0,0},{"",0,0},
      {"_non_existent", std::addressof(TAO_ServantBase::_non_existent_thru_poa_skel), nullptr},
      {"_repository_id", std::addressof(TAO_ServantBase::_repository_id_thru_poa_skel), nullptr},
      {"_interface", std::addressof(TAO_ServantBase::_interface_skel), nullptr},
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

static TAO_AMI_genericHandler_Perfect_Hash_OpTable tao_AMI_genericHandler_optable;

///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

_TAO_AMI_genericHandler_Direct_Proxy_Impl::~_TAO_AMI_genericHandler_Direct_Proxy_Impl ()
{
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
_TAO_AMI_genericHandler_Direct_Proxy_Impl::op (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_AMI_genericHandler_ptr _tao_ptr = 
    dynamic_cast<POA_AMI_genericHandler_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->op (
        ((TAO::Arg_Traits< ::CORBA::Object>::in_arg_val *) args[1])->arg (),
        ((TAO::Arg_Traits< ::CORBA::Object>::in_arg_val *) args[2])->arg (),
        ((TAO::Arg_Traits< ::CORBA::Object>::in_arg_val *) args[3])->arg ()
      );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
_TAO_AMI_genericHandler_Direct_Proxy_Impl::op_excep (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_AMI_genericHandler_ptr _tao_ptr = 
    dynamic_cast<POA_AMI_genericHandler_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->op_excep (
        ((TAO::Arg_Traits< ::Messaging::ExceptionHolder>::in_arg_val *) args[1])->arg ()
      );
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_AMI_genericHandler::POA_AMI_genericHandler ()
  : TAO_ServantBase ()
{
  this->optable_ = std::addressof(tao_AMI_genericHandler_optable);
}

POA_AMI_genericHandler::POA_AMI_genericHandler (const POA_AMI_genericHandler& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs),
    ::POA_Messaging::ReplyHandler (rhs)
{
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/upcall_command_ss.cpp:79

class op_AMI_genericHandler
  : public TAO::Upcall_Command
{
public:
  inline op_AMI_genericHandler (
    POA_AMI_genericHandler * servant,
    TAO_Operation_Details const * operation_details,
    TAO::Argument * const args[])
    : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
  {
  }

  void execute () override
  {
    TAO::SArg_Traits< ::CORBA::Object>::in_arg_type arg_1 =
      TAO::Portable_Server::get_in_arg< ::CORBA::Object> (
        this->operation_details_,
        this->args_,
        1);
      
    TAO::SArg_Traits< ::CORBA::Object>::in_arg_type arg_2 =
      TAO::Portable_Server::get_in_arg< ::CORBA::Object> (
        this->operation_details_,
        this->args_,
        2);
      
    TAO::SArg_Traits< ::CORBA::Object>::in_arg_type arg_3 =
      TAO::Portable_Server::get_in_arg< ::CORBA::Object> (
        this->operation_details_,
        this->args_,
        3);
      
    this->servant_->op (
      arg_1
      , arg_2
      , arg_3);
  }

private:
  POA_AMI_genericHandler * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_AMI_genericHandler::op_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::CORBA::Object>::in_arg_val _tao_ami_return_val;
  TAO::SArg_Traits< ::CORBA::Object>::in_arg_val _tao_inoutarg;
  TAO::SArg_Traits< ::CORBA::Object>::in_arg_val _tao_outarg;

  TAO::Argument * const args[] =
    {
      std::addressof(retval),
      std::addressof(_tao_ami_return_val),
      std::addressof(_tao_inoutarg),
      std::addressof(_tao_outarg)
    };
  
  POA_AMI_genericHandler * const impl =
    dynamic_cast<POA_AMI_genericHandler *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  op_AMI_genericHandler command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , 4
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

class op_excep_AMI_genericHandler
  : public TAO::Upcall_Command
{
public:
  inline op_excep_AMI_genericHandler (
    POA_AMI_genericHandler * servant,
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
      
    this->servant_->op_excep (
      arg_1);
  }

private:
  POA_AMI_genericHandler * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_AMI_genericHandler::op_excep_skel (
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
  
  POA_AMI_genericHandler * const impl =
    dynamic_cast<POA_AMI_genericHandler *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  op_excep_AMI_genericHandler command (
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





::CORBA::Boolean POA_AMI_genericHandler::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:omg.org/Messaging/ReplyHandler:1.0") == 0 ||
      std::strcmp (value, "IDL:AMI_genericHandler:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_AMI_genericHandler::_interface_repository_id () const
{
  return "IDL:AMI_genericHandler:1.0";
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:394



void POA_AMI_genericHandler::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:354



AMI_genericHandler *
POA_AMI_genericHandler::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean const _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::AMI_genericHandler>::unchecked_narrow (obj.in ());
    }
  return {};
}

#endif /* ifndef */
