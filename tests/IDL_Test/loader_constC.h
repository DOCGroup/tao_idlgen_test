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
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:148

#ifndef _TAO_IDL_LOADER_CONSTC_NQYTVZ_H_
#define _TAO_IDL_LOADER_CONSTC_NQYTVZ_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "TAO_IDL_TEST_stub_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/Valuetype/ValueBase.h"
#include "tao/Valuetype/Valuetype_Adapter_Factory_Impl.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Messaging/Messaging.h"
#include "tao/AnyTypeCode/BooleanSeqA.h"
#include "tao/AnyTypeCode/CharSeqA.h"
#include "tao/AnyTypeCode/DoubleSeqA.h"
#include "tao/AnyTypeCode/FloatSeqA.h"
#include "tao/AnyTypeCode/LongDoubleSeqA.h"
#include "tao/AnyTypeCode/LongSeqA.h"
#include "tao/AnyTypeCode/OctetSeqA.h"
#include "tao/AnyTypeCode/ShortSeqA.h"
#include "tao/AnyTypeCode/StringSeqA.h"
#include "tao/AnyTypeCode/ULongSeqA.h"
#include "tao/AnyTypeCode/UShortSeqA.h"
#include "tao/AnyTypeCode/WCharSeqA.h"
#include "tao/AnyTypeCode/WStringSeqA.h"
#include "tao/AnyTypeCode/LongLongSeqA.h"
#include "tao/AnyTypeCode/ULongLongSeqA.h"
#include "tao/AnyTypeCode/PolicyA.h"
#include "tao/AnyTypeCode/Policy_ManagerA.h"
#include "tao/AnyTypeCode/Policy_CurrentA.h"
#include "tao/AnyTypeCode/ServicesA.h"
#include "tao/AnyTypeCode/ParameterModeA.h"
#include "tao/AnyTypeCode/orb_typesA.h"
#include "tao/AnyTypeCode/Typecode_typesA.h"
#include "tao/AnyTypeCode/WrongTransactionA.h"
#include "tao/Valuetype/Value_VarOut_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/BooleanSeqC.h"
#include "tao/CharSeqC.h"
#include "tao/DoubleSeqC.h"
#include "tao/FloatSeqC.h"
#include "tao/LongDoubleSeqC.h"
#include "tao/LongSeqC.h"
#include "tao/OctetSeqC.h"
#include "tao/ShortSeqC.h"
#include "tao/StringSeqC.h"
#include "tao/ULongSeqC.h"
#include "tao/UShortSeqC.h"
#include "tao/WCharSeqC.h"
#include "tao/WStringSeqC.h"
#include "tao/LongLongSeqC.h"
#include "tao/ULongLongSeqC.h"
#include "tao/PolicyC.h"
#include "tao/Policy_ManagerC.h"
#include "tao/Policy_CurrentC.h"
#include "tao/ServicesC.h"
#include "tao/ParameterModeC.h"
#include "tao/orb_typesC.h"
#include "tao/Typecode_typesC.h"
#include "tao/WrongTransactionC.h"

#if TAO_MAJOR_VERSION != 4 || TAO_MINOR_VERSION != 0 || TAO_MICRO_VERSION != 2
#error This file should be regenerated with TAO_IDL
#endif
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_root/root_ch.cpp:155


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

namespace Plesk
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34

  

  const CORBA::ULong PLESK_VENDOR_ID = 40000U;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module Plesk
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:64



TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_MESSAGING_EXCEPTIONHOLDER__ARG_TRAITS_)
#define _MESSAGING_EXCEPTIONHOLDER__ARG_TRAITS_

  template<>
  class Arg_Traits< ::Messaging::ExceptionHolder>
    : public
        Object_Arg_Traits_T<
            ::Messaging::ExceptionHolder *,
            ::Messaging::ExceptionHolder_var,
            ::Messaging::ExceptionHolder_out,
            TAO::Value_Traits<Messaging::ExceptionHolder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_traits.cpp:58



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:1648

#if defined (__ACE_INLINE__)
#include "loader_constC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

