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

#ifndef _TAO_IDL_CONSTANTSC_CZSEQD_H_
#define _TAO_IDL_CONSTANTSC_CZSEQD_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "TAO_IDL_TEST_stub_export.h"
#include "tao/Valuetype/ValueBase.h"
#include "tao/Valuetype/Valuetype_Adapter_Factory_Impl.h"
#include "tao/Valuetype/ValueFactory.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Messaging/Messaging.h"
#include "tao/Valuetype/Value_VarOut_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Basic_Argument_T.h"
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
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_root/root_ch.cpp:155


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const char *const all_escape = "\n\t\v\b\r\f\a\\\?\'\"";
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Char tick = '\'';
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Char backslash = '\\';
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Char oct_nought = '\x0';
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Char lucky = '\a';
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Char square = '4';
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Char blastoff = '\xd1';
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Char max_char_oct = '\xff';
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Char hex_nought = '\x0';
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Char fingers = '\n';
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Char fortnight = '\xe';
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Char fivebits = '2';
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Char maybe_minus = '\xaf';
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Char max_char_hex = '\xff';
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::WChar *const wstr = L"wstr";
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::ULong in_range = 3222111000U;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::ULong max_ulong_oct = 4294967295U;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::ULong max_ulong_hex = 4294967295U;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::ULongLong AAA = ACE_UINT64_LITERAL (122192928000000000);
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::ULong AA = 3538947897U;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::LongLong NAAA = ACE_INT64_LITERAL (-122192928000000000);
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::LongLong PAAA = ACE_INT64_LITERAL (122192928000000000);
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Long NAA = -1538947897;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Float root_beer = 0.200000F;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Double bogey =                      0.2;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Float trip = 2.000000F;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Double vision =                    2E-05;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Double take =                     2000;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Double dip =   1.797693134862315E+308;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Double trouble =   2.225073858507202E-308;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Long neg = -8;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Long sub1 = 15;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Long sub2 = 15;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::ULong add1 = 17U;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::ULong mul1 = 14336U;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::ULong div1 = 8U;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::UShort stuff = 65535U;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::ULong day = 4294967295U;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::ULong drink = 4000000000U;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::ULong c_l1 = 2U;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34



const CORBA::Octet c_o11 = 0x0c;
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

namespace m_a
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/enum_ch.cpp:39

  enum enum_a
  {
    value_1,
    value_2,
    value_3,
    value_4,
    value_5
  };

  typedef enum_a &enum_a_out;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module m_a
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

namespace m_b
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typedef/typedef_ch.cpp:288

  typedef m_a::enum_a enum_b;
  typedef m_a::enum_a_out enum_b_out;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module m_b
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

namespace problems
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34

  

  const m_a::enum_a bconst = m_a::value_2;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module problems
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

namespace ClassConstants
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742

  

