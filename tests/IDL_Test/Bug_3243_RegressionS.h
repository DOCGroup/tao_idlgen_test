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

#ifndef _TAO_IDL_BUG_3243_REGRESSIONS_RZZOBY_H_
#define _TAO_IDL_BUG_3243_REGRESSIONS_RZZOBY_H_

#include /**/ "ace/pre.h"

#include "Bug_3243_RegressionC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


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
}

TAO_END_VERSIONED_NAMESPACE_DECL



#include "Bug_3243_RegressionS_T.h"


#include /**/ "ace/post.h"

#endif /* ifndef */

