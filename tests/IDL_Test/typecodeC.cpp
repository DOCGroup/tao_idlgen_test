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


#include "typecodeC.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Messaging/Asynch_Invocation_Adapter.h"
#include "tao/Messaging/ExceptionHolder_i.h"
#include "tao/Valuetype/ValueFactory.h"
#include "tao/Object_T.h"
#include "cstring"
#include "memory"

#if !defined (__ACE_INLINE__)
#include "typecodeC.inl"
#endif /* !defined INLINE */


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_sequence/sequence_cs.cpp:104



#if !defined (_MYMODULE_TYPECODELIST_CS_)
#define _MYMODULE_TYPECODELIST_CS_

MyModule::TypeCodeList::TypeCodeList (
    ::CORBA::ULong max)
  : ::TAO::unbounded_object_reference_sequence<
        ::CORBA::TypeCode,
        ::CORBA::TypeCode_var
      > (max)
{}

MyModule::TypeCodeList::TypeCodeList (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::TypeCode_ptr * buffer,
    ::CORBA::Boolean release)
  : ::TAO::unbounded_object_reference_sequence<
        ::CORBA::TypeCode,
        ::CORBA::TypeCode_var
      >
    (max, length, buffer, release)
{}

void MyModule::TypeCodeList::_tao_any_destructor (
    void * _tao_void_pointer)
{
  TypeCodeList * _tao_tmp_pointer =
    static_cast<TypeCodeList *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_sequence/cdr_op_cs.cpp:92

#if !defined _TAO_CDR_OP_MyModule_TypeCodeList_CPP_
#define _TAO_CDR_OP_MyModule_TypeCodeList_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const MyModule::TypeCodeList &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    MyModule::TypeCodeList &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_MyModule_TypeCodeList_CPP_ */