#if !defined (_CLASSCONSTANTS_IFACE__VAR_OUT_CH_)
#define _CLASSCONSTANTS_IFACE__VAR_OUT_CH_

  class AMI_IfaceHandler;
  typedef AMI_IfaceHandler *AMI_IfaceHandler_ptr;

  class Iface;
  using Iface_ptr = Iface*;
  using Iface_var = TAO_Objref_Var_T<Iface>;
  using Iface_out = TAO_Objref_Out_T<Iface>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

  

  class TAO_IDL_TEST_STUB_Export Iface
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Iface>;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = Iface_ptr;
    using _var_type = Iface_var;
    using _out_type = Iface_out;

    static void _tao_any_destructor (void *);

    // The static operations.
    static Iface_ptr _duplicate (Iface_ptr obj);

    static void _tao_release (Iface_ptr obj);

    static Iface_ptr _narrow (::CORBA::Object_ptr obj);
    static Iface_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Iface_ptr _nil ();
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34

    

    static const CORBA::Long iface_long = 55;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34

    

    static const char *const iface_str;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34

    

    static const CORBA::WChar *const iface_wstr;

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    static const char* _desc_repository_id ();
    static const char* _desc_interface_name ();
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Iface ();

    // Concrete non-local interface only.
    Iface (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Iface (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = nullptr,
        TAO_ORB_Core *orb_core = nullptr);

    virtual ~Iface () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;
    Iface &operator= (const Iface &) = delete;
    Iface &operator= (Iface &&) = delete;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:563

  

#if !defined (_CLASSCONSTANTS_AMH_IFACEEXCEPTIONHOLDER__VAR_OUT_CH_)
#define _CLASSCONSTANTS_AMH_IFACEEXCEPTIONHOLDER__VAR_OUT_CH_

  class AMH_IfaceExceptionHolder;
  using AMH_IfaceExceptionHolder_var = TAO_Value_Var_T<AMH_IfaceExceptionHolder>;
  using AMH_IfaceExceptionHolder_out = TAO_Value_Out_T<AMH_IfaceExceptionHolder>;

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:49

  

  class TAO_IDL_TEST_STUB_Export AMH_IfaceExceptionHolder
    : public virtual ::CORBA::DefaultValueRefCountBase
  {
  public:
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = AMH_IfaceExceptionHolder*;
    using _var_type = AMH_IfaceExceptionHolder_var;
    using _out_type = AMH_IfaceExceptionHolder_out;

    static void _tao_any_destructor (void *);

    AMH_IfaceExceptionHolder (::CORBA::Exception *ex)
      : exception (ex)
    {}

    virtual ~AMH_IfaceExceptionHolder ();
    virtual ::CORBA::ValueBase *_copy_value ();

    static AMH_IfaceExceptionHolder* _downcast (::CORBA::ValueBase *v);
    
    /// TAO extensions or internals
    static ::CORBA::Boolean _tao_unmarshal (
        TAO_InputCDR &strm,
        AMH_IfaceExceptionHolder *&new_object);
    
    virtual const char* _tao_obv_repository_id () const;

    virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &) const;

    static const char* _tao_obv_static_repository_id ();

    virtual ::CORBA::TypeCode_ptr _tao_type () const;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:236

    
  
  protected:
    AMH_IfaceExceptionHolder ();
    virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
    virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
    virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t) const;
    
  private:
    AMH_IfaceExceptionHolder (const AMH_IfaceExceptionHolder &);
    void operator= (const AMH_IfaceExceptionHolder &);
    
    ::CORBA::Exception *exception;
    
  protected:
    virtual ::CORBA::Boolean
    _tao_marshal__ClassConstants_AMH_IfaceExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

    virtual ::CORBA::Boolean
    _tao_unmarshal__ClassConstants_AMH_IfaceExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_init_ch.cpp:56

  class TAO_IDL_TEST_STUB_Export AMH_IfaceExceptionHolder_init
    : public virtual ::CORBA::ValueFactoryBase
  {
  public:
    AMH_IfaceExceptionHolder_init ();

    static AMH_IfaceExceptionHolder_init* _downcast (::CORBA::ValueFactoryBase *);

    virtual ::CORBA::ValueBase *create_for_unmarshal ();

    // TAO-specific extensions
  public:
    virtual const char* tao_repository_id ();
  
  protected:
    virtual ~AMH_IfaceExceptionHolder_init ();
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742

  

#if !defined (_CLASSCONSTANTS_AMH_IFACERESPONSEHANDLER__VAR_OUT_CH_)
#define _CLASSCONSTANTS_AMH_IFACERESPONSEHANDLER__VAR_OUT_CH_

  class AMI_AMH_IfaceResponseHandlerHandler;
  typedef AMI_AMH_IfaceResponseHandlerHandler *AMI_AMH_IfaceResponseHandlerHandler_ptr;

  class AMH_IfaceResponseHandler;
  using AMH_IfaceResponseHandler_ptr = AMH_IfaceResponseHandler*;
  using AMH_IfaceResponseHandler_var = TAO_Objref_Var_T<AMH_IfaceResponseHandler>;
  using AMH_IfaceResponseHandler_out = TAO_Objref_Out_T<AMH_IfaceResponseHandler>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

  

  class TAO_IDL_TEST_STUB_Export AMH_IfaceResponseHandler
    : public virtual ::CORBA::Object
  {
  public:
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = AMH_IfaceResponseHandler_ptr;
    using _var_type = AMH_IfaceResponseHandler_var;
    using _out_type = AMH_IfaceResponseHandler_out;

    static void _tao_any_destructor (void *);

    // The static operations.
    static AMH_IfaceResponseHandler_ptr _duplicate (AMH_IfaceResponseHandler_ptr obj);

    static void _tao_release (AMH_IfaceResponseHandler_ptr obj);

    static AMH_IfaceResponseHandler_ptr _narrow (::CORBA::Object_ptr obj);
    static AMH_IfaceResponseHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static AMH_IfaceResponseHandler_ptr _nil ();

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    static const char* _desc_repository_id ();
    static const char* _desc_interface_name ();
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    AMH_IfaceResponseHandler ();

    

    virtual ~AMH_IfaceResponseHandler () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    AMH_IfaceResponseHandler (const AMH_IfaceResponseHandler &) = delete;
    AMH_IfaceResponseHandler (AMH_IfaceResponseHandler &&) = delete;
    AMH_IfaceResponseHandler &operator= (const AMH_IfaceResponseHandler &) = delete;
    AMH_IfaceResponseHandler &operator= (AMH_IfaceResponseHandler &&) = delete;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_interface.cpp:742

  

#if !defined (_CLASSCONSTANTS_AMI_IFACEHANDLER__VAR_OUT_CH_)
#define _CLASSCONSTANTS_AMI_IFACEHANDLER__VAR_OUT_CH_

  class AMI_IfaceHandler;
  using AMI_IfaceHandler_ptr = AMI_IfaceHandler*;
  using AMI_IfaceHandler_var = TAO_Objref_Var_T<AMI_IfaceHandler>;
  using AMI_IfaceHandler_out = TAO_Objref_Out_T<AMI_IfaceHandler>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

  

  class TAO_IDL_TEST_STUB_Export AMI_IfaceHandler
    : public virtual ::Messaging::ReplyHandler
  
  {
  public:
    friend class TAO::Narrow_Utils<AMI_IfaceHandler>;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = AMI_IfaceHandler_ptr;
    using _var_type = AMI_IfaceHandler_var;
    using _out_type = AMI_IfaceHandler_out;

    static void _tao_any_destructor (void *);

    // The static operations.
    static AMI_IfaceHandler_ptr _duplicate (AMI_IfaceHandler_ptr obj);

    static void _tao_release (AMI_IfaceHandler_ptr obj);

    static AMI_IfaceHandler_ptr _narrow (::CORBA::Object_ptr obj);
    static AMI_IfaceHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static AMI_IfaceHandler_ptr _nil ();

    
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    static const char* _desc_repository_id ();
    static const char* _desc_interface_name ();
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    AMI_IfaceHandler ();

    // Concrete non-local interface only.
    AMI_IfaceHandler (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    AMI_IfaceHandler (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = nullptr,
        TAO_ORB_Core *orb_core = nullptr);

    virtual ~AMI_IfaceHandler () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    AMI_IfaceHandler (const AMI_IfaceHandler &) = delete;
    AMI_IfaceHandler (AMI_IfaceHandler &&) = delete;
    AMI_IfaceHandler &operator= (const AMI_IfaceHandler &) = delete;
    AMI_IfaceHandler &operator= (AMI_IfaceHandler &&) = delete;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:563

  

#if !defined (_CLASSCONSTANTS_VT__VAR_OUT_CH_)
#define _CLASSCONSTANTS_VT__VAR_OUT_CH_

  class Vt;
  using Vt_var = TAO_Value_Var_T<Vt>;
  using Vt_out = TAO_Value_Out_T<Vt>;

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:49

  

  class TAO_IDL_TEST_STUB_Export Vt
    : public virtual ::CORBA::ValueBase
  {
  public:
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = Vt*;
    using _var_type = Vt_var;
    using _out_type = Vt_out;

    static void _tao_any_destructor (void *);

    static Vt* _downcast (::CORBA::ValueBase *v);
    
    /// TAO extensions or internals
    static ::CORBA::Boolean _tao_unmarshal (
        TAO_InputCDR &strm,
        Vt *&new_object);
    
    virtual const char* _tao_obv_repository_id () const;

    virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &) const;

    static const char* _tao_obv_static_repository_id ();

    virtual ::CORBA::TypeCode_ptr _tao_type () const;
  
  public:
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34

    

    static const CORBA::Double vt_long;
  
  public:
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34

    

    static const char *const vt_str;
  
  public:
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34

    

    static const CORBA::WChar *const vt_wstr;
    // TAO_IDL - Generated from
    // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_ch.cpp:236

    
  
  protected:
    Vt ();
    virtual ~Vt ();

    virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
    virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
    virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t) const;
    
  private:
    Vt (const Vt &);
    void operator= (const Vt &);
    
  protected:
    virtual ::CORBA::Boolean
    _tao_marshal__ClassConstants_Vt (TAO_OutputCDR &, TAO_ChunkInfo &) const = 0;

    virtual ::CORBA::Boolean
    _tao_unmarshal__ClassConstants_Vt (TAO_InputCDR &, TAO_ChunkInfo &) = 0;
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_init_ch.cpp:56

  class TAO_IDL_TEST_STUB_Export Vt_init
    : public virtual ::CORBA::ValueFactoryBase
  {
  public:
    Vt_init ();

    static Vt_init* _downcast (::CORBA::ValueFactoryBase *);

    virtual ::CORBA::ValueBase *create_for_unmarshal ();

    // TAO-specific extensions
  public:
    virtual const char* tao_repository_id ();
  
  protected:
    virtual ~Vt_init ();
  };


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module ClassConstants
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

namespace CoercionBug
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typedef/typedef_ch.cpp:366

  typedef ::CORBA::UShort UInt16;
  typedef ::CORBA::UShort_out UInt16_out;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typedef/typedef_ch.cpp:366

  typedef UInt16 CellFlags;
  typedef UInt16_out CellFlags_out;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34

  

  const CORBA::UShort EXPLICIT_VALUE_LOCK = 1024U;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34

  

  const CORBA::UShort EDIT_VALUE_LOCK = 4096U;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34

  

  const CORBA::UShort VALUE_LOCK = 5120U;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module CoercionBug
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

namespace SignedGen
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typedef/typedef_ch.cpp:366

  typedef ::CORBA::Long LongType;
  typedef ::CORBA::Long_out LongType_out;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34

  

  const CORBA::Long val = -3;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_typedef/typedef_ch.cpp:366

  typedef ::CORBA::Short ShortType;
  typedef ::CORBA::Short_out ShortType_out;
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_constant/constant_ch.cpp:34

  

  const CORBA::Short short_val = -3;


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module SignedGen
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
  class Arg_Traits< ::m_a::enum_a>
    : public
        Basic_Arg_Traits_T<
            ::m_a::enum_a,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_CLASSCONSTANTS_IFACE__ARG_TRAITS_)
#define _CLASSCONSTANTS_IFACE__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::ClassConstants::Iface>
    : public Object_Arg_Traits_T<
        ::ClassConstants::Iface_ptr,
        ::ClassConstants::Iface_var,
        ::ClassConstants::Iface_out,
        TAO::Objref_Traits<ClassConstants::Iface>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_CLASSCONSTANTS_AMH_IFACEEXCEPTIONHOLDER__ARG_TRAITS_)
#define _CLASSCONSTANTS_AMH_IFACEEXCEPTIONHOLDER__ARG_TRAITS_

  template<>
  class Arg_Traits< ::ClassConstants::AMH_IfaceExceptionHolder>
    : public
        Object_Arg_Traits_T<
            ::ClassConstants::AMH_IfaceExceptionHolder *,
            ::ClassConstants::AMH_IfaceExceptionHolder_var,
            ::ClassConstants::AMH_IfaceExceptionHolder_out,
            TAO::Value_Traits<ClassConstants::AMH_IfaceExceptionHolder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_CLASSCONSTANTS_AMI_IFACEHANDLER__ARG_TRAITS_)
