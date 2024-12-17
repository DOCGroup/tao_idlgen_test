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
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:767

#ifndef _TAO_IDL_GENERIC_OBJECTA_Q4Y3UB_H_
#define _TAO_IDL_GENERIC_OBJECTA_Q4Y3UB_H_

#include /**/ "ace/pre.h"

#include /**/ "TAO_IDL_TEST_stub_export.h"
#include "tao/AnyTypeCode/Any.h"

#include "generic_objectC.h"

// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_ObjectType;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_Selecter;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_generic;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_genericExceptionHolder;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMH_genericResponseHandler;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

extern TAO_IDL_TEST_STUB_Export ::CORBA::TypeCode_ptr const _tc_AMI_genericHandler;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/any_op_ch.cpp:31


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {



TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, ObjectType);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ObjectType &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_union/any_op_ch.cpp:36


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, const Selecter &); // copying version
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, Selecter*); // noncopying version
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Selecter *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, generic_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, generic_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, generic_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/any_op_ch.cpp:42


TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMH_genericExceptionHolder *); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMH_genericExceptionHolder **); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMH_genericExceptionHolder *&);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMH_genericResponseHandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMH_genericResponseHandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMH_genericResponseHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMI_genericHandler_ptr); // copying
TAO_IDL_TEST_STUB_Export void operator<<= (::CORBA::Any &, AMI_genericHandler_ptr *); // non-copying
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMI_genericHandler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL



#include /**/ "ace/post.h"

#endif /* ifndef */