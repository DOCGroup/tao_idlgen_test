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

#ifndef _TAO_IDL_OLD_SEQUENCES_TLLC9D_CPP_
#define _TAO_IDL_OLD_SEQUENCES_TLLC9D_CPP_


#include "old_sequenceS.h"
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

class TAO_AMH_TestSeq_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_AMH_TestSeq_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_AMH_TestSeq_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
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
      0,  2, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16,  5, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_AMH_TestSeq_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 7,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 11,
      DUPLICATES = 2,
      WORDLIST_SIZE = 12
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", std::addressof(TAO_AMH_Skeletons::_is_a_amh_skel), nullptr},
      {"_component", std::addressof(TAO_AMH_Skeletons::_component_amh_skel), nullptr},
      {"_interface", std::addressof(TAO_AMH_Skeletons::_interface_amh_skel), nullptr},
      {"_non_existent", std::addressof(TAO_AMH_Skeletons::_non_existent_amh_skel), nullptr},
      {"_repository_id", std::addressof(TAO_AMH_Skeletons::_repository_id_amh_skel), nullptr},
      {"_get_fattr", std::addressof(POA_TestSeq::_get_fattr_skel), std::addressof(_TAO_TestSeq_Direct_Proxy_Impl::_get_fattr)},
      {"_set_fattr", std::addressof(POA_TestSeq::_set_fattr_skel), std::addressof(_TAO_TestSeq_Direct_Proxy_Impl::_set_fattr)},
    };

  static constexpr signed char lookup[] =
    {
       -1,  -1,  -1,  -1,  -1,   5,  -1,  -1, -10,  -2,   6,  -1,   7,   8, 
        9, -22, 
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int const key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          int slot = lookup[key];

          if (slot >= 0 && slot < WORDLIST_SIZE)
            {
              const char *s = wordlist[slot].opname;

              if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
                return &wordlist[slot];
            }
          else if (slot < 0 && slot >= -MAX_HASH_VALUE)
            return 0;
          else
            {
              unsigned int offset = key + slot + (slot > 0 ? -MAX_HASH_VALUE : MAX_HASH_VALUE);
              const TAO_operation_db_entry *base = &wordlist[-lookup[offset]];
              const TAO_operation_db_entry *ptr = base + -lookup[offset + 1];

              while (--ptr >= base)
                if (*str == *ptr->opname && !ACE_OS::strncmp (str + 1, ptr->opname + 1, len - 1))
                  return ptr;
            }
        }
    }
  return 0;
}