#define _CLASSCONSTANTS_AMI_IFACEHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::ClassConstants::AMI_IfaceHandler>
    : public Object_Arg_Traits_T<
        ::ClassConstants::AMI_IfaceHandler_ptr,
        ::ClassConstants::AMI_IfaceHandler_var,
        ::ClassConstants::AMI_IfaceHandler_out,
        TAO::Objref_Traits<ClassConstants::AMI_IfaceHandler>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:298

  

#if !defined (_CLASSCONSTANTS_VT__ARG_TRAITS_)
#define _CLASSCONSTANTS_VT__ARG_TRAITS_

  template<>
  class Arg_Traits< ::ClassConstants::Vt>
    : public
        Object_Arg_Traits_T<
            ::ClassConstants::Vt *,
            ::ClassConstants::Vt_var,
            ::ClassConstants::Vt_out,
            TAO::Value_Traits<ClassConstants::Vt>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/obv_module.cpp:43

namespace OBV_ClassConstants
{
  // TAO_IDL - Generated from
  // /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_obv_ch.cpp:43

  

  // OBV_ class
  class TAO_IDL_TEST_STUB_Export AMH_IfaceExceptionHolder
    : public virtual ClassConstants::AMH_IfaceExceptionHolder,
      public virtual ::CORBA::DefaultValueRefCountBase
  {

public:
  AMH_IfaceExceptionHolder () = default;
  virtual ~AMH_IfaceExceptionHolder ();

public:
  virtual ::CORBA::ValueBase *_copy_value ();
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__ClassConstants_AMH_IfaceExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__ClassConstants_AMH_IfaceExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo &);

