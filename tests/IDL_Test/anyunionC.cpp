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


#include "anyunionC.h"
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
#include "anyunionC.inl"
#endif /* !defined INLINE */
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/enum_typecode.cpp:27

static char const * const _tao_enumerators_AnyUnionEnum[] =
  {
    "ANYUNIONENUM2"
    
  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_AnyUnionEnum (
    "IDL:AnyUnionEnum:1.0",
    "AnyUnionEnum",
    _tao_enumerators_AnyUnionEnum,
    1);
  
::CORBA::TypeCode_ptr const _tc_AnyUnionEnum =
  &_tao_tc_AnyUnionEnum;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/union_cs.cpp:75



MyAnyUnion::MyAnyUnion ()
{
  ACE_OS::memset (&this->u_, 0, sizeof (this->u_));
  this->disc_ = (AnyUnionEnum) -1;
}

MyAnyUnion::MyAnyUnion (const ::MyAnyUnion &u)
{
  this->disc_ = u.disc_;
  switch (this->disc_)
  {
    case ::ANYUNIONENUM2:
    {
      if (!u.u_.my_any_)
        {
          this->u_.my_any_ = nullptr;
        }
      else
        {
          ACE_NEW (
              this->u_.my_any_,
              CORBA::Any (*u.u_.my_any_)
            );
        }
    }
    break;
    default:
    break;
  }
}

MyAnyUnion::~MyAnyUnion ()
{
  // Finalize.
  this->_reset ();
}

void MyAnyUnion::_tao_any_destructor (void *_tao_void_pointer)
{
  MyAnyUnion *tmp =
    static_cast<MyAnyUnion *> (_tao_void_pointer);
  delete tmp;
}

MyAnyUnion &
MyAnyUnion::operator= (const ::MyAnyUnion &u)
{
  if (std::addressof(u) == this)
    {
      return *this;
    }
  
  this->_reset ();
  this->disc_ = u.disc_;

  switch (this->disc_)
  {
    case ::ANYUNIONENUM2:
    {
      if (!u.u_.my_any_)
        {
          this->u_.my_any_ = nullptr;
        }
      else
        {
          ACE_NEW_RETURN (
              this->u_.my_any_,
              CORBA::Any (*u.u_.my_any_),
              *this);
        }
    }
    break;
    default:
    break;
  }
  
  return *this;
}

/// Reset method to reset old values of a union.
void MyAnyUnion::_reset ()
{
  switch (this->disc_)
  {
    
    case ::ANYUNIONENUM2:
      delete this->u_.my_any_;
      this->u_.my_any_ = nullptr;
      
    break;
    
    default:
    break;
  }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/union_typecode.cpp:63

static TAO::TypeCode::Case_T<AnyUnionEnum, char const *, ::CORBA::TypeCode_ptr const *> const _tao_cases_MyAnyUnion__0 (::ANYUNIONENUM2, "my_any", &CORBA::_tc_any);

static TAO::TypeCode::Case<char const *, ::CORBA::TypeCode_ptr const *> const * const _tao_cases_MyAnyUnion[] =
  {
    &_tao_cases_MyAnyUnion__0
  };

static TAO::TypeCode::Union<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::TypeCode::Case<char const *, ::CORBA::TypeCode_ptr const *> const * const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_MyAnyUnion (
    "IDL:MyAnyUnion:1.0",
    "MyAnyUnion",
    &_tc_AnyUnionEnum,
    _tao_cases_MyAnyUnion,
    sizeof (_tao_cases_MyAnyUnion)/sizeof (_tao_cases_MyAnyUnion[0]),
    -1);
  
::CORBA::TypeCode_ptr const _tc_MyAnyUnion =
  &_tao_tc_MyAnyUnion;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/any_op_cs.cpp:34


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

void operator<<= (
    ::CORBA::Any &_tao_any,
    AnyUnionEnum _tao_elem)
{
  TAO::Any_Basic_Impl_T<AnyUnionEnum>::insert (
      _tao_any,
      _tc_AnyUnionEnum,
      _tao_elem);
}

::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    AnyUnionEnum &_tao_elem)
{
  return
    TAO::Any_Basic_Impl_T<AnyUnionEnum>::extract (
        _tao_any,
        _tc_AnyUnionEnum,
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
  const MyAnyUnion &_tao_elem)
{
  TAO::Any_Dual_Impl_T<MyAnyUnion>::insert_copy (
    _tao_any,
    MyAnyUnion::_tao_any_destructor,
    _tc_MyAnyUnion,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  MyAnyUnion *_tao_elem)
{
  TAO::Any_Dual_Impl_T<MyAnyUnion>::insert (
    _tao_any,
    MyAnyUnion::_tao_any_destructor,
    _tc_MyAnyUnion,
    _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const MyAnyUnion *&_tao_elem)
{
  return TAO::Any_Dual_Impl_T<MyAnyUnion>::extract (
    _tao_any,
    MyAnyUnion::_tao_any_destructor,
    _tc_MyAnyUnion,
    _tao_elem);
}
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/cdr_op_cs.cpp:29


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, AnyUnionEnum _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, AnyUnionEnum & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<AnyUnionEnum> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/cdr_op_cs.cpp:119


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const MyAnyUnion &_tao_union)
{
  if (!(strm << _tao_union._d ()))
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_union._d ())
  {
    case ::ANYUNIONENUM2:
      {
        result = strm << _tao_union.my_any ();
      }
      break;
    default:
      break;
  }

  return result;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    MyAnyUnion &_tao_union)
{
  AnyUnionEnum _tao_discriminant;
  if (!(strm >> _tao_discriminant))
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_discriminant)
  {
    case ::ANYUNIONENUM2:
      {
        CORBA::Any _tao_union_tmp;
        result = strm >> _tao_union_tmp;
        if (result)
          {
            _tao_union.my_any (_tao_union_tmp);
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


