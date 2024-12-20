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

#ifndef _TAO_IDL_OLD_CONSTANTSS_CRO6VQ_CPP_
#define _TAO_IDL_OLD_CONSTANTSS_CRO6VQ_CPP_


#include "old_constantsS.h"
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

class TAO_OldConstants_M_AMH_A_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_OldConstants_M_AMH_A_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_OldConstants_M_AMH_A_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
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
      0,  5,  0, 16, 16, 16, 16, 16, 16, 16,
     16,  0, 16, 16, 16, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_OldConstants_M_AMH_A_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 6,
      MIN_WORD_LENGTH = 3,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 3,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 13,
      DUPLICATES = 0,
      WORDLIST_SIZE = 9
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},
      {"foo", std::addressof(POA_OldConstants::M::AMH_A::foo_skel), std::addressof(POA_OldConstants::M::_TAO_A_Direct_Proxy_Impl::foo)},
      {"",0,0},
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

static TAO_OldConstants_M_AMH_A_Perfect_Hash_OpTable tao_OldConstants_M_AMH_A_optable;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_OldConstants::M::AMH_A::AMH_A ()
{
  this->optable_ = std::addressof (tao_OldConstants_M_AMH_A_optable);
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_ss.cpp:303

void
POA_OldConstants::M::AMH_A::foo_skel (
    TAO_ServerRequest & _tao_server_request,
    TAO::Portable_Server::Servant_Upcall * /* context */,
    TAO_ServantBase * _tao_servant)
{
  POA_OldConstants::M::AMH_A * const _tao_impl =
    dynamic_cast<POA_OldConstants::M::AMH_A *> (_tao_servant);
  if (!_tao_impl)
    throw ::CORBA::INTERNAL ();
  
  ::OldConstants::M::A::N x;
  ::OldConstants::M::A::N z;
  TAO_InputCDR & _tao_in = *_tao_server_request.incoming ();

  if (!(
      (_tao_in >> x) &&
      (_tao_in >> z)
    ))
    throw ::CORBA::MARSHAL();
  
  TAO_ORB_Core *orb_core =
    _tao_server_request.orb ()->orb_core ();
  
  TAO_AMH_BUFFER_ALLOCATOR* amh_allocator =
    orb_core->lane_resources ().amh_response_handler_allocator ();
  
  TAO::TAO_Buffer_Allocator<
      POA_OldConstants::M::TAO_AMH_AResponseHandler,
      TAO_AMH_BUFFER_ALLOCATOR
    > buffer_allocator (amh_allocator);
  
  POA_OldConstants::M::TAO_AMH_AResponseHandler_ptr _tao_rh_ptr = 
    buffer_allocator.allocate();
  
  if (!_tao_rh_ptr) 
    throw ::CORBA::NO_MEMORY ();
  
  _tao_rh_ptr->init (_tao_server_request, amh_allocator);
  
  ACE_Utils::Auto_Functor <POA_OldConstants::M::TAO_AMH_AResponseHandler, TAO::ARH_Refcount_Functor> safe_rd_(_tao_rh_ptr);
  
  _tao_impl->foo (
      safe_rd_.get (),
      x,
      z
    );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:139





::CORBA::Boolean POA_OldConstants::M::AMH_A::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:OldConstants/M/A:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_OldConstants::M::AMH_A::_interface_repository_id () const
{
  return "IDL:OldConstants/M/A:1.0";
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_ss.cpp:106

void
POA_OldConstants::M::AMH_A::_dispatch (
    TAO_ServerRequest &req,
    TAO::Portable_Server::Servant_Upcall *context)
{
  this->asynchronous_upcall_dispatch (req,context,this);
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_ss.cpp:64

OldConstants::M::A*
POA_OldConstants::M::AMH_A::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::OldConstants::M::A>::unchecked_narrow (obj.in ());
      
    }
  return {};
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:1853

class TAO_OldConstants_M_A_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_OldConstants_M_A_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_OldConstants_M_A_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
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
      0,  5,  0, 16, 16, 16, 16, 16, 16, 16,
     16,  0, 16, 16, 16, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_OldConstants_M_A_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 6,
      MIN_WORD_LENGTH = 3,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 3,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 13,
      DUPLICATES = 0,
      WORDLIST_SIZE = 9
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},
      {"foo", std::addressof(POA_OldConstants::M::A::foo_skel), std::addressof(POA_OldConstants::M::_TAO_A_Direct_Proxy_Impl::foo)},
      {"",0,0},
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

static TAO_OldConstants_M_A_Perfect_Hash_OpTable tao_OldConstants_M_A_optable;

///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

POA_OldConstants::M::_TAO_A_Direct_Proxy_Impl::~_TAO_A_Direct_Proxy_Impl ()
{
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
POA_OldConstants::M::_TAO_A_Direct_Proxy_Impl::foo (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_OldConstants::M::A_ptr _tao_ptr = 
    dynamic_cast<POA_OldConstants::M::A_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  ((TAO::Arg_Traits< ::OldConstants::M::A::N>::ret_val *) args[0])->arg () =
    _tao_ptr->foo (
          ((TAO::Arg_Traits< ::OldConstants::M::A::N>::in_arg_val *) args[1])->arg (),
          ((TAO::Arg_Traits< ::OldConstants::M::A::N>::out_arg_val *) args[2])->arg (),
          ((TAO::Arg_Traits< ::OldConstants::M::A::N>::inout_arg_val *) args[3])->arg ()
        );
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_OldConstants::M::A::A ()
{
  this->optable_ = std::addressof (tao_OldConstants_M_A_optable);
}


namespace POA_OldConstants
{
  
  namespace M
  {
    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/upcall_command_ss.cpp:79

    class foo_A
      : public TAO::Upcall_Command
    {
    public:
      inline foo_A (
        POA_OldConstants::M::A * servant,
        TAO_Operation_Details const * operation_details,
        TAO::Argument * const args[])
        : servant_ (servant)
          , operation_details_ (operation_details)
          , args_ (args)
      {
      }

      void execute () override
      {
        TAO::SArg_Traits< ::OldConstants::M::A::N>::ret_arg_type retval =
          TAO::Portable_Server::get_ret_arg< ::OldConstants::M::A::N> (
            this->operation_details_,
            this->args_);
        
        TAO::SArg_Traits< ::OldConstants::M::A::N>::in_arg_type arg_1 =
          TAO::Portable_Server::get_in_arg< ::OldConstants::M::A::N> (
            this->operation_details_,
            this->args_,
            1);
          
        TAO::SArg_Traits< ::OldConstants::M::A::N>::out_arg_type arg_2 =
          TAO::Portable_Server::get_out_arg< ::OldConstants::M::A::N> (
            this->operation_details_,
            this->args_,
            2);
          
        TAO::SArg_Traits< ::OldConstants::M::A::N>::inout_arg_type arg_3 =
          TAO::Portable_Server::get_inout_arg< ::OldConstants::M::A::N> (
            this->operation_details_,
            this->args_,
            3);
          
        retval =
          this->servant_->foo (
            arg_1
            , arg_2
            , arg_3);
      }
    
    private:
      POA_OldConstants::M::A * const servant_;
      TAO_Operation_Details const * const operation_details_;
      TAO::Argument * const * const args_;
    };
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_OldConstants::M::A::foo_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< ::OldConstants::M::A::N>::ret_val retval;
  TAO::SArg_Traits< ::OldConstants::M::A::N>::in_arg_val _tao_x;
  TAO::SArg_Traits< ::OldConstants::M::A::N>::out_arg_val _tao_y;
  TAO::SArg_Traits< ::OldConstants::M::A::N>::inout_arg_val _tao_z;

  TAO::Argument * const args[] =
    {
      std::addressof(retval),
      std::addressof(_tao_x),
      std::addressof(_tao_y),
      std::addressof(_tao_z)
    };
  
  POA_OldConstants::M::A * const impl =
    dynamic_cast<POA_OldConstants::M::A *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  foo_A command (
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
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:139





::CORBA::Boolean POA_OldConstants::M::A::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:OldConstants/M/A:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_OldConstants::M::A::_interface_repository_id () const
{
  return "IDL:OldConstants/M/A:1.0";
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:378



void POA_OldConstants::M::A::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:338



OldConstants::M::A *
POA_OldConstants::M::A::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean const _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::OldConstants::M::A>::unchecked_narrow (obj.in ());
    }
  return {};
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_rh_ss.cpp:67


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_ss.cpp:76

void
POA_OldConstants::M::TAO_AMH_AResponseHandler::foo (
  ::OldConstants::M::A::N return_value,
  ::OldConstants::M::A::N y,
  ::OldConstants::M::A::N z)
{
  this->_tao_rh_init_reply ();

  if (!(
      (_tao_out << return_value) &&
      (_tao_out << y) &&
      (_tao_out << z)
    ))
    {
      throw ::CORBA::MARSHAL();
    }
  
  this->_tao_rh_send_reply ();
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_ss.cpp:76

void
POA_OldConstants::M::TAO_AMH_AResponseHandler::foo_excep (
  ::OldConstants::M::AMH_AExceptionHolder * holder)
{
  try
  {
    holder->raise_foo ();
  }
  catch (const ::CORBA::Exception& ex)
  {
    this->_tao_rh_send_exception (ex);
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:1853

class TAO_OldConstants_M_AMI_AHandler_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_OldConstants_M_AMI_AHandler_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_OldConstants_M_AMI_AHandler_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
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
      0,  5,  0, 16, 16, 16, 16, 16, 16, 16,
     16,  0,  0, 16, 16, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_OldConstants_M_AMI_AHandler_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 7,
      MIN_WORD_LENGTH = 3,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 3,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 13,
      DUPLICATES = 0,
      WORDLIST_SIZE = 10
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},
      {"foo", std::addressof(POA_OldConstants::M::AMI_AHandler::foo_skel), std::addressof(POA_OldConstants::M::_TAO_AMI_AHandler_Direct_Proxy_Impl::foo)},
      {"",0,0},
      {"_is_a", std::addressof(TAO_ServantBase::_is_a_thru_poa_skel), nullptr},
      {"",0,0},{"",0,0},{"",0,0},
      {"foo_excep", std::addressof(POA_OldConstants::M::AMI_AHandler::foo_excep_skel), std::addressof(POA_OldConstants::M::_TAO_AMI_AHandler_Direct_Proxy_Impl::foo_excep)},
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

static TAO_OldConstants_M_AMI_AHandler_Perfect_Hash_OpTable tao_OldConstants_M_AMI_AHandler_optable;

///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

POA_OldConstants::M::_TAO_AMI_AHandler_Direct_Proxy_Impl::~_TAO_AMI_AHandler_Direct_Proxy_Impl ()
{
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
POA_OldConstants::M::_TAO_AMI_AHandler_Direct_Proxy_Impl::foo (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_OldConstants::M::AMI_AHandler_ptr _tao_ptr = 
    dynamic_cast<POA_OldConstants::M::AMI_AHandler_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->foo (
        ((TAO::Arg_Traits< ::OldConstants::M::A::N>::in_arg_val *) args[1])->arg (),
        ((TAO::Arg_Traits< ::OldConstants::M::A::N>::in_arg_val *) args[2])->arg (),
        ((TAO::Arg_Traits< ::OldConstants::M::A::N>::in_arg_val *) args[3])->arg ()
      );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
POA_OldConstants::M::_TAO_AMI_AHandler_Direct_Proxy_Impl::foo_excep (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_OldConstants::M::AMI_AHandler_ptr _tao_ptr = 
    dynamic_cast<POA_OldConstants::M::AMI_AHandler_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->foo_excep (
        ((TAO::Arg_Traits< ::Messaging::ExceptionHolder>::in_arg_val *) args[1])->arg ()
      );
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_OldConstants::M::AMI_AHandler::AMI_AHandler ()
{
  this->optable_ = std::addressof (tao_OldConstants_M_AMI_AHandler_optable);
}


namespace POA_OldConstants
{
  
  namespace M
  {
    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/upcall_command_ss.cpp:79

    class foo_AMI_AHandler
      : public TAO::Upcall_Command
    {
    public:
      inline foo_AMI_AHandler (
        POA_OldConstants::M::AMI_AHandler * servant,
        TAO_Operation_Details const * operation_details,
        TAO::Argument * const args[])
        : servant_ (servant)
          , operation_details_ (operation_details)
          , args_ (args)
      {
      }

      void execute () override
      {
        TAO::SArg_Traits< ::OldConstants::M::A::N>::in_arg_type arg_1 =
          TAO::Portable_Server::get_in_arg< ::OldConstants::M::A::N> (
            this->operation_details_,
            this->args_,
            1);
          
        TAO::SArg_Traits< ::OldConstants::M::A::N>::in_arg_type arg_2 =
          TAO::Portable_Server::get_in_arg< ::OldConstants::M::A::N> (
            this->operation_details_,
            this->args_,
            2);
          
        TAO::SArg_Traits< ::OldConstants::M::A::N>::in_arg_type arg_3 =
          TAO::Portable_Server::get_in_arg< ::OldConstants::M::A::N> (
            this->operation_details_,
            this->args_,
            3);
          
        this->servant_->foo (
          arg_1
          , arg_2
          , arg_3);
      }
    
    private:
      POA_OldConstants::M::AMI_AHandler * const servant_;
      TAO_Operation_Details const * const operation_details_;
      TAO::Argument * const * const args_;
    };
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_OldConstants::M::AMI_AHandler::foo_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::OldConstants::M::A::N>::in_arg_val _tao_ami_return_val;
  TAO::SArg_Traits< ::OldConstants::M::A::N>::in_arg_val _tao_y;
  TAO::SArg_Traits< ::OldConstants::M::A::N>::in_arg_val _tao_z;

  TAO::Argument * const args[] =
    {
      std::addressof(retval),
      std::addressof(_tao_ami_return_val),
      std::addressof(_tao_y),
      std::addressof(_tao_z)
    };
  
  POA_OldConstants::M::AMI_AHandler * const impl =
    dynamic_cast<POA_OldConstants::M::AMI_AHandler *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  foo_AMI_AHandler command (
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


namespace POA_OldConstants
{
  
  namespace M
  {
    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/upcall_command_ss.cpp:79

    class foo_excep_AMI_AHandler
      : public TAO::Upcall_Command
    {
    public:
      inline foo_excep_AMI_AHandler (
        POA_OldConstants::M::AMI_AHandler * servant,
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
          
        this->servant_->foo_excep (
          arg_1);
      }
    
    private:
      POA_OldConstants::M::AMI_AHandler * const servant_;
      TAO_Operation_Details const * const operation_details_;
      TAO::Argument * const * const args_;
    };
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_OldConstants::M::AMI_AHandler::foo_excep_skel (
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
  
  POA_OldConstants::M::AMI_AHandler * const impl =
    dynamic_cast<POA_OldConstants::M::AMI_AHandler *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  foo_excep_AMI_AHandler command (
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
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:139





::CORBA::Boolean POA_OldConstants::M::AMI_AHandler::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:omg.org/Messaging/ReplyHandler:1.0") == 0 ||
      std::strcmp (value, "IDL:OldConstants/M/AMI_AHandler:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_OldConstants::M::AMI_AHandler::_interface_repository_id () const
{
  return "IDL:OldConstants/M/AMI_AHandler:1.0";
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:378



void POA_OldConstants::M::AMI_AHandler::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:338



OldConstants::M::AMI_AHandler *
POA_OldConstants::M::AMI_AHandler::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean const _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::OldConstants::M::AMI_AHandler>::unchecked_narrow (obj.in ());
    }
  return {};
}

#endif /* ifndef */

