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

#ifndef _TAO_IDL_VALUETYPES_OJEATX_H_
#define _TAO_IDL_VALUETYPES_OJEATX_H_

#include /**/ "ace/pre.h"

#include "valuetypeC.h"
#include "includedS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
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
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_MYVALUETYPE__SARG_TRAITS_)
#define _MYVALUETYPE__SARG_TRAITS_

  template<>
  class SArg_Traits< ::MyValueType>
    : public
        Object_SArg_Traits_T<
            ::MyValueType *,
            ::MyValueType_var,
            ::MyValueType_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::ValueSort2>
    : public
        Basic_SArg_Traits_T<
            ::ValueSort2,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::MyValueTypeUnion>
    : public
        Var_Size_SArg_Traits_T<
            ::MyValueTypeUnion,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_RECVALUETYPE__SARG_TRAITS_)
#define _RECVALUETYPE__SARG_TRAITS_

  template<>
  class SArg_Traits< ::RecValueType>
    : public
        Object_SArg_Traits_T<
            ::RecValueType *,
            ::RecValueType_var,
            ::RecValueType_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_GETSDEPRECATEDMEMBER__SARG_TRAITS_)
#define _GETSDEPRECATEDMEMBER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::GetsDeprecatedMember>
    : public
        Object_SArg_Traits_T<
            ::GetsDeprecatedMember *,
            ::GetsDeprecatedMember_var,
            ::GetsDeprecatedMember_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_X_AXXX__SARG_TRAITS_)
#define _X_AXXX__SARG_TRAITS_

  template<>
  class SArg_Traits< ::X::AXXX>
    : public
        Object_SArg_Traits_T<
            ::X::AXXX *,
            ::X::AXXX_var,
            ::X::AXXX_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_X_BXXX__SARG_TRAITS_)
#define _X_BXXX__SARG_TRAITS_

  template<>
  class SArg_Traits< ::X::BXXX>
    : public
        Object_SArg_Traits_T<
            ::X::BXXX *,
            ::X::BXXX_var,
            ::X::BXXX_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:671

  

  template<>
  class SArg_Traits< ::X::BSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::X::BSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_MODSELECTION_SELECTIONDEFNS_CRITERION__SARG_TRAITS_)
#define _MODSELECTION_SELECTIONDEFNS_CRITERION__SARG_TRAITS_

  template<>
  class SArg_Traits< ::ModSelection::SelectionDefns::Criterion>
    : public
        Object_SArg_Traits_T<
            ::ModSelection::SelectionDefns::Criterion *,
            ::ModSelection::SelectionDefns::Criterion_var,
            ::ModSelection::SelectionDefns::Criterion_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_MODSELECTION_SELECTIONDEFNS_CRITERIONEXPR__SARG_TRAITS_)
#define _MODSELECTION_SELECTIONDEFNS_CRITERIONEXPR__SARG_TRAITS_

  template<>
  class SArg_Traits< ::ModSelection::SelectionDefns::CriterionExpr>
    : public
        Object_SArg_Traits_T<
            ::ModSelection::SelectionDefns::CriterionExpr *,
            ::ModSelection::SelectionDefns::CriterionExpr_var,
            ::ModSelection::SelectionDefns::CriterionExpr_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::ModSelection::SelectionDefns::CriterionExpr::RightCriterionInfos>
    : public
        Var_Size_SArg_Traits_T<
            ::ModSelection::SelectionDefns::CriterionExpr::RightCriterionInfos,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::ModSelection::SelectionDefns::CriterionExpr::RightCriterionExpr>
    : public
        Var_Size_SArg_Traits_T<
            ::ModSelection::SelectionDefns::CriterionExpr::RightCriterionExpr,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

namespace POA_X
{
  


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module X
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

namespace POA_ModSelection
{
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

  namespace SelectionDefns
  {
    
  
  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

  } // module ModSelection::SelectionDefns


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module ModSelection

#include "valuetypeS_T.h"


#include /**/ "ace/post.h"

#endif /* ifndef */

