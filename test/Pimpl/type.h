////////////////////////////////////////////////////////////////////////////////
// The Loki Library
// Copyright (c) 2006 Peter K�mmel
// Permission to use, copy, modify, distribute and sell this software for any 
//     purpose is hereby granted without fee, provided that the above copyright 
//     notice appear in all copies and that both that copyright notice and this 
//     permission notice appear in supporting documentation.
// The author makes no representations about the 
//     suitability of this software for any purpose. It is provided "as is" 
//     without express or implied warranty.
////////////////////////////////////////////////////////////////////////////////

// $Header:


#include <loki/Pimpl.h>

//#define TEST_WITH_BOOST
#ifdef TEST_WITH_BOOST
#include <boost/shared_ptr.hpp>
#endif
#include <loki/SmartPtr.h>
#include <loki/SmallObj.h>

using Loki::Pimpl;
using Loki::Rimpl;


/////////////////////////////////////////
// class A declaration
/////////////////////////////////////////

class A
{
public:
    A();
    void foo();

private:
    Pimpl<A>::Type d;
};


/////////////////////////////////////////
// class B declaration
/////////////////////////////////////////

class B : private Pimpl<B>::Owner
{
public:
    B();
    void foo();
};


/////////////////////////////////////////
// class C declaration
/////////////////////////////////////////

class C
{
public:
    C();
    void foo();

private:
    Rimpl<C>::Life rlife; 
    Rimpl<C>::Type& d; 
};


/////////////////////////////////////////
// class D declaration
/////////////////////////////////////////

class D : private Rimpl<D>::Owner
{
public:
    D();
    void foo();
};




////////////////////
// more test code
////////////////////


// Pimpl

typedef Loki::PtrImpl
<
    Loki::Impl<B>
>
Pimpl1;



typedef Loki::PtrImpl
<
    Loki::Impl<B>,
    Loki::SmartPtr<Loki::Impl<B> >,
    Loki::DontDeletePimpl
>
Pimpl2;



typedef Loki::PtrImpl
<
    Loki::Impl<B>,
#ifdef TEST_WITH_BOOST
    boost::shared_ptr<Loki::Impl<B> >,
#else
    Loki::SmartPtr<Loki::Impl<B> >,
#endif
    Loki::DontDeletePimpl
>
Pimpl3;



typedef Loki::PtrImpl
<
    Loki::Impl<B>,
    Loki::SmartPtr<Loki::Impl<B> >,
    Loki::DontDeletePimpl,
    Loki::DeclaredPimpl
>
Pimpl4;



typedef Loki::PtrImpl
<
    Loki::Impl<B>,
#ifdef TEST_WITH_BOOST
    boost::shared_ptr<Loki::Impl<B> >,
#else
    Loki::SmartPtr<Loki::Impl<B> >,
#endif
    Loki::DontDeletePimpl,
    Loki::DeclaredPimpl
>
Pimpl5;


// Pimpl

typedef Loki::PtrImpl
<
    Loki::Impl<B>,
    Loki::Impl<B>*,
    Loki::AutoDeletePimpl,
    Loki::InheritedRimpl

>
Rimpl1;



typedef Loki::PtrImpl
<
    Loki::Impl<B>,
    Loki::SmartPtr<Loki::Impl<B> >,
    Loki::DontDeletePimpl,
    Loki::InheritedRimpl
>
Rimpl2;



typedef Loki::PtrImpl
<
    Loki::Impl<B>,
#ifdef TEST_WITH_BOOST
    boost::shared_ptr<Loki::Impl<B> >,
#else
    Loki::SmartPtr<Loki::Impl<B> >,
#endif
    Loki::DontDeletePimpl,
    Loki::InheritedRimpl
>
Rimpl3;


typedef Loki::PtrImpl
<
    Loki::Impl<B>,
    Loki::Impl<B>*,
    Loki::AutoDeletePimpl,
    Loki::DeclaredRimpl
>
Rimpl4;

typedef Loki::PtrImpl
<
    Loki::Impl<B>,
    Loki::SmartPtr<Loki::Impl<B> >,
    Loki::DontDeletePimpl,
    Loki::DeclaredRimpl
>
Rimpl5;



typedef Loki::PtrImpl
<
    Loki::Impl<B>,
#ifdef TEST_WITH_BOOST
    boost::shared_ptr<Loki::Impl<B> >,
#else
    Loki::SmartPtr<Loki::Impl<B> >,
#endif
    Loki::DontDeletePimpl,
    Loki::DeclaredRimpl
>
Rimpl6;



typedef Loki::PtrImpl
<
    Loki::Impl<B>,
    
    //Loki::Impl<B>*,
    Loki::SmartPtr<Loki::Impl<B> >,
    //boost::shared_ptr<Loki::Impl<B> >,
    
    //Loki::AutoDeletePimpl,     // compiler error when used with smart pointers, this is o.k.
    Loki::DontDeletePimpl,

    Loki::DeclaredPimpl
    //Loki::InheritedPimpl,
> 
Pimpl8;


template<class T>
struct R
{
    typedef Loki::PimplLife
    <
        T,
        T*,
        Loki::AutoDeletePimpl
    >
    Life;
};


struct P1 : private Pimpl1 {P1();};
struct P2 : private Pimpl2 {P2();};
struct P3 : private Pimpl3 {P3();};
struct P4 {Pimpl4 d;        P4();};
struct P5 {Pimpl5 d;        P5();};

struct R1 : private Rimpl1 {R1();};
struct R2 : private Rimpl2 {R2();};
struct R3 : private Rimpl3 {R3();};
struct R4 {Rimpl4& d; R<Rimpl4>::Life t; R4();};
struct R5 {Rimpl5& d; R<Rimpl5>::Life t; R5();};
struct R6 {Rimpl6& d; R<Rimpl6>::Life t; R6();};

