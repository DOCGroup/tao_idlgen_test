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

#ifndef _TAO_IDL_UNIONS_ZXQLH6_H_
#define _TAO_IDL_UNIONS_ZXQLH6_H_

#include /**/ "ace/pre.h"

#include "unionC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Fixed_Array_SArgument_T.h"
#include "tao/PortableServer/Var_Array_SArgument_T.h"

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
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::DataType>
    : public
        Basic_SArg_Traits_T<
            ::DataType,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::Data>
    : public
        Fixed_Size_SArg_Traits_T<
            ::Data,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::Necessary::Kind>
    : public
        Basic_SArg_Traits_T<
            ::Necessary::Kind,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::Necessary::WhichResult>
    : public
        Fixed_Size_SArg_Traits_T<
            ::Necessary::WhichResult,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::foo>
    : public
        Var_Size_SArg_Traits_T<
            ::foo,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::UnionDiscTest::BooleanUnion>
    : public
        Var_Size_SArg_Traits_T<
            ::UnionDiscTest::BooleanUnion,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::UnionDiscTest::CharUnion>
    : public
        Var_Size_SArg_Traits_T<
            ::UnionDiscTest::CharUnion,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::AllBoolUnions::OneBranchT>
    : public
        Fixed_Size_SArg_Traits_T<
            ::AllBoolUnions::OneBranchT,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::AllBoolUnions::OneBranchF>
    : public
        Fixed_Size_SArg_Traits_T<
            ::AllBoolUnions::OneBranchF,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::AllBoolUnions::OneBranchD>
    : public
        Fixed_Size_SArg_Traits_T<
            ::AllBoolUnions::OneBranchD,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::AllBoolUnions::OneBranchTF>
    : public
        Fixed_Size_SArg_Traits_T<
            ::AllBoolUnions::OneBranchTF,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::AllBoolUnions::OneBranchFT>
    : public
        Fixed_Size_SArg_Traits_T<
            ::AllBoolUnions::OneBranchFT,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::AllBoolUnions::OneBranchTD>
    : public
        Fixed_Size_SArg_Traits_T<
            ::AllBoolUnions::OneBranchTD,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::AllBoolUnions::OneBranchDT>
    : public
        Fixed_Size_SArg_Traits_T<
            ::AllBoolUnions::OneBranchDT,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::AllBoolUnions::OneBranchFD>
    : public
        Fixed_Size_SArg_Traits_T<
            ::AllBoolUnions::OneBranchFD,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::AllBoolUnions::OneBranchDF>
    : public
        Fixed_Size_SArg_Traits_T<
            ::AllBoolUnions::OneBranchDF,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::AllBoolUnions::TwoBranchesTF>
    : public
        Fixed_Size_SArg_Traits_T<
            ::AllBoolUnions::TwoBranchesTF,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::AllBoolUnions::TwoBranchesFT>
    : public
        Fixed_Size_SArg_Traits_T<
            ::AllBoolUnions::TwoBranchesFT,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::AllBoolUnions::TwoBranchesTD>
    : public
        Fixed_Size_SArg_Traits_T<
            ::AllBoolUnions::TwoBranchesTD,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::AllBoolUnions::TwoBranchesDT>
    : public
        Fixed_Size_SArg_Traits_T<
            ::AllBoolUnions::TwoBranchesDT,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::AllBoolUnions::TwoBranchesFD>
    : public
        Fixed_Size_SArg_Traits_T<
            ::AllBoolUnions::TwoBranchesFD,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::AllBoolUnions::TwoBranchesDF>
    : public
        Fixed_Size_SArg_Traits_T<
            ::AllBoolUnions::TwoBranchesDF,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::disc1>
    : public
        Basic_SArg_Traits_T<
            ::disc1,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::disc2>
    : public
        Basic_SArg_Traits_T<
            ::disc2,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::disc_outer>
    : public
        Basic_SArg_Traits_T<
            ::disc_outer,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::inner1>
    : public
        Fixed_Size_SArg_Traits_T<
            ::inner1,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::inner2>
    : public
        Fixed_Size_SArg_Traits_T<
            ::inner2,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::outer>
    : public
        Fixed_Size_SArg_Traits_T<
            ::outer,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::UnionTest3::ValChoice>
    : public
        Basic_SArg_Traits_T<
            ::UnionTest3::ValChoice,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::UnionTest3::ValType>
    : public
        Fixed_Size_SArg_Traits_T<
            ::UnionTest3::ValType,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::UnionTest3::UpType>
    : public
        Fixed_Size_SArg_Traits_T<
            ::UnionTest3::UpType,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::UnionTest3::DownType>
    : public
        Fixed_Size_SArg_Traits_T<
            ::UnionTest3::DownType,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::UnionTest3::IndChoice>
    : public
        Basic_SArg_Traits_T<
            ::UnionTest3::IndChoice,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::UnionTest3::IndType>
    : public
        Fixed_Size_SArg_Traits_T<
            ::UnionTest3::IndType,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::XType>
    : public
        Basic_SArg_Traits_T<
            ::XType,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::ZType>
    : public
        Basic_SArg_Traits_T<
            ::ZType,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::X>
    : public
        Fixed_Size_SArg_Traits_T<
            ::X,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::X::Y>
    : public
        Fixed_Size_SArg_Traits_T<
            ::X::Y,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::X::Y::Z>
    : public
        Fixed_Size_SArg_Traits_T<
            ::X::Y::Z,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::FieldType>
    : public
        Basic_SArg_Traits_T<
            ::FieldType,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::FieldValue>
    : public
        Var_Size_SArg_Traits_T<
            ::FieldValue,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::Field>
    : public
        Var_Size_SArg_Traits_T<
            ::Field,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::TestOneEnum>
    : public
        Basic_SArg_Traits_T<
            ::TestOneEnum,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::TestTwoEnum>
    : public
        Basic_SArg_Traits_T<
            ::TestTwoEnum,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::TestUnion>
    : public
        Fixed_Size_SArg_Traits_T<
            ::TestUnion,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::U41_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::U41_var,
            ::U41_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::U42_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::U42_var,
            ::U42_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::U85>
    : public
        Fixed_Size_SArg_Traits_T<
            ::U85,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::UString_tag>
    : public
        Var_Array_SArg_Traits_T<
            ::UString_out,
            ::UString_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::U86>
    : public
        Var_Size_SArg_Traits_T<
            ::U86,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::U88>
    : public
        Var_Size_SArg_Traits_T<
            ::U88,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class SArg_Traits< ::UBar>
    : public
        Fixed_Size_SArg_Traits_T<
            ::UBar,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::UBarArray_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::UBarArray_var,
            ::UBarArray_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::U87>
    : public
        Fixed_Size_SArg_Traits_T<
            ::U87,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::U89>
    : public
        Fixed_Size_SArg_Traits_T<
            ::U89,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class SArg_Traits< ::U90>
    : public
        Basic_SArg_Traits_T<
            ::U90,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::U90Array_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::U90Array_var,
            ::U90Array_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::U91>
    : public
        Fixed_Size_SArg_Traits_T<
            ::U91,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::U92>
    : public
        Fixed_Size_SArg_Traits_T<
            ::U92,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::U93>
    : public
        Fixed_Size_SArg_Traits_T<
            ::U93,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class SArg_Traits< ::U94>
    : public
        Fixed_Size_SArg_Traits_T<
            ::U94,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

namespace POA_Necessary
{
  


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module Necessary
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

namespace POA_UnionDiscTest
{
  


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module UnionDiscTest
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

namespace POA_AllBoolUnions
{
  


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module AllBoolUnions
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:34

namespace POA_UnionTest3
{
  


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_sh.cpp:65

} // module UnionTest3

#include "unionS_T.h"


#include /**/ "ace/post.h"

#endif /* ifndef */