static TAO_AMH_TestSeq_Perfect_Hash_OpTable tao_AMH_TestSeq_optable;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_AMH_TestSeq::POA_AMH_TestSeq ()
{
  this->optable_ = std::addressof (tao_AMH_TestSeq_optable);
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_ss.cpp:303

void
POA_AMH_TestSeq::_get_fattr_skel (
    TAO_ServerRequest & _tao_server_request,
    TAO::Portable_Server::Servant_Upcall * /* context */,
    TAO_ServantBase * _tao_servant)
{
  POA_AMH_TestSeq * const _tao_impl =
    dynamic_cast<POA_AMH_TestSeq *> (_tao_servant);
  if (!_tao_impl)
    throw ::CORBA::INTERNAL ();
  
  TAO_ORB_Core *orb_core =
    _tao_server_request.orb ()->orb_core ();
  
  TAO_AMH_BUFFER_ALLOCATOR* amh_allocator =
    orb_core->lane_resources ().amh_response_handler_allocator ();
  
  TAO::TAO_Buffer_Allocator<
      POA_TAO_AMH_TestSeqResponseHandler,
      TAO_AMH_BUFFER_ALLOCATOR
    > buffer_allocator (amh_allocator);
  
  POA_TAO_AMH_TestSeqResponseHandler_ptr _tao_rh_ptr = 
    buffer_allocator.allocate();
  
  if (!_tao_rh_ptr) 
    throw ::CORBA::NO_MEMORY ();
  
  _tao_rh_ptr->init (_tao_server_request, amh_allocator);
  
  ACE_Utils::Auto_Functor <POA_TAO_AMH_TestSeqResponseHandler, TAO::ARH_Refcount_Functor> safe_rd_(_tao_rh_ptr);
  
  _tao_impl->fattr (
      safe_rd_.get ()
    );
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_ss.cpp:303

void
POA_AMH_TestSeq::_set_fattr_skel (
    TAO_ServerRequest & _tao_server_request,
    TAO::Portable_Server::Servant_Upcall * /* context */,
    TAO_ServantBase * _tao_servant)
{
  POA_AMH_TestSeq * const _tao_impl =
    dynamic_cast<POA_AMH_TestSeq *> (_tao_servant);
  if (!_tao_impl)
    throw ::CORBA::INTERNAL ();
  
  ::f_unbounded fattr;
  TAO_InputCDR & _tao_in = *_tao_server_request.incoming ();

  if (!(
      (_tao_in >> fattr)
    ))
    {
      throw ::CORBA::MARSHAL();
    }
  
  TAO_ORB_Core *orb_core =
    _tao_server_request.orb ()->orb_core ();
  
  TAO_AMH_BUFFER_ALLOCATOR* amh_allocator =
    orb_core->lane_resources ().amh_response_handler_allocator ();
  
  TAO::TAO_Buffer_Allocator<
      POA_TAO_AMH_TestSeqResponseHandler,
      TAO_AMH_BUFFER_ALLOCATOR
    > buffer_allocator (amh_allocator);
  
  POA_TAO_AMH_TestSeqResponseHandler_ptr _tao_rh_ptr = 
    buffer_allocator.allocate();
  
  if (!_tao_rh_ptr) 
    throw ::CORBA::NO_MEMORY ();
  
  _tao_rh_ptr->init (_tao_server_request, amh_allocator);
  
  ACE_Utils::Auto_Functor <POA_TAO_AMH_TestSeqResponseHandler, TAO::ARH_Refcount_Functor> safe_rd_(_tao_rh_ptr);
  
  _tao_impl->fattr (
      safe_rd_.get (),
      fattr
    );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:139





::CORBA::Boolean POA_AMH_TestSeq::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:TestSeq:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_AMH_TestSeq::_interface_repository_id () const
{
  return "IDL:TestSeq:1.0";
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_ss.cpp:106

void
POA_AMH_TestSeq::_dispatch (
    TAO_ServerRequest &req,
    TAO::Portable_Server::Servant_Upcall *context)
{
  this->asynchronous_upcall_dispatch (req,context,this);
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_ss.cpp:64

TestSeq*
POA_AMH_TestSeq::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::TestSeq>::unchecked_narrow (obj.in ());
      
    }
  return {};
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:1853

class TAO_TestSeq_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_TestSeq_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_TestSeq_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
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
      0,  2, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16,  5, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_TestSeq_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 7,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 11,
      DUPLICATES = 2,
      WORDLIST_SIZE = 12
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", std::addressof(TAO_ServantBase::_is_a_thru_poa_skel), nullptr},
      {"_component", std::addressof(TAO_ServantBase::_component_thru_poa_skel), nullptr},
      {"_interface", std::addressof(TAO_ServantBase::_interface_skel), nullptr},
      {"_non_existent", std::addressof(TAO_ServantBase::_non_existent_thru_poa_skel), nullptr},
      {"_repository_id", std::addressof(TAO_ServantBase::_repository_id_thru_poa_skel), nullptr},
      {"_get_fattr", std::addressof(POA_TestSeq::_get_fattr_skel), std::addressof(_TAO_TestSeq_Direct_Proxy_Impl::_get_fattr)},
      {"_set_fattr", std::addressof(POA_TestSeq::_set_fattr_skel), std::addressof(_TAO_TestSeq_Direct_Proxy_Impl::_set_fattr)},
    };

  static constexpr signed char lookup[] =
    {
       -1,  -1,  -1,  -1,  -1,   5,  -1,  -1, -10,  -2,   6,  -1,   7,   8, 
        9, -22, 
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int const key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          int slot = lookup[key];

          if (slot >= 0 && slot < WORDLIST_SIZE)
            {
              const char *s = wordlist[slot].opname;

              if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
                return &wordlist[slot];
            }
          else if (slot < 0 && slot >= -MAX_HASH_VALUE)
            return 0;
          else
            {
              unsigned int offset = key + slot + (slot > 0 ? -MAX_HASH_VALUE : MAX_HASH_VALUE);
              const TAO_operation_db_entry *base = &wordlist[-lookup[offset]];
              const TAO_operation_db_entry *ptr = base + -lookup[offset + 1];

              while (--ptr >= base)
                if (*str == *ptr->opname && !ACE_OS::strncmp (str + 1, ptr->opname + 1, len - 1))
                  return ptr;
            }
        }
    }
  return 0;
}

static TAO_TestSeq_Perfect_Hash_OpTable tao_TestSeq_optable;

///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

_TAO_TestSeq_Direct_Proxy_Impl::~_TAO_TestSeq_Direct_Proxy_Impl ()
{
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
_TAO_TestSeq_Direct_Proxy_Impl::_get_fattr (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_TestSeq_ptr _tao_ptr = 
    dynamic_cast<POA_TestSeq_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  ((TAO::Arg_Traits< ::f_unbounded>::ret_val *) args[0])->arg () =
    _tao_ptr->fattr (
        );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
_TAO_TestSeq_Direct_Proxy_Impl::_set_fattr (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_TestSeq_ptr _tao_ptr = 
    dynamic_cast<POA_TestSeq_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->fattr (
        ((TAO::Arg_Traits< ::f_unbounded>::in_arg_val *) args[1])->arg ()
      );
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_TestSeq::POA_TestSeq ()
{
  this->optable_ = std::addressof (tao_TestSeq_optable);
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/upcall_command_ss.cpp:79

class _get_fattr_TestSeq
  : public TAO::Upcall_Command
{
public:
  inline _get_fattr_TestSeq (
    POA_TestSeq * servant,
    TAO_Operation_Details const * operation_details,
    TAO::Argument * const args[])
    : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
  {
  }

  void execute () override
  {
    TAO::SArg_Traits< ::f_unbounded>::ret_arg_type retval =
      TAO::Portable_Server::get_ret_arg< ::f_unbounded> (
        this->operation_details_,
        this->args_);
    
    retval =
      this->servant_->fattr ();
  }

private:
  POA_TestSeq * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_TestSeq::_get_fattr_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< ::f_unbounded>::ret_val retval;

  TAO::Argument * const args[] =
    {
      std::addressof(retval)
    };
  
  POA_TestSeq * const impl =
    dynamic_cast<POA_TestSeq *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  _get_fattr_TestSeq command (
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

class _set_fattr_TestSeq
  : public TAO::Upcall_Command
{
public:
  inline _set_fattr_TestSeq (
    POA_TestSeq * servant,
    TAO_Operation_Details const * operation_details,
    TAO::Argument * const args[])
    : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
  {
  }

  void execute () override
  {
    TAO::SArg_Traits< ::f_unbounded>::in_arg_type arg_1 =
      TAO::Portable_Server::get_in_arg< ::f_unbounded> (
        this->operation_details_,
        this->args_,
        1);
      
    this->servant_->fattr (
      arg_1);
  }

private:
  POA_TestSeq * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_TestSeq::_set_fattr_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::f_unbounded>::in_arg_val _tao_fattr;

  TAO::Argument * const args[] =
    {
      std::addressof(retval),
      std::addressof(_tao_fattr)
    };
  
  POA_TestSeq * const impl =
    dynamic_cast<POA_TestSeq *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  _set_fattr_TestSeq command (
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





::CORBA::Boolean POA_TestSeq::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:TestSeq:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_TestSeq::_interface_repository_id () const
{
  return "IDL:TestSeq:1.0";
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:378



void POA_TestSeq::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:338



TestSeq *
POA_TestSeq::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean const _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::TestSeq>::unchecked_narrow (obj.in ());
    }
  return {};
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_rh_ss.cpp:67


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_ss.cpp:76

void
POA_TAO_AMH_TestSeqResponseHandler::get_fattr (
  const ::f_unbounded & return_value)
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
POA_TAO_AMH_TestSeqResponseHandler::get_fattr_excep (
  ::AMH_TestSeqExceptionHolder * holder)
{
  try
  {
    holder->raise_get_fattr ();
  }
  catch (const ::CORBA::Exception& ex)
  {
    this->_tao_rh_send_exception (ex);
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_ss.cpp:76

void
POA_TAO_AMH_TestSeqResponseHandler::set_fattr ()
{
  this->_tao_rh_init_reply ();

  
  this->_tao_rh_send_reply ();
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/amh_rh_ss.cpp:76

void
POA_TAO_AMH_TestSeqResponseHandler::set_fattr_excep (
  ::AMH_TestSeqExceptionHolder * holder)
{
  try
  {
    holder->raise_set_fattr ();
  }
  catch (const ::CORBA::Exception& ex)
  {
    this->_tao_rh_send_exception (ex);
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:1853

class TAO_AMI_TestSeqHandler_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_AMI_TestSeqHandler_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_AMI_TestSeqHandler_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static constexpr unsigned char asso_values[] =
    {
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
     26, 26, 26, 26, 26,  0, 26,  0, 26, 26,
      0, 10, 26, 10, 26, 26, 26, 26, 26, 26,
     26, 26,  0, 26,  0,  0,  0, 26, 26, 26,
     26, 26, 26, 26, 26, 26, 26, 26,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_AMI_TestSeqHandler_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 9,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 15,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 25,
      HASH_VALUE_RANGE = 21,
      DUPLICATES = 0,
      WORDLIST_SIZE = 14
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", std::addressof(TAO_ServantBase::_is_a_thru_poa_skel), nullptr},
      {"",0,0},{"",0,0},{"",0,0},
      {"set_fattr", std::addressof(POA_AMI_TestSeqHandler::set_fattr_skel), std::addressof(_TAO_AMI_TestSeqHandler_Direct_Proxy_Impl::set_fattr)},
      {"_component", std::addressof(TAO_ServantBase::_component_thru_poa_skel), nullptr},
      {"",0,0},{"",0,0},
      {"_non_existent", std::addressof(TAO_ServantBase::_non_existent_thru_poa_skel), nullptr},
      {"_repository_id", std::addressof(TAO_ServantBase::_repository_id_thru_poa_skel), nullptr},
      {"set_fattr_excep", std::addressof(POA_AMI_TestSeqHandler::set_fattr_excep_skel), std::addressof(_TAO_AMI_TestSeqHandler_Direct_Proxy_Impl::set_fattr_excep)},
      {"",0,0},{"",0,0},{"",0,0},
      {"get_fattr", std::addressof(POA_AMI_TestSeqHandler::get_fattr_skel), std::addressof(_TAO_AMI_TestSeqHandler_Direct_Proxy_Impl::get_fattr)},
      {"_interface", std::addressof(TAO_ServantBase::_interface_skel), nullptr},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"get_fattr_excep", std::addressof(POA_AMI_TestSeqHandler::get_fattr_excep_skel), std::addressof(_TAO_AMI_TestSeqHandler_Direct_Proxy_Impl::get_fattr_excep)},
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

static TAO_AMI_TestSeqHandler_Perfect_Hash_OpTable tao_AMI_TestSeqHandler_optable;

///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

_TAO_AMI_TestSeqHandler_Direct_Proxy_Impl::~_TAO_AMI_TestSeqHandler_Direct_Proxy_Impl ()
{
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
_TAO_AMI_TestSeqHandler_Direct_Proxy_Impl::get_fattr (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_AMI_TestSeqHandler_ptr _tao_ptr = 
    dynamic_cast<POA_AMI_TestSeqHandler_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->get_fattr (
        ((TAO::Arg_Traits< ::f_unbounded>::in_arg_val *) args[1])->arg ()
      );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
_TAO_AMI_TestSeqHandler_Direct_Proxy_Impl::get_fattr_excep (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_AMI_TestSeqHandler_ptr _tao_ptr = 
    dynamic_cast<POA_AMI_TestSeqHandler_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->get_fattr_excep (
        ((TAO::Arg_Traits< ::Messaging::ExceptionHolder>::in_arg_val *) args[1])->arg ()
      );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
_TAO_AMI_TestSeqHandler_Direct_Proxy_Impl::set_fattr (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument **)
  
{
  POA_AMI_TestSeqHandler_ptr _tao_ptr = 
    dynamic_cast<POA_AMI_TestSeqHandler_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->set_fattr (
      );
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/direct_proxy_impl_ss.cpp:56

void
_TAO_AMI_TestSeqHandler_Direct_Proxy_Impl::set_fattr_excep (
    TAO_Abstract_ServantBase  *servant,
    TAO::Argument ** args)
  
{
  POA_AMI_TestSeqHandler_ptr _tao_ptr = 
    dynamic_cast<POA_AMI_TestSeqHandler_ptr> (servant);
  if (!_tao_ptr)
    {
      throw ::CORBA::INTERNAL ();
    }
  
  _tao_ptr->set_fattr_excep (
        ((TAO::Arg_Traits< ::Messaging::ExceptionHolder>::in_arg_val *) args[1])->arg ()
      );
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_AMI_TestSeqHandler::POA_AMI_TestSeqHandler ()
{
  this->optable_ = std::addressof (tao_AMI_TestSeqHandler_optable);
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/upcall_command_ss.cpp:79

class get_fattr_AMI_TestSeqHandler
  : public TAO::Upcall_Command
{
public:
  inline get_fattr_AMI_TestSeqHandler (
    POA_AMI_TestSeqHandler * servant,
    TAO_Operation_Details const * operation_details,
    TAO::Argument * const args[])
    : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
  {
  }

  void execute () override
  {
    TAO::SArg_Traits< ::f_unbounded>::in_arg_type arg_1 =
      TAO::Portable_Server::get_in_arg< ::f_unbounded> (
        this->operation_details_,
        this->args_,
        1);
      
    this->servant_->get_fattr (
      arg_1);
  }

private:
  POA_AMI_TestSeqHandler * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_AMI_TestSeqHandler::get_fattr_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::f_unbounded>::in_arg_val _tao_ami_return_val;

  TAO::Argument * const args[] =
    {
      std::addressof(retval),
      std::addressof(_tao_ami_return_val)
    };
  
  POA_AMI_TestSeqHandler * const impl =
    dynamic_cast<POA_AMI_TestSeqHandler *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  get_fattr_AMI_TestSeqHandler command (
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

class get_fattr_excep_AMI_TestSeqHandler
  : public TAO::Upcall_Command
{
public:
  inline get_fattr_excep_AMI_TestSeqHandler (
    POA_AMI_TestSeqHandler * servant,
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
      
    this->servant_->get_fattr_excep (
      arg_1);
  }

private:
  POA_AMI_TestSeqHandler * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_AMI_TestSeqHandler::get_fattr_excep_skel (
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
  
  POA_AMI_TestSeqHandler * const impl =
    dynamic_cast<POA_AMI_TestSeqHandler *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  get_fattr_excep_AMI_TestSeqHandler command (
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

class set_fattr_AMI_TestSeqHandler
  : public TAO::Upcall_Command
{
public:
  inline set_fattr_AMI_TestSeqHandler (
    POA_AMI_TestSeqHandler * servant)
    : servant_ (servant)
  {
  }

  void execute () override
  {
    this->servant_->set_fattr ();
  }

private:
  POA_AMI_TestSeqHandler * const servant_;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_AMI_TestSeqHandler::set_fattr_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{TAO::SArg_Traits< void>::ret_val retval;

  TAO::Argument * const args[] =
    {
      std::addressof(retval)
    };
  
  POA_AMI_TestSeqHandler * const impl =
    dynamic_cast<POA_AMI_TestSeqHandler *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  set_fattr_AMI_TestSeqHandler command (
    impl);
  
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

class set_fattr_excep_AMI_TestSeqHandler
  : public TAO::Upcall_Command
{
public:
  inline set_fattr_excep_AMI_TestSeqHandler (
    POA_AMI_TestSeqHandler * servant,
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
      
    this->servant_->set_fattr_excep (
      arg_1);
  }

private:
  POA_AMI_TestSeqHandler * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_operation/operation_ss.cpp:167

void POA_AMI_TestSeqHandler::set_fattr_excep_skel (
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
  
  POA_AMI_TestSeqHandler * const impl =
    dynamic_cast<POA_AMI_TestSeqHandler *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  set_fattr_excep_AMI_TestSeqHandler command (
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





::CORBA::Boolean POA_AMI_TestSeqHandler::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:omg.org/Messaging/ReplyHandler:1.0") == 0 ||
      std::strcmp (value, "IDL:AMI_TestSeqHandler:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_AMI_TestSeqHandler::_interface_repository_id () const
{
  return "IDL:AMI_TestSeqHandler:1.0";
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:378



void POA_AMI_TestSeqHandler::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:338



AMI_TestSeqHandler *
POA_AMI_TestSeqHandler::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean const _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::AMI_TestSeqHandler>::unchecked_narrow (obj.in ());
    }
  return {};
}

#endif /* ifndef */

