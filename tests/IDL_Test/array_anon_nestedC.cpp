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


#include "array_anon_nestedC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
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
#include "tao/AnyTypeCode/Any_Array_Impl_T.h"
#include "memory"

#if !defined (__ACE_INLINE__)
#include "array_anon_nestedC.inl"
#endif /* !defined INLINE */
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/struct_typecode.cpp:84


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_defn.cpp:296


#ifndef _TAO_TYPECODE_teststruct_b_GUARD
#define _TAO_TYPECODE_teststruct_b_GUARD

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        teststruct_b_4 (
          ::CORBA::tk_array,
          &CORBA::_tc_char,
          4U);
        
      ::CORBA::TypeCode_ptr const tc_teststruct_b =
        &teststruct_b_4;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_TYPECODE_teststruct_b_GUARD */
static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_teststruct[] =
      {
        { "b", &TAO::TypeCode::tc_teststruct_b },
        { "estruct", &teststruct::_tc_embeddedstruct }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_teststruct (
  ::CORBA::tk_struct,
  "IDL:teststruct:1.0",
  "teststruct",
  _tao_fields_teststruct,
  2);

::CORBA::TypeCode_ptr const _tc_teststruct =
  &_tao_tc_teststruct;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/structure_cs.cpp:55

void
teststruct::_tao_any_destructor (
    void *_tao_void_pointer)
{
  teststruct *_tao_tmp_pointer =
    static_cast<teststruct *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_array/array_cs.cpp:89

teststruct::_b_slice *
teststruct::_b_dup (const teststruct::_b_slice *_tao_src_array)
{
  teststruct::_b_slice *_tao_dup_array = teststruct::_b_alloc ();
  
  if (_tao_dup_array)
    {
      teststruct::_b_copy (_tao_dup_array, _tao_src_array);
    }
  
  return _tao_dup_array;
}

teststruct::_b_slice *
teststruct::_b_alloc ()
{
  teststruct::_b_slice *retval {};
  ACE_NEW_RETURN (retval, ::CORBA::Char[4], nullptr);
  return retval;
}

void
teststruct::_b_free (teststruct::_b_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
teststruct::_b_copy (
    teststruct::_b_slice * _tao_to,
    const teststruct::_b_slice *_tao_from)
{
  // Copy each individual element.
  for (::CORBA::ULong i0 = 0; i0 < 4; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/struct_typecode.cpp:84


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_defn.cpp:296


#ifndef _TAO_TYPECODE_teststruct_embeddedstruct_a_GUARD
#define _TAO_TYPECODE_teststruct_embeddedstruct_a_GUARD

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        teststruct_embeddedstruct_a_4 (
          ::CORBA::tk_array,
          &CORBA::_tc_char,
          4U);
        
      ::CORBA::TypeCode_ptr const tc_teststruct_embeddedstruct_a =
        &teststruct_embeddedstruct_a_4;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_TYPECODE_teststruct_embeddedstruct_a_GUARD */
static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_teststruct_embeddedstruct[] =
      {
        { "a", &TAO::TypeCode::tc_teststruct_embeddedstruct_a }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_teststruct_embeddedstruct (
  ::CORBA::tk_struct,
  "IDL:teststruct/embeddedstruct:1.0",
  "embeddedstruct",
  _tao_fields_teststruct_embeddedstruct,
  1);

::CORBA::TypeCode_ptr const teststruct::_tc_embeddedstruct =
  &_tao_tc_teststruct_embeddedstruct;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/structure_cs.cpp:55

void
teststruct::embeddedstruct::_tao_any_destructor (
    void *_tao_void_pointer)
{
  embeddedstruct *_tao_tmp_pointer =
    static_cast<embeddedstruct *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_array/array_cs.cpp:89

teststruct::embeddedstruct::_a_slice *
teststruct::embeddedstruct::_a_dup (const teststruct::embeddedstruct::_a_slice *_tao_src_array)
{
  teststruct::embeddedstruct::_a_slice *_tao_dup_array = teststruct::embeddedstruct::_a_alloc ();
  
  if (_tao_dup_array)
    {
      teststruct::embeddedstruct::_a_copy (_tao_dup_array, _tao_src_array);
    }
  
  return _tao_dup_array;
}

teststruct::embeddedstruct::_a_slice *
teststruct::embeddedstruct::_a_alloc ()
{
  teststruct::embeddedstruct::_a_slice *retval {};
  ACE_NEW_RETURN (retval, ::CORBA::Char[4], nullptr);
  return retval;
}

void
teststruct::embeddedstruct::_a_free (teststruct::embeddedstruct::_a_slice *_tao_slice)
{
  delete [] _tao_slice;
}

void
teststruct::embeddedstruct::_a_copy (
    teststruct::embeddedstruct::_a_slice * _tao_to,
    const teststruct::embeddedstruct::_a_slice *_tao_from)
{
  // Copy each individual element.
  for (::CORBA::ULong i0 = 0; i0 < 4; ++i0)
    {
      _tao_to[i0] = _tao_from[i0];
    }
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/alias_typecode.cpp:46

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_tstruct (
    ::CORBA::tk_alias,
    "IDL:tstruct:1.0",
    "tstruct",
    &_tc_teststruct);
  
::CORBA::TypeCode_ptr const _tc_tstruct =
  &_tao_tc_tstruct;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/any_op_cs.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const ::teststruct &_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::teststruct>::insert_copy (
    _tao_any,
    ::teststruct::_tao_any_destructor,
    _tc_teststruct,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  ::teststruct *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::teststruct>::insert (
    _tao_any,
    ::teststruct::_tao_any_destructor,
    _tc_teststruct,
    _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const ::teststruct *&_tao_elem)
{
  return TAO::Any_Dual_Impl_T< ::teststruct>::extract (
    _tao_any,
    ::teststruct::_tao_any_destructor,
    _tc_teststruct,
    _tao_elem);
}
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/any_op_cs.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const ::teststruct::embeddedstruct &_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::teststruct::embeddedstruct>::insert_copy (
    _tao_any,
    ::teststruct::embeddedstruct::_tao_any_destructor,
    teststruct::_tc_embeddedstruct,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  ::teststruct::embeddedstruct *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::teststruct::embeddedstruct>::insert (
    _tao_any,
    ::teststruct::embeddedstruct::_tao_any_destructor,
    teststruct::_tc_embeddedstruct,
    _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const ::teststruct::embeddedstruct *&_tao_elem)
{
  return TAO::Any_Dual_Impl_T< ::teststruct::embeddedstruct>::extract (
    _tao_any,
    ::teststruct::embeddedstruct::_tao_any_destructor,
    teststruct::_tc_embeddedstruct,
    _tao_elem);
}
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_array/cdr_op_cs.cpp:162


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const teststruct::_b_forany &_tao_array)
{
  return strm.write_char_array (
      reinterpret_cast <const ACE_CDR::Char *> (_tao_array.in ()),
      4);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    teststruct::_b_forany &_tao_array)
{
  return strm.read_char_array (
      reinterpret_cast <ACE_CDR::Char *> (_tao_array.out ()),
      4);
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_array/cdr_op_cs.cpp:162


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const teststruct::embeddedstruct::_a_forany &_tao_array)
{
  return strm.write_char_array (
      reinterpret_cast <const ACE_CDR::Char *> (_tao_array.in ()),
      4);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    teststruct::embeddedstruct::_a_forany &_tao_array)
{
  return strm.read_char_array (
      reinterpret_cast <ACE_CDR::Char *> (_tao_array.out ()),
      4);
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/cdr_op_cs.cpp:48


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const teststruct::embeddedstruct &_tao_aggregate)
{
  teststruct::embeddedstruct::_a_forany _tao_aggregate_a
    (const_cast<teststruct::embeddedstruct::_a_slice*> (
      _tao_aggregate.a));
  return
    (strm << _tao_aggregate_a) &&
    true;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    teststruct::embeddedstruct &_tao_aggregate)
{
  teststruct::embeddedstruct::_a_forany _tao_aggregate_a
    (const_cast<teststruct::embeddedstruct::_a_slice*> (
      _tao_aggregate.a));
  return
    (strm >> _tao_aggregate_a) &&
    true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_structure/cdr_op_cs.cpp:48


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const teststruct &_tao_aggregate)
{
  teststruct::_b_forany _tao_aggregate_b
    (const_cast<teststruct::_b_slice*> (
      _tao_aggregate.b));
  return
    (strm << _tao_aggregate_b) &&
    (strm << _tao_aggregate.estruct) &&
    true;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    teststruct &_tao_aggregate)
{
  teststruct::_b_forany _tao_aggregate_b
    (const_cast<teststruct::_b_slice*> (
      _tao_aggregate.b));
  return
    (strm >> _tao_aggregate_b) &&
    (strm >> _tao_aggregate.estruct) &&
    true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



