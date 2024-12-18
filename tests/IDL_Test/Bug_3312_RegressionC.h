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

#ifndef _TAO_IDL_BUG_3312_REGRESSIONC_OI1RFD_H_
#define _TAO_IDL_BUG_3312_REGRESSIONC_OI1RFD_H_

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
#include "tao/Messaging/Messaging.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Basic_Argument_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 4 || TAO_MINOR_VERSION != 0 || TAO_MICRO_VERSION != 2
#error This file should be regenerated with TAO_IDL
#endif
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

namespace CallMe
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/enum_ch.cpp:39

  enum Colors
  {
    Red,
    Green,
    Blue
  };

  typedef Colors &Colors_out;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_Colors;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:258

  

  class YourColorBaby;
  using YourColorBaby_var = ::TAO_Fixed_Var_T<YourColorBaby>;
  using YourColorBaby_out = YourColorBaby&;

  class TAO_IDL_TEST_STUB_Export YourColorBaby
  {
  public:
    YourColorBaby ();
    YourColorBaby (const YourColorBaby &);
    ~YourColorBaby ();

    YourColorBaby &operator= (const YourColorBaby &);
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/enum_ch.cpp:39

    enum ColorMe
    {
      Red,
      Blue
    };

    typedef ColorMe &ColorMe_out;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

    static ::CORBA::TypeCode_ptr const _tc_ColorMe;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/discriminant_ch.cpp:66

    

    void _d (ColorMe);
    ColorMe _d () const;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    
    using _var_type = YourColorBaby_var;
    using _out_type = YourColorBaby_out;

    static void _tao_any_destructor (void *);
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/enum_ch.cpp:39

    enum Val
    {
      one,
      two
    };

    typedef Val &Val_out;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

    static ::CORBA::TypeCode_ptr const _tc_Val;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/public_ch.cpp:186

    

    void c_1 (Val);
    Val c_1 () const;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/public_ch.cpp:440

    

    void c_2 ( ::CORBA::Long);
    ::CORBA::Long c_2 () const;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/union_ch.cpp:120

    

    void _default ();
  private:
    ColorMe disc_;

    union
    {
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/private_ch.cpp:138

      
      Val c_1_;
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/private_ch.cpp:369

      
      ::CORBA::Long c_2_;
    } u_;

    /// TAO extension - frees any allocated storage.
    void _reset ();
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_YourColorBaby;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:258

  

  class YourCar;
  using YourCar_var = ::TAO_Fixed_Var_T<YourCar>;
  using YourCar_out = YourCar&;

  class TAO_IDL_TEST_STUB_Export YourCar
  {
  public:
    YourCar ();
    YourCar (const YourCar &);
    ~YourCar ();

    YourCar &operator= (const YourCar &);
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/enum_ch.cpp:39

    enum ColorMe
    {
      Green,
      Pink
    };

    typedef ColorMe &ColorMe_out;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

    static ::CORBA::TypeCode_ptr const _tc_ColorMe;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/discriminant_ch.cpp:66

    

    void _d (ColorMe);
    ColorMe _d () const;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    
    using _var_type = YourCar_var;
    using _out_type = YourCar_out;

    static void _tao_any_destructor (void *);
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/public_ch.cpp:440

    

    void c_1 ( ::CORBA::Short);
    ::CORBA::Short c_1 () const;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/public_ch.cpp:440

    

    void c_2 ( ::CORBA::Short);
    ::CORBA::Short c_2 () const;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/union_ch.cpp:120

    

    void _default ();
  private:
    ColorMe disc_;

    union
    {
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/private_ch.cpp:369

      
      ::CORBA::Short c_1_;
      // TAO_IDL - Generated from
      // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union_branch/private_ch.cpp:369

      
      ::CORBA::Short c_2_;
    } u_;

    /// TAO extension - frees any allocated storage.
    void _reset ();
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_YourCar;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module CallMe
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
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class Arg_Traits< ::CallMe::Colors>
    : public
        Basic_Arg_Traits_T<
            ::CallMe::Colors,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class Arg_Traits< ::CallMe::YourColorBaby>
    : public
        Fixed_Size_Arg_Traits_T<
            ::CallMe::YourColorBaby,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:889

  

  template<>
  class Arg_Traits< ::CallMe::YourColorBaby::Val>
    : public
        Basic_Arg_Traits_T<
            ::CallMe::YourColorBaby::Val,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:1041

  

  template<>
  class Arg_Traits< ::CallMe::YourCar>
    : public
        Fixed_Size_Arg_Traits_T<
            ::CallMe::YourCar,
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
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/any_op_ch.cpp:31


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, CallMe::Colors);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, CallMe::Colors &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/any_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const CallMe::YourColorBaby &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, CallMe::YourColorBaby*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const CallMe::YourColorBaby *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/any_op_ch.cpp:31


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, CallMe::YourColorBaby::ColorMe);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, CallMe::YourColorBaby::ColorMe &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/any_op_ch.cpp:31


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, CallMe::YourColorBaby::Val);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, CallMe::YourColorBaby::Val &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/any_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const CallMe::YourCar &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, CallMe::YourCar*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const CallMe::YourCar *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/any_op_ch.cpp:31


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, CallMe::YourCar::ColorMe);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, CallMe::YourCar::ColorMe &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/cdr_op_ch.cpp:33


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, CallMe::Colors _tao_enumerator);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &strm, CallMe::Colors &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/cdr_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const CallMe::YourColorBaby &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, CallMe::YourColorBaby &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/cdr_op_ch.cpp:33


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, CallMe::YourColorBaby::ColorMe _tao_enumerator);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &strm, CallMe::YourColorBaby::ColorMe &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/cdr_op_ch.cpp:33


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, CallMe::YourColorBaby::Val _tao_enumerator);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &strm, CallMe::YourColorBaby::Val &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/cdr_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const CallMe::YourCar &);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, CallMe::YourCar &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/cdr_op_ch.cpp:33


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, CallMe::YourCar::ColorMe _tao_enumerator);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &strm, CallMe::YourCar::ColorMe &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:1648

#if defined (__ACE_INLINE__)
#include "Bug_3312_RegressionC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