  ::CORBA::Boolean _tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo &) const;
  ::CORBA::Boolean _tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo &);
  virtual void truncation_hook ();

private:
  CORBA::Boolean require_truncation_ {false};
};
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/valuetype_obv_ch.cpp:43



// OBV_ class
class TAO_IDL_TEST_STUB_Export Vt
  : public virtual ClassConstants::Vt,
    public virtual ::CORBA::DefaultValueRefCountBase
{

public:

public:

public:

public:
  Vt () = default;
  virtual ~Vt ();

public:
  virtual ::CORBA::ValueBase *_copy_value ();
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__ClassConstants_Vt (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__ClassConstants_Vt (TAO_InputCDR &, TAO_ChunkInfo &);

  ::CORBA::Boolean _tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo &) const;
  ::CORBA::Boolean _tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo &);
  virtual void truncation_hook ();

private:
  CORBA::Boolean require_truncation_ {false};
};
}
// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_traits.cpp:58



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_CLASSCONSTANTS_IFACE__TRAITS_)
#define _CLASSCONSTANTS_IFACE__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::ClassConstants::Iface>
  {
    static ::ClassConstants::Iface_ptr duplicate (::ClassConstants::Iface_ptr p);
    static void release (::ClassConstants::Iface_ptr p);
    static ::ClassConstants::Iface_ptr nil ();
    static ::CORBA::Boolean marshal (const ::ClassConstants::Iface_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_CLASSCONSTANTS_AMH_IFACEEXCEPTIONHOLDER__TRAITS_)
#define _CLASSCONSTANTS_AMH_IFACEEXCEPTIONHOLDER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Value_Traits<ClassConstants::AMH_IfaceExceptionHolder>
  {
    static void add_ref (ClassConstants::AMH_IfaceExceptionHolder *);
    static void remove_ref (ClassConstants::AMH_IfaceExceptionHolder *);
    static void release (ClassConstants::AMH_IfaceExceptionHolder *);
  };

#endif /* end #if !defined */

#if !defined (_CLASSCONSTANTS_AMH_IFACERESPONSEHANDLER__TRAITS_)
#define _CLASSCONSTANTS_AMH_IFACERESPONSEHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::ClassConstants::AMH_IfaceResponseHandler>
  {
    static ::ClassConstants::AMH_IfaceResponseHandler_ptr duplicate (::ClassConstants::AMH_IfaceResponseHandler_ptr p);
    static void release (::ClassConstants::AMH_IfaceResponseHandler_ptr p);
    static ::ClassConstants::AMH_IfaceResponseHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::ClassConstants::AMH_IfaceResponseHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_CLASSCONSTANTS_AMI_IFACEHANDLER__TRAITS_)
#define _CLASSCONSTANTS_AMI_IFACEHANDLER__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Objref_Traits< ::ClassConstants::AMI_IfaceHandler>
  {
    static ::ClassConstants::AMI_IfaceHandler_ptr duplicate (::ClassConstants::AMI_IfaceHandler_ptr p);
    static void release (::ClassConstants::AMI_IfaceHandler_ptr p);
    static ::ClassConstants::AMI_IfaceHandler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::ClassConstants::AMI_IfaceHandler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_CLASSCONSTANTS_VT__TRAITS_)
#define _CLASSCONSTANTS_VT__TRAITS_

  template<>
  struct TAO_IDL_TEST_STUB_Export Value_Traits<ClassConstants::Vt>
  {
    static void add_ref (ClassConstants::Vt *);
    static void remove_ref (ClassConstants::Vt *);
    static void release (ClassConstants::Vt *);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_enum/cdr_op_ch.cpp:33


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, m_a::enum_a _tao_enumerator);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &strm, m_a::enum_a &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const ClassConstants::Iface_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, ClassConstants::Iface_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:452


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern TAO_IDL_TEST_STUB_Export void add_ref (ClassConstants::AMH_IfaceExceptionHolder *);
  extern TAO_IDL_TEST_STUB_Export void remove_ref (ClassConstants::AMH_IfaceExceptionHolder *);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/cdr_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const ClassConstants::AMH_IfaceExceptionHolder *);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, ClassConstants::AMH_IfaceExceptionHolder *&);

TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const ClassConstants::AMI_IfaceHandler_ptr );
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, ClassConstants::AMI_IfaceHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_valuetype.cpp:452


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern TAO_IDL_TEST_STUB_Export void add_ref (ClassConstants::Vt *);
  extern TAO_IDL_TEST_STUB_Export void remove_ref (ClassConstants::Vt *);
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_visitor_valuetype/cdr_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const ClassConstants::Vt *);
TAO_IDL_TEST_STUB_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, ClassConstants::Vt *&);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /home/johnny/ACE/trunk/TAO/TAO_IDL/be/be_codegen.cpp:1648

#if defined (__ACE_INLINE__)
#include "constantsC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

