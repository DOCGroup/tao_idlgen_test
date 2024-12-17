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

#ifndef _TAO_IDL_BUG_2583_REGRESSIONC_C2KSHO_H_
#define _TAO_IDL_BUG_2583_REGRESSIONC_C2KSHO_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "TAO_IDL_TEST_stub_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Messaging/Messaging.h"
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 4 || TAO_MINOR_VERSION != 0 || TAO_MICRO_VERSION != 2
#error This file should be regenerated with TAO_IDL
#endif
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

namespace Test
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742

  

#if !defined (_TEST_DYNANY__VAR_OUT_CH_)
#define _TEST_DYNANY__VAR_OUT_CH_

  class AMI_DynAnyHandler;
  typedef AMI_DynAnyHandler *AMI_DynAnyHandler_ptr;

  class DynAny;
  using DynAny_ptr = DynAny*;
  using DynAny_var = TAO_Objref_Var_T<DynAny>;
  using DynAny_out = TAO_Objref_Out_T<DynAny>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

  

  class TAO_IDL_TEST_STUB_Export DynAny
    : public virtual ::CORBA::Object
  {
  public:
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = DynAny_ptr;
    using _var_type = DynAny_var;
    using _out_type = DynAny_out;

    static void _tao_any_destructor (void *);

    // The static operations.
    static DynAny_ptr _duplicate (DynAny_ptr obj);

    static void _tao_release (DynAny_ptr obj);

    static DynAny_ptr _narrow (::CORBA::Object_ptr obj);
    static DynAny_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static DynAny_ptr _nil ();

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    static const char* _desc_repository_id ();
    static const char* _desc_interface_name ();
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    DynAny ();

    

    virtual ~DynAny () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    DynAny (const DynAny &) = delete;
    DynAny (DynAny &&) = delete;
    DynAny &operator= (const DynAny &) = delete;
    DynAny &operator= (DynAny &&) = delete;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_DynAny;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:258

  

  struct NameDynAnyPair;
  using NameDynAnyPair_var = ::TAO_Var_Var_T<NameDynAnyPair>;
  using NameDynAnyPair_out = ::TAO_Out_T<NameDynAnyPair>;

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/structure_ch.cpp:47

  

  struct TAO_IDL_TEST_STUB_Export NameDynAnyPair
  {
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    
    using _var_type = NameDynAnyPair_var;
    using _out_type = NameDynAnyPair_out;

    static void _tao_any_destructor (void *);
    
    ::TAO::String_Manager id;
    Test::DynAny_var value;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_NameDynAnyPair;

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_sequence/sequence_ch.cpp:98

  

#if !defined (_TEST_NAMEDYNANYPAIRSEQ_CH_)
#define _TEST_NAMEDYNANYPAIRSEQ_CH_

  class NameDynAnyPairSeq;
  typedef ::TAO_VarSeq_Var_T<NameDynAnyPairSeq> NameDynAnyPairSeq_var;
  typedef ::TAO_Seq_Out_T<NameDynAnyPairSeq> NameDynAnyPairSeq_out;
  

  class TAO_IDL_TEST_STUB_Export NameDynAnyPairSeq
    : public
        ::TAO::unbounded_value_sequence< NameDynAnyPair>
  {
  public:
    NameDynAnyPairSeq () = default;
    NameDynAnyPairSeq (::CORBA::ULong max);
    NameDynAnyPairSeq (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      NameDynAnyPair* buffer,
      ::CORBA::Boolean release = false);
    NameDynAnyPairSeq (const NameDynAnyPairSeq &) = default;
    NameDynAnyPairSeq (NameDynAnyPairSeq &&) = default;
    NameDynAnyPairSeq& operator= (const NameDynAnyPairSeq &) = default;
    NameDynAnyPairSeq& operator= (NameDynAnyPairSeq &&) = default;
    virtual ~NameDynAnyPairSeq () = default;
    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    
    using _var_type = NameDynAnyPairSeq_var;
    using _out_type = NameDynAnyPairSeq_out;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_NameDynAnyPairSeq;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module Test
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
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:931

  

  template<>
  class Arg_Traits< ::Test::NameDynAnyPair>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::NameDynAnyPair,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:671

  

  template<>
  class Arg_Traits< ::Test::NameDynAnyPairSeq>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::NameDynAnyPairSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_traits.cpp:58



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_TEST_DYNANY__TRAITS_)
#define _TEST_DYNANY__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::Test::DynAny>
  {
    static ::Test::DynAny_ptr duplicate (::Test::DynAny_ptr p);
    static void release (::Test::DynAny_ptr p);
    static ::Test::DynAny_ptr nil ();
    static ::CORBA::Boolean marshal (const ::Test::DynAny_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, Test::DynAny_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, Test::DynAny_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::DynAny_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const ::Test::NameDynAnyPair &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, ::Test::NameDynAnyPair*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::NameDynAnyPair *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_sequence/any_op_ch.cpp:46




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const ::Test::NameDynAnyPairSeq &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, ::Test::NameDynAnyPairSeq*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::NameDynAnyPairSeq *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:1648

#if defined (__ACE_INLINE__)
#include "Bug_2583_RegressionC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

