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
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:372


#include "Bug_3312_RegressionC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Enum_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/AnyTypeCode/TypeCode_Case_T.h"
#include "tao/AnyTypeCode/Union_TypeCode_Static.h"
#include "tao/AnyTypeCode/Value_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Value_Field.h"
#include "tao/CDR.h"
#include "tao/Messaging/Asynch_Invocation_Adapter.h"
#include "tao/Messaging/ExceptionHolder_i.h"
#include "tao/Valuetype/ValueFactory.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "tao/AnyTypeCode/Any_Basic_Impl_T.h"
#include "cstring"
#include "memory"

#if !defined (__ACE_INLINE__)
#include "Bug_3312_RegressionC.inl"
#endif /* !defined INLINE */
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/enum_typecode.cpp:27

static char const * const _tao_enumerators_CallMe_Colors[] =
  {
    "Red",
    "Green",
    "Blue"
    
  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_CallMe_Colors (
    "IDL:CallMe/Colors:1.0",
    "Colors",
    _tao_enumerators_CallMe_Colors,
    3);
  

namespace CallMe
{
  ::CORBA::TypeCode_ptr const _tc_Colors =
    &_tao_tc_CallMe_Colors;
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/enum_typecode.cpp:27

static char const * const _tao_enumerators_CallMe_YourColorBaby_ColorMe[] =
  {
    "Red",
    "Blue"
    
  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_CallMe_YourColorBaby_ColorMe (
    "IDL:CallMe/YourColorBaby/ColorMe:1.0",
    "ColorMe",
    _tao_enumerators_CallMe_YourColorBaby_ColorMe,
    2);
  
::CORBA::TypeCode_ptr const CallMe::YourColorBaby::_tc_ColorMe =
  &_tao_tc_CallMe_YourColorBaby_ColorMe;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/enum_typecode.cpp:27

static char const * const _tao_enumerators_CallMe_YourColorBaby_Val[] =
  {
    "one",
    "two"
    
  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_CallMe_YourColorBaby_Val (
    "IDL:CallMe/YourColorBaby/Val:1.0",
    "Val",
    _tao_enumerators_CallMe_YourColorBaby_Val,
    2);
  
::CORBA::TypeCode_ptr const CallMe::YourColorBaby::_tc_Val =
  &_tao_tc_CallMe_YourColorBaby_Val;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/union_cs.cpp:75



CallMe::YourColorBaby::YourColorBaby ()
{
  ACE_OS::memset (&this->u_, 0, sizeof (this->u_));
  this->disc_ = (CallMe::YourColorBaby::ColorMe) -1;
}

CallMe::YourColorBaby::YourColorBaby (const ::CallMe::YourColorBaby &u)
{
  this->disc_ = u.disc_;
  switch (this->disc_)
  {
    case CallMe::YourColorBaby::Red:
    {
      this->u_.c_1_ = 
        u.u_.c_1_;
    }
    break;
    case CallMe::YourColorBaby::Blue:
    {
      this->u_.c_2_ = u.u_.c_2_;
    }
    break;
    default:
    break;
  }
}

CallMe::YourColorBaby::~YourColorBaby ()
{
  // Finalize.
  this->_reset ();
}

void CallMe::YourColorBaby::_tao_any_destructor (void *_tao_void_pointer)
{
  YourColorBaby *tmp =
    static_cast<YourColorBaby *> (_tao_void_pointer);
  delete tmp;
}

CallMe::YourColorBaby &
CallMe::YourColorBaby::operator= (const ::CallMe::YourColorBaby &u)
{
  if (std::addressof(u) == this)
    {
      return *this;
    }
  
  this->_reset ();
  this->disc_ = u.disc_;

  switch (this->disc_)
  {
    case CallMe::YourColorBaby::Red:
    {
      this->u_.c_1_ = 
        u.u_.c_1_;
    }
    break;
    case CallMe::YourColorBaby::Blue:
    {
      this->u_.c_2_ = u.u_.c_2_;
    }
    break;
    default:
    break;
  }
  
  return *this;
}

/// Reset method to reset old values of a union.
void CallMe::YourColorBaby::_reset ()
{
  switch (this->disc_)
  {
    
    case CallMe::YourColorBaby::Red:
      
    break;
    
    case CallMe::YourColorBaby::Blue:
      
    break;
    
    default:
    break;
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/union_typecode.cpp:63

static TAO::TypeCode::Case_T<CallMe::YourColorBaby::ColorMe, char const *, ::CORBA::TypeCode_ptr const *> const _tao_cases_CallMe_YourColorBaby__0 (CallMe::YourColorBaby::Red, "c_1", &CallMe::YourColorBaby::_tc_Val);
static TAO::TypeCode::Case_T<CallMe::YourColorBaby::ColorMe, char const *, ::CORBA::TypeCode_ptr const *> const _tao_cases_CallMe_YourColorBaby__1 (CallMe::YourColorBaby::Blue, "c_2", &CORBA::_tc_long);

static TAO::TypeCode::Case<char const *, ::CORBA::TypeCode_ptr const *> const * const _tao_cases_CallMe_YourColorBaby[] =
  {
    &_tao_cases_CallMe_YourColorBaby__0,
    &_tao_cases_CallMe_YourColorBaby__1
  };

static TAO::TypeCode::Union<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::TypeCode::Case<char const *, ::CORBA::TypeCode_ptr const *> const * const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_CallMe_YourColorBaby (
    "IDL:CallMe/YourColorBaby:1.0",
    "YourColorBaby",
    &CallMe::YourColorBaby::_tc_ColorMe,
    _tao_cases_CallMe_YourColorBaby,
    sizeof (_tao_cases_CallMe_YourColorBaby)/sizeof (_tao_cases_CallMe_YourColorBaby[0]),
    -1);
  

namespace CallMe
{
  ::CORBA::TypeCode_ptr const _tc_YourColorBaby =
    &_tao_tc_CallMe_YourColorBaby;
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/enum_typecode.cpp:27

static char const * const _tao_enumerators_CallMe_YourCar_ColorMe[] =
  {
    "Green",
    "Pink"
    
  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_CallMe_YourCar_ColorMe (
    "IDL:CallMe/YourCar/ColorMe:1.0",
    "ColorMe",
    _tao_enumerators_CallMe_YourCar_ColorMe,
    2);
  
::CORBA::TypeCode_ptr const CallMe::YourCar::_tc_ColorMe =
  &_tao_tc_CallMe_YourCar_ColorMe;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/union_cs.cpp:75



CallMe::YourCar::YourCar ()
{
  ACE_OS::memset (&this->u_, 0, sizeof (this->u_));
  this->disc_ = (CallMe::YourCar::ColorMe) -1;
}

CallMe::YourCar::YourCar (const ::CallMe::YourCar &u)
{
  this->disc_ = u.disc_;
  switch (this->disc_)
  {
    case CallMe::YourCar::Green:
    {
      this->u_.c_1_ = u.u_.c_1_;
    }
    break;
    case CallMe::YourCar::Pink:
    {
      this->u_.c_2_ = u.u_.c_2_;
    }
    break;
    default:
    break;
  }
}

CallMe::YourCar::~YourCar ()
{
  // Finalize.
  this->_reset ();
}

void CallMe::YourCar::_tao_any_destructor (void *_tao_void_pointer)
{
  YourCar *tmp =
    static_cast<YourCar *> (_tao_void_pointer);
  delete tmp;
}

CallMe::YourCar &
CallMe::YourCar::operator= (const ::CallMe::YourCar &u)
{
  if (std::addressof(u) == this)
    {
      return *this;
    }
  
  this->_reset ();
  this->disc_ = u.disc_;

  switch (this->disc_)
  {
    case CallMe::YourCar::Green:
    {
      this->u_.c_1_ = u.u_.c_1_;
    }
    break;
    case CallMe::YourCar::Pink:
    {
      this->u_.c_2_ = u.u_.c_2_;
    }
    break;
    default:
    break;
  }
  
  return *this;
}

/// Reset method to reset old values of a union.
void CallMe::YourCar::_reset ()
{
  switch (this->disc_)
  {
    
    case CallMe::YourCar::Green:
      
    break;
    
    case CallMe::YourCar::Pink:
      
    break;
    
    default:
    break;
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/union_typecode.cpp:63

static TAO::TypeCode::Case_T<CallMe::YourCar::ColorMe, char const *, ::CORBA::TypeCode_ptr const *> const _tao_cases_CallMe_YourCar__0 (CallMe::YourCar::Green, "c_1", &CORBA::_tc_short);
static TAO::TypeCode::Case_T<CallMe::YourCar::ColorMe, char const *, ::CORBA::TypeCode_ptr const *> const _tao_cases_CallMe_YourCar__1 (CallMe::YourCar::Pink, "c_2", &CORBA::_tc_short);

static TAO::TypeCode::Case<char const *, ::CORBA::TypeCode_ptr const *> const * const _tao_cases_CallMe_YourCar[] =
  {
    &_tao_cases_CallMe_YourCar__0,
    &_tao_cases_CallMe_YourCar__1
  };

static TAO::TypeCode::Union<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::TypeCode::Case<char const *, ::CORBA::TypeCode_ptr const *> const * const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_CallMe_YourCar (
    "IDL:CallMe/YourCar:1.0",
    "YourCar",
    &CallMe::YourCar::_tc_ColorMe,
    _tao_cases_CallMe_YourCar,
    sizeof (_tao_cases_CallMe_YourCar)/sizeof (_tao_cases_CallMe_YourCar[0]),
    -1);
  

namespace CallMe
{
  ::CORBA::TypeCode_ptr const _tc_YourCar =
    &_tao_tc_CallMe_YourCar;
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/any_op_cs.cpp:34


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

void operator<<= (
    ::CORBA::Any &_tao_any,
    CallMe::Colors _tao_elem)
{
  TAO::Any_Basic_Impl_T<CallMe::Colors>::insert (
      _tao_any,
      CallMe::_tc_Colors,
      _tao_elem);
}

::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    CallMe::Colors &_tao_elem)
{
  return
    TAO::Any_Basic_Impl_T<CallMe::Colors>::extract (
        _tao_any,
        CallMe::_tc_Colors,
        _tao_elem);
}
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/any_op_cs.cpp:35


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const CallMe::YourColorBaby &_tao_elem)
{
  TAO::Any_Dual_Impl_T<CallMe::YourColorBaby>::insert_copy (
    _tao_any,
    CallMe::YourColorBaby::_tao_any_destructor,
    CallMe::_tc_YourColorBaby,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  CallMe::YourColorBaby *_tao_elem)
{
  TAO::Any_Dual_Impl_T<CallMe::YourColorBaby>::insert (
    _tao_any,
    CallMe::YourColorBaby::_tao_any_destructor,
    CallMe::_tc_YourColorBaby,
    _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const CallMe::YourColorBaby *&_tao_elem)
{
  return TAO::Any_Dual_Impl_T<CallMe::YourColorBaby>::extract (
    _tao_any,
    CallMe::YourColorBaby::_tao_any_destructor,
    CallMe::_tc_YourColorBaby,
    _tao_elem);
}
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/any_op_cs.cpp:34


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

void operator<<= (
    ::CORBA::Any &_tao_any,
    CallMe::YourColorBaby::ColorMe _tao_elem)
{
  TAO::Any_Basic_Impl_T<CallMe::YourColorBaby::ColorMe>::insert (
      _tao_any,
      CallMe::YourColorBaby::_tc_ColorMe,
      _tao_elem);
}

::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    CallMe::YourColorBaby::ColorMe &_tao_elem)
{
  return
    TAO::Any_Basic_Impl_T<CallMe::YourColorBaby::ColorMe>::extract (
        _tao_any,
        CallMe::YourColorBaby::_tc_ColorMe,
        _tao_elem);
}
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/any_op_cs.cpp:34


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

void operator<<= (
    ::CORBA::Any &_tao_any,
    CallMe::YourColorBaby::Val _tao_elem)
{
  TAO::Any_Basic_Impl_T<CallMe::YourColorBaby::Val>::insert (
      _tao_any,
      CallMe::YourColorBaby::_tc_Val,
      _tao_elem);
}

::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    CallMe::YourColorBaby::Val &_tao_elem)
{
  return
    TAO::Any_Basic_Impl_T<CallMe::YourColorBaby::Val>::extract (
        _tao_any,
        CallMe::YourColorBaby::_tc_Val,
        _tao_elem);
}
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/any_op_cs.cpp:35


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const CallMe::YourCar &_tao_elem)
{
  TAO::Any_Dual_Impl_T<CallMe::YourCar>::insert_copy (
    _tao_any,
    CallMe::YourCar::_tao_any_destructor,
    CallMe::_tc_YourCar,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  CallMe::YourCar *_tao_elem)
{
  TAO::Any_Dual_Impl_T<CallMe::YourCar>::insert (
    _tao_any,
    CallMe::YourCar::_tao_any_destructor,
    CallMe::_tc_YourCar,
    _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const CallMe::YourCar *&_tao_elem)
{
  return TAO::Any_Dual_Impl_T<CallMe::YourCar>::extract (
    _tao_any,
    CallMe::YourCar::_tao_any_destructor,
    CallMe::_tc_YourCar,
    _tao_elem);
}
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/any_op_cs.cpp:34


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

void operator<<= (
    ::CORBA::Any &_tao_any,
    CallMe::YourCar::ColorMe _tao_elem)
{
  TAO::Any_Basic_Impl_T<CallMe::YourCar::ColorMe>::insert (
      _tao_any,
      CallMe::YourCar::_tc_ColorMe,
      _tao_elem);
}

::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    CallMe::YourCar::ColorMe &_tao_elem)
{
  return
    TAO::Any_Basic_Impl_T<CallMe::YourCar::ColorMe>::extract (
        _tao_any,
        CallMe::YourCar::_tc_ColorMe,
        _tao_elem);
}
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/cdr_op_cs.cpp:29


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, CallMe::Colors _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, CallMe::Colors & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<CallMe::Colors> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/cdr_op_cs.cpp:29


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, CallMe::YourColorBaby::ColorMe _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, CallMe::YourColorBaby::ColorMe & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<CallMe::YourColorBaby::ColorMe> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/cdr_op_cs.cpp:29


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, CallMe::YourColorBaby::Val _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, CallMe::YourColorBaby::Val & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<CallMe::YourColorBaby::Val> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/cdr_op_cs.cpp:119


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CallMe::YourColorBaby &_tao_union)
{
  if (!(strm << _tao_union._d ()))
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_union._d ())
  {
    case CallMe::YourColorBaby::Red:
      {
        result = strm << _tao_union.c_1 ();
      }
      break;
    case CallMe::YourColorBaby::Blue:
      {
        result = strm << _tao_union.c_2 ();
      }
      break;
    default:
      break;
  }

  return result;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CallMe::YourColorBaby &_tao_union)
{
  CallMe::YourColorBaby::ColorMe _tao_discriminant;
  if (!(strm >> _tao_discriminant))
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_discriminant)
  {
    case CallMe::YourColorBaby::Red:
      {
        CallMe::YourColorBaby::Val _tao_union_tmp =
          static_cast<CallMe::YourColorBaby::Val> (0UL);
        result = strm >> _tao_union_tmp;
        if (result)
          {
            _tao_union.c_1 (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    case CallMe::YourColorBaby::Blue:
      {
        CORBA::Long _tao_union_tmp;
        result = strm >> _tao_union_tmp;
        if (result)
          {
            _tao_union.c_2 (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    default:
      _tao_union._default ();
      // For maximum interop compatibility, force the same value as transmitted
      _tao_union._d (_tao_discriminant);
      break;
  }

  return result;
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/cdr_op_cs.cpp:29


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, CallMe::YourCar::ColorMe _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, CallMe::YourCar::ColorMe & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<CallMe::YourCar::ColorMe> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/cdr_op_cs.cpp:119


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CallMe::YourCar &_tao_union)
{
  if (!(strm << _tao_union._d ()))
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_union._d ())
  {
    case CallMe::YourCar::Green:
      {
        result = strm << _tao_union.c_1 ();
      }
      break;
    case CallMe::YourCar::Pink:
      {
        result = strm << _tao_union.c_2 ();
      }
      break;
    default:
      break;
  }

  return result;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CallMe::YourCar &_tao_union)
{
  CallMe::YourCar::ColorMe _tao_discriminant;
  if (!(strm >> _tao_discriminant))
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_discriminant)
  {
    case CallMe::YourCar::Green:
      {
        CORBA::Short _tao_union_tmp;
        result = strm >> _tao_union_tmp;
        if (result)
          {
            _tao_union.c_1 (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    case CallMe::YourCar::Pink:
      {
        CORBA::Short _tao_union_tmp;
        result = strm >> _tao_union_tmp;
        if (result)
          {
            _tao_union.c_2 (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    default:
      _tao_union._default ();
      // For maximum interop compatibility, force the same value as transmitted
      _tao_union._d (_tao_discriminant);
      break;
  }

  return result;
}

TAO_END_VERSIONED_NAMESPACE_DECL



