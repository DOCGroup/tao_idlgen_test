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

#ifndef _TAO_IDL_INCLUDEDS_BAFOYA_CPP_
#define _TAO_IDL_INCLUDEDS_BAFOYA_CPP_


#include "includedS.h"
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

class TAO_RootModule_SUBMODULE1_AMH_ParentIF_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_RootModule_SUBMODULE1_AMH_ParentIF_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_RootModule_SUBMODULE1_AMH_ParentIF_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
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
     16, 16, 16, 16, 16, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_RootModule_SUBMODULE1_AMH_ParentIF_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 5,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 11,
      DUPLICATES = 0,
      WORDLIST_SIZE = 10
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
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

static TAO_RootModule_SUBMODULE1_AMH_ParentIF_Perfect_Hash_OpTable tao_RootModule_SUBMODULE1_AMH_ParentIF_optable;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_RootModule::SUBMODULE1::AMH_ParentIF::AMH_ParentIF ()
{
  this->optable_ = std::addressof (tao_RootModule_SUBMODULE1_AMH_ParentIF_optable);
}




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:139





::CORBA::Boolean POA_RootModule::SUBMODULE1::AMH_ParentIF::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:RootModule/SUBMODULE1/ParentIF:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_RootModule::SUBMODULE1::AMH_ParentIF::_interface_repository_id () const
{
  return "IDL:RootModule/SUBMODULE1/ParentIF:1.0";
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_ss.cpp:106

void
POA_RootModule::SUBMODULE1::AMH_ParentIF::_dispatch (
    TAO_ServerRequest &req,
    TAO::Portable_Server::Servant_Upcall *context)
{
  this->asynchronous_upcall_dispatch (req,context,this);
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_ss.cpp:64

RootModule::SUBMODULE1::ParentIF*
POA_RootModule::SUBMODULE1::AMH_ParentIF::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::RootModule::SUBMODULE1::ParentIF>::unchecked_narrow (obj.in ());
      
    }
  return {};
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:1853

class TAO_RootModule_SUBMODULE1_ParentIF_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_RootModule_SUBMODULE1_ParentIF_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_RootModule_SUBMODULE1_ParentIF_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
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
     16, 16, 16, 16, 16, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_RootModule_SUBMODULE1_ParentIF_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 5,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 11,
      DUPLICATES = 0,
      WORDLIST_SIZE = 10
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
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

static TAO_RootModule_SUBMODULE1_ParentIF_Perfect_Hash_OpTable tao_RootModule_SUBMODULE1_ParentIF_optable;

///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

POA_RootModule::SUBMODULE1::_TAO_ParentIF_Direct_Proxy_Impl::~_TAO_ParentIF_Direct_Proxy_Impl ()
{
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_RootModule::SUBMODULE1::ParentIF::ParentIF ()
{
  this->optable_ = std::addressof (tao_RootModule_SUBMODULE1_ParentIF_optable);
}




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:139





::CORBA::Boolean POA_RootModule::SUBMODULE1::ParentIF::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:RootModule/SUBMODULE1/ParentIF:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_RootModule::SUBMODULE1::ParentIF::_interface_repository_id () const
{
  return "IDL:RootModule/SUBMODULE1/ParentIF:1.0";
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:378



void POA_RootModule::SUBMODULE1::ParentIF::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:338



RootModule::SUBMODULE1::ParentIF *
POA_RootModule::SUBMODULE1::ParentIF::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean const _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::RootModule::SUBMODULE1::ParentIF>::unchecked_narrow (obj.in ());
    }
  return {};
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_rh_ss.cpp:67


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:1853

class TAO_RootModule_SUBMODULE1_AMI_ParentIFHandler_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_RootModule_SUBMODULE1_AMI_ParentIFHandler_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_RootModule_SUBMODULE1_AMI_ParentIFHandler_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
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
     16, 16, 16, 16, 16, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_RootModule_SUBMODULE1_AMI_ParentIFHandler_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 5,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 11,
      DUPLICATES = 0,
      WORDLIST_SIZE = 10
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
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

static TAO_RootModule_SUBMODULE1_AMI_ParentIFHandler_Perfect_Hash_OpTable tao_RootModule_SUBMODULE1_AMI_ParentIFHandler_optable;

///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

POA_RootModule::SUBMODULE1::_TAO_AMI_ParentIFHandler_Direct_Proxy_Impl::~_TAO_AMI_ParentIFHandler_Direct_Proxy_Impl ()
{
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_RootModule::SUBMODULE1::AMI_ParentIFHandler::AMI_ParentIFHandler ()
  : TAO_ServantBase ()
{
  this->optable_ = std::addressof (tao_RootModule_SUBMODULE1_AMI_ParentIFHandler_optable);
}




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:139





::CORBA::Boolean POA_RootModule::SUBMODULE1::AMI_ParentIFHandler::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:omg.org/Messaging/ReplyHandler:1.0") == 0 ||
      std::strcmp (value, "IDL:RootModule/SUBMODULE1/AMI_ParentIFHandler:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_RootModule::SUBMODULE1::AMI_ParentIFHandler::_interface_repository_id () const
{
  return "IDL:RootModule/SUBMODULE1/AMI_ParentIFHandler:1.0";
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:378



void POA_RootModule::SUBMODULE1::AMI_ParentIFHandler::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:338



RootModule::SUBMODULE1::AMI_ParentIFHandler *
POA_RootModule::SUBMODULE1::AMI_ParentIFHandler::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean const _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::RootModule::SUBMODULE1::AMI_ParentIFHandler>::unchecked_narrow (obj.in ());
    }
  return {};
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:1853

class TAO_AMH_AAA_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_AMH_AAA_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_AMH_AAA_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
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
     16, 16, 16, 16, 16, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_AMH_AAA_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 5,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 11,
      DUPLICATES = 0,
      WORDLIST_SIZE = 10
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
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

static TAO_AMH_AAA_Perfect_Hash_OpTable tao_AMH_AAA_optable;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_AMH_AAA::POA_AMH_AAA ()
{
  this->optable_ = std::addressof (tao_AMH_AAA_optable);
}




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:139





::CORBA::Boolean POA_AMH_AAA::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:AAA:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_AMH_AAA::_interface_repository_id () const
{
  return "IDL:AAA:1.0";
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_ss.cpp:106

void
POA_AMH_AAA::_dispatch (
    TAO_ServerRequest &req,
    TAO::Portable_Server::Servant_Upcall *context)
{
  this->asynchronous_upcall_dispatch (req,context,this);
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_ss.cpp:64

AAA*
POA_AMH_AAA::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::AAA>::unchecked_narrow (obj.in ());
      
    }
  return {};
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:1853

class TAO_AAA_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_AAA_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_AAA_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
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
     16, 16, 16, 16, 16, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_AAA_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 5,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 11,
      DUPLICATES = 0,
      WORDLIST_SIZE = 10
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
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

static TAO_AAA_Perfect_Hash_OpTable tao_AAA_optable;

///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

_TAO_AAA_Direct_Proxy_Impl::~_TAO_AAA_Direct_Proxy_Impl ()
{
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_AAA::POA_AAA ()
{
  this->optable_ = std::addressof (tao_AAA_optable);
}




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:139





::CORBA::Boolean POA_AAA::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:AAA:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_AAA::_interface_repository_id () const
{
  return "IDL:AAA:1.0";
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:378



void POA_AAA::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:338



AAA *
POA_AAA::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean const _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::AAA>::unchecked_narrow (obj.in ());
    }
  return {};
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/amh_rh_ss.cpp:67


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:1853

class TAO_AMI_AAAHandler_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len) override;

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len) override;
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_AMI_AAAHandler_Perfect_Hash_OpTable -N lookup */

unsigned int
TAO_AMI_AAAHandler_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
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
     16, 16, 16, 16, 16, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_AMI_AAAHandler_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 5,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 11,
      DUPLICATES = 0,
      WORDLIST_SIZE = 10
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
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

static TAO_AMI_AAAHandler_Perfect_Hash_OpTable tao_AMI_AAAHandler_optable;

///////////////////////////////////////////////////////////////////////
//                 Direct Proxy  Implementation
//

_TAO_AMI_AAAHandler_Direct_Proxy_Impl::~_TAO_AMI_AAAHandler_Direct_Proxy_Impl ()
{
}



//
//           End Direct Proxy Implementation
///////////////////////////////////////////////////////////////////////


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:89



POA_AMI_AAAHandler::POA_AMI_AAAHandler ()
  : TAO_ServantBase ()
{
  this->optable_ = std::addressof (tao_AMI_AAAHandler_optable);
}




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:139





::CORBA::Boolean POA_AMI_AAAHandler::_is_a (const char* value)
{
  return
    (
      std::strcmp (value, "IDL:omg.org/Messaging/ReplyHandler:1.0") == 0 ||
      std::strcmp (value, "IDL:AMI_AAAHandler:1.0") == 0 ||
      std::strcmp (value, "IDL:omg.org/CORBA/Object:1.0") == 0
    );
}

const char* POA_AMI_AAAHandler::_interface_repository_id () const
{
  return "IDL:AMI_AAAHandler:1.0";
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:378



void POA_AMI_AAAHandler::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ss.cpp:338



AMI_AAAHandler *
POA_AMI_AAAHandler::_this ()
{
  TAO_Stub_Auto_Ptr stub (this->_create_stub ());
  ::CORBA::Boolean const _tao_opt_colloc = stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  ::CORBA::Object_var obj = new (std::nothrow) ::CORBA::Object (stub.get (), _tao_opt_colloc, this);
  if (obj.ptr ())
    {
      (void) stub.release ();
      return TAO::Narrow_Utils<::AMI_AAAHandler>::unchecked_narrow (obj.in ());
    }
  return {};
}

#endif /* ifndef */

