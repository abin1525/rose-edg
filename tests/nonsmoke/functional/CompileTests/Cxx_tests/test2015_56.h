



























































 



 




















































 




 


 





























 






























 
































































 























 








































































 


 


 

 







 


 

 


 




 

 


 


















 

 






 


 


 

 

















 


 



 

 






 



 


 


 


 






 


 


 


 


 
 










 







 



 



 



 



 

 






 




 


 


 

 


 


 




 

 



 


 





 


 





 

 

 





 


































 



































 
 

 

 

 

 

 

 

 

 

 

 
 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 
 

 
 

 

 

 


 

 

 

 

 

 
 

 

 

 
 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 
 

 
 

 

 

 

 

 

 
 

 

 

 

 
 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 
 

 

 

 
 

 
 

 

 

 

 

 

 

 

 
 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 
 

 


 

 
 

 

 

 

 

 

 
 

 
 

 
 

 
 

 
 

 

 
 

 


 

 


 

 
 

 
 

 

 

 

 
 

 

 
 

 
 

 

 

 
 

 

 
 


 



 



 


 


 


 


 


 


 


 

 
 

 
 

 

 

 

 
 

 


 

 
 

 



































































































 




























 



 



 
 
 


 


 
 



 


 






 





 

 


 
typedef long ptrdiff_t;

 


 


 
typedef unsigned long size_t;





 


 



 
 


 



 




namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::ptrdiff_t;
  using ::size_t;

}



























 





































 





namespace std __attribute__ ((__visibility__ ("default"))) {

  
  void
  __throw_bad_exception(void) __attribute__((__noreturn__));

  
  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));

  
  void
  __throw_bad_cast(void) __attribute__((__noreturn__));

  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));

  
  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));

  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));

  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));

  void
  __throw_length_error(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));

  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));

  void
  __throw_range_error(const char*) __attribute__((__noreturn__));

  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));

  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));

  
  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));

  void
  __throw_system_error(int) __attribute__((__noreturn__));

}





























 



































namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  template<typename _Iterator, typename _Container>
    class __normal_iterator;

}

namespace std __attribute__ ((__visibility__ ("default"))) {

  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };

  
  
  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };

  
  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  
  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  
  
  
  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  
  
  
  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char16_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char32_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  
  
  
  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  
  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  
  
  
  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  
  
  
  template<typename _Tp>
    struct __is_normal_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Iterator, typename _Container>
    struct __is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
							      _Container> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  
  
  
  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };

  
  
  
  template<typename _Tp>
    struct __is_fundamental
    : public __traitor<__is_void<_Tp>, __is_arithmetic<_Tp> >
    { };

  
  
  
  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };

  
  
  
  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  
  
  
  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Iterator>
    class move_iterator;

  template<typename _Iterator>
    struct __is_move_iterator< move_iterator<_Iterator> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

}



























 




namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  
  template<bool, typename>
    struct __enable_if 
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };


  
  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };


  
  template<typename _Tp>
    struct __add_unsigned
    { 
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;
      
    public:
      typedef typename __if_type::__type __type; 
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };

  
  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;


  
  template<typename _Tp>
    struct __remove_unsigned
    { 
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;
      
    public:
      typedef typename __if_type::__type __type; 
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };

  
  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;


  
  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }


  
  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };

  template<typename _Tp>
    struct __promote<_Tp, false>
    { typedef _Tp __type; };

  template<typename _Tp, typename _Up>
    struct __promote_2
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;

    public:
      typedef __typeof__(__type1() + __type2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp>
    struct __promote_3
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;

    public:
      typedef __typeof__(__type1() + __type2() + __type3()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp>
    struct __promote_4
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;
      typedef typename __promote<_Wp>::__type __type4;

    public:
      typedef __typeof__(__type1() + __type2() + __type3() + __type4()) __type;
    };

}



























 




namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  
  



  template<typename _Value>
    struct __numeric_traits_integer
    {
      
      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);

      
      
      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));      
    };

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;

  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;






  template<typename _Value>
    struct __numeric_traits_floating
    {
      
      static const int __max_digits10 = (2 + (std::__are_same<_Value, float> ::__value ? 24 : std::__are_same<_Value, double> ::__value ? 53 : 64) * 3010 / 10000);

      
      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float> ::__value ? 6 : std::__are_same<_Value, double> ::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float> ::__value ? 38 : std::__are_same<_Value, double> ::__value ? 308 : 4932);
    };

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;

  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;

  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
				__numeric_traits_integer<_Value>,
				__numeric_traits_floating<_Value> >::__type
    { };

}



















































 




 





























 




































 




























 



 




























 










































 







































 




























 



 





























 

namespace std
{


  





 

  
  struct __sfinae_types
  {
    typedef char __one;
    typedef struct { char __arr[2]; } __two;
  };





  

  
  template<typename _Tp, _Tp __v>
    struct integral_constant
    {
      static const _Tp                      value = __v;
      typedef _Tp                           value_type;
      typedef integral_constant<_Tp, __v>   type;
    };
  
  
  typedef integral_constant<bool, true>     true_type;

  
  typedef integral_constant<bool, false>    false_type;

  template<typename _Tp, _Tp __v>
    const _Tp integral_constant<_Tp, __v>::value;

  
  template<typename>
    struct remove_cv;

  template<typename>
    struct __is_void_helper
    : public false_type { };
  template< > struct __is_void_helper<void> : public integral_constant<bool, true> { };

  

  
  template<typename _Tp>
    struct is_void
    : public integral_constant<bool, (__is_void_helper<typename
				      remove_cv<_Tp>::type>::value)>
    { };

  template<typename>
    struct __is_integral_helper
    : public false_type { };
  template< > struct __is_integral_helper<bool> : public integral_constant<bool, true> { };
  template< > struct __is_integral_helper<char> : public integral_constant<bool, true> { };
  template< > struct __is_integral_helper<signed char> : public integral_constant<bool, true> { };
  template< > struct __is_integral_helper<unsigned char> : public integral_constant<bool, true> { };
  template< > struct __is_integral_helper<wchar_t> : public integral_constant<bool, true> { };
  template< > struct __is_integral_helper<char16_t> : public integral_constant<bool, true> { };
  template< > struct __is_integral_helper<char32_t> : public integral_constant<bool, true> { };
  template< > struct __is_integral_helper<short> : public integral_constant<bool, true> { };
  template< > struct __is_integral_helper<unsigned short> : public integral_constant<bool, true> { };
  template< > struct __is_integral_helper<int> : public integral_constant<bool, true> { };
  template< > struct __is_integral_helper<unsigned int> : public integral_constant<bool, true> { };
  template< > struct __is_integral_helper<long> : public integral_constant<bool, true> { };
  template< > struct __is_integral_helper<unsigned long> : public integral_constant<bool, true> { };
  template< > struct __is_integral_helper<long long> : public integral_constant<bool, true> { };
  template< > struct __is_integral_helper<unsigned long long> : public integral_constant<bool, true> { };

  
  template<typename _Tp>
    struct is_integral
    : public integral_constant<bool, (__is_integral_helper<typename
				      remove_cv<_Tp>::type>::value)>
    { };

  template<typename>
    struct __is_floating_point_helper
    : public false_type { };
  template< > struct __is_floating_point_helper<float> : public integral_constant<bool, true> { };
  template< > struct __is_floating_point_helper<double> : public integral_constant<bool, true> { };
  template< > struct __is_floating_point_helper<long double> : public integral_constant<bool, true> { };

  
  template<typename _Tp>
    struct is_floating_point
    : public integral_constant<bool, (__is_floating_point_helper<typename
				      remove_cv<_Tp>::type>::value)>
    { };

  
  template<typename>
    struct is_array
    : public false_type { };

  template<typename _Tp, std::size_t _Size>
    struct is_array<_Tp[_Size]>
    : public true_type { };

  template<typename _Tp>
    struct is_array<_Tp[]>
    : public true_type { };

  template<typename>
    struct __is_pointer_helper
    : public false_type { };
  template<typename _Tp> struct __is_pointer_helper<_Tp* > : public integral_constant<bool, true> { };

  
  template<typename _Tp>
    struct is_pointer
    : public integral_constant<bool, (__is_pointer_helper<typename
				      remove_cv<_Tp>::type>::value)>
    { };

  
  template<typename _Tp>
    struct is_reference;

  
  template<typename _Tp>
    struct is_function;

  template<typename>
    struct __is_member_object_pointer_helper
    : public false_type { };
  template<typename _Tp, typename _Cp> struct __is_member_object_pointer_helper<_Tp _Cp:: * > : public integral_constant<bool, !is_function<_Tp> ::value> { };

  
  template<typename _Tp>
    struct is_member_object_pointer
    : public integral_constant<bool, (__is_member_object_pointer_helper<
				      typename remove_cv<_Tp>::type>::value)>
    { };

  template<typename>
    struct __is_member_function_pointer_helper
    : public false_type { };
  template<typename _Tp, typename _Cp> struct __is_member_function_pointer_helper<_Tp _Cp:: * > : public integral_constant<bool, is_function<_Tp> ::value> { };

  
  template<typename _Tp>
    struct is_member_function_pointer
    : public integral_constant<bool, (__is_member_function_pointer_helper<
				      typename remove_cv<_Tp>::type>::value)>
    { };

  
  template<typename _Tp>
    struct is_enum
    : public integral_constant<bool, __is_enum(_Tp)>
    { };

  
  template<typename _Tp>
    struct is_union
    : public integral_constant<bool, __is_union(_Tp)>
    { };

  
  template<typename _Tp>
    struct is_class
    : public integral_constant<bool, __is_class(_Tp)>
    { };

  
  template<typename>
    struct is_function
    : public false_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...)>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......)>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) volatile>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) volatile>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const volatile>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const volatile>
    : public true_type { };

  
  
  
  template<typename _Tp>
    struct is_arithmetic
    : public integral_constant<bool, (is_integral<_Tp>::value
				      || is_floating_point<_Tp>::value)>
    { };

  
  template<typename _Tp>
    struct is_fundamental
    : public integral_constant<bool, (is_arithmetic<_Tp>::value
				      || is_void<_Tp>::value)>
    { };

  
  template<typename _Tp>
    struct is_object
    : public integral_constant<bool, !(is_function<_Tp>::value
				       || is_reference<_Tp>::value
				       || is_void<_Tp>::value)>
    { };

  
  template<typename _Tp>
    struct is_member_pointer;

  
  template<typename _Tp>
    struct is_scalar
    : public integral_constant<bool, (is_arithmetic<_Tp>::value
				      || is_enum<_Tp>::value
				      || is_pointer<_Tp>::value
				      || is_member_pointer<_Tp>::value)>
    { };

  
  template<typename _Tp>
    struct is_compound
    : public integral_constant<bool, !is_fundamental<_Tp>::value> { };

  
  template<typename _Tp>
    struct __is_member_pointer_helper
    : public false_type { };
  template<typename _Tp, typename _Cp> struct __is_member_pointer_helper<_Tp _Cp:: * > : public integral_constant<bool, true> { };

  template<typename _Tp>
  struct is_member_pointer
    : public integral_constant<bool, (__is_member_pointer_helper<
				      typename remove_cv<_Tp>::type>::value)>
    { };

  
  
  template<typename>
    struct is_const
    : public false_type { };

  template<typename _Tp>
    struct is_const<_Tp const>
    : public true_type { };
  
  
  template<typename>
    struct is_volatile
    : public false_type { };

  template<typename _Tp>
    struct is_volatile<_Tp volatile>
    : public true_type { };

  
  template<typename _Tp>
    struct is_empty
    : public integral_constant<bool, __is_empty(_Tp)>
    { };

  
  template<typename _Tp>
    struct is_polymorphic
    : public integral_constant<bool, __is_polymorphic(_Tp)>
    { };

  
  template<typename _Tp>
    struct is_abstract
    : public integral_constant<bool, __is_abstract(_Tp)>
    { };

  
  template<typename _Tp>
    struct has_virtual_destructor
    : public integral_constant<bool, __has_virtual_destructor(_Tp)>
    { };

  
  template<typename _Tp>
    struct alignment_of
    : public integral_constant<std::size_t, __alignof__(_Tp)> { };
  
  
  template<typename>
    struct rank
    : public integral_constant<std::size_t, 0> { };
   
  template<typename _Tp, std::size_t _Size>
    struct rank<_Tp[_Size]>
    : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };

  template<typename _Tp>
    struct rank<_Tp[]>
    : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };

  
  template<typename, unsigned _Uint = 0>
    struct extent
    : public integral_constant<std::size_t, 0> { };
  
  template<typename _Tp, unsigned _Uint, std::size_t _Size>
    struct extent<_Tp[_Size], _Uint>
    : public integral_constant<std::size_t,
			       _Uint == 0 ? _Size : extent<_Tp,
							   _Uint - 1>::value>
    { };

  template<typename _Tp, unsigned _Uint>
    struct extent<_Tp[], _Uint>
    : public integral_constant<std::size_t,
			       _Uint == 0 ? 0 : extent<_Tp,
						       _Uint - 1>::value>
    { };

  

  
  template<typename, typename>
    struct is_same
    : public false_type { };

  template<typename _Tp>
    struct is_same<_Tp, _Tp>
    : public true_type { };

  

  
  template<typename _Tp>
    struct remove_const
    { typedef _Tp     type; };

  template<typename _Tp>
    struct remove_const<_Tp const>
    { typedef _Tp     type; };
  
  
  template<typename _Tp>
    struct remove_volatile
    { typedef _Tp     type; };

  template<typename _Tp>
    struct remove_volatile<_Tp volatile>
    { typedef _Tp     type; };
  
  
  template<typename _Tp>
    struct remove_cv
    {
      typedef typename
      remove_const<typename remove_volatile<_Tp>::type>::type     type;
    };
  
  
  template<typename _Tp>
    struct add_const
    { typedef _Tp const     type; };
   
  
  template<typename _Tp>
    struct add_volatile
    { typedef _Tp volatile     type; };
  
  
  template<typename _Tp>
    struct add_cv
    {
      typedef typename
      add_const<typename add_volatile<_Tp>::type>::type     type;
    };

  

  
  template<typename _Tp>
    struct remove_extent
    { typedef _Tp     type; };

  template<typename _Tp, std::size_t _Size>
    struct remove_extent<_Tp[_Size]>
    { typedef _Tp     type; };

  template<typename _Tp>
    struct remove_extent<_Tp[]>
    { typedef _Tp     type; };

  
  template<typename _Tp>
    struct remove_all_extents
    { typedef _Tp     type; };

  template<typename _Tp, std::size_t _Size>
    struct remove_all_extents<_Tp[_Size]>
    { typedef typename remove_all_extents<_Tp>::type     type; };

  template<typename _Tp>
    struct remove_all_extents<_Tp[]>
    { typedef typename remove_all_extents<_Tp>::type     type; };

  

  template<typename _Tp, typename>
    struct __remove_pointer_helper
    { typedef _Tp     type; };

  template<typename _Tp, typename _Up>
    struct __remove_pointer_helper<_Tp, _Up*>
    { typedef _Up     type; };

  
  template<typename _Tp>
    struct remove_pointer
    : public __remove_pointer_helper<_Tp, typename remove_cv<_Tp>::type>
    { };

  template<typename>
    struct remove_reference;

  
  template<typename _Tp>
    struct add_pointer
    { typedef typename remove_reference<_Tp>::type*     type; };


  

}

namespace std
{
  

 

  

  
  template<typename>
    struct is_lvalue_reference
    : public false_type { };

  template<typename _Tp>
    struct is_lvalue_reference<_Tp&>
    : public true_type { };

  
  template<typename>
    struct is_rvalue_reference
    : public false_type { };

  template<typename _Tp>
    struct is_rvalue_reference<_Tp&&>
    : public true_type { };

  

  
  template<typename _Tp>
    struct is_reference
    : public integral_constant<bool, (is_lvalue_reference<_Tp>::value
				      || is_rvalue_reference<_Tp>::value)>
    { };

  

  
  template<typename _Tp>
    struct remove_reference
    { typedef _Tp   type; };

  template<typename _Tp>
    struct remove_reference<_Tp&>
    { typedef _Tp   type; };

  template<typename _Tp>
    struct remove_reference<_Tp&&>
    { typedef _Tp   type; };

  template<typename _Tp,
	   bool = !is_reference<_Tp>::value && !is_void<_Tp>::value,
	   bool = is_rvalue_reference<_Tp>::value>
    struct __add_lvalue_reference_helper
    { typedef _Tp   type; };

  template<typename _Tp>
    struct __add_lvalue_reference_helper<_Tp, true, false>
    { typedef _Tp&   type; };

  template<typename _Tp>
    struct __add_lvalue_reference_helper<_Tp, false, true>
    { typedef typename remove_reference<_Tp>::type&   type; };

  
  template<typename _Tp>
    struct add_lvalue_reference
    : public __add_lvalue_reference_helper<_Tp>
    { };

  template<typename _Tp,
	   bool = !is_reference<_Tp>::value && !is_void<_Tp>::value>
    struct __add_rvalue_reference_helper
    { typedef _Tp   type; };

  template<typename _Tp>
    struct __add_rvalue_reference_helper<_Tp, true>
    { typedef _Tp&&   type; };

  
  template<typename _Tp>
    struct add_rvalue_reference
    : public __add_rvalue_reference_helper<_Tp>
    { };

  

  template<typename _Tp,
	   bool = is_integral<_Tp>::value,
	   bool = is_floating_point<_Tp>::value>
    struct __is_signed_helper
    : public false_type { };

  template<typename _Tp>
    struct __is_signed_helper<_Tp, false, true>
    : public true_type { };

  template<typename _Tp>
    struct __is_signed_helper<_Tp, true, false>
    : public integral_constant<bool, _Tp(-1) < _Tp(0)>
    { };

  
  template<typename _Tp>
    struct is_signed
    : public integral_constant<bool, __is_signed_helper<_Tp>::value>
    { };

  
  template<typename _Tp>
    struct is_unsigned
    : public integral_constant<bool, (is_arithmetic<_Tp>::value
				      && !is_signed<_Tp>::value)>
    { };

  

  
  template<typename _Tp>
    struct is_pod
    : public integral_constant<bool, __is_pod(_Tp)>
    { };

  
  template<typename _Tp>
    struct has_trivial_default_constructor
    : public integral_constant<bool, __has_trivial_constructor(_Tp)>
    { };

  
  template<typename _Tp>
    struct has_trivial_copy_constructor
    : public integral_constant<bool, __has_trivial_copy(_Tp)>
    { };

  
  template<typename _Tp>
    struct has_trivial_assign
    : public integral_constant<bool, __has_trivial_assign(_Tp)>
    { };

  
  template<typename _Tp>
    struct has_trivial_destructor
    : public integral_constant<bool, __has_trivial_destructor(_Tp)>
    { };

  
  template<typename _Tp>
    struct has_nothrow_default_constructor
    : public integral_constant<bool, __has_nothrow_constructor(_Tp)>
    { };

  
  template<typename _Tp>
    struct has_nothrow_copy_constructor
    : public integral_constant<bool, __has_nothrow_copy(_Tp)>
    { };

  
  template<typename _Tp>
    struct has_nothrow_assign
    : public integral_constant<bool, __has_nothrow_assign(_Tp)>
    { };

  
  template<typename _Base, typename _Derived>
    struct is_base_of
    : public integral_constant<bool, __is_base_of(_Base, _Derived)>
    { };

  
  template<typename _From, typename _To>
    struct __is_convertible_simple
    : public __sfinae_types
    {
    private:
      static __one __test(_To);
      static __two __test(...);
      static _From __makeFrom();
    
    public:
      static const bool __value = sizeof(__test(__makeFrom())) == 1;
    };

  template<typename _Tp>
    struct __is_int_or_cref
    {
      typedef typename remove_reference<_Tp>::type __rr_Tp;
      static const bool __value = (is_integral<_Tp>::value
				   || (is_integral<__rr_Tp>::value
				       && is_const<__rr_Tp>::value
				       && !is_volatile<__rr_Tp>::value));
    };

  template<typename _From, typename _To,
	   bool = (is_void<_From>::value || is_void<_To>::value
		   || is_function<_To>::value || is_array<_To>::value
		   
		   || (is_floating_point<typename
		       remove_reference<_From>::type>::value
		       && __is_int_or_cref<_To>::__value))>
    struct __is_convertible_helper
    {
      
      static const bool __value = (__is_convertible_simple<typename
				   add_lvalue_reference<_From>::type,
				   _To>::__value);
    };

  template<typename _From, typename _To>
    struct __is_convertible_helper<_From, _To, true>
    { static const bool __value = (is_void<_To>::value
				   || (__is_int_or_cref<_To>::__value
				       && !is_void<_From>::value)); };

  
  
  
  template<typename _From, typename _To>
    struct is_convertible
    : public integral_constant<bool,
			       __is_convertible_helper<_From, _To>::__value>
    { };

  template<std::size_t _Len>
    struct __aligned_storage_msa
    { 
      union __type
      {
	unsigned char __data[_Len];
	struct __attribute__((__aligned__)) { } __align; 
      };
    };

  








 
  template<std::size_t _Len, std::size_t _Align =
	   __alignof__(typename __aligned_storage_msa<_Len>::__type)>
    struct aligned_storage
    { 
      union type
      {
	unsigned char __data[_Len];
	struct __attribute__((__aligned__((_Align)))) { } __align; 
      };
    };


  
  
  
  template<bool, typename _Tp = void>
    struct enable_if 
    { };

  
  template<typename _Tp>
    struct enable_if<true, _Tp>
    { typedef _Tp type; };


  
  
  
  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct conditional
    { typedef _Iftrue type; };

  
  template<typename _Iftrue, typename _Iffalse>
    struct conditional<false, _Iftrue, _Iffalse>
    { typedef _Iffalse type; };


  
  
  template<typename _Up, 
	   bool _IsArray = is_array<_Up>::value,
	   bool _IsFunction = is_function<_Up>::value> 
    struct __decay_selector;

  
  template<typename _Up> 
    struct __decay_selector<_Up, false, false>
    { typedef typename remove_cv<_Up>::type __type; };

  template<typename _Up> 
    struct __decay_selector<_Up, true, false>
    { typedef typename remove_extent<_Up>::type* __type; };

  template<typename _Up> 
    struct __decay_selector<_Up, false, true>
    { typedef typename add_pointer<_Up>::type __type; };

  
  template<typename _Tp> 
    struct decay 
    { 
    private:
      typedef typename remove_reference<_Tp>::type __remove_type;

    public:
      typedef typename __decay_selector<__remove_type>::__type type;
    };


  
  template<typename _Unqualified, bool _IsConst, bool _IsVol>
    struct __cv_selector;

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, false, false>
    { typedef _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, false, true>
    { typedef volatile _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, true, false>
    { typedef const _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, true, true>
    { typedef const volatile _Unqualified __type; };

  template<typename _Qualified, typename _Unqualified,
	   bool _IsConst = is_const<_Qualified>::value,
	   bool _IsVol = is_volatile<_Qualified>::value>
    struct __match_cv_qualifiers
    {
    private:
      typedef __cv_selector<_Unqualified, _IsConst, _IsVol> __match;

    public:
      typedef typename __match::__type __type; 
    };


  
  template<typename _Tp>
    struct __make_unsigned
    { typedef _Tp __type; };

  template<>
    struct __make_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __make_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __make_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __make_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __make_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __make_unsigned<long long>
    { typedef unsigned long long __type; };


  
  template<typename _Tp, 
	   bool _IsInt = is_integral<_Tp>::value,
	   bool _IsEnum = is_enum<_Tp>::value>
    struct __make_unsigned_selector;
  
  template<typename _Tp>
    struct __make_unsigned_selector<_Tp, true, false>
    {
    private:
      typedef __make_unsigned<typename remove_cv<_Tp>::type> __unsignedt;
      typedef typename __unsignedt::__type __unsigned_type;
      typedef __match_cv_qualifiers<_Tp, __unsigned_type> __cv_unsigned;

    public:
      typedef typename __cv_unsigned::__type __type;
    };

  template<typename _Tp>
    struct __make_unsigned_selector<_Tp, false, true>
    {
    private:
      
      typedef unsigned char __smallest;
      static const bool __b0 = sizeof(_Tp) <= sizeof(__smallest);
      static const bool __b1 = sizeof(_Tp) <= sizeof(unsigned short);
      static const bool __b2 = sizeof(_Tp) <= sizeof(unsigned int);
      typedef conditional<__b2, unsigned int, unsigned long> __cond2;
      typedef typename __cond2::type __cond2_type;
      typedef conditional<__b1, unsigned short, __cond2_type> __cond1;
      typedef typename __cond1::type __cond1_type;

    public:
      typedef typename conditional<__b0, __smallest, __cond1_type>::type __type;
    };

  
  
  
  
  template<typename _Tp>
    struct make_unsigned 
    { typedef typename __make_unsigned_selector<_Tp>::__type type; };

  
  template<>
    struct make_unsigned<bool>;


  
  template<typename _Tp>
    struct __make_signed
    { typedef _Tp __type; };

  template<>
    struct __make_signed<char>
    { typedef signed char __type; };

  template<>
    struct __make_signed<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __make_signed<unsigned short>
    { typedef signed short __type; };

  template<>
    struct __make_signed<unsigned int>
    { typedef signed int __type; };

  template<>
    struct __make_signed<unsigned long>
    { typedef signed long __type; };

  template<>
    struct __make_signed<unsigned long long>
    { typedef signed long long __type; };


  
  template<typename _Tp, 
	   bool _IsInt = is_integral<_Tp>::value,
	   bool _IsEnum = is_enum<_Tp>::value>
    struct __make_signed_selector;
  
  template<typename _Tp>
    struct __make_signed_selector<_Tp, true, false>
    {
    private:
      typedef __make_signed<typename remove_cv<_Tp>::type> __signedt;
      typedef typename __signedt::__type __signed_type;
      typedef __match_cv_qualifiers<_Tp, __signed_type> __cv_signed;

    public:
      typedef typename __cv_signed::__type __type;
    };

  template<typename _Tp>
    struct __make_signed_selector<_Tp, false, true>
    {
    private:
      
      typedef signed char __smallest;
      static const bool __b0 = sizeof(_Tp) <= sizeof(__smallest);
      static const bool __b1 = sizeof(_Tp) <= sizeof(signed short);
      static const bool __b2 = sizeof(_Tp) <= sizeof(signed int);
      typedef conditional<__b2, signed int, signed long> __cond2;
      typedef typename __cond2::type __cond2_type;
      typedef conditional<__b1, signed short, __cond2_type> __cond1;
      typedef typename __cond1::type __cond1_type;

    public:
      typedef typename conditional<__b0, __smallest, __cond1_type>::type __type;
    };

  
  
  
  
  template<typename _Tp>
    struct make_signed 
    { typedef typename __make_signed_selector<_Tp>::__type type; };

  
  template<>
    struct make_signed<bool>;

  
  template<typename... _Tp>
    struct common_type;

  template<typename _Tp>
    struct common_type<_Tp>
    {
      static_assert(sizeof(_Tp) > 0, "must be complete type");
      typedef _Tp type;
    };

  template<typename _Tp, typename _Up>
    class common_type<_Tp, _Up>
    {
      static_assert(sizeof(_Tp) > 0, "must be complete type");
      static_assert(sizeof(_Up) > 0, "must be complete type");

      static _Tp&& __t();
      static _Up&& __u();

      
      
      
      static bool __true_or_false();

    public:
      typedef decltype(__true_or_false() ? __t() : __u()) type;
    };

  template<typename _Tp, typename _Up, typename... _Vp>
    struct common_type<_Tp, _Up, _Vp...>
    {
      typedef typename
        common_type<typename common_type<_Tp, _Up>::type, _Vp...>::type type;
    };

  
}




namespace std __attribute__ ((__visibility__ ("default"))) {

  
  template<typename _Tp>
    struct identity
    {
      typedef _Tp type;
    };

  template<typename _Tp>
    inline _Tp&&
    forward(typename std::identity<_Tp>::type&& __t)
    { return __t; }

  template<typename _Tp>
    inline typename std::remove_reference<_Tp>::type&&
    move(_Tp&& __t)
    { return __t; }

}


namespace std __attribute__ ((__visibility__ ("default"))) {

  




 
  template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)
    {
      
      

      _Tp __tmp = std::move(__a);
      __a = std::move(__b);
      __b = std::move(__tmp);
    }

  
  
  template<typename _Tp, size_t _Nm>
    inline void
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    {
      for (size_t __n = 0; __n < _Nm; ++__n)
	swap(__a[__n], __b[__n]);
    }

}

                       

namespace std __attribute__ ((__visibility__ ("default"))) {

  
  template<class _T1, class _T2>
    struct pair
    {
      typedef _T1 first_type;    
      typedef _T2 second_type;   

      _T1 first;                 
      _T2 second;                

      
      
      
 
      pair()
      : first(), second() { }

       
      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }

      template<class _U1, class _U2>
        pair(_U1&& __x, _U2&& __y)
	: first(std::forward<_U1>(__x)),
	  second(std::forward<_U2>(__y)) { }

      pair(pair&& __p)
      : first(std::move(__p.first)),
	second(std::move(__p.second)) { }

       
      template<class _U1, class _U2>
        pair(const pair<_U1, _U2>& __p)
	: first(__p.first),
	  second(__p.second) { }

      template<class _U1, class _U2>
        pair(pair<_U1, _U2>&& __p)
	: first(std::move(__p.first)),
	  second(std::move(__p.second)) { }

      
      template<class _U1, class _Arg0, class... _Args>
        pair(_U1&& __x, _Arg0&& __arg0, _Args&&... __args)
	: first(std::forward<_U1>(__x)),
	  second(std::forward<_Arg0>(__arg0),
		 std::forward<_Args>(__args)...) { }

      pair&
      operator=(pair&& __p)
      { 
	first = std::move(__p.first);
	second = std::move(__p.second);
	return *this;
      }

      template<class _U1, class _U2>
        pair&
        operator=(pair<_U1, _U2>&& __p)
	{
	  first = std::move(__p.first);
	  second = std::move(__p.second);
	  return *this;
	}

      void
      swap(pair&& __p)
      {
	using std::swap;
	swap(first, __p.first);
	swap(second, __p.second);	
      }
    };

  
  template<class _T1, class _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }

  
  template<class _T1, class _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
	     || (!(__y.first < __x.first) && __x.second < __y.second); }

  
  template<class _T1, class _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }

  
  template<class _T1, class _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }

  
  template<class _T1, class _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }

  
  template<class _T1, class _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }

  
  
  
  template<class _T1, class _T2>
    inline void
    swap(pair<_T1, _T2>& __x, pair<_T1, _T2>& __y)
    { __x.swap(__y); }

  template<class _T1, class _T2>
    inline void
    swap(pair<_T1, _T2>&& __x, pair<_T1, _T2>& __y)
    { __x.swap(__y); }

  template<class _T1, class _T2>
    inline void
    swap(pair<_T1, _T2>& __x, pair<_T1, _T2>&& __y)
    { __x.swap(__y); }

  








 
  
  
  template<typename _Tp>
    class reference_wrapper;

  
  template<typename _Tp>
    struct __strip_reference_wrapper
    {
      typedef _Tp __type;
    };

  template<typename _Tp>
    struct __strip_reference_wrapper<reference_wrapper<_Tp> >
    {
      typedef _Tp& __type;
    };

  template<typename _Tp>
    struct __strip_reference_wrapper<const reference_wrapper<_Tp> >
    {
      typedef _Tp& __type;
    };

  template<typename _Tp>
    struct __decay_and_strip
    {
      typedef typename __strip_reference_wrapper<
	typename decay<_Tp>::type>::__type __type;
    };

  
  template<class _T1, class _T2>
    inline pair<typename __decay_and_strip<_T1>::__type,
		typename __decay_and_strip<_T2>::__type>
    make_pair(_T1&& __x, _T2&& __y)
    {
      return pair<typename __decay_and_strip<_T1>::__type,
	          typename __decay_and_strip<_T2>::__type>
	(std::forward<_T1>(__x), std::forward<_T2>(__y));
    }

}


















































 







 





































 




























 



 


namespace std __attribute__ ((__visibility__ ("default"))) {

  





 
  
  
  struct input_iterator_tag { };
  
  struct output_iterator_tag { };
  
  struct forward_iterator_tag : public input_iterator_tag { };
  
  
  struct bidirectional_iterator_tag : public forward_iterator_tag { };
  
  
  struct random_access_iterator_tag : public bidirectional_iterator_tag { };


  








 
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {
      
      typedef _Category  iterator_category;
      
      typedef _Tp        value_type;
      
      typedef _Distance  difference_type;
      
      typedef _Pointer   pointer;
      
      typedef _Reference reference;
    };

  




 
  template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type        value_type;
      typedef typename _Iterator::difference_type   difference_type;
      typedef typename _Iterator::pointer           pointer;
      typedef typename _Iterator::reference         reference;
    };

  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp                         value_type;
      typedef ptrdiff_t                   difference_type;
      typedef _Tp*                        pointer;
      typedef _Tp&                        reference;
    };

  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp                         value_type;
      typedef ptrdiff_t                   difference_type;
      typedef const _Tp*                  pointer;
      typedef const _Tp&                  reference;
    };

  


 
  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }

  

}



















































 







 



namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {
      
      

      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
	{
	  ++__first;
	  ++__n;
	}
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {
      
      
      return __last - __first;
    }

  










 
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {
      
      return std::__distance(__first, __last,
			     std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {
      
      
      while (__n--)
	++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
	      bidirectional_iterator_tag)
    {
      
      
      if (__n > 0)
        while (__n--)
	  ++__i;
      else
        while (__n++)
	  --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {
      
      
      __i += __n;
    }

  










 
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {
      
      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }

  template<typename _InputIterator>
    inline _InputIterator 
    next(_InputIterator __x, typename
	 iterator_traits<_InputIterator>::difference_type __n = 1)
    {
      std::advance(__x, __n);
      return __x;
    }

  template<typename _BidirectionalIterator>
    inline _BidirectionalIterator 
    prev(_BidirectionalIterator __x, typename
	 iterator_traits<_BidirectionalIterator>::difference_type __n = 1) 
    {
      std::advance(__x, -__n);
      return __x;
    }

}


















































 








 



namespace std __attribute__ ((__visibility__ ("default"))) {

  
  
















 
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
		      typename iterator_traits<_Iterator>::value_type,
		      typename iterator_traits<_Iterator>::difference_type,
		      typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

    public:
      typedef _Iterator					       iterator_type;
      typedef typename iterator_traits<_Iterator>::difference_type
							       difference_type;
      typedef typename iterator_traits<_Iterator>::reference   reference;
      typedef typename iterator_traits<_Iterator>::pointer     pointer;

    public:
      


 
      
      
      reverse_iterator() : current() { }

      

 
      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }

      

 
      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }

      


 
      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
	: current(__x.base()) { }

      

 
      iterator_type
      base() const
      { return current; }

      



 
      reference
      operator*() const
      {
	_Iterator __tmp = current;
	return *--__tmp;
      }

      



 
      pointer
      operator->() const
      { return &(operator*()); }

      



 
      reverse_iterator&
      operator++()
      {
	--current;
	return *this;
      }

      



 
      reverse_iterator
      operator++(int)
      {
	reverse_iterator __tmp = *this;
	--current;
	return __tmp;
      }

      



 
      reverse_iterator&
      operator--()
      {
	++current;
	return *this;
      }

      



 
      reverse_iterator
      operator--(int)
      {
	reverse_iterator __tmp = *this;
	++current;
	return __tmp;
      }

      



 
      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }

      



 
      reverse_iterator&
      operator+=(difference_type __n)
      {
	current -= __n;
	return *this;
      }

      



 
      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }

      



 
      reverse_iterator&
      operator-=(difference_type __n)
      {
	current += __n;
	return *this;
      }

      



 
      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };

  
  







 
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
	       const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
	      const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
	       const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
	      const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
	       const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
	       const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
	      const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }

  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
	      const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }

  
  
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
	       const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
	      const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
	       const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
	      const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
	       const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
	       const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _IteratorL, typename _IteratorR>
    
    inline auto
    operator-(const reverse_iterator<_IteratorL>& __x,
	      const reverse_iterator<_IteratorR>& __y)
    -> decltype(__y.base() - __x.base())
    { return __y.base() - __x.base(); }
  

  
  








 
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:
      
      typedef _Container          container_type;

      
      explicit
      back_insert_iterator(_Container& __x) : container(&__x) { }

      









 
      back_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
	container->push_back(__value);
	return *this;
      }

      back_insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
	container->push_back(std::move(__value));
	return *this;
      }

      
      back_insert_iterator&
      operator*()
      { return *this; }

      
      back_insert_iterator&
      operator++()
      { return *this; }

      
      back_insert_iterator
      operator++(int)
      { return *this; }
    };

  









 
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }

  








 
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:
      
      typedef _Container          container_type;

      
      explicit front_insert_iterator(_Container& __x) : container(&__x) { }

      









 
      front_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
	container->push_front(__value);
	return *this;
      }

      front_insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
	container->push_front(std::move(__value));
	return *this;
      }

      
      front_insert_iterator&
      operator*()
      { return *this; }

      
      front_insert_iterator&
      operator++()
      { return *this; }

      
      front_insert_iterator
      operator++(int)
      { return *this; }
    };

  









 
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }

  












 
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;

    public:
      
      typedef _Container          container_type;

      


 
      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(&__x), iter(__i) {}

      





















 
      insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
	iter = container->insert(iter, __value);
	++iter;
	return *this;
      }

      insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
	iter = container->insert(iter, std::move(__value));
	++iter;
	return *this;
      }

      
      insert_iterator&
      operator*()
      { return *this; }

      
      insert_iterator&
      operator++()
      { return *this; }

      
      insert_iterator&
      operator++(int)
      { return *this; }
    };

  









 
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
					 typename _Container::iterator(__i));
    }

}

namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  
  
  
  
  
  
  
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

    public:
      typedef _Iterator					     iterator_type;
      typedef typename iterator_traits<_Iterator>::iterator_category
                                                             iterator_category;
      typedef typename iterator_traits<_Iterator>::value_type  value_type;
      typedef typename iterator_traits<_Iterator>::difference_type
                                                             difference_type;
      typedef typename iterator_traits<_Iterator>::reference reference;
      typedef typename iterator_traits<_Iterator>::pointer   pointer;

      __normal_iterator() : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i) : _M_current(__i) { }

      
      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
			  typename __enable_if<
      	       (std::__are_same<_Iter, typename _Container::pointer>::__value),
		      _Container>::__type>& __i)
        : _M_current(__i.base()) { }

      
      reference
      operator*() const
      { return *_M_current; }

      pointer
      operator->() const
      { return _M_current; }

      __normal_iterator&
      operator++()
      {
	++_M_current;
	return *this;
      }

      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }

      
      __normal_iterator&
      operator--()
      {
	--_M_current;
	return *this;
      }

      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }

      
      reference
      operator[](const difference_type& __n) const
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(const difference_type& __n)
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(const difference_type& __n) const
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(const difference_type& __n)
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(const difference_type& __n) const
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const
      { return _M_current; }
    };

  
  
  
  
  
  
  

  
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
	       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
	       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
	       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
	       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }

  
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
	      const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
	      const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
	      const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
	      const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
	       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
	       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
	       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
	       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }

  
  
  
  
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    
    inline auto
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
	      const __normal_iterator<_IteratorR, _Container>& __rhs)
    -> decltype(__lhs.base() - __rhs.base())
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
	      const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
	      __n, const __normal_iterator<_Iterator, _Container>& __i)
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }

}


namespace std __attribute__ ((__visibility__ ("default"))) {

  
  






 
  template<typename _Iterator>
    class move_iterator
    {
    protected:
      _Iterator _M_current;

    public:
      typedef _Iterator                                        iterator_type;
      typedef typename iterator_traits<_Iterator>::difference_type
                                                               difference_type;
      
      typedef _Iterator                                        pointer;
      typedef typename iterator_traits<_Iterator>::value_type  value_type;
      typedef typename iterator_traits<_Iterator>::iterator_category
                                                               iterator_category;
      typedef value_type&&                                     reference;

    public:
      move_iterator()
      : _M_current() { }

      explicit
      move_iterator(iterator_type __i)
      : _M_current(__i) { }

      template<typename _Iter>
	move_iterator(const move_iterator<_Iter>& __i)
	: _M_current(__i.base()) { }

      iterator_type
      base() const
      { return _M_current; }

      reference
      operator*() const
      { return *_M_current; }

      pointer
      operator->() const
      { return _M_current; }

      move_iterator&
      operator++()
      {
	++_M_current;
	return *this;
      }

      move_iterator
      operator++(int)
      {
	move_iterator __tmp = *this;
	++_M_current;
	return __tmp;
      }

      move_iterator&
      operator--()
      {
	--_M_current;
	return *this;
      }

      move_iterator
      operator--(int)
      {
	move_iterator __tmp = *this;
	--_M_current;
	return __tmp;
      }

      move_iterator
      operator+(difference_type __n) const
      { return move_iterator(_M_current + __n); }

      move_iterator&
      operator+=(difference_type __n)
      {
	_M_current += __n;
	return *this;
      }

      move_iterator
      operator-(difference_type __n) const
      { return move_iterator(_M_current - __n); }
    
      move_iterator&
      operator-=(difference_type __n)
      { 
	_M_current -= __n;
	return *this;
      }

      reference
      operator[](difference_type __n) const
      { return _M_current[__n]; }
    };

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const move_iterator<_IteratorL>& __x,
	       const move_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const move_iterator<_IteratorL>& __x,
	       const move_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const move_iterator<_IteratorL>& __x,
	      const move_iterator<_IteratorR>& __y)
    { return __x.base() < __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const move_iterator<_IteratorL>& __x,
	       const move_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const move_iterator<_IteratorL>& __x,
	      const move_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const move_iterator<_IteratorL>& __x,
	       const move_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  
  template<typename _IteratorL, typename _IteratorR>
    inline auto
    operator-(const move_iterator<_IteratorL>& __x,
	      const move_iterator<_IteratorR>& __y)
    -> decltype(__x.base() - __y.base())
    { return __x.base() - __y.base(); }

  template<typename _Iterator>
    inline move_iterator<_Iterator>
    operator+(typename move_iterator<_Iterator>::difference_type __n,
	      const move_iterator<_Iterator>& __x)
    { return __x + __n; }

  template<typename _Iterator>
    inline move_iterator<_Iterator>
    make_move_iterator(const _Iterator& __i)
    { return move_iterator<_Iterator>(__i); }

}





























 








 






 
namespace std 
{ 
  namespace __debug { } 
}



 
namespace __gnu_debug
{
  using namespace std::__debug;
}





namespace std __attribute__ ((__visibility__ ("default"))) {

  
  
  
  template<bool _BoolType>
    struct __iter_swap
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          typedef typename iterator_traits<_ForwardIterator1>::value_type
            _ValueType1;
          _ValueType1 __tmp = std::move(*__a);
          *__a = std::move(*__b);
          *__b = std::move(__tmp);
	}
    };

  template<>
    struct __iter_swap<true>
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void 
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          swap(*__a, *__b);
        }
    };

  








 
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {
      typedef typename iterator_traits<_ForwardIterator1>::value_type
	_ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
	_ValueType2;

      
      
      
      
      

      typedef typename iterator_traits<_ForwardIterator1>::reference
	_ReferenceType1;
      typedef typename iterator_traits<_ForwardIterator2>::reference
	_ReferenceType2;
      std::__iter_swap<__are_same<_ValueType1, _ValueType2>::__value
	&& __are_same<_ValueType1&, _ReferenceType1>::__value
	&& __are_same<_ValueType2&, _ReferenceType2>::__value>::
	iter_swap(__a, __b);
    }

  










 
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
		_ForwardIterator2 __first2)
    {
      
      
      
      ;

      for (; __first1 != __last1; ++__first1, ++__first2)
	std::iter_swap(__first1, __first2);
      return __first2;
    }

  









 
  template<typename _Tp>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {
      
      
      
      if (__b < __a)
	return __b;
      return __a;
    }

  









 
  template<typename _Tp>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {
      
      
      
      if (__a < __b)
	return __b;
      return __a;
    }

  









 
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {
      
      if (__comp(__b, __a))
	return __b;
      return __a;
    }

  









 
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {
      
      if (__comp(__a, __b))
	return __b;
      return __a;
    }


  
  
  template<typename _Iterator,
	   bool _IsNormal = __is_normal_iterator<_Iterator>::__value>
    struct __niter_base
    {
      static _Iterator
      __b(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct __niter_base<_Iterator, true>
    {
      static typename _Iterator::iterator_type
      __b(_Iterator __it)
      { return __it.base(); }
    };

  
  template<typename _Iterator,
	   bool _IsMove = __is_move_iterator<_Iterator>::__value>
    struct __miter_base
    {
      static _Iterator
      __b(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct __miter_base<_Iterator, true>
    {
      static typename _Iterator::iterator_type
      __b(_Iterator __it)
      { return __it.base(); }
    };

  
  
  
  
  

  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
	  for (; __first != __last; ++__result, ++__first)
	    *__result = *__first;
	  return __result;
	}
    };

  template<typename _Category>
    struct __copy_move<true, false, _Category>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
	  for (; __first != __last; ++__result, ++__first)
	    *__result = std::move(*__first);
	  return __result;
	}
    };

  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        { 
	  typedef typename iterator_traits<_II>::difference_type _Distance;
	  for(_Distance __n = __last - __first; __n > 0; --__n)
	    {
	      *__result = *__first;
	      ++__first;
	      ++__result;
	    }
	  return __result;
	}
    };

  template<>
    struct __copy_move<true, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        { 
	  typedef typename iterator_traits<_II>::difference_type _Distance;
	  for(_Distance __n = __last - __first; __n > 0; --__n)
	    {
	      *__result = std::move(*__first);
	      ++__first;
	      ++__result;
	    }
	  return __result;
	}
    };

  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
	  __builtin_memmove(__result, __first,
			    sizeof(_Tp) * (__last - __first));
	  return __result + (__last - __first);
	}
    };

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueTypeI)
	                     && __is_pointer<_II>::__value
	                     && __is_pointer<_OI>::__value
			     && __are_same<_ValueTypeI, _ValueTypeO>::__value);

      return std::__copy_move<_IsMove, __simple,
	                      _Category>::__copy_m(__first, __last, __result);
    }

  
  
  template<typename _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, 
	     ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
		   ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, 
	     ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
		   ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
				    _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
		   istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>
		 (std::__niter_base<_II>::__b(__first),
		  std::__niter_base<_II>::__b(__last),
		  std::__niter_base<_OI>::__b(__result)));
    }

  















 
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {
      
      
      
      ;

      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
	      (std::__miter_base<_II>::__b(__first),
	       std::__miter_base<_II>::__b(__last), __result));
    }

  















 
  template<typename _II, typename _OI>
    inline _OI
    move(_II __first, _II __last, _OI __result)
    {
      
      
      
      ;

      return (std::__copy_move_a2<true>
	      (std::__miter_base<_II>::__b(__first),
	       std::__miter_base<_II>::__b(__last), __result));
    }


  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
	  while (__first != __last)
	    *--__result = *--__last;
	  return __result;
	}
    };

  template<typename _Category>
    struct __copy_move_backward<true, false, _Category>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
	  while (__first != __last)
	    *--__result = std::move(*--__last);
	  return __result;
	}
    };

  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
	  typename iterator_traits<_BI1>::difference_type __n;
	  for (__n = __last - __first; __n > 0; --__n)
	    *--__result = *--__last;
	  return __result;
	}
    };

  template<>
    struct __copy_move_backward<true, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
	  typename iterator_traits<_BI1>::difference_type __n;
	  for (__n = __last - __first; __n > 0; --__n)
	    *--__result = std::move(*--__last);
	  return __result;
	}
    };

  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
	  const ptrdiff_t _Num = __last - __first;
	  __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
	  return __result - _Num;
	}
    };

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueType1)
	                     && __is_pointer<_BI1>::__value
	                     && __is_pointer<_BI2>::__value
			     && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__copy_move_backward<_IsMove, __simple,
	                               _Category>::__copy_move_b(__first,
								 __last,
								 __result);
    }

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
		  (std::__niter_base<_BI1>::__b(__first),
		   std::__niter_base<_BI1>::__b(__last),
		   std::__niter_base<_BI2>::__b(__result)));
    }

  
















 
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      
      
      
      
      ;

      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
	      (std::__miter_base<_BI1>::__b(__first),
	       std::__miter_base<_BI1>::__b(__last), __result));
    }

  
















 
  template<typename _BI1, typename _BI2>
    inline _BI2
    move_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      
      
      
      
      ;

      return (std::__copy_move_backward_a2<true>
	      (std::__miter_base<_BI1>::__b(__first),
	       std::__miter_base<_BI1>::__b(__last), __result));
    }


  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
 	     const _Tp& __value)
    {
      for (; __first != __last; ++__first)
	*__first = __value;
    }
    
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
	     const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
	*__first = __tmp;
    }

  
  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      __builtin_memset(__first, static_cast<unsigned char>(__tmp),
		       __last - __first);
    }

  










 
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {
      
      
      ;

      std::__fill_a(std::__niter_base<_ForwardIterator>::__b(__first),
		    std::__niter_base<_ForwardIterator>::__b(__last), __value);
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (; __n > 0; --__n, ++__first)
	*__first = __value;
      return __first;
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __n > 0; --__n, ++__first)
	*__first = __tmp;
      return __first;
    }

  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }

  










 
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {
      
      

      return _OI(std::__fill_n_a(std::__niter_base<_OI>::__b(__first),
				 __n, __value));
    }

  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
	  for (; __first1 != __last1; ++__first1, ++__first2)
	    if (!(*__first1 == *__first2))
	      return false;
	  return true;
	}
    };

  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
	  return !__builtin_memcmp(__first1, __first2, sizeof(_Tp)
				   * (__last1 - __first1));
	}
    };

  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = (__is_integer<_ValueType1>::__value
	                     && __is_pointer<_II1>::__value
	                     && __is_pointer<_II2>::__value
			     && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }


  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }

      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };

  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
		   _RAI2 __first2, _RAI2 __last2)
        {
	  const typename iterator_traits<_RAI1>::difference_type
	    __diff1 = __last1 - __first1;
	  const typename iterator_traits<_RAI2>::difference_type
	    __diff2 = __last2 - __first2;
	  return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
	}

      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };

  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };

  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
	typedef typename iterator_traits<_II1>::iterator_category _Category1;
	typedef typename iterator_traits<_II2>::iterator_category _Category2;
	typedef std::__lc_rai<_Category1, _Category2> 	__rai_type;
	
	__last1 = __rai_type::__newlast1(__first1, __last1,
					 __first2, __last2);
	for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
	     ++__first1, ++__first2)
	  {
	    if (*__first1 < *__first2)
	      return true;
	    if (*__first2 < *__first1)
	      return false;
	  }
	return __first1 == __last1 && __first2 != __last2;
      }

  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
	     const _Up* __first2, const _Up* __last2)
	{
	  const size_t __len1 = __last1 - __first1;
	  const size_t __len2 = __last2 - __first2;
	  const int __result = __builtin_memcmp(__first1, __first2,
						std::min(__len1, __len2));
	  return __result != 0 ? __result < 0 : __len1 < __len2;
	}
    };

  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
				  _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
	(__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
	 && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
	 && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
	 && __is_pointer<_II1>::__value
	 && __is_pointer<_II2>::__value);

      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
							    __first2, __last2);
    }

}

namespace std __attribute__ ((__visibility__ ("default"))) {

  










 
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      
      
      
      
      ;

      return std::__equal_aux(std::__niter_base<_II1>::__b(__first1),
			      std::__niter_base<_II1>::__b(__last1),
			      std::__niter_base<_II2>::__b(__first2));
    }

  













 
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
	  _IIter2 __first2, _BinaryPredicate __binary_pred)
    {
      
      
      
      ;

      for (; __first1 != __last1; ++__first1, ++__first2)
	if (!bool(__binary_pred(*__first1, *__first2)))
	  return false;
      return true;
    }

  













 
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
			    _II2 __first2, _II2 __last2)
    {
      
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      
      
      
      
      ;
      ;

      return std::__lexicographical_compare_aux
	(std::__niter_base<_II1>::__b(__first1),
	 std::__niter_base<_II1>::__b(__last1),
	 std::__niter_base<_II2>::__b(__first2),
	 std::__niter_base<_II2>::__b(__last2));
    }

  











 
  template<typename _II1, typename _II2, typename _Compare>
    bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
			    _II2 __first2, _II2 __last2, _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> 	__rai_type;

      
      
      
      ;
      ;

      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
	   ++__first1, ++__first2)
	{
	  if (__comp(*__first1, *__first2))
	    return true;
	  if (__comp(*__first2, *__first1))
	    return false;
	}
      return __first1 == __last1 && __first2 != __last2;
    }

  











 
  template<typename _InputIterator1, typename _InputIterator2>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
	     _InputIterator2 __first2)
    {
      
      
      
      
      ;

      while (__first1 != __last1 && *__first1 == *__first2)
        {
	  ++__first1;
	  ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }

  














 
  template<typename _InputIterator1, typename _InputIterator2,
	   typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
	     _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {
      
      
      
      ;

      while (__first1 != __last1 && bool(__binary_pred(*__first1, *__first2)))
        {
	  ++__first1;
	  ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }

}









































 




 






























 






























 



































 




































 




























 



 






























 


#pragma GCC visibility push(default)


extern "C++" {

namespace std 
{
  





 

  






 
  class exception 
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();

    
 
    virtual const char* what() const throw();
  };

  
 
  class bad_exception : public exception 
  {
  public:
    bad_exception() throw() { }

    
    
    virtual ~bad_exception() throw();

    
    virtual const char* what() const throw();
  };

  
  typedef void (*terminate_handler) ();

  
  typedef void (*unexpected_handler) ();

  
  terminate_handler set_terminate(terminate_handler) throw();

  
 
  void terminate() __attribute__ ((__noreturn__));

  
  unexpected_handler set_unexpected(unexpected_handler) throw();

  
 
  void unexpected() __attribute__ ((__noreturn__));

  








 
  bool uncaught_exception() throw();

  
} 

namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  














 
  void __verbose_terminate_handler();

}
  
} 

#pragma GCC visibility pop





























 


#pragma GCC visibility push(default)



extern "C++" {

namespace std 
{
  class type_info;

  


 

  
  namespace __exception_ptr
  {
    

 
    class exception_ptr;
  }

  using __exception_ptr::exception_ptr;

  


 
  exception_ptr current_exception() throw();

  
  void rethrow_exception(exception_ptr) __attribute__ ((__noreturn__));

  
  template<typename _Ex>
    exception_ptr 
    copy_exception(_Ex __ex) throw();

  namespace __exception_ptr
  {
    bool 
    operator==(const exception_ptr&, const exception_ptr&) throw();

    bool 
    operator!=(const exception_ptr&, const exception_ptr&) throw();

    class exception_ptr
    {
      void* _M_exception_object;

      explicit exception_ptr(void* __e) throw();

      void _M_addref() throw();
      void _M_release() throw();

      void *_M_get() const throw();

      void _M_safe_bool_dummy();

      friend exception_ptr std::current_exception() throw();
      friend void std::rethrow_exception(exception_ptr);

    public:
      exception_ptr() throw();

      typedef void (exception_ptr::*__safe_bool)();

      
      exception_ptr(__safe_bool) throw();

      exception_ptr(const exception_ptr&) throw();

      exception_ptr(exception_ptr&& __o) throw()
      : _M_exception_object(__o._M_exception_object)
      { __o._M_exception_object = 0; }

      exception_ptr& 
      operator=(const exception_ptr&) throw();

      exception_ptr& 
      operator=(exception_ptr&& __o) throw()
      {
        exception_ptr(static_cast<exception_ptr&&>(__o)).swap(*this);
        return *this;
      }

      ~exception_ptr() throw();

      void 
      swap(exception_ptr&) throw();


      friend bool 
      operator==(const exception_ptr&, const exception_ptr&) throw();

      const class std::type_info*
      __cxa_exception_type() const throw();
    };

  } 


  template<typename _Ex>
    exception_ptr 
    copy_exception(_Ex __ex) throw()
    {
      try
	{
	  throw __ex;
	}
      catch(...)
	{
	  return current_exception ();
	}
    }

  
} 

} 

#pragma GCC visibility pop



#pragma GCC visibility push(default)

extern "C++" {

namespace std 
{
  




 
  class bad_alloc : public exception 
  {
  public:
    bad_alloc() throw() { }

    
    
    virtual ~bad_alloc() throw();

    
    virtual const char* what() const throw();
  };

  struct nothrow_t { };

  extern const nothrow_t nothrow;

  
 
  typedef void (*new_handler)();

  
  
  new_handler set_new_handler(new_handler) throw();
} 











 
void* operator new(std::size_t) throw (std::bad_alloc);
void* operator new[](std::size_t) throw (std::bad_alloc);
void operator delete(void*) throw();
void operator delete[](void*) throw();
void* operator new(std::size_t, const std::nothrow_t&) throw();
void* operator new[](std::size_t, const std::nothrow_t&) throw();
void operator delete(void*, const std::nothrow_t&) throw();
void operator delete[](void*, const std::nothrow_t&) throw();


inline void* operator new(std::size_t, void* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { return __p; }


inline void  operator delete  (void*, void*) throw() { }
inline void  operator delete[](void*, void*) throw() { }

} 

#pragma GCC visibility pop


namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  using std::size_t;
  using std::ptrdiff_t;

  






 
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t     size_type;
      typedef ptrdiff_t  difference_type;
      typedef _Tp*       pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp&       reference;
      typedef const _Tp& const_reference;
      typedef _Tp        value_type;

      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };

      new_allocator() throw() { }

      new_allocator(const new_allocator&) throw() { }

      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) throw() { }

      ~new_allocator() throw() { }

      pointer
      address(reference __x) const { return &__x; }

      const_pointer
      address(const_reference __x) const { return &__x; }

      
      
      pointer
      allocate(size_type __n, const void* = 0)
      { 
	if (__builtin_expect(__n > this->max_size(), false))
	  std::__throw_bad_alloc();

	return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }

      
      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }

      size_type
      max_size() const throw() 
      { return size_t(-1) / sizeof(_Tp); }

      
      
      void 
      construct(pointer __p, const _Tp& __val) 
      { ::new((void *)__p) _Tp(__val); }

      template<typename... _Args>
        void
        construct(pointer __p, _Args&&... __args)
	{ ::new((void *)__p) _Tp(std::forward<_Args>(__args)...); }

      void 
      destroy(pointer __p) { __p->~_Tp(); }
    };

  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }
  
  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }

}



namespace std __attribute__ ((__visibility__ ("default"))) {

  




 

  template<typename _Tp>
    class allocator;

  
  template<>
    class allocator<void>
    {
    public:
      typedef size_t      size_type;
      typedef ptrdiff_t   difference_type;
      typedef void*       pointer;
      typedef const void* const_pointer;
      typedef void        value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };
    };

  





 
  template<typename _Tp>
    class allocator: public __gnu_cxx::new_allocator<_Tp>
    {
   public:
      typedef size_t     size_type;
      typedef ptrdiff_t  difference_type;
      typedef _Tp*       pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp&       reference;
      typedef const _Tp& const_reference;
      typedef _Tp        value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };

      allocator() throw() { }

      allocator(const allocator& __a) throw()
      : __gnu_cxx::new_allocator<_Tp>(__a) { }

      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }

      
    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    { return false; }

  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    { return false; }

  
  
  
  extern template class allocator<char>;
  extern template class allocator<wchar_t>;

  

  
  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) { } };

  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two)
      {
	
	if (__one != __two)
	  swap(__one, __two);
      }
    };

  
  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };

  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };

}


















































 




 



namespace std __attribute__ ((__visibility__ ("default"))) {

  


 
  template<typename _T1, typename _T2>
    inline void
    _Construct(_T1* __p, _T2&& __value)
    {
      ::new(static_cast<void*>(__p)) _T1(std::forward<_T2>(__value));
    }

  

 
  template<typename _Tp>
    inline void
    _Destroy(_Tp* __pointer)
    { __pointer->~_Tp(); }

  template<bool>
    struct _Destroy_aux
    {
      template<typename _ForwardIterator>
        static void
        __destroy(_ForwardIterator __first, _ForwardIterator __last)
	{
	  for (; __first != __last; ++__first)
	    std::_Destroy(&*__first);
	}
    };

  template<>
    struct _Destroy_aux<true>
    {
      template<typename _ForwardIterator>
        static void
        __destroy(_ForwardIterator, _ForwardIterator) { }
    };

  



 
  template<typename _ForwardIterator>
    inline void
    _Destroy(_ForwardIterator __first, _ForwardIterator __last)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
                       _Value_type;
      std::_Destroy_aux<__has_trivial_destructor(_Value_type)>::
	__destroy(__first, __last);
    }

  



 

  template <typename _Tp> class allocator;

  template<typename _ForwardIterator, typename _Allocator>
    void
    _Destroy(_ForwardIterator __first, _ForwardIterator __last,
	     _Allocator& __alloc)
    {
      for (; __first != __last; ++__first)
	__alloc.destroy(&*__first);
    }

  template<typename _ForwardIterator, typename _Tp>
    inline void
    _Destroy(_ForwardIterator __first, _ForwardIterator __last,
	     allocator<_Tp>&)
    {
      _Destroy(__first, __last);
    }

}



















































 




 


namespace std __attribute__ ((__visibility__ ("default"))) {

  template<bool>
    struct __uninitialized_copy
    {
      template<typename _InputIterator, typename _ForwardIterator>
        static _ForwardIterator
        uninitialized_copy(_InputIterator __first, _InputIterator __last,
			   _ForwardIterator __result)
        {
	  _ForwardIterator __cur = __result;
	  try
	    {
	      for (; __first != __last; ++__first, ++__cur)
		std::_Construct(&*__cur, *__first);
	      return __cur;
	    }
	  catch(...)
	    {
	      std::_Destroy(__result, __cur);
	      throw;
	    }
	}
    };

  template<>
    struct __uninitialized_copy<true>
    {
      template<typename _InputIterator, typename _ForwardIterator>
        static _ForwardIterator
        uninitialized_copy(_InputIterator __first, _InputIterator __last,
			   _ForwardIterator __result)
        { return std::copy(__first, __last, __result); }
    };

  







 
  template<typename _InputIterator, typename _ForwardIterator>
    inline _ForwardIterator
    uninitialized_copy(_InputIterator __first, _InputIterator __last,
		       _ForwardIterator __result)
    {
      typedef typename iterator_traits<_InputIterator>::value_type
	_ValueType1;
      typedef typename iterator_traits<_ForwardIterator>::value_type
	_ValueType2;

      return std::__uninitialized_copy<(__is_pod(_ValueType1)
					&& __is_pod(_ValueType2))>::
	uninitialized_copy(__first, __last, __result);
    }


  template<bool>
    struct __uninitialized_fill
    {
      template<typename _ForwardIterator, typename _Tp>
        static void
        uninitialized_fill(_ForwardIterator __first,
			   _ForwardIterator __last, const _Tp& __x)
        {
	  _ForwardIterator __cur = __first;
	  try
	    {
	      for (; __cur != __last; ++__cur)
		std::_Construct(&*__cur, __x);
	    }
	  catch(...)
	    {
	      std::_Destroy(__first, __cur);
	      throw;
	    }
	}
    };

  template<>
    struct __uninitialized_fill<true>
    {
      template<typename _ForwardIterator, typename _Tp>
        static void
        uninitialized_fill(_ForwardIterator __first,
			   _ForwardIterator __last, const _Tp& __x)
        { std::fill(__first, __last, __x); }
    };

  







 
  template<typename _ForwardIterator, typename _Tp>
    inline void
    uninitialized_fill(_ForwardIterator __first, _ForwardIterator __last,
		       const _Tp& __x)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
	_ValueType;

      std::__uninitialized_fill<__is_pod(_ValueType)>::
	uninitialized_fill(__first, __last, __x);
    }


  template<bool>
    struct __uninitialized_fill_n
    {
      template<typename _ForwardIterator, typename _Size, typename _Tp>
        static void
        uninitialized_fill_n(_ForwardIterator __first, _Size __n,
			     const _Tp& __x)
        {
	  _ForwardIterator __cur = __first;
	  try
	    {
	      for (; __n > 0; --__n, ++__cur)
		std::_Construct(&*__cur, __x);
	    }
	  catch(...)
	    {
	      std::_Destroy(__first, __cur);
	      throw;
	    }
	}
    };

  template<>
    struct __uninitialized_fill_n<true>
    {
      template<typename _ForwardIterator, typename _Size, typename _Tp>
        static void
        uninitialized_fill_n(_ForwardIterator __first, _Size __n,
			     const _Tp& __x)
        { std::fill_n(__first, __n, __x); }
    };

  







 
  template<typename _ForwardIterator, typename _Size, typename _Tp>
    inline void
    uninitialized_fill_n(_ForwardIterator __first, _Size __n, const _Tp& __x)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
	_ValueType;

      std::__uninitialized_fill_n<__is_pod(_ValueType)>::
	uninitialized_fill_n(__first, __n, __x);
    }

  
  
  
  
  

  template<typename _InputIterator, typename _ForwardIterator,
	   typename _Allocator>
    _ForwardIterator
    __uninitialized_copy_a(_InputIterator __first, _InputIterator __last,
			   _ForwardIterator __result, _Allocator& __alloc)
    {
      _ForwardIterator __cur = __result;
      try
	{
	  for (; __first != __last; ++__first, ++__cur)
	    __alloc.construct(&*__cur, *__first);
	  return __cur;
	}
      catch(...)
	{
	  std::_Destroy(__result, __cur, __alloc);
	  throw;
	}
    }

  template<typename _InputIterator, typename _ForwardIterator, typename _Tp>
    inline _ForwardIterator
    __uninitialized_copy_a(_InputIterator __first, _InputIterator __last,
			   _ForwardIterator __result, allocator<_Tp>&)
    { return std::uninitialized_copy(__first, __last, __result); }

  template<typename _InputIterator, typename _ForwardIterator,
	   typename _Allocator>
    inline _ForwardIterator
    __uninitialized_move_a(_InputIterator __first, _InputIterator __last,
			   _ForwardIterator __result, _Allocator& __alloc)
    {
      return std::__uninitialized_copy_a(std::make_move_iterator(__first),
					 std::make_move_iterator(__last),
					 __result, __alloc);
    }

  template<typename _ForwardIterator, typename _Tp, typename _Allocator>
    void
    __uninitialized_fill_a(_ForwardIterator __first, _ForwardIterator __last,
			   const _Tp& __x, _Allocator& __alloc)
    {
      _ForwardIterator __cur = __first;
      try
	{
	  for (; __cur != __last; ++__cur)
	    __alloc.construct(&*__cur, __x);
	}
      catch(...)
	{
	  std::_Destroy(__first, __cur, __alloc);
	  throw;
	}
    }

  template<typename _ForwardIterator, typename _Tp, typename _Tp2>
    inline void
    __uninitialized_fill_a(_ForwardIterator __first, _ForwardIterator __last,
			   const _Tp& __x, allocator<_Tp2>&)
    { std::uninitialized_fill(__first, __last, __x); }

  template<typename _ForwardIterator, typename _Size, typename _Tp,
	   typename _Allocator>
    void
    __uninitialized_fill_n_a(_ForwardIterator __first, _Size __n, 
			     const _Tp& __x, _Allocator& __alloc)
    {
      _ForwardIterator __cur = __first;
      try
	{
	  for (; __n > 0; --__n, ++__cur)
	    __alloc.construct(&*__cur, __x);
	}
      catch(...)
	{
	  std::_Destroy(__first, __cur, __alloc);
	  throw;
	}
    }

  template<typename _ForwardIterator, typename _Size, typename _Tp,
	   typename _Tp2>
    inline void
    __uninitialized_fill_n_a(_ForwardIterator __first, _Size __n, 
			     const _Tp& __x, allocator<_Tp2>&)
    { std::uninitialized_fill_n(__first, __n, __x); }


  
  
  
  

  
  
  
  
  template<typename _InputIterator1, typename _InputIterator2,
	   typename _ForwardIterator, typename _Allocator>
    inline _ForwardIterator
    __uninitialized_copy_move(_InputIterator1 __first1,
			      _InputIterator1 __last1,
			      _InputIterator2 __first2,
			      _InputIterator2 __last2,
			      _ForwardIterator __result,
			      _Allocator& __alloc)
    {
      _ForwardIterator __mid = std::__uninitialized_copy_a(__first1, __last1,
							   __result,
							   __alloc);
      try
	{
	  return std::__uninitialized_move_a(__first2, __last2, __mid, __alloc);
	}
      catch(...)
	{
	  std::_Destroy(__result, __mid, __alloc);
	  throw;
	}
    }

  
  
  
  
  template<typename _InputIterator1, typename _InputIterator2,
	   typename _ForwardIterator, typename _Allocator>
    inline _ForwardIterator
    __uninitialized_move_copy(_InputIterator1 __first1,
			      _InputIterator1 __last1,
			      _InputIterator2 __first2,
			      _InputIterator2 __last2,
			      _ForwardIterator __result,
			      _Allocator& __alloc)
    {
      _ForwardIterator __mid = std::__uninitialized_move_a(__first1, __last1,
							   __result,
							   __alloc);
      try
	{
	  return std::__uninitialized_copy_a(__first2, __last2, __mid, __alloc);
	}
      catch(...)
	{
	  std::_Destroy(__result, __mid, __alloc);
	  throw;
	}
    }
  
  
  
  
  template<typename _ForwardIterator, typename _Tp, typename _InputIterator,
	   typename _Allocator>
    inline _ForwardIterator
    __uninitialized_fill_move(_ForwardIterator __result, _ForwardIterator __mid,
			      const _Tp& __x, _InputIterator __first,
			      _InputIterator __last, _Allocator& __alloc)
    {
      std::__uninitialized_fill_a(__result, __mid, __x, __alloc);
      try
	{
	  return std::__uninitialized_move_a(__first, __last, __mid, __alloc);
	}
      catch(...)
	{
	  std::_Destroy(__result, __mid, __alloc);
	  throw;
	}
    }

  
  
  
  template<typename _InputIterator, typename _ForwardIterator, typename _Tp,
	   typename _Allocator>
    inline void
    __uninitialized_move_fill(_InputIterator __first1, _InputIterator __last1,
			      _ForwardIterator __first2,
			      _ForwardIterator __last2, const _Tp& __x,
			      _Allocator& __alloc)
    {
      _ForwardIterator __mid2 = std::__uninitialized_move_a(__first1, __last1,
							    __first2,
							    __alloc);
      try
	{
	  std::__uninitialized_fill_a(__mid2, __last2, __x, __alloc);
	}
      catch(...)
	{
	  std::_Destroy(__first2, __mid2, __alloc);
	  throw;
	}
    }

  template<typename _InputIterator, typename _Size,
	   typename _ForwardIterator>
    _ForwardIterator
    __uninitialized_copy_n(_InputIterator __first, _Size __n,
			   _ForwardIterator __result, input_iterator_tag)
    {
      _ForwardIterator __cur = __result;
      try
	{
	  for (; __n > 0; --__n, ++__first, ++__cur)
	    ::new(static_cast<void*>(&*__cur)) typename
		iterator_traits<_ForwardIterator>::value_type(*__first);
	  return __cur;
	}
      catch(...)
	{
	  std::_Destroy(__result, __cur);
	  throw;
	}
    }

  template<typename _RandomAccessIterator, typename _Size,
	   typename _ForwardIterator>
    inline _ForwardIterator
    __uninitialized_copy_n(_RandomAccessIterator __first, _Size __n,
			   _ForwardIterator __result,
			   random_access_iterator_tag)
    { return std::uninitialized_copy(__first, __first + __n, __result); }

  







 
  template<typename _InputIterator, typename _Size, typename _ForwardIterator>
    inline _ForwardIterator
    uninitialized_copy_n(_InputIterator __first, _Size __n,
			 _ForwardIterator __result)
    { return std::__uninitialized_copy_n(__first, __n, __result,
					 std::__iterator_category(__first)); }

}


















































 




 





























 



#pragma GCC visibility push(default)



































 




























 



 


namespace std
{
  
  template<class _E>
    class initializer_list
    {
      const _E* __array;
      size_t __len;

      
      initializer_list(const _E* __a, size_t __l)
      : __array(__a), __len(__l) { }

    public:
      initializer_list()
      : __array(__null), __len(0) { }

      
      size_t size() const
      { return __len; }

      
      const _E* begin() const
      { return __array; }

      
      const _E* end() const
      { return begin() + size(); }
  };
}

#pragma GCC visibility pop

namespace std __attribute__ ((__visibility__ ("default"))) {

  
  template<typename _Tp, typename _Alloc>
    struct _Vector_base
    {
      typedef typename _Alloc::template rebind<_Tp>::other _Tp_alloc_type;

      struct _Vector_impl 
      : public _Tp_alloc_type
      {
	typename _Tp_alloc_type::pointer _M_start;
	typename _Tp_alloc_type::pointer _M_finish;
	typename _Tp_alloc_type::pointer _M_end_of_storage;

	_Vector_impl()
	: _Tp_alloc_type(), _M_start(0), _M_finish(0), _M_end_of_storage(0)
	{ }

	_Vector_impl(_Tp_alloc_type const& __a)
	: _Tp_alloc_type(__a), _M_start(0), _M_finish(0), _M_end_of_storage(0)
	{ }
      };
      
    public:
      typedef _Alloc allocator_type;

      _Tp_alloc_type&
      _M_get_Tp_allocator()
      { return *static_cast<_Tp_alloc_type*>(&this->_M_impl); }

      const _Tp_alloc_type&
      _M_get_Tp_allocator() const
      { return *static_cast<const _Tp_alloc_type*>(&this->_M_impl); }

      allocator_type
      get_allocator() const
      { return allocator_type(_M_get_Tp_allocator()); }

      _Vector_base()
      : _M_impl() { }

      _Vector_base(const allocator_type& __a)
      : _M_impl(__a) { }

      _Vector_base(size_t __n, const allocator_type& __a)
      : _M_impl(__a)
      {
	this->_M_impl._M_start = this->_M_allocate(__n);
	this->_M_impl._M_finish = this->_M_impl._M_start;
	this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __n;
      }

      _Vector_base(_Vector_base&& __x)
      : _M_impl(__x._M_get_Tp_allocator())
      {
	this->_M_impl._M_start = __x._M_impl._M_start;
	this->_M_impl._M_finish = __x._M_impl._M_finish;
	this->_M_impl._M_end_of_storage = __x._M_impl._M_end_of_storage;
	__x._M_impl._M_start = 0;
	__x._M_impl._M_finish = 0;
	__x._M_impl._M_end_of_storage = 0;
      }

      ~_Vector_base()
      { _M_deallocate(this->_M_impl._M_start, this->_M_impl._M_end_of_storage
		      - this->_M_impl._M_start); }

    public:
      _Vector_impl _M_impl;

      typename _Tp_alloc_type::pointer
      _M_allocate(size_t __n)
      { return __n != 0 ? _M_impl.allocate(__n) : 0; }

      void
      _M_deallocate(typename _Tp_alloc_type::pointer __p, size_t __n)
      {
	if (__p)
	  _M_impl.deallocate(__p, __n);
      }
    };


  
















 
  template<typename _Tp, typename _Alloc = std::allocator<_Tp> >
    class vector : protected _Vector_base<_Tp, _Alloc>
    {
      
      typedef typename _Alloc::value_type                _Alloc_value_type;
      
      
      
      typedef _Vector_base<_Tp, _Alloc>			 _Base;
      typedef typename _Base::_Tp_alloc_type		 _Tp_alloc_type;

    public:
      typedef _Tp					 value_type;
      typedef typename _Tp_alloc_type::pointer           pointer;
      typedef typename _Tp_alloc_type::const_pointer     const_pointer;
      typedef typename _Tp_alloc_type::reference         reference;
      typedef typename _Tp_alloc_type::const_reference   const_reference;
      typedef __gnu_cxx::__normal_iterator<pointer, vector> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, vector>
      const_iterator;
      typedef std::reverse_iterator<const_iterator>  const_reverse_iterator;
      typedef std::reverse_iterator<iterator>		 reverse_iterator;
      typedef size_t					 size_type;
      typedef ptrdiff_t					 difference_type;
      typedef _Alloc                        		 allocator_type;

    protected:
      using _Base::_M_allocate;
      using _Base::_M_deallocate;
      using _Base::_M_impl;
      using _Base::_M_get_Tp_allocator;

    public:
      
      
      

 
      vector()
      : _Base() { }

      


 
      explicit
      vector(const allocator_type& __a)
      : _Base(__a) { }

      






 
      explicit
      vector(size_type __n, const value_type& __value = value_type(),
	     const allocator_type& __a = allocator_type())
      : _Base(__n, __a)
      { _M_fill_initialize(__n, __value); }

      







 
      vector(const vector& __x)
      : _Base(__x.size(), __x._M_get_Tp_allocator())
      { this->_M_impl._M_finish =
	  std::__uninitialized_copy_a(__x.begin(), __x.end(),
				      this->_M_impl._M_start,
				      _M_get_Tp_allocator());
      }

      





 
      vector(vector&& __x)
      : _Base(std::forward<_Base>(__x)) { }

      









 
      vector(initializer_list<value_type> __l,
	     const allocator_type& __a = allocator_type())
      : _Base(__a)
      {
	_M_range_initialize(__l.begin(), __l.end(),
			    random_access_iterator_tag());
      }

      














 
      template<typename _InputIterator>
        vector(_InputIterator __first, _InputIterator __last,
	       const allocator_type& __a = allocator_type())
	: _Base(__a)
        {
	  
	  typedef typename std::__is_integer<_InputIterator>::__type _Integral;
	  _M_initialize_dispatch(__first, __last, _Integral());
	}

      




 
      ~vector()
      { std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
		      _M_get_Tp_allocator()); }

      






 
      vector&
      operator=(const vector& __x);

      





 
      vector&
      operator=(vector&& __x)
      {
	
	this->clear();
	this->swap(__x); 
	return *this;
      }

      









 
      vector&
      operator=(initializer_list<value_type> __l)
      {
	this->assign(__l.begin(), __l.end());
	return *this;
      }

      








 
      void
      assign(size_type __n, const value_type& __val)
      { _M_fill_assign(__n, __val); }

      










 
      template<typename _InputIterator>
        void
        assign(_InputIterator __first, _InputIterator __last)
        {
	  
	  typedef typename std::__is_integer<_InputIterator>::__type _Integral;
	  _M_assign_dispatch(__first, __last, _Integral());
	}

      









 
      void
      assign(initializer_list<value_type> __l)
      { this->assign(__l.begin(), __l.end()); }

      
      using _Base::get_allocator;

      
      



 
      iterator
      begin()
      { return iterator(this->_M_impl._M_start); }

      



 
      const_iterator
      begin() const
      { return const_iterator(this->_M_impl._M_start); }

      



 
      iterator
      end()
      { return iterator(this->_M_impl._M_finish); }

      



 
      const_iterator
      end() const
      { return const_iterator(this->_M_impl._M_finish); }

      



 
      reverse_iterator
      rbegin()
      { return reverse_iterator(end()); }

      



 
      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(end()); }

      



 
      reverse_iterator
      rend()
      { return reverse_iterator(begin()); }

      



 
      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(begin()); }

      



 
      const_iterator
      cbegin() const
      { return const_iterator(this->_M_impl._M_start); }

      



 
      const_iterator
      cend() const
      { return const_iterator(this->_M_impl._M_finish); }

      



 
      const_reverse_iterator
      crbegin() const
      { return const_reverse_iterator(end()); }

      



 
      const_reverse_iterator
      crend() const
      { return const_reverse_iterator(begin()); }

      
       
      size_type
      size() const
      { return size_type(this->_M_impl._M_finish - this->_M_impl._M_start); }

       
      size_type
      max_size() const
      { return _M_get_Tp_allocator().max_size(); }

      









 
      void
      resize(size_type __new_size, value_type __x = value_type())
      {
	if (__new_size < size())
	  _M_erase_at_end(this->_M_impl._M_start + __new_size);
	else
	  insert(end(), __new_size - size(), __x);
      }

      


 
      size_type
      capacity() const
      { return size_type(this->_M_impl._M_end_of_storage
			 - this->_M_impl._M_start); }

      


 
      bool
      empty() const
      { return begin() == end(); }

      















 
      void
      reserve(size_type __n);

      
      









 
      reference
      operator[](size_type __n)
      { return *(this->_M_impl._M_start + __n); }

      









 
      const_reference
      operator[](size_type __n) const
      { return *(this->_M_impl._M_start + __n); }

    protected:
      
      void
      _M_range_check(size_type __n) const
      {
	if (__n >= this->size())
	  __throw_out_of_range(("vector::_M_range_check"));
      }

    public:
      









 
      reference
      at(size_type __n)
      {
	_M_range_check(__n);
	return (*this)[__n]; 
      }

      









 
      const_reference
      at(size_type __n) const
      {
	_M_range_check(__n);
	return (*this)[__n];
      }

      


 
      reference
      front()
      { return *begin(); }

      


 
      const_reference
      front() const
      { return *begin(); }

      


 
      reference
      back()
      { return *(end() - 1); }
      
      


 
      const_reference
      back() const
      { return *(end() - 1); }

      
      
      
      


 
      pointer
      data()
      { return pointer(this->_M_impl._M_start); }

      const_pointer
      data() const
      { return const_pointer(this->_M_impl._M_start); }

      
      








 
      void
      push_back(const value_type& __x)
      {
	if (this->_M_impl._M_finish != this->_M_impl._M_end_of_storage)
	  {
	    this->_M_impl.construct(this->_M_impl._M_finish, __x);
	    ++this->_M_impl._M_finish;
	  }
	else
	  _M_insert_aux(end(), __x);
      }

      void
      push_back(value_type&& __x)
      { emplace_back(std::move(__x)); }

      template<typename... _Args>
        void
        emplace_back(_Args&&... __args);

      







 
      void
      pop_back()
      {
	--this->_M_impl._M_finish;
	this->_M_impl.destroy(this->_M_impl._M_finish);
      }

      










 
      template<typename... _Args>
        iterator
        emplace(iterator __position, _Args&&... __args);

      









 
      iterator
      insert(iterator __position, const value_type& __x);

      









 
      iterator
      insert(iterator __position, value_type&& __x)
      { return emplace(__position, std::move(__x)); }

      











 
      void
      insert(iterator __position, initializer_list<value_type> __l)
      { this->insert(__position, __l.begin(), __l.end()); }

      











 
      void
      insert(iterator __position, size_type __n, const value_type& __x)
      { _M_fill_insert(__position, __n, __x); }

      












 
      template<typename _InputIterator>
        void
        insert(iterator __position, _InputIterator __first,
	       _InputIterator __last)
        {
	  
	  typedef typename std::__is_integer<_InputIterator>::__type _Integral;
	  _M_insert_dispatch(__position, __first, __last, _Integral());
	}

      













 
      iterator
      erase(iterator __position);

      
















 
      iterator
      erase(iterator __first, iterator __last);

      







 
      void
      swap(vector&& __x)
      {
	std::swap(this->_M_impl._M_start, __x._M_impl._M_start);
	std::swap(this->_M_impl._M_finish, __x._M_impl._M_finish);
	std::swap(this->_M_impl._M_end_of_storage,
		  __x._M_impl._M_end_of_storage);

	
	
	std::__alloc_swap<_Tp_alloc_type>::_S_do_it(_M_get_Tp_allocator(),
						    __x._M_get_Tp_allocator());
      }

      




 
      void
      clear()
      { _M_erase_at_end(this->_M_impl._M_start); }

    protected:
      


 
      template<typename _ForwardIterator>
        pointer
        _M_allocate_and_copy(size_type __n,
			     _ForwardIterator __first, _ForwardIterator __last)
        {
	  pointer __result = this->_M_allocate(__n);
	  try
	    {
	      std::__uninitialized_copy_a(__first, __last, __result,
					  _M_get_Tp_allocator());
	      return __result;
	    }
	  catch(...)
	    {
	      _M_deallocate(__result, __n);
	      throw;
	    }
	}


      

      

      
      
      template<typename _Integer>
        void
        _M_initialize_dispatch(_Integer __n, _Integer __value, __true_type)
        {
	  this->_M_impl._M_start = _M_allocate(static_cast<size_type>(__n));
	  this->_M_impl._M_end_of_storage =
	    this->_M_impl._M_start + static_cast<size_type>(__n);
	  _M_fill_initialize(static_cast<size_type>(__n), __value);
	}

      
      template<typename _InputIterator>
        void
        _M_initialize_dispatch(_InputIterator __first, _InputIterator __last,
			       __false_type)
        {
	  typedef typename std::iterator_traits<_InputIterator>::
	    iterator_category _IterCategory;
	  _M_range_initialize(__first, __last, _IterCategory());
	}

      
      template<typename _InputIterator>
        void
        _M_range_initialize(_InputIterator __first,
			    _InputIterator __last, std::input_iterator_tag)
        {
	  for (; __first != __last; ++__first)
	    push_back(*__first);
	}

      
      template<typename _ForwardIterator>
        void
        _M_range_initialize(_ForwardIterator __first,
			    _ForwardIterator __last, std::forward_iterator_tag)
        {
	  const size_type __n = std::distance(__first, __last);
	  this->_M_impl._M_start = this->_M_allocate(__n);
	  this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __n;
	  this->_M_impl._M_finish =
	    std::__uninitialized_copy_a(__first, __last,
					this->_M_impl._M_start,
					_M_get_Tp_allocator());
	}

      
      
      void
      _M_fill_initialize(size_type __n, const value_type& __value)
      {
	std::__uninitialized_fill_n_a(this->_M_impl._M_start, __n, __value, 
				      _M_get_Tp_allocator());
	this->_M_impl._M_finish = this->_M_impl._M_end_of_storage;
      }


      
      

      

      
      
      template<typename _Integer>
        void
        _M_assign_dispatch(_Integer __n, _Integer __val, __true_type)
        { _M_fill_assign(__n, __val); }

      
      template<typename _InputIterator>
        void
        _M_assign_dispatch(_InputIterator __first, _InputIterator __last,
			   __false_type)
        {
	  typedef typename std::iterator_traits<_InputIterator>::
	    iterator_category _IterCategory;
	  _M_assign_aux(__first, __last, _IterCategory());
	}

      
      template<typename _InputIterator>
        void
        _M_assign_aux(_InputIterator __first, _InputIterator __last,
		      std::input_iterator_tag);

      
      template<typename _ForwardIterator>
        void
        _M_assign_aux(_ForwardIterator __first, _ForwardIterator __last,
		      std::forward_iterator_tag);

      
      
      void
      _M_fill_assign(size_type __n, const value_type& __val);


      

      

      
      
      template<typename _Integer>
        void
        _M_insert_dispatch(iterator __pos, _Integer __n, _Integer __val,
			   __true_type)
        { _M_fill_insert(__pos, __n, __val); }

      
      template<typename _InputIterator>
        void
        _M_insert_dispatch(iterator __pos, _InputIterator __first,
			   _InputIterator __last, __false_type)
        {
	  typedef typename std::iterator_traits<_InputIterator>::
	    iterator_category _IterCategory;
	  _M_range_insert(__pos, __first, __last, _IterCategory());
	}

      
      template<typename _InputIterator>
        void
        _M_range_insert(iterator __pos, _InputIterator __first,
			_InputIterator __last, std::input_iterator_tag);

      
      template<typename _ForwardIterator>
        void
        _M_range_insert(iterator __pos, _ForwardIterator __first,
			_ForwardIterator __last, std::forward_iterator_tag);

      
      
      void
      _M_fill_insert(iterator __pos, size_type __n, const value_type& __x);

      
      template<typename... _Args>
        void
        _M_insert_aux(iterator __position, _Args&&... __args);

      
      size_type
      _M_check_len(size_type __n, const char* __s) const
      {
	if (max_size() - size() < __n)
	  __throw_length_error((__s));

	const size_type __len = size() + std::max(size(), __n);
	return (__len < size() || __len > max_size()) ? max_size() : __len;
      }

      

      
      
      void
      _M_erase_at_end(pointer __pos)
      {
	std::_Destroy(__pos, this->_M_impl._M_finish, _M_get_Tp_allocator());
	this->_M_impl._M_finish = __pos;
      }
    };


  








 
  template<typename _Tp, typename _Alloc>
    inline bool
    operator==(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return (__x.size() == __y.size()
	      && std::equal(__x.begin(), __x.end(), __y.begin())); }

  









 
  template<typename _Tp, typename _Alloc>
    inline bool
    operator<(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return std::lexicographical_compare(__x.begin(), __x.end(),
					  __y.begin(), __y.end()); }

  
  template<typename _Tp, typename _Alloc>
    inline bool
    operator!=(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return !(__x == __y); }

  
  template<typename _Tp, typename _Alloc>
    inline bool
    operator>(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return __y < __x; }

  
  template<typename _Tp, typename _Alloc>
    inline bool
    operator<=(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return !(__y < __x); }

  
  template<typename _Tp, typename _Alloc>
    inline bool
    operator>=(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return !(__x < __y); }

  
  template<typename _Tp, typename _Alloc>
    inline void
    swap(vector<_Tp, _Alloc>& __x, vector<_Tp, _Alloc>& __y)
    { __x.swap(__y); }

  template<typename _Tp, typename _Alloc>
    inline void
    swap(vector<_Tp, _Alloc>&& __x, vector<_Tp, _Alloc>& __y)
    { __x.swap(__y); }

  template<typename _Tp, typename _Alloc>
    inline void
    swap(vector<_Tp, _Alloc>& __x, vector<_Tp, _Alloc>&& __y)
    { __x.swap(__y); }

}


















































 




 



namespace std __attribute__ ((__visibility__ ("default"))) {

  typedef unsigned long _Bit_type;
  enum { _S_word_bit = int(8 * sizeof(_Bit_type)) };

  struct _Bit_reference
  {
    _Bit_type * _M_p;
    _Bit_type _M_mask;

    _Bit_reference(_Bit_type * __x, _Bit_type __y)
    : _M_p(__x), _M_mask(__y) { }

    _Bit_reference() : _M_p(0), _M_mask(0) { }

    operator bool() const
    { return !!(*_M_p & _M_mask); }

    _Bit_reference&
    operator=(bool __x)
    {
      if (__x)
	*_M_p |= _M_mask;
      else
	*_M_p &= ~_M_mask;
      return *this;
    }

    _Bit_reference&
    operator=(const _Bit_reference& __x)
    { return *this = bool(__x); }

    bool
    operator==(const _Bit_reference& __x) const
    { return bool(*this) == bool(__x); }

    bool
    operator<(const _Bit_reference& __x) const
    { return !bool(*this) && bool(__x); }

    void
    flip()
    { *_M_p ^= _M_mask; }
  };

  struct _Bit_iterator_base
  : public std::iterator<std::random_access_iterator_tag, bool>
  {
    _Bit_type * _M_p;
    unsigned int _M_offset;

    _Bit_iterator_base(_Bit_type * __x, unsigned int __y)
    : _M_p(__x), _M_offset(__y) { }

    void
    _M_bump_up()
    {
      if (_M_offset++ == int(_S_word_bit) - 1)
	{
	  _M_offset = 0;
	  ++_M_p;
	}
    }

    void
    _M_bump_down()
    {
      if (_M_offset-- == 0)
	{
	  _M_offset = int(_S_word_bit) - 1;
	  --_M_p;
	}
    }

    void
    _M_incr(ptrdiff_t __i)
    {
      difference_type __n = __i + _M_offset;
      _M_p += __n / int(_S_word_bit);
      __n = __n % int(_S_word_bit);
      if (__n < 0)
	{
	  __n += int(_S_word_bit);
	  --_M_p;
	}
      _M_offset = static_cast<unsigned int>(__n);
    }

    bool
    operator==(const _Bit_iterator_base& __i) const
    { return _M_p == __i._M_p && _M_offset == __i._M_offset; }

    bool
    operator<(const _Bit_iterator_base& __i) const
    {
      return _M_p < __i._M_p
	     || (_M_p == __i._M_p && _M_offset < __i._M_offset);
    }

    bool
    operator!=(const _Bit_iterator_base& __i) const
    { return !(*this == __i); }

    bool
    operator>(const _Bit_iterator_base& __i) const
    { return __i < *this; }

    bool
    operator<=(const _Bit_iterator_base& __i) const
    { return !(__i < *this); }

    bool
    operator>=(const _Bit_iterator_base& __i) const
    { return !(*this < __i); }
  };

  inline ptrdiff_t
  operator-(const _Bit_iterator_base& __x, const _Bit_iterator_base& __y)
  {
    return (int(_S_word_bit) * (__x._M_p - __y._M_p)
	    + __x._M_offset - __y._M_offset);
  }

  struct _Bit_iterator : public _Bit_iterator_base
  {
    typedef _Bit_reference  reference;
    typedef _Bit_reference* pointer;
    typedef _Bit_iterator   iterator;

    _Bit_iterator() : _Bit_iterator_base(0, 0) { }

    _Bit_iterator(_Bit_type * __x, unsigned int __y)
    : _Bit_iterator_base(__x, __y) { }

    reference
    operator*() const
    { return reference(_M_p, 1UL << _M_offset); }

    iterator&
    operator++()
    {
      _M_bump_up();
      return *this;
    }

    iterator
    operator++(int)
    {
      iterator __tmp = *this;
      _M_bump_up();
      return __tmp;
    }

    iterator&
    operator--()
    {
      _M_bump_down();
      return *this;
    }

    iterator
    operator--(int)
    {
      iterator __tmp = *this;
      _M_bump_down();
      return __tmp;
    }

    iterator&
    operator+=(difference_type __i)
    {
      _M_incr(__i);
      return *this;
    }

    iterator&
    operator-=(difference_type __i)
    {
      *this += -__i;
      return *this;
    }

    iterator
    operator+(difference_type __i) const
    {
      iterator __tmp = *this;
      return __tmp += __i;
    }

    iterator
    operator-(difference_type __i) const
    {
      iterator __tmp = *this;
      return __tmp -= __i;
    }

    reference
    operator[](difference_type __i) const
    { return *(*this + __i); }
  };

  inline _Bit_iterator
  operator+(ptrdiff_t __n, const _Bit_iterator& __x)
  { return __x + __n; }

  struct _Bit_const_iterator : public _Bit_iterator_base
  {
    typedef bool                 reference;
    typedef bool                 const_reference;
    typedef const bool*          pointer;
    typedef _Bit_const_iterator  const_iterator;

    _Bit_const_iterator() : _Bit_iterator_base(0, 0) { }

    _Bit_const_iterator(_Bit_type * __x, unsigned int __y)
    : _Bit_iterator_base(__x, __y) { }

    _Bit_const_iterator(const _Bit_iterator& __x)
    : _Bit_iterator_base(__x._M_p, __x._M_offset) { }

    const_reference
    operator*() const
    { return _Bit_reference(_M_p, 1UL << _M_offset); }

    const_iterator&
    operator++()
    {
      _M_bump_up();
      return *this;
    }

    const_iterator
    operator++(int)
    {
      const_iterator __tmp = *this;
      _M_bump_up();
      return __tmp;
    }

    const_iterator&
    operator--()
    {
      _M_bump_down();
      return *this;
    }

    const_iterator
    operator--(int)
    {
      const_iterator __tmp = *this;
      _M_bump_down();
      return __tmp;
    }

    const_iterator&
    operator+=(difference_type __i)
    {
      _M_incr(__i);
      return *this;
    }

    const_iterator&
    operator-=(difference_type __i)
    {
      *this += -__i;
      return *this;
    }

    const_iterator 
    operator+(difference_type __i) const
    {
      const_iterator __tmp = *this;
      return __tmp += __i;
    }

    const_iterator
    operator-(difference_type __i) const
    {
      const_iterator __tmp = *this;
      return __tmp -= __i;
    }

    const_reference
    operator[](difference_type __i) const
    { return *(*this + __i); }
  };

  inline _Bit_const_iterator
  operator+(ptrdiff_t __n, const _Bit_const_iterator& __x)
  { return __x + __n; }

  inline void
  __fill_bvector(_Bit_iterator __first, _Bit_iterator __last, bool __x)
  {
    for (; __first != __last; ++__first)
      *__first = __x;
  }

  inline void
  fill(_Bit_iterator __first, _Bit_iterator __last, const bool& __x)
  {
    if (__first._M_p != __last._M_p)
      {
	std::fill(__first._M_p + 1, __last._M_p, __x ? ~0 : 0);
	__fill_bvector(__first, _Bit_iterator(__first._M_p + 1, 0), __x);
	__fill_bvector(_Bit_iterator(__last._M_p, 0), __last, __x);
      }
    else
      __fill_bvector(__first, __last, __x);
  }

  template<typename _Alloc>
    struct _Bvector_base
    {
      typedef typename _Alloc::template rebind<_Bit_type>::other
        _Bit_alloc_type;
      
      struct _Bvector_impl
      : public _Bit_alloc_type
      {
	_Bit_iterator 	_M_start;
	_Bit_iterator 	_M_finish;
	_Bit_type* 	_M_end_of_storage;

	_Bvector_impl()
	: _Bit_alloc_type(), _M_start(), _M_finish(), _M_end_of_storage(0)
	{ }
 
	_Bvector_impl(const _Bit_alloc_type& __a)
	: _Bit_alloc_type(__a), _M_start(), _M_finish(), _M_end_of_storage(0)
	{ }
      };

    public:
      typedef _Alloc allocator_type;

      _Bit_alloc_type&
      _M_get_Bit_allocator()
      { return *static_cast<_Bit_alloc_type*>(&this->_M_impl); }

      const _Bit_alloc_type&
      _M_get_Bit_allocator() const
      { return *static_cast<const _Bit_alloc_type*>(&this->_M_impl); }

      allocator_type
      get_allocator() const
      { return allocator_type(_M_get_Bit_allocator()); }

      _Bvector_base()
      : _M_impl() { }
      
      _Bvector_base(const allocator_type& __a)
      : _M_impl(__a) { }

      _Bvector_base(_Bvector_base&& __x)
      : _M_impl(__x._M_get_Bit_allocator())
      {
	this->_M_impl._M_start = __x._M_impl._M_start;
	this->_M_impl._M_finish = __x._M_impl._M_finish;
	this->_M_impl._M_end_of_storage = __x._M_impl._M_end_of_storage;
	__x._M_impl._M_start = _Bit_iterator();
	__x._M_impl._M_finish = _Bit_iterator();
	__x._M_impl._M_end_of_storage = 0;
      }

      ~_Bvector_base()
      { this->_M_deallocate(); }

    protected:
      _Bvector_impl _M_impl;

      _Bit_type*
      _M_allocate(size_t __n)
      { return _M_impl.allocate((__n + int(_S_word_bit) - 1)
				/ int(_S_word_bit)); }

      void
      _M_deallocate()
      {
	if (_M_impl._M_start._M_p)
	  _M_impl.deallocate(_M_impl._M_start._M_p,
			     _M_impl._M_end_of_storage - _M_impl._M_start._M_p);
      }
    };

}



namespace std __attribute__ ((__visibility__ ("default"))) {

  















 
template<typename _Alloc>
  class vector<bool, _Alloc> : protected _Bvector_base<_Alloc>
  {
    typedef _Bvector_base<_Alloc>			 _Base;

  public:
    typedef bool                                         value_type;
    typedef size_t                                       size_type;
    typedef ptrdiff_t                                    difference_type;
    typedef _Bit_reference                               reference;
    typedef bool                                         const_reference;
    typedef _Bit_reference*                              pointer;
    typedef const bool*                                  const_pointer;
    typedef _Bit_iterator                                iterator;
    typedef _Bit_const_iterator                          const_iterator;
    typedef std::reverse_iterator<const_iterator>        const_reverse_iterator;
    typedef std::reverse_iterator<iterator>              reverse_iterator;
    typedef _Alloc                        		 allocator_type;

    allocator_type get_allocator() const
    { return _Base::get_allocator(); }

  protected:
    using _Base::_M_allocate;
    using _Base::_M_deallocate;
    using _Base::_M_get_Bit_allocator;

  public:
    vector()
    : _Base() { }

    explicit
    vector(const allocator_type& __a)
    : _Base(__a) { }

    explicit
    vector(size_type __n, const bool& __value = bool(), 
	   const allocator_type& __a = allocator_type())
    : _Base(__a)
    {
      _M_initialize(__n);
      std::fill(this->_M_impl._M_start._M_p, this->_M_impl._M_end_of_storage, 
		__value ? ~0 : 0);
    }

    vector(const vector& __x)
    : _Base(__x._M_get_Bit_allocator())
    {
      _M_initialize(__x.size());
      _M_copy_aligned(__x.begin(), __x.end(), this->_M_impl._M_start);
    }

    vector(vector&& __x)
    : _Base(std::forward<_Base>(__x)) { }

    vector(initializer_list<bool> __l,
	   const allocator_type& __a = allocator_type())
    : _Base(__a)
    {
      _M_initialize_range(__l.begin(), __l.end(),
			  random_access_iterator_tag());
    }

    template<typename _InputIterator>
      vector(_InputIterator __first, _InputIterator __last,
	     const allocator_type& __a = allocator_type())
      : _Base(__a)
      {
	typedef typename std::__is_integer<_InputIterator>::__type _Integral;
	_M_initialize_dispatch(__first, __last, _Integral());
      }

    ~vector() { }

    vector&
    operator=(const vector& __x)
    {
      if (&__x == this)
	return *this;
      if (__x.size() > capacity())
	{
	  this->_M_deallocate();
	  _M_initialize(__x.size());
	}
      this->_M_impl._M_finish = _M_copy_aligned(__x.begin(), __x.end(),
						begin());
      return *this;
    }

    vector&
    operator=(vector&& __x)
    {
      
      this->clear();
      this->swap(__x); 
      return *this;
    }

    vector&
    operator=(initializer_list<bool> __l)
    {
      this->assign (__l.begin(), __l.end());
      return *this;
    }

    
    
    
    
    void
    assign(size_type __n, const bool& __x)
    { _M_fill_assign(__n, __x); }

    template<typename _InputIterator>
      void
      assign(_InputIterator __first, _InputIterator __last)
      {
	typedef typename std::__is_integer<_InputIterator>::__type _Integral;
	_M_assign_dispatch(__first, __last, _Integral());
      }

    void
    assign(initializer_list<bool> __l)
    { this->assign(__l.begin(), __l.end()); }
    
    iterator
    begin()
    { return this->_M_impl._M_start; }

    const_iterator
    begin() const
    { return this->_M_impl._M_start; }

    iterator
    end()
    { return this->_M_impl._M_finish; }

    const_iterator
    end() const
    { return this->_M_impl._M_finish; }

    reverse_iterator
    rbegin()
    { return reverse_iterator(end()); }

    const_reverse_iterator
    rbegin() const
    { return const_reverse_iterator(end()); }

    reverse_iterator
    rend()
    { return reverse_iterator(begin()); }

    const_reverse_iterator
    rend() const
    { return const_reverse_iterator(begin()); }

    const_iterator
    cbegin() const
    { return this->_M_impl._M_start; }

    const_iterator
    cend() const
    { return this->_M_impl._M_finish; }

    const_reverse_iterator
    crbegin() const
    { return const_reverse_iterator(end()); }

    const_reverse_iterator
    crend() const
    { return const_reverse_iterator(begin()); }

    size_type
    size() const
    { return size_type(end() - begin()); }

    size_type
    max_size() const
    {
      const size_type __isize =
	__gnu_cxx::__numeric_traits<difference_type>::__max
	- int(_S_word_bit) + 1;
      const size_type __asize = _M_get_Bit_allocator().max_size();
      return (__asize <= __isize / int(_S_word_bit)
	      ? __asize * int(_S_word_bit) : __isize);
    }

    size_type
    capacity() const
    { return size_type(const_iterator(this->_M_impl._M_end_of_storage, 0)
		       - begin()); }

    bool
    empty() const
    { return begin() == end(); }

    reference
    operator[](size_type __n)
    {
      return *iterator(this->_M_impl._M_start._M_p
		       + __n / int(_S_word_bit), __n % int(_S_word_bit));
    }

    const_reference
    operator[](size_type __n) const
    {
      return *const_iterator(this->_M_impl._M_start._M_p
			     + __n / int(_S_word_bit), __n % int(_S_word_bit));
    }

  protected:
    void
    _M_range_check(size_type __n) const
    {
      if (__n >= this->size())
        __throw_out_of_range(("vector<bool>::_M_range_check"));
    }

  public:
    reference
    at(size_type __n)
    { _M_range_check(__n); return (*this)[__n]; }

    const_reference
    at(size_type __n) const
    { _M_range_check(__n); return (*this)[__n]; }

    void
    reserve(size_type __n);

    reference
    front()
    { return *begin(); }

    const_reference
    front() const
    { return *begin(); }

    reference
    back()
    { return *(end() - 1); }

    const_reference
    back() const
    { return *(end() - 1); }

    
    
    
    
    
    void
    data() { }

    void
    push_back(bool __x)
    {
      if (this->_M_impl._M_finish._M_p != this->_M_impl._M_end_of_storage)
        *this->_M_impl._M_finish++ = __x;
      else
        _M_insert_aux(end(), __x);
    }

    void
    swap(vector&& __x)
    {
      std::swap(this->_M_impl._M_start, __x._M_impl._M_start);
      std::swap(this->_M_impl._M_finish, __x._M_impl._M_finish);
      std::swap(this->_M_impl._M_end_of_storage, 
		__x._M_impl._M_end_of_storage);

      
      
      std::__alloc_swap<typename _Base::_Bit_alloc_type>::
	_S_do_it(_M_get_Bit_allocator(), __x._M_get_Bit_allocator());
    }

    
    static void
    swap(reference __x, reference __y)
    {
      bool __tmp = __x;
      __x = __y;
      __y = __tmp;
    }

    iterator
    insert(iterator __position, const bool& __x = bool())
    {
      const difference_type __n = __position - begin();
      if (this->_M_impl._M_finish._M_p != this->_M_impl._M_end_of_storage
	  && __position == end())
        *this->_M_impl._M_finish++ = __x;
      else
        _M_insert_aux(__position, __x);
      return begin() + __n;
    }

    template<typename _InputIterator>
      void
      insert(iterator __position,
	     _InputIterator __first, _InputIterator __last)
      {
	typedef typename std::__is_integer<_InputIterator>::__type _Integral;
	_M_insert_dispatch(__position, __first, __last, _Integral());
      }

    void
    insert(iterator __position, size_type __n, const bool& __x)
    { _M_fill_insert(__position, __n, __x); }

    void insert(iterator __p, initializer_list<bool> __l)
    { this->insert(__p, __l.begin(), __l.end()); }

    void
    pop_back()
    { --this->_M_impl._M_finish; }

    iterator
    erase(iterator __position)
    {
      if (__position + 1 != end())
        std::copy(__position + 1, end(), __position);
      --this->_M_impl._M_finish;
      return __position;
    }

    iterator
    erase(iterator __first, iterator __last)
    {
      _M_erase_at_end(std::copy(__last, end(), __first));
      return __first;
    }

    void
    resize(size_type __new_size, bool __x = bool())
    {
      if (__new_size < size())
        _M_erase_at_end(begin() + difference_type(__new_size));
      else
        insert(end(), __new_size - size(), __x);
    }

    void
    flip()
    {
      for (_Bit_type * __p = this->_M_impl._M_start._M_p;
	   __p != this->_M_impl._M_end_of_storage; ++__p)
        *__p = ~*__p;
    }

    void
    clear()
    { _M_erase_at_end(begin()); }

   
  protected:
    
    iterator
    _M_copy_aligned(const_iterator __first, const_iterator __last,
		    iterator __result)
    {
      _Bit_type* __q = std::copy(__first._M_p, __last._M_p, __result._M_p);
      return std::copy(const_iterator(__last._M_p, 0), __last,
		       iterator(__q, 0));
    }

    void
    _M_initialize(size_type __n)
    {
      _Bit_type* __q = this->_M_allocate(__n);
      this->_M_impl._M_end_of_storage = (__q
					 + ((__n + int(_S_word_bit) - 1)
					    / int(_S_word_bit)));
      this->_M_impl._M_start = iterator(__q, 0);
      this->_M_impl._M_finish = this->_M_impl._M_start + difference_type(__n);
    }

    

    
    
    template<typename _Integer>
      void
      _M_initialize_dispatch(_Integer __n, _Integer __x, __true_type)
      {
	_M_initialize(static_cast<size_type>(__n));
	std::fill(this->_M_impl._M_start._M_p, 
		  this->_M_impl._M_end_of_storage, __x ? ~0 : 0);
      }

    template<typename _InputIterator>
      void 
      _M_initialize_dispatch(_InputIterator __first, _InputIterator __last,
			     __false_type)
      { _M_initialize_range(__first, __last, 
			    std::__iterator_category(__first)); }

    template<typename _InputIterator>
      void
      _M_initialize_range(_InputIterator __first, _InputIterator __last,
			  std::input_iterator_tag)
      {
	for (; __first != __last; ++__first)
	  push_back(*__first);
      }

    template<typename _ForwardIterator>
      void
      _M_initialize_range(_ForwardIterator __first, _ForwardIterator __last,
			  std::forward_iterator_tag)
      {
	const size_type __n = std::distance(__first, __last);
	_M_initialize(__n);
	std::copy(__first, __last, this->_M_impl._M_start);
      }

    
    
    template<typename _Integer>
      void
      _M_assign_dispatch(_Integer __n, _Integer __val, __true_type)
      { _M_fill_assign(__n, __val); }

    template<class _InputIterator>
      void
      _M_assign_dispatch(_InputIterator __first, _InputIterator __last,
			 __false_type)
      { _M_assign_aux(__first, __last, std::__iterator_category(__first)); }

    void
    _M_fill_assign(size_t __n, bool __x)
    {
      if (__n > size())
	{
	  std::fill(this->_M_impl._M_start._M_p, 
		    this->_M_impl._M_end_of_storage, __x ? ~0 : 0);
	  insert(end(), __n - size(), __x);
	}
      else
	{
	  _M_erase_at_end(begin() + __n);
	  std::fill(this->_M_impl._M_start._M_p, 
		    this->_M_impl._M_end_of_storage, __x ? ~0 : 0);
	}
    }

    template<typename _InputIterator>
      void
      _M_assign_aux(_InputIterator __first, _InputIterator __last,
		    std::input_iterator_tag)
      {
	iterator __cur = begin();
	for (; __first != __last && __cur != end(); ++__cur, ++__first)
	  *__cur = *__first;
	if (__first == __last)
	  _M_erase_at_end(__cur);
	else
	  insert(end(), __first, __last);
      }
    
    template<typename _ForwardIterator>
      void
      _M_assign_aux(_ForwardIterator __first, _ForwardIterator __last,
		    std::forward_iterator_tag)
      {
	const size_type __len = std::distance(__first, __last);
	if (__len < size())
	  _M_erase_at_end(std::copy(__first, __last, begin()));
	else
	  {
	    _ForwardIterator __mid = __first;
	    std::advance(__mid, size());
	    std::copy(__first, __mid, begin());
	    insert(end(), __mid, __last);
	  }
      }

    

    
    
    template<typename _Integer>
      void
      _M_insert_dispatch(iterator __pos, _Integer __n, _Integer __x,
			 __true_type)
      { _M_fill_insert(__pos, __n, __x); }

    template<typename _InputIterator>
      void
      _M_insert_dispatch(iterator __pos,
			 _InputIterator __first, _InputIterator __last,
			 __false_type)
      { _M_insert_range(__pos, __first, __last,
			std::__iterator_category(__first)); }

    void
    _M_fill_insert(iterator __position, size_type __n, bool __x);

    template<typename _InputIterator>
      void
      _M_insert_range(iterator __pos, _InputIterator __first, 
		      _InputIterator __last, std::input_iterator_tag)
      {
	for (; __first != __last; ++__first)
	  {
	    __pos = insert(__pos, *__first);
	    ++__pos;
	  }
      }

    template<typename _ForwardIterator>
      void
      _M_insert_range(iterator __position, _ForwardIterator __first, 
		      _ForwardIterator __last, std::forward_iterator_tag);

    void
    _M_insert_aux(iterator __position, bool __x);

    size_type
    _M_check_len(size_type __n, const char* __s) const
    {
      if (max_size() - size() < __n)
	__throw_length_error((__s));

      const size_type __len = size() + std::max(size(), __n);
      return (__len < size() || __len > max_size()) ? max_size() : __len;
    }

    void
    _M_erase_at_end(iterator __pos)
    { this->_M_impl._M_finish = __pos; }
  };

}



















































 




 


namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _Tp, typename _Alloc>
    void
    vector<_Tp, _Alloc>::
    reserve(size_type __n)
    {
      if (__n > this->max_size())
	__throw_length_error(("vector::reserve"));
      if (this->capacity() < __n)
	{
	  const size_type __old_size = size();
	  pointer __tmp = _M_allocate_and_copy(__n,
		 std::make_move_iterator(this->_M_impl . _M_start),
		 std::make_move_iterator(this->_M_impl . _M_finish));
	  std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
			_M_get_Tp_allocator());
	  _M_deallocate(this->_M_impl._M_start,
			this->_M_impl._M_end_of_storage
			- this->_M_impl._M_start);
	  this->_M_impl._M_start = __tmp;
	  this->_M_impl._M_finish = __tmp + __old_size;
	  this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __n;
	}
    }

  template<typename _Tp, typename _Alloc>
    template<typename... _Args>
      void
      vector<_Tp, _Alloc>::
      emplace_back(_Args&&... __args)
      {
	if (this->_M_impl._M_finish != this->_M_impl._M_end_of_storage)
	  {
	    this->_M_impl.construct(this->_M_impl._M_finish,
				    std::forward<_Args>(__args)...);
	    ++this->_M_impl._M_finish;
	  }
	else
	  _M_insert_aux(end(), std::forward<_Args>(__args)...);
      }

  template<typename _Tp, typename _Alloc>
    typename vector<_Tp, _Alloc>::iterator
    vector<_Tp, _Alloc>::
    insert(iterator __position, const value_type& __x)
    {
      const size_type __n = __position - begin();
      if (this->_M_impl._M_finish != this->_M_impl._M_end_of_storage
	  && __position == end())
	{
	  this->_M_impl.construct(this->_M_impl._M_finish, __x);
	  ++this->_M_impl._M_finish;
	}
      else
	{
	  if (this->_M_impl._M_finish != this->_M_impl._M_end_of_storage)
	    {
	      _Tp __x_copy = __x;
	      _M_insert_aux(__position, std::move(__x_copy));
	    }
	  else
	    _M_insert_aux(__position, __x);
	}
      return iterator(this->_M_impl._M_start + __n);
    }

  template<typename _Tp, typename _Alloc>
    typename vector<_Tp, _Alloc>::iterator
    vector<_Tp, _Alloc>::
    erase(iterator __position)
    {
      if (__position + 1 != end())
	std::move(__position + 1, end(), __position);
      --this->_M_impl._M_finish;
      this->_M_impl.destroy(this->_M_impl._M_finish);
      return __position;
    }

  template<typename _Tp, typename _Alloc>
    typename vector<_Tp, _Alloc>::iterator
    vector<_Tp, _Alloc>::
    erase(iterator __first, iterator __last)
    {
      if (__last != end())
	std::move(__last, end(), __first);
      _M_erase_at_end(__first.base() + (end() - __last));
      return __first;
    }

  template<typename _Tp, typename _Alloc>
    vector<_Tp, _Alloc>&
    vector<_Tp, _Alloc>::
    operator=(const vector<_Tp, _Alloc>& __x)
    {
      if (&__x != this)
	{
	  const size_type __xlen = __x.size();
	  if (__xlen > capacity())
	    {
	      pointer __tmp = _M_allocate_and_copy(__xlen, __x.begin(),
						   __x.end());
	      std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
			    _M_get_Tp_allocator());
	      _M_deallocate(this->_M_impl._M_start,
			    this->_M_impl._M_end_of_storage
			    - this->_M_impl._M_start);
	      this->_M_impl._M_start = __tmp;
	      this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __xlen;
	    }
	  else if (size() >= __xlen)
	    {
	      std::_Destroy(std::copy(__x.begin(), __x.end(), begin()),
			    end(), _M_get_Tp_allocator());
	    }
	  else
	    {
	      std::copy(__x._M_impl._M_start, __x._M_impl._M_start + size(),
			this->_M_impl._M_start);
	      std::__uninitialized_copy_a(__x._M_impl._M_start + size(),
					  __x._M_impl._M_finish,
					  this->_M_impl._M_finish,
					  _M_get_Tp_allocator());
	    }
	  this->_M_impl._M_finish = this->_M_impl._M_start + __xlen;
	}
      return *this;
    }

  template<typename _Tp, typename _Alloc>
    void
    vector<_Tp, _Alloc>::
    _M_fill_assign(size_t __n, const value_type& __val)
    {
      if (__n > capacity())
	{
	  vector __tmp(__n, __val, _M_get_Tp_allocator());
	  __tmp.swap(*this);
	}
      else if (__n > size())
	{
	  std::fill(begin(), end(), __val);
	  std::__uninitialized_fill_n_a(this->_M_impl._M_finish,
					__n - size(), __val,
					_M_get_Tp_allocator());
	  this->_M_impl._M_finish += __n - size();
	}
      else
        _M_erase_at_end(std::fill_n(this->_M_impl._M_start, __n, __val));
    }

  template<typename _Tp, typename _Alloc>
    template<typename _InputIterator>
      void
      vector<_Tp, _Alloc>::
      _M_assign_aux(_InputIterator __first, _InputIterator __last,
		    std::input_iterator_tag)
      {
	pointer __cur(this->_M_impl._M_start);
	for (; __first != __last && __cur != this->_M_impl._M_finish;
	     ++__cur, ++__first)
	  *__cur = *__first;
	if (__first == __last)
	  _M_erase_at_end(__cur);
	else
	  insert(end(), __first, __last);
      }

  template<typename _Tp, typename _Alloc>
    template<typename _ForwardIterator>
      void
      vector<_Tp, _Alloc>::
      _M_assign_aux(_ForwardIterator __first, _ForwardIterator __last,
		    std::forward_iterator_tag)
      {
	const size_type __len = std::distance(__first, __last);

	if (__len > capacity())
	  {
	    pointer __tmp(_M_allocate_and_copy(__len, __first, __last));
	    std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
			  _M_get_Tp_allocator());
	    _M_deallocate(this->_M_impl._M_start,
			  this->_M_impl._M_end_of_storage
			  - this->_M_impl._M_start);
	    this->_M_impl._M_start = __tmp;
	    this->_M_impl._M_finish = this->_M_impl._M_start + __len;
	    this->_M_impl._M_end_of_storage = this->_M_impl._M_finish;
	  }
	else if (size() >= __len)
	  _M_erase_at_end(std::copy(__first, __last, this->_M_impl._M_start));
	else
	  {
	    _ForwardIterator __mid = __first;
	    std::advance(__mid, size());
	    std::copy(__first, __mid, this->_M_impl._M_start);
	    this->_M_impl._M_finish =
	      std::__uninitialized_copy_a(__mid, __last,
					  this->_M_impl._M_finish,
					  _M_get_Tp_allocator());
	  }
      }

  template<typename _Tp, typename _Alloc>
    template<typename... _Args>
      typename vector<_Tp, _Alloc>::iterator
      vector<_Tp, _Alloc>::
      emplace(iterator __position, _Args&&... __args)
      {
	const size_type __n = __position - begin();
	if (this->_M_impl._M_finish != this->_M_impl._M_end_of_storage
	    && __position == end())
	  {
	    this->_M_impl.construct(this->_M_impl._M_finish,
				    std::forward<_Args>(__args)...);
	    ++this->_M_impl._M_finish;
	  }
	else
	  _M_insert_aux(__position, std::forward<_Args>(__args)...);
	return iterator(this->_M_impl._M_start + __n);
      }

  template<typename _Tp, typename _Alloc>
    template<typename... _Args>
      void
      vector<_Tp, _Alloc>::
      _M_insert_aux(iterator __position, _Args&&... __args)
    {
      if (this->_M_impl._M_finish != this->_M_impl._M_end_of_storage)
	{
	  this->_M_impl.construct(this->_M_impl._M_finish,
				  std::move(*(this->_M_impl . _M_finish - 1)));
	  ++this->_M_impl._M_finish;
	  std::move_backward(__position . base(), this->_M_impl . _M_finish - 2, this->_M_impl . _M_finish - 1);
	  *__position = _Tp(std::forward<_Args>(__args)...);
	}
      else
	{
	  const size_type __len =
	    _M_check_len(size_type(1), "vector::_M_insert_aux");
	  const size_type __elems_before = __position - begin();
	  pointer __new_start(this->_M_allocate(__len));
	  pointer __new_finish(__new_start);
	  try
	    {
	      
	      
	      
	      
	      this->_M_impl.construct(__new_start + __elems_before,
				      std::forward<_Args>(__args)...);
	      __new_finish = 0;

	      __new_finish =
		std::__uninitialized_move_a(this->_M_impl._M_start,
					    __position.base(), __new_start,
					    _M_get_Tp_allocator());
	      ++__new_finish;

	      __new_finish =
		std::__uninitialized_move_a(__position.base(),
					    this->_M_impl._M_finish,
					    __new_finish,
					    _M_get_Tp_allocator());
	    }
          catch(...)
	    {
	      if (!__new_finish)
		this->_M_impl.destroy(__new_start + __elems_before);
	      else
		std::_Destroy(__new_start, __new_finish, _M_get_Tp_allocator());
	      _M_deallocate(__new_start, __len);
	      throw;
	    }
	  std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
			_M_get_Tp_allocator());
	  _M_deallocate(this->_M_impl._M_start,
			this->_M_impl._M_end_of_storage
			- this->_M_impl._M_start);
	  this->_M_impl._M_start = __new_start;
	  this->_M_impl._M_finish = __new_finish;
	  this->_M_impl._M_end_of_storage = __new_start + __len;
	}
    }

  template<typename _Tp, typename _Alloc>
    void
    vector<_Tp, _Alloc>::
    _M_fill_insert(iterator __position, size_type __n, const value_type& __x)
    {
      if (__n != 0)
	{
	  if (size_type(this->_M_impl._M_end_of_storage
			- this->_M_impl._M_finish) >= __n)
	    {
	      value_type __x_copy = __x;
	      const size_type __elems_after = end() - __position;
	      pointer __old_finish(this->_M_impl._M_finish);
	      if (__elems_after > __n)
		{
		  std::__uninitialized_move_a(this->_M_impl._M_finish - __n,
					      this->_M_impl._M_finish,
					      this->_M_impl._M_finish,
					      _M_get_Tp_allocator());
		  this->_M_impl._M_finish += __n;
		  std::move_backward(__position . base(), __old_finish - __n, __old_finish);
		  std::fill(__position.base(), __position.base() + __n,
			    __x_copy);
		}
	      else
		{
		  std::__uninitialized_fill_n_a(this->_M_impl._M_finish,
						__n - __elems_after,
						__x_copy,
						_M_get_Tp_allocator());
		  this->_M_impl._M_finish += __n - __elems_after;
		  std::__uninitialized_move_a(__position.base(), __old_finish,
					      this->_M_impl._M_finish,
					      _M_get_Tp_allocator());
		  this->_M_impl._M_finish += __elems_after;
		  std::fill(__position.base(), __old_finish, __x_copy);
		}
	    }
	  else
	    {
	      const size_type __len =
		_M_check_len(__n, "vector::_M_fill_insert");
	      const size_type __elems_before = __position - begin();
	      pointer __new_start(this->_M_allocate(__len));
	      pointer __new_finish(__new_start);
	      try
		{
		  
		  std::__uninitialized_fill_n_a(__new_start + __elems_before,
						__n, __x,
						_M_get_Tp_allocator());
		  __new_finish = 0;

		  __new_finish =
		    std::__uninitialized_move_a(this->_M_impl._M_start,
						__position.base(),
						__new_start,
						_M_get_Tp_allocator());
		  __new_finish += __n;

		  __new_finish =
		    std::__uninitialized_move_a(__position.base(),
						this->_M_impl._M_finish,
						__new_finish,
						_M_get_Tp_allocator());
		}
	      catch(...)
		{
		  if (!__new_finish)
		    std::_Destroy(__new_start + __elems_before,
				  __new_start + __elems_before + __n,
				  _M_get_Tp_allocator());
		  else
		    std::_Destroy(__new_start, __new_finish,
				  _M_get_Tp_allocator());
		  _M_deallocate(__new_start, __len);
		  throw;
		}
	      std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
			    _M_get_Tp_allocator());
	      _M_deallocate(this->_M_impl._M_start,
			    this->_M_impl._M_end_of_storage
			    - this->_M_impl._M_start);
	      this->_M_impl._M_start = __new_start;
	      this->_M_impl._M_finish = __new_finish;
	      this->_M_impl._M_end_of_storage = __new_start + __len;
	    }
	}
    }

  template<typename _Tp, typename _Alloc>
    template<typename _InputIterator>
      void
      vector<_Tp, _Alloc>::
      _M_range_insert(iterator __pos, _InputIterator __first,
		      _InputIterator __last, std::input_iterator_tag)
      {
	for (; __first != __last; ++__first)
	  {
	    __pos = insert(__pos, *__first);
	    ++__pos;
	  }
      }

  template<typename _Tp, typename _Alloc>
    template<typename _ForwardIterator>
      void
      vector<_Tp, _Alloc>::
      _M_range_insert(iterator __position, _ForwardIterator __first,
		      _ForwardIterator __last, std::forward_iterator_tag)
      {
	if (__first != __last)
	  {
	    const size_type __n = std::distance(__first, __last);
	    if (size_type(this->_M_impl._M_end_of_storage
			  - this->_M_impl._M_finish) >= __n)
	      {
		const size_type __elems_after = end() - __position;
		pointer __old_finish(this->_M_impl._M_finish);
		if (__elems_after > __n)
		  {
		    std::__uninitialized_move_a(this->_M_impl._M_finish - __n,
						this->_M_impl._M_finish,
						this->_M_impl._M_finish,
						_M_get_Tp_allocator());
		    this->_M_impl._M_finish += __n;
		    std::move_backward(__position . base(), __old_finish - __n, __old_finish);
		    std::copy(__first, __last, __position);
		  }
		else
		  {
		    _ForwardIterator __mid = __first;
		    std::advance(__mid, __elems_after);
		    std::__uninitialized_copy_a(__mid, __last,
						this->_M_impl._M_finish,
						_M_get_Tp_allocator());
		    this->_M_impl._M_finish += __n - __elems_after;
		    std::__uninitialized_move_a(__position.base(),
						__old_finish,
						this->_M_impl._M_finish,
						_M_get_Tp_allocator());
		    this->_M_impl._M_finish += __elems_after;
		    std::copy(__first, __mid, __position);
		  }
	      }
	    else
	      {
		const size_type __len =
		  _M_check_len(__n, "vector::_M_range_insert");
		pointer __new_start(this->_M_allocate(__len));
		pointer __new_finish(__new_start);
		try
		  {
		    __new_finish =
		      std::__uninitialized_move_a(this->_M_impl._M_start,
						  __position.base(),
						  __new_start,
						  _M_get_Tp_allocator());
		    __new_finish =
		      std::__uninitialized_copy_a(__first, __last,
						  __new_finish,
						  _M_get_Tp_allocator());
		    __new_finish =
		      std::__uninitialized_move_a(__position.base(),
						  this->_M_impl._M_finish,
						  __new_finish,
						  _M_get_Tp_allocator());
		  }
		catch(...)
		  {
		    std::_Destroy(__new_start, __new_finish,
				  _M_get_Tp_allocator());
		    _M_deallocate(__new_start, __len);
		    throw;
		  }
		std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
			      _M_get_Tp_allocator());
		_M_deallocate(this->_M_impl._M_start,
			      this->_M_impl._M_end_of_storage
			      - this->_M_impl._M_start);
		this->_M_impl._M_start = __new_start;
		this->_M_impl._M_finish = __new_finish;
		this->_M_impl._M_end_of_storage = __new_start + __len;
	      }
	  }
      }


  

  template<typename _Alloc>
    void
    vector<bool, _Alloc>::
    reserve(size_type __n)
    {
      if (__n > this->max_size())
	__throw_length_error(("vector::reserve"));
      if (this->capacity() < __n)
	{
	  _Bit_type* __q = this->_M_allocate(__n);
	  this->_M_impl._M_finish = _M_copy_aligned(begin(), end(),
						    iterator(__q, 0));
	  this->_M_deallocate();
	  this->_M_impl._M_start = iterator(__q, 0);
	  this->_M_impl._M_end_of_storage = (__q + (__n + int(_S_word_bit) - 1)
					     / int(_S_word_bit));
	}
    }

  template<typename _Alloc>
    void
    vector<bool, _Alloc>::
    _M_fill_insert(iterator __position, size_type __n, bool __x)
    {
      if (__n == 0)
	return;
      if (capacity() - size() >= __n)
	{
	  std::copy_backward(__position, end(),
			     this->_M_impl._M_finish + difference_type(__n));
	  std::fill(__position, __position + difference_type(__n), __x);
	  this->_M_impl._M_finish += difference_type(__n);
	}
      else
	{
	  const size_type __len = 
	    _M_check_len(__n, "vector<bool>::_M_fill_insert");
	  _Bit_type * __q = this->_M_allocate(__len);
	  iterator __i = _M_copy_aligned(begin(), __position,
					 iterator(__q, 0));
	  std::fill(__i, __i + difference_type(__n), __x);
	  this->_M_impl._M_finish = std::copy(__position, end(),
					      __i + difference_type(__n));
	  this->_M_deallocate();
	  this->_M_impl._M_end_of_storage = (__q + ((__len
						     + int(_S_word_bit) - 1)
						    / int(_S_word_bit)));
	  this->_M_impl._M_start = iterator(__q, 0);
	}
    }

  template<typename _Alloc>
    template<typename _ForwardIterator>
      void
      vector<bool, _Alloc>::
      _M_insert_range(iterator __position, _ForwardIterator __first, 
		      _ForwardIterator __last, std::forward_iterator_tag)
      {
	if (__first != __last)
	  {
	    size_type __n = std::distance(__first, __last);
	    if (capacity() - size() >= __n)
	      {
		std::copy_backward(__position, end(),
				   this->_M_impl._M_finish
				   + difference_type(__n));
		std::copy(__first, __last, __position);
		this->_M_impl._M_finish += difference_type(__n);
	      }
	    else
	      {
		const size_type __len =
		  _M_check_len(__n, "vector<bool>::_M_insert_range");
		_Bit_type * __q = this->_M_allocate(__len);
		iterator __i = _M_copy_aligned(begin(), __position,
					       iterator(__q, 0));
		__i = std::copy(__first, __last, __i);
		this->_M_impl._M_finish = std::copy(__position, end(), __i);
		this->_M_deallocate();
		this->_M_impl._M_end_of_storage = (__q
						   + ((__len
						       + int(_S_word_bit) - 1)
						      / int(_S_word_bit)));
		this->_M_impl._M_start = iterator(__q, 0);
	      }
	  }
      }

  template<typename _Alloc>
    void
    vector<bool, _Alloc>::
    _M_insert_aux(iterator __position, bool __x)
    {
      if (this->_M_impl._M_finish._M_p != this->_M_impl._M_end_of_storage)
	{
	  std::copy_backward(__position, this->_M_impl._M_finish, 
			     this->_M_impl._M_finish + 1);
	  *__position = __x;
	  ++this->_M_impl._M_finish;
	}
      else
	{
	  const size_type __len =
	    _M_check_len(size_type(1), "vector<bool>::_M_insert_aux");
	  _Bit_type * __q = this->_M_allocate(__len);
	  iterator __i = _M_copy_aligned(begin(), __position,
					 iterator(__q, 0));
	  *__i++ = __x;
	  this->_M_impl._M_finish = std::copy(__position, end(), __i);
	  this->_M_deallocate();
	  this->_M_impl._M_end_of_storage = (__q + ((__len
						     + int(_S_word_bit) - 1)
						    / int(_S_word_bit)));
	  this->_M_impl._M_start = iterator(__q, 0);
	}
    }

}















































































































































 











 







 









 






































































































template< typename T > struct assert_intrinsic_wchar_t;
template<> struct assert_intrinsic_wchar_t<wchar_t> {};

template<> struct assert_intrinsic_wchar_t<unsigned short> {};





























































































 




























 



 








































































 



 



















































 












 


namespace std __attribute__ ((__visibility__ ("default"))) {

  namespace rel_ops
  {
    

 

    






 
    template <class _Tp>
      inline bool
      operator!=(const _Tp& __x, const _Tp& __y)
      { return !(__x == __y); }

    






 
    template <class _Tp>
      inline bool
      operator>(const _Tp& __x, const _Tp& __y)
      { return __y < __x; }

    






 
    template <class _Tp>
      inline bool
      operator<=(const _Tp& __x, const _Tp& __y)
      { return !(__y < __x); }

    






 
    template <class _Tp>
      inline bool
      operator>=(const _Tp& __x, const _Tp& __y)
      { return !(__x < __y); }

  } 

}





























 

namespace std
{


  template<class _Tp>
    class tuple_size;

  template<std::size_t _Int, class _Tp>
    class tuple_element;

   
  template<class _Tp1, class _Tp2>
    struct tuple_size<std::pair<_Tp1, _Tp2> >
    { static const std::size_t value = 2; };

  template<class _Tp1, class _Tp2>
    const std::size_t
    tuple_size<std::pair<_Tp1, _Tp2> >::value;

  template<class _Tp1, class _Tp2>
    struct tuple_element<0, std::pair<_Tp1, _Tp2> >
    { typedef _Tp1 type; };
 
  template<class _Tp1, class _Tp2>
    struct tuple_element<1, std::pair<_Tp1, _Tp2> >
    { typedef _Tp2 type; };

  template<std::size_t _Int>
    struct __pair_get;

  template<>
    struct __pair_get<0>
    {
      template<typename _Tp1, typename _Tp2>
      static _Tp1& __get(std::pair<_Tp1, _Tp2>& __pair)
      { return __pair.first; }

      template<typename _Tp1, typename _Tp2>
      static const _Tp1& __const_get(const std::pair<_Tp1, _Tp2>& __pair)
      { return __pair.first; }
    };

  template<>
    struct __pair_get<1>
    {
      template<typename _Tp1, typename _Tp2>
      static _Tp2& __get(std::pair<_Tp1, _Tp2>& __pair)
      { return __pair.second; }

      template<typename _Tp1, typename _Tp2>
      static const _Tp2& __const_get(const std::pair<_Tp1, _Tp2>& __pair)
      { return __pair.second; }
    };

  template<std::size_t _Int, class _Tp1, class _Tp2>
    inline typename tuple_element<_Int, std::pair<_Tp1, _Tp2> >::type&
    get(std::pair<_Tp1, _Tp2>& __in)
    { return __pair_get<_Int>::__get(__in); }

  template<std::size_t _Int, class _Tp1, class _Tp2>
    inline const typename tuple_element<_Int, std::pair<_Tp1, _Tp2> >::type&
    get(const std::pair<_Tp1, _Tp2>& __in)
    { return __pair_get<_Int>::__const_get(__in); }


}








 


























      
      
      
      
      




















 



 



extern "C" {


 

 


 

 

 


 


 


 


 

 

 

 

 

 


 

 




















































































 


















 


 

 

 

 

 

 

 

 

 

 


 

 

 

 

 

 

 

 

 

 

 


 

 

 

 

 

 
 
 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 


 
















 


 


















 










 


 

 



 


 


















 



 


 


 
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;

 
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;

 
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;





























 

 

















 




 


 




typedef unsigned long int __dev_t;	 
typedef unsigned int __uid_t;	 
typedef unsigned int __gid_t;	 
typedef unsigned long int __ino_t;	 
typedef unsigned long int __ino64_t;	 
typedef unsigned int __mode_t;	 
typedef unsigned long int __nlink_t;	 
typedef long int __off_t;	 
typedef long int __off64_t;	 
typedef int __pid_t;	 
typedef struct { int __val[2]; } __fsid_t;	 
typedef long int __clock_t;	 
typedef unsigned long int __rlim_t;	 
typedef unsigned long int __rlim64_t;	 
typedef unsigned int __id_t;		 
typedef long int __time_t;	 
typedef unsigned int __useconds_t;  
typedef long int __suseconds_t;  

typedef int __daddr_t;	 
typedef long int __swblk_t;	 
typedef int __key_t;	 

 
typedef int __clockid_t;

 
typedef void * __timer_t;

 
typedef long int __blksize_t;

 

 
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;

 
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;

 
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;  


 
typedef __off64_t __loff_t;	 
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;

 
typedef long int __intptr_t;

 
typedef unsigned int __socklen_t;




typedef __ssize_t ssize_t;























 



 



 


 


 
 



 


 






 





 

 


 

 


 


 





 


 



 
 


 



 




 
typedef __gid_t gid_t;

typedef __uid_t uid_t;

typedef __off_t off_t;
typedef __off64_t off64_t;

typedef __useconds_t useconds_t;

typedef __pid_t pid_t;

typedef __intptr_t intptr_t;

typedef __socklen_t socklen_t;


 

 
extern int access (__const char *__name, int __type) throw () __attribute__ ((__nonnull__ (1)));


 
extern int euidaccess (__const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int eaccess (__const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));



 
extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;


 

 






 
extern __off_t lseek (int __fd, __off_t __offset, int __whence) throw ();
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     throw ();




 
extern int close (int __fd);





 
extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;




 
extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;






 
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
		      __off_t __offset) ;





 
extern ssize_t pwrite (int __fd, __const void *__buf, size_t __n,
		       __off_t __offset) ;



 
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
			__off64_t __offset) ;

 
extern ssize_t pwrite64 (int __fd, __const void *__buf, size_t __n,
			 __off64_t __offset) ;




 
extern int pipe (int __pipedes[2]) throw () ;


 
extern int pipe2 (int __pipedes[2], int __flags) throw () ;







 
extern unsigned int alarm (unsigned int __seconds) throw ();










 
extern unsigned int sleep (unsigned int __seconds);




 
extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     throw ();





 
extern int usleep (__useconds_t __useconds);






 
extern int pause (void);


 
extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;

 
extern int fchown (int __fd, __uid_t __owner, __gid_t __group) throw () ;



 
extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;



 
extern int fchownat (int __fd, __const char *__file, __uid_t __owner,
		     __gid_t __group, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;

 
extern int chdir (__const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;

 
extern int fchdir (int __fd) throw () ;







 
extern char *getcwd (char *__buf, size_t __size) throw () ;



 
extern char *get_current_dir_name (void) throw ();



 
extern char *getwd (char *__buf)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;


 
extern int dup (int __fd) throw () ;

 
extern int dup2 (int __fd, int __fd2) throw ();


 
extern int dup3 (int __fd, int __fd2, int __flags) throw ();

 
extern char **__environ;
extern char **environ;



 
extern int execve (__const char *__path, char *__const __argv[],
		   char *__const __envp[]) throw () __attribute__ ((__nonnull__ (1, 2)));


 
extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     throw () __attribute__ ((__nonnull__ (2)));


 
extern int execv (__const char *__path, char *__const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));


 
extern int execle (__const char *__path, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));


 
extern int execl (__const char *__path, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));


 
extern int execvp (__const char *__file, char *__const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));



 
extern int execlp (__const char *__file, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));


 
extern int execvpe (__const char *__file, char *__const __argv[],
		    char *__const __envp[])
     throw () __attribute__ ((__nonnull__ (1, 2)));


 
extern int nice (int __inc) throw () ;


 
extern void _exit (int __status) __attribute__ ((__noreturn__));




 


















 


 
enum
  {
    _PC_LINK_MAX,
    _PC_MAX_CANON,
    _PC_MAX_INPUT,
    _PC_NAME_MAX,
    _PC_PATH_MAX,
    _PC_PIPE_BUF,
    _PC_CHOWN_RESTRICTED,
    _PC_NO_TRUNC,
    _PC_VDISABLE,
    _PC_SYNC_IO,
    _PC_ASYNC_IO,
    _PC_PRIO_IO,
    _PC_SOCK_MAXBUF,
    _PC_FILESIZEBITS,
    _PC_REC_INCR_XFER_SIZE,
    _PC_REC_MAX_XFER_SIZE,
    _PC_REC_MIN_XFER_SIZE,
    _PC_REC_XFER_ALIGN,
    _PC_ALLOC_SIZE_MIN,
    _PC_SYMLINK_MAX,
    _PC_2_SYMLINKS
  };

 
enum
  {
    _SC_ARG_MAX,
    _SC_CHILD_MAX,
    _SC_CLK_TCK,
    _SC_NGROUPS_MAX,
    _SC_OPEN_MAX,
    _SC_STREAM_MAX,
    _SC_TZNAME_MAX,
    _SC_JOB_CONTROL,
    _SC_SAVED_IDS,
    _SC_REALTIME_SIGNALS,
    _SC_PRIORITY_SCHEDULING,
    _SC_TIMERS,
    _SC_ASYNCHRONOUS_IO,
    _SC_PRIORITIZED_IO,
    _SC_SYNCHRONIZED_IO,
    _SC_FSYNC,
    _SC_MAPPED_FILES,
    _SC_MEMLOCK,
    _SC_MEMLOCK_RANGE,
    _SC_MEMORY_PROTECTION,
    _SC_MESSAGE_PASSING,
    _SC_SEMAPHORES,
    _SC_SHARED_MEMORY_OBJECTS,
    _SC_AIO_LISTIO_MAX,
    _SC_AIO_MAX,
    _SC_AIO_PRIO_DELTA_MAX,
    _SC_DELAYTIMER_MAX,
    _SC_MQ_OPEN_MAX,
    _SC_MQ_PRIO_MAX,
    _SC_VERSION,
    _SC_PAGESIZE,
    _SC_RTSIG_MAX,
    _SC_SEM_NSEMS_MAX,
    _SC_SEM_VALUE_MAX,
    _SC_SIGQUEUE_MAX,
    _SC_TIMER_MAX,

    
 
    _SC_BC_BASE_MAX,
    _SC_BC_DIM_MAX,
    _SC_BC_SCALE_MAX,
    _SC_BC_STRING_MAX,
    _SC_COLL_WEIGHTS_MAX,
    _SC_EQUIV_CLASS_MAX,
    _SC_EXPR_NEST_MAX,
    _SC_LINE_MAX,
    _SC_RE_DUP_MAX,
    _SC_CHARCLASS_NAME_MAX,

    _SC_2_VERSION,
    _SC_2_C_BIND,
    _SC_2_C_DEV,
    _SC_2_FORT_DEV,
    _SC_2_FORT_RUN,
    _SC_2_SW_DEV,
    _SC_2_LOCALEDEF,

    _SC_PII,
    _SC_PII_XTI,
    _SC_PII_SOCKET,
    _SC_PII_INTERNET,
    _SC_PII_OSI,
    _SC_POLL,
    _SC_SELECT,
    _SC_UIO_MAXIOV,
    _SC_IOV_MAX = _SC_UIO_MAXIOV,
    _SC_PII_INTERNET_STREAM,
    _SC_PII_INTERNET_DGRAM,
    _SC_PII_OSI_COTS,
    _SC_PII_OSI_CLTS,
    _SC_PII_OSI_M,
    _SC_T_IOV_MAX,

     
    _SC_THREADS,
    _SC_THREAD_SAFE_FUNCTIONS,
    _SC_GETGR_R_SIZE_MAX,
    _SC_GETPW_R_SIZE_MAX,
    _SC_LOGIN_NAME_MAX,
    _SC_TTY_NAME_MAX,
    _SC_THREAD_DESTRUCTOR_ITERATIONS,
    _SC_THREAD_KEYS_MAX,
    _SC_THREAD_STACK_MIN,
    _SC_THREAD_THREADS_MAX,
    _SC_THREAD_ATTR_STACKADDR,
    _SC_THREAD_ATTR_STACKSIZE,
    _SC_THREAD_PRIORITY_SCHEDULING,
    _SC_THREAD_PRIO_INHERIT,
    _SC_THREAD_PRIO_PROTECT,
    _SC_THREAD_PROCESS_SHARED,

    _SC_NPROCESSORS_CONF,
    _SC_NPROCESSORS_ONLN,
    _SC_PHYS_PAGES,
    _SC_AVPHYS_PAGES,
    _SC_ATEXIT_MAX,
    _SC_PASS_MAX,

    _SC_XOPEN_VERSION,
    _SC_XOPEN_XCU_VERSION,
    _SC_XOPEN_UNIX,
    _SC_XOPEN_CRYPT,
    _SC_XOPEN_ENH_I18N,
    _SC_XOPEN_SHM,

    _SC_2_CHAR_TERM,
    _SC_2_C_VERSION,
    _SC_2_UPE,

    _SC_XOPEN_XPG2,
    _SC_XOPEN_XPG3,
    _SC_XOPEN_XPG4,

    _SC_CHAR_BIT,
    _SC_CHAR_MAX,
    _SC_CHAR_MIN,
    _SC_INT_MAX,
    _SC_INT_MIN,
    _SC_LONG_BIT,
    _SC_WORD_BIT,
    _SC_MB_LEN_MAX,
    _SC_NZERO,
    _SC_SSIZE_MAX,
    _SC_SCHAR_MAX,
    _SC_SCHAR_MIN,
    _SC_SHRT_MAX,
    _SC_SHRT_MIN,
    _SC_UCHAR_MAX,
    _SC_UINT_MAX,
    _SC_ULONG_MAX,
    _SC_USHRT_MAX,

    _SC_NL_ARGMAX,
    _SC_NL_LANGMAX,
    _SC_NL_MSGMAX,
    _SC_NL_NMAX,
    _SC_NL_SETMAX,
    _SC_NL_TEXTMAX,

    _SC_XBS5_ILP32_OFF32,
    _SC_XBS5_ILP32_OFFBIG,
    _SC_XBS5_LP64_OFF64,
    _SC_XBS5_LPBIG_OFFBIG,

    _SC_XOPEN_LEGACY,
    _SC_XOPEN_REALTIME,
    _SC_XOPEN_REALTIME_THREADS,

    _SC_ADVISORY_INFO,
    _SC_BARRIERS,
    _SC_BASE,
    _SC_C_LANG_SUPPORT,
    _SC_C_LANG_SUPPORT_R,
    _SC_CLOCK_SELECTION,
    _SC_CPUTIME,
    _SC_THREAD_CPUTIME,
    _SC_DEVICE_IO,
    _SC_DEVICE_SPECIFIC,
    _SC_DEVICE_SPECIFIC_R,
    _SC_FD_MGMT,
    _SC_FIFO,
    _SC_PIPE,
    _SC_FILE_ATTRIBUTES,
    _SC_FILE_LOCKING,
    _SC_FILE_SYSTEM,
    _SC_MONOTONIC_CLOCK,
    _SC_MULTI_PROCESS,
    _SC_SINGLE_PROCESS,
    _SC_NETWORKING,
    _SC_READER_WRITER_LOCKS,
    _SC_SPIN_LOCKS,
    _SC_REGEXP,
    _SC_REGEX_VERSION,
    _SC_SHELL,
    _SC_SIGNALS,
    _SC_SPAWN,
    _SC_SPORADIC_SERVER,
    _SC_THREAD_SPORADIC_SERVER,
    _SC_SYSTEM_DATABASE,
    _SC_SYSTEM_DATABASE_R,
    _SC_TIMEOUTS,
    _SC_TYPED_MEMORY_OBJECTS,
    _SC_USER_GROUPS,
    _SC_USER_GROUPS_R,
    _SC_2_PBS,
    _SC_2_PBS_ACCOUNTING,
    _SC_2_PBS_LOCATE,
    _SC_2_PBS_MESSAGE,
    _SC_2_PBS_TRACK,
    _SC_SYMLOOP_MAX,
    _SC_STREAMS,
    _SC_2_PBS_CHECKPOINT,

    _SC_V6_ILP32_OFF32,
    _SC_V6_ILP32_OFFBIG,
    _SC_V6_LP64_OFF64,
    _SC_V6_LPBIG_OFFBIG,

    _SC_HOST_NAME_MAX,
    _SC_TRACE,
    _SC_TRACE_EVENT_FILTER,
    _SC_TRACE_INHERIT,
    _SC_TRACE_LOG,

    _SC_LEVEL1_ICACHE_SIZE,
    _SC_LEVEL1_ICACHE_ASSOC,
    _SC_LEVEL1_ICACHE_LINESIZE,
    _SC_LEVEL1_DCACHE_SIZE,
    _SC_LEVEL1_DCACHE_ASSOC,
    _SC_LEVEL1_DCACHE_LINESIZE,
    _SC_LEVEL2_CACHE_SIZE,
    _SC_LEVEL2_CACHE_ASSOC,
    _SC_LEVEL2_CACHE_LINESIZE,
    _SC_LEVEL3_CACHE_SIZE,
    _SC_LEVEL3_CACHE_ASSOC,
    _SC_LEVEL3_CACHE_LINESIZE,
    _SC_LEVEL4_CACHE_SIZE,
    _SC_LEVEL4_CACHE_ASSOC,
    _SC_LEVEL4_CACHE_LINESIZE,
     

    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,
    _SC_RAW_SOCKETS,

    _SC_V7_ILP32_OFF32,
    _SC_V7_ILP32_OFFBIG,
    _SC_V7_LP64_OFF64,
    _SC_V7_LPBIG_OFFBIG,

    _SC_SS_REPL_MAX,

    _SC_TRACE_EVENT_NAME_MAX,
    _SC_TRACE_NAME_MAX,
    _SC_TRACE_SYS_MAX,
    _SC_TRACE_USER_EVENT_MAX,

    _SC_XOPEN_STREAMS,

    _SC_THREAD_ROBUST_PRIO_INHERIT,
    _SC_THREAD_ROBUST_PRIO_PROTECT
  };

 
enum
  {
    _CS_PATH,			 

    _CS_V6_WIDTH_RESTRICTED_ENVS,

    _CS_GNU_LIBC_VERSION,
    _CS_GNU_LIBPTHREAD_VERSION,

    _CS_V5_WIDTH_RESTRICTED_ENVS,

    _CS_V7_WIDTH_RESTRICTED_ENVS,

    _CS_LFS_CFLAGS = 1000,
    _CS_LFS_LDFLAGS,
    _CS_LFS_LIBS,
    _CS_LFS_LINTFLAGS,
    _CS_LFS64_CFLAGS,
    _CS_LFS64_LDFLAGS,
    _CS_LFS64_LIBS,
    _CS_LFS64_LINTFLAGS,

    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
    _CS_XBS5_ILP32_OFF32_LDFLAGS,
    _CS_XBS5_ILP32_OFF32_LIBS,
    _CS_XBS5_ILP32_OFF32_LINTFLAGS,
    _CS_XBS5_ILP32_OFFBIG_CFLAGS,
    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,
    _CS_XBS5_ILP32_OFFBIG_LIBS,
    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,
    _CS_XBS5_LP64_OFF64_CFLAGS,
    _CS_XBS5_LP64_OFF64_LDFLAGS,
    _CS_XBS5_LP64_OFF64_LIBS,
    _CS_XBS5_LP64_OFF64_LINTFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_LIBS,
    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,
    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,
    _CS_POSIX_V6_ILP32_OFF32_LIBS,
    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,
    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,
    _CS_POSIX_V6_LP64_OFF64_CFLAGS,
    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,
    _CS_POSIX_V6_LP64_OFF64_LIBS,
    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,
    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,
    _CS_POSIX_V7_ILP32_OFF32_LIBS,
    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,
    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,
    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,
    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,
    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,
    _CS_POSIX_V7_LP64_OFF64_CFLAGS,
    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,
    _CS_POSIX_V7_LP64_OFF64_LIBS,
    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,
    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,

    _CS_V6_ENV,
    _CS_V7_ENV
  };

 
extern long int pathconf (__const char *__path, int __name)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern long int fpathconf (int __fd, int __name) throw ();

 
extern long int sysconf (int __name) throw ();

 
extern size_t confstr (int __name, char *__buf, size_t __len) throw ();


 
extern __pid_t getpid (void) throw ();

 
extern __pid_t getppid (void) throw ();


 
extern __pid_t getpgrp (void) throw ();

 
extern __pid_t __getpgid (__pid_t __pid) throw ();
extern __pid_t getpgid (__pid_t __pid) throw ();




 
extern int setpgid (__pid_t __pid, __pid_t __pgid) throw ();









 



 
extern int setpgrp (void) throw ();




 
extern __pid_t setsid (void) throw ();

 
extern __pid_t getsid (__pid_t __pid) throw ();

 
extern __uid_t getuid (void) throw ();

 
extern __uid_t geteuid (void) throw ();

 
extern __gid_t getgid (void) throw ();

 
extern __gid_t getegid (void) throw ();



 
extern int getgroups (int __size, __gid_t __list[]) throw () ;

 
extern int group_member (__gid_t __gid) throw ();




 
extern int setuid (__uid_t __uid) throw ();


 
extern int setreuid (__uid_t __ruid, __uid_t __euid) throw ();

 
extern int seteuid (__uid_t __uid) throw ();




 
extern int setgid (__gid_t __gid) throw ();


 
extern int setregid (__gid_t __rgid, __gid_t __egid) throw ();

 
extern int setegid (__gid_t __gid) throw ();


 
extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     throw ();


 
extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     throw ();


 
extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     throw ();


 
extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     throw ();




 
extern __pid_t fork (void) throw ();




 
extern __pid_t vfork (void) throw ();



 
extern char *ttyname (int __fd) throw ();


 
extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;


 
extern int isatty (int __fd) throw ();


 
extern int ttyslot (void) throw ();


 
extern int link (__const char *__from, __const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;


 
extern int linkat (int __fromfd, __const char *__from, int __tofd,
		   __const char *__to, int __flags)
     throw () __attribute__ ((__nonnull__ (2, 4))) ;

 
extern int symlink (__const char *__from, __const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;



 
extern ssize_t readlink (__const char *__restrict __path,
			 char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;

 
extern int symlinkat (__const char *__from, int __tofd,
		      __const char *__to) throw () __attribute__ ((__nonnull__ (1, 3))) ;

 
extern ssize_t readlinkat (int __fd, __const char *__restrict __path,
			   char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (2, 3))) ;

 
extern int unlink (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));

 
extern int unlinkat (int __fd, __const char *__name, int __flag)
     throw () __attribute__ ((__nonnull__ (2)));

 
extern int rmdir (__const char *__path) throw () __attribute__ ((__nonnull__ (1)));


 
extern __pid_t tcgetpgrp (int __fd) throw ();

 
extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) throw ();





 
extern char *getlogin (void);





 
extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));

 
extern int setlogin (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));




 


















 









 


extern "C" {





 

extern char *optarg;











 

extern int optind;


 

extern int opterr;

 

extern int optopt;

























 



 
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       throw ();



}

 





 
extern int gethostname (char *__name, size_t __len) throw () __attribute__ ((__nonnull__ (1)));



 
extern int sethostname (__const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;


 
extern int sethostid (long int __id) throw () ;




 
extern int getdomainname (char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (__const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;




 
extern int vhangup (void) throw ();

 
extern int revoke (__const char *__file) throw () __attribute__ ((__nonnull__ (1))) ;






 
extern int profil (unsigned short int *__sample_buffer, size_t __size,
		   size_t __offset, unsigned int __scale)
     throw () __attribute__ ((__nonnull__ (1)));




 
extern int acct (__const char *__name) throw ();


 
extern char *getusershell (void) throw ();
extern void endusershell (void) throw ();  
extern void setusershell (void) throw ();  




 
extern int daemon (int __nochdir, int __noclose) throw () ;



 
extern int chroot (__const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;


 
extern char *getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));





 
extern int fsync (int __fd);



 
extern long int gethostid (void);

 
extern void sync (void) throw ();



 
extern int getpagesize (void)  throw () __attribute__ ((__const__));



 
extern int getdtablesize (void) throw ();




 
extern int truncate (__const char *__file, __off_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int truncate64 (__const char *__file, __off64_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;


 
extern int ftruncate (int __fd, __off_t __length) throw () ;
extern int ftruncate64 (int __fd, __off64_t __length) throw () ;





 
extern int brk (void *__addr) throw () ;




 
extern void *sbrk (intptr_t __delta) throw ();











 
extern long int syscall (long int __sysno, ...) throw ();





 






 


extern int lockf (int __fd, int __cmd, __off_t __len) ;
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;




 



 
extern int fdatasync (int __fildes);



 
 
extern char *crypt (__const char *__key, __const char *__salt)
     throw () __attribute__ ((__nonnull__ (1, 2)));


 
extern void encrypt (char *__block, int __edflag) throw () __attribute__ ((__nonnull__ (1)));





 
extern void swab (__const void *__restrict __from, void *__restrict __to,
		  ssize_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));



 
 
extern char *ctermid (char *__s) throw ();


 

}









































































































 








































 




























 



 




















 



 



 






















 



 



 


 


 
 



 


 






 





 

 


 

 


 


 





 


 



 
 


 



 



extern "C" {


 

















 



 

 


















 



 


 

 

 

 

 

 


 

 

 



















 









 


 
 




 




 


















 



 


 



 


 


 







union wait
  {
    int w_status;
    struct
      {
	unsigned int __w_termsig:7;  
	unsigned int __w_coredump:1;  
	unsigned int __w_retcode:8;  
	unsigned int:16;
      } __wait_terminated;
    struct
      {
	unsigned int __w_stopval:8;  
	unsigned int __w_stopsig:8;  
	unsigned int:16;
      } __wait_stopped;
  };





 





 



 


 
typedef struct
  {
    int quot;			 
    int rem;			 
  } div_t;

 
typedef struct
  {
    long int quot;		 
    long int rem;		 
  } ldiv_t;



 
__extension__ typedef struct
  {
    long long int quot;		 
    long long int rem;		 
  } lldiv_t;



 



 


 
extern size_t __ctype_get_mb_cur_max (void) throw () ;



 
extern double atof (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
 
extern int atoi (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
 
extern long int atol (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



 
__extension__ extern long long int atoll (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



 
extern double strtod (__const char *__restrict __nptr,
		      char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;



 
extern float strtof (__const char *__restrict __nptr,
		     char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
			    char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;



 
extern long int strtol (__const char *__restrict __nptr,
			char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;
 
extern unsigned long int strtoul (__const char *__restrict __nptr,
				  char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;


 
__extension__
extern long long int strtoq (__const char *__restrict __nptr,
			     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;
 
__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
				       char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;


 
__extension__
extern long long int strtoll (__const char *__restrict __nptr,
			      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;
 
__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
					char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;












 


 


















 





 
typedef struct __locale_struct
{
   
  struct __locale_data *__locales[13];  

   
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;

   
  const char *__names[13];
} *__locale_t;

 
typedef __locale_t locale_t;



 
extern long int strtol_l (__const char *__restrict __nptr,
			  char **__restrict __endptr, int __base,
			  __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4))) ;

extern unsigned long int strtoul_l (__const char *__restrict __nptr,
				    char **__restrict __endptr,
				    int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
				char **__restrict __endptr, int __base,
				__locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
					  char **__restrict __endptr,
					  int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

extern double strtod_l (__const char *__restrict __nptr,
			char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;

extern float strtof_l (__const char *__restrict __nptr,
		       char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;

extern long double strtold_l (__const char *__restrict __nptr,
			      char **__restrict __endptr,
			      __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;



extern __inline __attribute__ ((__gnu_inline__)) double
atof (__const char *__nptr) throw ()
{
  return strtod (__nptr, (char **) __null);
}
extern __inline __attribute__ ((__gnu_inline__)) int
atoi (__const char *__nptr) throw ()
{
  return (int) strtol (__nptr, (char **) __null, 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
atol (__const char *__nptr) throw ()
{
  return strtol (__nptr, (char **) __null, 10);
}



__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
atoll (__const char *__nptr) throw ()
{
  return strtoll (__nptr, (char **) __null, 10);
}





 
extern char *l64a (long int __n) throw () ;

 
extern long int a64l (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;


















 



 



extern "C" {


typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;

typedef __loff_t loff_t;

typedef __ino_t ino_t;
typedef __ino64_t ino64_t;

typedef __dev_t dev_t;


typedef __mode_t mode_t;

typedef __nlink_t nlink_t;




typedef __id_t id_t;


typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;

typedef __key_t key_t;

















 



 







 
typedef __clock_t clock_t;







 
typedef __time_t time_t;






 
typedef __clockid_t clockid_t;




 
typedef __timer_t timer_t;







typedef __suseconds_t suseconds_t;























 



 



 


 


 
 



 


 






 





 

 


 

 


 


 





 


 



 
 


 



 



 
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;

 


 

typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));

typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));



 


 

 

















 

 



 

 
















 


 








 


















 


typedef int __sig_atomic_t;

 

typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;







 


typedef __sigset_t sigset_t;

 
















 



 












 
struct timespec
  {
    __time_t tv_sec;		 
    long int tv_nsec;		 
  };





















 



 




 
struct timeval
  {
    __time_t tv_sec;		 
    __suseconds_t tv_usec;	 
  };



 
typedef long int __fd_mask;

 
 

 
typedef struct
  {
    
 
    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];
  } fd_set;

 

 
typedef __fd_mask fd_mask;

 


 


extern "C" {








 
extern int select (int __nfds, fd_set *__restrict __readfds,
		   fd_set *__restrict __writefds,
		   fd_set *__restrict __exceptfds,
		   struct timeval *__restrict __timeout);






 
extern int pselect (int __nfds, fd_set *__restrict __readfds,
		    fd_set *__restrict __writefds,
		    fd_set *__restrict __exceptfds,
		    const struct timespec *__restrict __timeout,
		    const __sigset_t *__restrict __sigmask);

}


 


















 





 
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw ();
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw ();
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
					       unsigned int __minor)
     throw ();

__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned int
gnu_dev_major (unsigned long long int __dev) throw ()
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned int
gnu_dev_minor (unsigned long long int __dev) throw ()
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned long long int
gnu_dev_makedev (unsigned int __major, unsigned int __minor) throw ()
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
	  | (((unsigned long long int) (__minor & ~0xff)) << 12)
	  | (((unsigned long long int) (__major & ~0xfff)) << 32));
}


 



typedef __blksize_t blksize_t;

 
typedef __blkcnt_t blkcnt_t;	  
typedef __fsblkcnt_t fsblkcnt_t;  
typedef __fsfilcnt_t fsfilcnt_t;  

typedef __blkcnt64_t blkcnt64_t;      
typedef __fsblkcnt64_t fsblkcnt64_t;  
typedef __fsfilcnt64_t fsfilcnt64_t;  


 

















 


 





 
typedef unsigned long int pthread_t;


typedef union
{
  char __size[56];
  long int __align;
} pthread_attr_t;


typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;



 
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    
 
    int __kind;
    int __spins;
    __pthread_list_t __list;
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;



 
typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;


 
typedef unsigned int pthread_key_t;


 
typedef int pthread_once_t;



 
typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;
    
 
    unsigned int __flags;
  } __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;


 
typedef volatile int pthread_spinlock_t;



 
typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;




}





 
 
extern long int random (void) throw ();

 
extern void srandom (unsigned int __seed) throw ();




 
extern char *initstate (unsigned int __seed, char *__statebuf,
			size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));


 
extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));




 

struct random_data
  {
    int32_t *fptr;		 
    int32_t *rptr;		 
    int32_t *state;		 
    int rand_type;		 
    int rand_deg;		 
    int rand_sep;		 
    int32_t *end_ptr;		 
  };

extern int random_r (struct random_data *__restrict __buf,
		     int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
			size_t __statelen,
			struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
		       struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));



 
extern int rand (void) throw ();
 
extern void srand (unsigned int __seed) throw ();


 
extern int rand_r (unsigned int *__seed) throw ();


 

 
extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));

 
extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));

 
extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));

 
extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));



 
struct drand48_data
  {
    unsigned short int __x[3];	 
    unsigned short int __old_x[3];  
    unsigned short int __c;	 
    unsigned short int __init;	 
    unsigned long long int __a;	 
  };

 
extern int drand48_r (struct drand48_data *__restrict __buffer,
		      double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int lrand48_r (struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int mrand48_r (struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
		     struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
		      struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));



 
extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;
 
extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;




 


 
extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));
 
extern void free (void *__ptr) throw ();


 
extern void cfree (void *__ptr) throw ();

















 

























 



 



 


 


 
 



 


 






 





 

 


 

 


 


 





 


 



 
 


 



 



extern "C" {

 

 
extern void *alloca (size_t __size) throw ();


}


 
extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

 
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;


 
extern void abort (void) throw () __attribute__ ((__noreturn__));


 
extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));



 
extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));



 
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));




 
extern void exit (int __status) throw () __attribute__ ((__noreturn__));





 
extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));




 
extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));




 
extern char *getenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;



 
extern char *__secure_getenv (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;

 

 
extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));


 
extern int setenv (__const char *__name, __const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));

 
extern int unsetenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));



 
extern int clearenv (void) throw ();





 
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;








 
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;






 
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;





 
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;






 
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;






 
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;






 
extern int system (__const char *__command) ;




 
extern char *canonicalize_file_name (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;





 
extern char *realpath (__const char *__restrict __name,
		       char *__restrict __resolved) throw () ;


 
typedef int (*__compar_fn_t) (__const void *, __const void *);

typedef __compar_fn_t comparison_fn_t;
typedef int (*__compar_d_fn_t) (__const void *, __const void *, void *);



 
extern void *bsearch (__const void *__key, __const void *__base,
		      size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;


 
extern void qsort (void *__base, size_t __nmemb, size_t __size,
		   __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
		     __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));


 
extern int abs (int __x) throw () __attribute__ ((__const__)) ;
extern long int labs (long int __x) throw () __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) ;




 
 
extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) ;



__extension__ extern lldiv_t lldiv (long long int __numer,
				    long long int __denom)
     throw () __attribute__ ((__const__)) ;




 



 
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;



 
extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;



 
extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;


 
extern char *qecvt (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;



 
extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign, char *__restrict __buf,
		   size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign, char *__restrict __buf,
		   size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign,
		    char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign,
		    char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));




 
extern int mblen (__const char *__s, size_t __n) throw () ;

 
extern int mbtowc (wchar_t *__restrict __pwc,
		   __const char *__restrict __s, size_t __n) throw () ;

 
extern int wctomb (char *__s, wchar_t __wchar) throw () ;


 
extern size_t mbstowcs (wchar_t *__restrict  __pwcs,
			__const char *__restrict __s, size_t __n) throw ();
 
extern size_t wcstombs (char *__restrict __s,
			__const wchar_t *__restrict __pwcs, size_t __n)
     throw ();






 
extern int rpmatch (__const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;







 
extern int getsubopt (char **__restrict __optionp,
		      char *__const *__restrict __tokens,
		      char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;


 
extern void setkey (__const char *__key) throw () __attribute__ ((__nonnull__ (1)));


 

 
extern int posix_openpt (int __oflag) ;


 

 
extern int grantpt (int __fd) throw ();


 
extern int unlockpt (int __fd) throw ();



 
extern char *ptsname (int __fd) throw () ;



 
extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));

 
extern int getpt (void);



 
extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));


 


}




namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::div_t;
  using ::ldiv_t;

  using ::abort;
  using ::abs;
  using ::atexit;
  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exit;
  using ::free;
  using ::getenv;
  using ::labs;
  using ::ldiv;
  using ::malloc;
  using ::mblen;
  using ::mbstowcs;
  using ::mbtowc;
  using ::qsort;
  using ::rand;
  using ::realloc;
  using ::srand;
  using ::strtod;
  using ::strtol;
  using ::strtoul;
  using ::system;
  using ::wcstombs;
  using ::wctomb;

  inline long
  abs(long __i) { return labs(__i); }

  inline ldiv_t
  div(long __i, long __j) { return ldiv(__i, __j); }

}



namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  using ::lldiv_t;
  using ::_Exit;

  inline long long
  abs(long long __x) { return __x >= 0 ? __x : -__x; }

  using ::llabs;

  inline lldiv_t
  div(long long __n, long long __d)
  { lldiv_t __q; __q.quot = __n / __d; __q.rem = __n % __d; return __q; }

  using ::lldiv;

  using ::atoll;
  using ::strtoll;
  using ::strtoull;
  using ::strtof;
  using ::strtold;

}

namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::__gnu_cxx::lldiv_t;
  using ::__gnu_cxx::_Exit;
  using ::__gnu_cxx::abs;
  using ::__gnu_cxx::llabs;
  using ::__gnu_cxx::div;
  using ::__gnu_cxx::lldiv;
  using ::__gnu_cxx::atoll;
  using ::__gnu_cxx::strtof;
  using ::__gnu_cxx::strtoll;
  using ::__gnu_cxx::strtoull;
  using ::__gnu_cxx::strtold;

}





























 


namespace std
{



  
  using std::lldiv_t;

  
  using std::llabs;
  using std::lldiv;

  using std::atoll;
  using std::strtoll;
  using std::strtoull;

  using std::strtof;
  using std::strtold;

  
  using std::abs;
  using std::div;



}








   
   
   










   



















      

      

      

      
      
      
      
      
      
      

      
      

      
      
      
      

      
      
      

      
      
      
      
      














































































































































































































































































namespace boost{
   __extension__ typedef long long long_long_type;
   __extension__ typedef unsigned long long ulong_long_type;
}


















































































     










































































































































































 



 




















































 




 



namespace std __attribute__ ((__visibility__ ("default"))) {

  















 
  template<typename _Tp>
    pair<_Tp*, ptrdiff_t>
    get_temporary_buffer(ptrdiff_t __len)
    {
      const ptrdiff_t __max =
	__gnu_cxx::__numeric_traits<ptrdiff_t>::__max / sizeof(_Tp);
      if (__len > __max)
	__len = __max;
      
      while (__len > 0) 
	{
	  _Tp* __tmp = static_cast<_Tp*>(::operator new(__len * sizeof(_Tp), 
							std::nothrow));
	  if (__tmp != 0)
	    return std::pair<_Tp*, ptrdiff_t>(__tmp, __len);
	  __len /= 2;
	}
      return std::pair<_Tp*, ptrdiff_t>(static_cast<_Tp*>(0), 0);
    }

  





 
  template<typename _Tp>
    inline void
    return_temporary_buffer(_Tp* __p)
    { ::operator delete(__p, std::nothrow); }


  



 
  template<typename _ForwardIterator, typename _Tp>
    class _Temporary_buffer
    {
      
      

    public:
      typedef _Tp         value_type;
      typedef value_type* pointer;
      typedef pointer     iterator;
      typedef ptrdiff_t   size_type;

    protected:
      size_type  _M_original_len;
      size_type  _M_len;
      pointer    _M_buffer;

    public:
      
      size_type
      size() const
      { return _M_len; }

      
      size_type
      requested_size() const
      { return _M_original_len; }

      
      iterator
      begin()
      { return _M_buffer; }

      
      iterator
      end()
      { return _M_buffer + _M_len; }

      


 
      _Temporary_buffer(_ForwardIterator __first, _ForwardIterator __last);

      ~_Temporary_buffer()
      {
	std::_Destroy(_M_buffer, _M_buffer + _M_len);
	std::return_temporary_buffer(_M_buffer);
      }

    private:
      
      _Temporary_buffer(const _Temporary_buffer&);

      void
      operator=(const _Temporary_buffer&);
    };

  template<typename _ForwardIterator, typename _Tp>
    _Temporary_buffer<_ForwardIterator, _Tp>::
    _Temporary_buffer(_ForwardIterator __first, _ForwardIterator __last)
    : _M_original_len(std::distance(__first, __last)),
      _M_len(0), _M_buffer(0)
    {
      try
	{
	  std::pair<pointer, size_type> __p(std::get_temporary_buffer<
					    value_type>(_M_original_len));
	  _M_buffer = __p.first;
	  _M_len = __p.second;
	  if (!__is_pod(_Tp) && _M_len > 0)
	    std::uninitialized_fill_n(_M_buffer, _M_len, *__first);
	}
      catch(...)
	{
	  std::return_temporary_buffer(_M_buffer);
	  _M_buffer = 0;
	  _M_len = 0;
	  throw;
	}
    }

}



















































 




 


namespace std __attribute__ ((__visibility__ ("default"))) {

  


 
  template <class _OutputIterator, class _Tp>
    class raw_storage_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _OutputIterator _M_iter;

    public:
      explicit
      raw_storage_iterator(_OutputIterator __x)
      : _M_iter(__x) {}

      raw_storage_iterator&
      operator*() { return *this; }

      raw_storage_iterator&
      operator=(const _Tp& __element)
      {
	std::_Construct(&*_M_iter, __element);
	return *this;
      }

      raw_storage_iterator<_OutputIterator, _Tp>&
      operator++()
      {
	++_M_iter;
	return *this;
      }

      raw_storage_iterator<_OutputIterator, _Tp>
      operator++(int)
      {
	raw_storage_iterator<_OutputIterator, _Tp> __tmp = *this;
	++_M_iter;
	return __tmp;
      }
    };

}






























 



#pragma GCC visibility push(default)

extern "C++" {

namespace __cxxabiv1
{
  class __class_type_info;
} 























namespace std 
{
  




 
  class type_info 
  {
  public:
    


 
    virtual ~type_info();

    
 
    const char* name() const
    { return __name[0] == '*' ? __name + 1 : __name; }

    
 
    
    
    
    bool before(const type_info& __arg) const
    { return (__name[0] == '*' && __arg.__name[0] == '*')
	? __name < __arg.__name
	: __builtin_strcmp (__name, __arg.__name) < 0; }

    bool operator==(const type_info& __arg) const
    {
      return ((__name == __arg.__name)
	      || (__name[0] != '*' &&
		  __builtin_strcmp (__name, __arg.__name) == 0));
    }
    bool operator!=(const type_info& __arg) const
    { return !operator==(__arg); }

    
    virtual bool __is_pointer_p() const;

    
    virtual bool __is_function_p() const;

    
    
    
    
    
    
    virtual bool __do_catch(const type_info *__thr_type, void **__thr_obj,
			    unsigned __outer) const;

    
    virtual bool __do_upcast(const __cxxabiv1::__class_type_info *__target,
			     void **__obj_ptr) const;

  protected:
    const char *__name;
    
    explicit type_info(const char *__n): __name(__n) { }
    
  private:
    
    type_info& operator=(const type_info&);
    type_info(const type_info&);
  };

  




 
  class bad_cast : public exception 
  {
  public:
    bad_cast() throw() { }

    
    
    virtual ~bad_cast() throw();

    
    virtual const char* what() const throw();
  };
  
  


 
  class bad_typeid : public exception 
  {
  public:
    bad_typeid () throw() { }

    
    
    virtual ~bad_typeid() throw();

    
    virtual const char* what() const throw();
  };
} 

#pragma GCC visibility pop

} 




























 



































 








namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _Alloc>
    class allocator;

  template<class _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;

  template<> struct char_traits<char>;

  typedef basic_string<char>    string;

  template<> struct char_traits<wchar_t>;

  typedef basic_string<wchar_t> wstring;


  template<> struct char_traits<char16_t>;
  template<> struct char_traits<char32_t>;

  typedef basic_string<char16_t> u16string;
  typedef basic_string<char32_t> u32string;


}






























 










































 








































 




























 



 


















 




 



 

















 



 





 
struct _IO_FILE;


 
typedef struct _IO_FILE FILE;






 
typedef struct _IO_FILE __FILE;




 





















 



 


 

typedef __builtin_va_list __gnuc_va_list;


 



















 




 






















 



 



 


 


 
 



 


 






 





 

 


 

 


 


 





 


 


typedef unsigned int wint_t;


 
 


 



 




 

 

 

 
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;		 
} __mbstate_t;



 


 
typedef __mbstate_t mbstate_t;



 



 


extern "C" {



 
struct tm;



 




 
extern wchar_t *wcscpy (wchar_t *__restrict __dest,
			__const wchar_t *__restrict __src) throw ();
 
extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
			 __const wchar_t *__restrict __src, size_t __n)
     throw ();

 
extern wchar_t *wcscat (wchar_t *__restrict __dest,
			__const wchar_t *__restrict __src) throw ();
 
extern wchar_t *wcsncat (wchar_t *__restrict __dest,
			 __const wchar_t *__restrict __src, size_t __n)
     throw ();

 
extern int wcscmp (__const wchar_t *__s1, __const wchar_t *__s2)
     throw () __attribute__ ((__pure__));
 
extern int wcsncmp (__const wchar_t *__s1, __const wchar_t *__s2, size_t __n)
     throw () __attribute__ ((__pure__));


 
extern int wcscasecmp (__const wchar_t *__s1, __const wchar_t *__s2) throw ();

 
extern int wcsncasecmp (__const wchar_t *__s1, __const wchar_t *__s2,
			size_t __n) throw ();


 

extern int wcscasecmp_l (__const wchar_t *__s1, __const wchar_t *__s2,
			 __locale_t __loc) throw ();

extern int wcsncasecmp_l (__const wchar_t *__s1, __const wchar_t *__s2,
			  size_t __n, __locale_t __loc) throw ();



 
extern int wcscoll (__const wchar_t *__s1, __const wchar_t *__s2) throw ();


 
extern size_t wcsxfrm (wchar_t *__restrict __s1,
		       __const wchar_t *__restrict __s2, size_t __n) throw ();



 


 
extern int wcscoll_l (__const wchar_t *__s1, __const wchar_t *__s2,
		      __locale_t __loc) throw ();



 
extern size_t wcsxfrm_l (wchar_t *__s1, __const wchar_t *__s2,
			 size_t __n, __locale_t __loc) throw ();

 
extern wchar_t *wcsdup (__const wchar_t *__s) throw () __attribute__ ((__malloc__));


 
extern "C++" wchar_t *wcschr (wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcschr") __attribute__ ((__pure__));
extern "C++" __const wchar_t *wcschr (__const wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcschr") __attribute__ ((__pure__));
 
extern "C++" wchar_t *wcsrchr (wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcsrchr") __attribute__ ((__pure__));
extern "C++" __const wchar_t *wcsrchr (__const wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcsrchr") __attribute__ ((__pure__));



 
extern wchar_t *wcschrnul (__const wchar_t *__s, wchar_t __wc)
     throw () __attribute__ ((__pure__));



 
extern size_t wcscspn (__const wchar_t *__wcs, __const wchar_t *__reject)
     throw () __attribute__ ((__pure__));

 
extern size_t wcsspn (__const wchar_t *__wcs, __const wchar_t *__accept)
     throw () __attribute__ ((__pure__));
 
extern "C++" wchar_t *wcspbrk (wchar_t *__wcs, __const wchar_t *__accept)
     throw () __asm ("wcspbrk") __attribute__ ((__pure__));
extern "C++" __const wchar_t *wcspbrk (__const wchar_t *__wcs,
				       __const wchar_t *__accept)
     throw () __asm ("wcspbrk") __attribute__ ((__pure__));
 
extern "C++" wchar_t *wcsstr (wchar_t *__haystack, __const wchar_t *__needle)
     throw () __asm ("wcsstr") __attribute__ ((__pure__));
extern "C++" __const wchar_t *wcsstr (__const wchar_t *__haystack,
				      __const wchar_t *__needle)
     throw () __asm ("wcsstr") __attribute__ ((__pure__));

 
extern wchar_t *wcstok (wchar_t *__restrict __s,
			__const wchar_t *__restrict __delim,
			wchar_t **__restrict __ptr) throw ();

 
extern size_t wcslen (__const wchar_t *__s) throw () __attribute__ ((__pure__));


 
extern "C++" wchar_t *wcswcs (wchar_t *__haystack, __const wchar_t *__needle)
     throw () __asm ("wcswcs") __attribute__ ((__pure__));
extern "C++" __const wchar_t *wcswcs (__const wchar_t *__haystack,
				      __const wchar_t *__needle)
     throw () __asm ("wcswcs") __attribute__ ((__pure__));

 
extern size_t wcsnlen (__const wchar_t *__s, size_t __maxlen)
     throw () __attribute__ ((__pure__));



 
extern "C++" wchar_t *wmemchr (wchar_t *__s, wchar_t __c, size_t __n)
     throw () __asm ("wmemchr") __attribute__ ((__pure__));
extern "C++" __const wchar_t *wmemchr (__const wchar_t *__s, wchar_t __c,
				       size_t __n)
     throw () __asm ("wmemchr") __attribute__ ((__pure__));

 
extern int wmemcmp (__const wchar_t *__restrict __s1,
		    __const wchar_t *__restrict __s2, size_t __n)
     throw () __attribute__ ((__pure__));

 
extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
			 __const wchar_t *__restrict __s2, size_t __n) throw ();


 
extern wchar_t *wmemmove (wchar_t *__s1, __const wchar_t *__s2, size_t __n)
     throw ();

 
extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) throw ();



 
extern wchar_t *wmempcpy (wchar_t *__restrict __s1,
			  __const wchar_t *__restrict __s2, size_t __n)
     throw ();




 
extern wint_t btowc (int __c) throw ();


 
extern int wctob (wint_t __c) throw ();


 
extern int mbsinit (__const mbstate_t *__ps) throw () __attribute__ ((__pure__));


 
extern size_t mbrtowc (wchar_t *__restrict __pwc,
		       __const char *__restrict __s, size_t __n,
		       mbstate_t *__p) throw ();

 
extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
		       mbstate_t *__restrict __ps) throw ();

 
extern size_t __mbrlen (__const char *__restrict __s, size_t __n,
			mbstate_t *__restrict __ps) throw ();
extern size_t mbrlen (__const char *__restrict __s, size_t __n,
		      mbstate_t *__restrict __ps) throw ();


 



 
extern wint_t __btowc_alias (int __c) __asm ("btowc");
extern __inline __attribute__ ((__gnu_inline__)) wint_t
btowc (int __c) throw ()
{ return (__builtin_constant_p (__c) && __c >= '\0' && __c <= '\x7f'
	  ? (wint_t) __c : __btowc_alias (__c)); }

extern int __wctob_alias (wint_t __c) __asm ("wctob");
extern __inline __attribute__ ((__gnu_inline__)) int
wctob (wint_t __wc) throw ()
{ return (__builtin_constant_p (__wc) && __wc >= L'\0' && __wc <= L'\x7f'
	  ? (int) __wc : __wctob_alias (__wc)); }

extern __inline __attribute__ ((__gnu_inline__)) size_t
mbrlen (__const char *__restrict __s, size_t __n, mbstate_t *__restrict __ps) throw ()
{ return (__ps != __null
	  ? mbrtowc (__null, __s, __n, __ps) : __mbrlen (__s, __n, __null)); }



 
extern size_t mbsrtowcs (wchar_t *__restrict __dst,
			 __const char **__restrict __src, size_t __len,
			 mbstate_t *__restrict __ps) throw ();


 
extern size_t wcsrtombs (char *__restrict __dst,
			 __const wchar_t **__restrict __src, size_t __len,
			 mbstate_t *__restrict __ps) throw ();




 
extern size_t mbsnrtowcs (wchar_t *__restrict __dst,
			  __const char **__restrict __src, size_t __nmc,
			  size_t __len, mbstate_t *__restrict __ps) throw ();


 
extern size_t wcsnrtombs (char *__restrict __dst,
			  __const wchar_t **__restrict __src,
			  size_t __nwc, size_t __len,
			  mbstate_t *__restrict __ps) throw ();


 
 
extern int wcwidth (wchar_t __c) throw ();


 
extern int wcswidth (__const wchar_t *__s, size_t __n) throw ();




 
extern double wcstod (__const wchar_t *__restrict __nptr,
		      wchar_t **__restrict __endptr) throw ();



 
extern float wcstof (__const wchar_t *__restrict __nptr,
		     wchar_t **__restrict __endptr) throw ();
extern long double wcstold (__const wchar_t *__restrict __nptr,
			    wchar_t **__restrict __endptr) throw ();





 
extern long int wcstol (__const wchar_t *__restrict __nptr,
			wchar_t **__restrict __endptr, int __base) throw ();


 
extern unsigned long int wcstoul (__const wchar_t *__restrict __nptr,
				  wchar_t **__restrict __endptr, int __base)
     throw ();




 
__extension__
extern long long int wcstoll (__const wchar_t *__restrict __nptr,
			      wchar_t **__restrict __endptr, int __base)
     throw ();


 
__extension__
extern unsigned long long int wcstoull (__const wchar_t *__restrict __nptr,
					wchar_t **__restrict __endptr,
					int __base) throw ();



 
__extension__
extern long long int wcstoq (__const wchar_t *__restrict __nptr,
			     wchar_t **__restrict __endptr, int __base)
     throw ();


 
__extension__
extern unsigned long long int wcstouq (__const wchar_t *__restrict __nptr,
				       wchar_t **__restrict __endptr,
				       int __base) throw ();










 


 


 
extern long int wcstol_l (__const wchar_t *__restrict __nptr,
			  wchar_t **__restrict __endptr, int __base,
			  __locale_t __loc) throw ();

extern unsigned long int wcstoul_l (__const wchar_t *__restrict __nptr,
				    wchar_t **__restrict __endptr,
				    int __base, __locale_t __loc) throw ();

__extension__
extern long long int wcstoll_l (__const wchar_t *__restrict __nptr,
				wchar_t **__restrict __endptr,
				int __base, __locale_t __loc) throw ();

__extension__
extern unsigned long long int wcstoull_l (__const wchar_t *__restrict __nptr,
					  wchar_t **__restrict __endptr,
					  int __base, __locale_t __loc)
     throw ();

extern double wcstod_l (__const wchar_t *__restrict __nptr,
			wchar_t **__restrict __endptr, __locale_t __loc)
     throw ();

extern float wcstof_l (__const wchar_t *__restrict __nptr,
		       wchar_t **__restrict __endptr, __locale_t __loc)
     throw ();

extern long double wcstold_l (__const wchar_t *__restrict __nptr,
			      wchar_t **__restrict __endptr,
			      __locale_t __loc) throw ();



 
extern wchar_t *wcpcpy (wchar_t *__restrict __dest,
			__const wchar_t *__restrict __src) throw ();


 
extern wchar_t *wcpncpy (wchar_t *__restrict __dest,
			 __const wchar_t *__restrict __src, size_t __n)
     throw ();


 


 
extern __FILE *open_wmemstream (wchar_t **__bufloc, size_t *__sizeloc) throw ();



 
extern int fwide (__FILE *__fp, int __mode) throw ();





 
extern int fwprintf (__FILE *__restrict __stream,
		     __const wchar_t *__restrict __format, ...)
      ;



 
extern int wprintf (__const wchar_t *__restrict __format, ...)
      ;
 
extern int swprintf (wchar_t *__restrict __s, size_t __n,
		     __const wchar_t *__restrict __format, ...)
     throw ()  ;




 
extern int vfwprintf (__FILE *__restrict __s,
		      __const wchar_t *__restrict __format,
		      __gnuc_va_list __arg)
      ;



 
extern int vwprintf (__const wchar_t *__restrict __format,
		     __gnuc_va_list __arg)
      ;

 
extern int vswprintf (wchar_t *__restrict __s, size_t __n,
		      __const wchar_t *__restrict __format,
		      __gnuc_va_list __arg)
     throw ()  ;





 
extern int fwscanf (__FILE *__restrict __stream,
		    __const wchar_t *__restrict __format, ...)
      ;



 
extern int wscanf (__const wchar_t *__restrict __format, ...)
      ;
 
extern int swscanf (__const wchar_t *__restrict __s,
		    __const wchar_t *__restrict __format, ...)
     throw ()  ;








 
extern int vfwscanf (__FILE *__restrict __s,
		     __const wchar_t *__restrict __format,
		     __gnuc_va_list __arg)
      ;



 
extern int vwscanf (__const wchar_t *__restrict __format,
		    __gnuc_va_list __arg)
      ;
 
extern int vswscanf (__const wchar_t *__restrict __s,
		     __const wchar_t *__restrict __format,
		     __gnuc_va_list __arg)
     throw ()  ;









 
extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);




 
extern wint_t getwchar (void);





 
extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);




 
extern wint_t putwchar (wchar_t __wc);






 
extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
			__FILE *__restrict __stream);




 
extern int fputws (__const wchar_t *__restrict __ws,
		   __FILE *__restrict __stream);





 
extern wint_t ungetwc (wint_t __wc, __FILE *__stream);









 
extern wint_t getwc_unlocked (__FILE *__stream);
extern wint_t getwchar_unlocked (void);






 
extern wint_t fgetwc_unlocked (__FILE *__stream);






 
extern wint_t fputwc_unlocked (wchar_t __wc, __FILE *__stream);







 
extern wint_t putwc_unlocked (wchar_t __wc, __FILE *__stream);
extern wint_t putwchar_unlocked (wchar_t __wc);







 
extern wchar_t *fgetws_unlocked (wchar_t *__restrict __ws, int __n,
				 __FILE *__restrict __stream);






 
extern int fputws_unlocked (__const wchar_t *__restrict __ws,
			    __FILE *__restrict __stream);





 
extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
			__const wchar_t *__restrict __format,
			__const struct tm *__restrict __tp) throw ();




 
extern size_t wcsftime_l (wchar_t *__restrict __s, size_t __maxsize,
			  __const wchar_t *__restrict __format,
			  __const struct tm *__restrict __tp,
			  __locale_t __loc) throw ();






 

 


}




 





namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::mbstate_t;

}




namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::wint_t;

  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;
  using ::swprintf;
  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;
  using ::vfwscanf;
  using ::vswprintf;
  using ::vswscanf;
  using ::vwprintf;
  using ::vwscanf;
  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;
  using ::wcstof;
  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;
  using ::wcschr;
  using ::wcspbrk;
  using ::wcsrchr;
  using ::wcsstr;
  using ::wmemchr;


}



namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  using ::wcstold;
  using ::wcstoll;
  using ::wcstoull;

}

namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;

}






























 


namespace std
{


  using std::wcstof;
  using std::vfwscanf;
  using std::vswscanf;
  using std::vwscanf;

  using std::wcstold;
  using std::wcstoll;
  using std::wcstoull;


}







namespace std __attribute__ ((__visibility__ ("default"))) {

  
  
  
  
  
  

  






   
  typedef long          streamoff;

  
  typedef ptrdiff_t	streamsize; 

  









 
  template<typename _StateT>
    class fpos
    {
    private:
      streamoff	                _M_off;
      _StateT			_M_state;

    public:
      
      
      
      
      fpos()
      : _M_off(0), _M_state() { }

      
      
      
      
      
      
      
      fpos(streamoff __off)
      : _M_off(__off), _M_state() { }

      
      operator streamoff() const { return _M_off; }

      
      void
      state(_StateT __st)
      { _M_state = __st; }

      
      _StateT
      state() const
      { return _M_state; }

      
      
      
      
      fpos&
      operator+=(streamoff __off)
      {
	_M_off += __off;
	return *this;
      }

      
      
      
      
      fpos&
      operator-=(streamoff __off)
      {
	_M_off -= __off;
	return *this;
      }

      
      
      
      
      
      
      fpos
      operator+(streamoff __off) const
      {
	fpos __pos(*this);
	__pos += __off;
	return __pos;
      }

      
      
      
      
      
      
      fpos
      operator-(streamoff __off) const
      {
	fpos __pos(*this);
	__pos -= __off;
	return __pos;
      }

      
      
      
      
      
      streamoff
      operator-(const fpos& __other) const
      { return _M_off - __other._M_off; }
    };

  
  
  
  
  
  template<typename _StateT>
    inline bool
    operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) == streamoff(__rhs); }

  template<typename _StateT>
    inline bool
    operator!=(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) != streamoff(__rhs); }

  
  
  
  
  typedef fpos<mbstate_t> streampos;
  
  typedef fpos<mbstate_t> wstreampos;

  
  typedef fpos<mbstate_t> u16streampos;
  
  typedef fpos<mbstate_t> u32streampos;

}


namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
	    typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
	   typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
	   typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
	   typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;

  
  
  class ios_base; 

  


























 
  typedef basic_ios<char> 		ios;		
  typedef basic_streambuf<char> 	streambuf;	
  typedef basic_istream<char> 		istream;	
  typedef basic_ostream<char> 		ostream;	
  typedef basic_iostream<char> 		iostream;	
  typedef basic_stringbuf<char> 	stringbuf;	
  typedef basic_istringstream<char> 	istringstream;	
  typedef basic_ostringstream<char> 	ostringstream;	
  typedef basic_stringstream<char> 	stringstream;	
  typedef basic_filebuf<char> 		filebuf;	
  typedef basic_ifstream<char> 		ifstream;	
  typedef basic_ofstream<char> 		ofstream;	
  typedef basic_fstream<char> 		fstream;	

  typedef basic_ios<wchar_t> 		wios;		
  typedef basic_streambuf<wchar_t> 	wstreambuf;	
  typedef basic_istream<wchar_t> 	wistream;	
  typedef basic_ostream<wchar_t> 	wostream;	
  typedef basic_iostream<wchar_t> 	wiostream;	
  typedef basic_stringbuf<wchar_t> 	wstringbuf;	
  typedef basic_istringstream<wchar_t> 	wistringstream;	
  typedef basic_ostringstream<wchar_t> 	wostringstream;	
  typedef basic_stringstream<wchar_t> 	wstringstream;	
  typedef basic_filebuf<wchar_t> 	wfilebuf;	
  typedef basic_ifstream<wchar_t> 	wifstream;	
  typedef basic_ofstream<wchar_t> 	wofstream;	
  typedef basic_fstream<wchar_t> 	wfstream;	
   

}




























 


 
 





















 


#pragma GCC visibility push(default)













































































































 

 
 
 






















 



 


 


















 




















 



 























 



 



 


 


 
 



 


 






 





 

 


 

 


 


 





 


 



 
 


 



 



















 



 















 



















 




 


 

 
struct sched_param
  {
    int __sched_priority;
  };

extern "C" {

 
extern int clone (int (*__fn) (void *__arg), void *__child_stack,
		  int __flags, void *__arg, ...) throw ();

 
extern int unshare (int __flags) throw ();

 
extern int sched_getcpu (void) throw ();

}


 
struct __sched_param
  {
    int __sched_priority;
  };


 

 
typedef unsigned long int __cpu_mask;

 

 
typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;

 





extern "C" {

extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
  throw ();
extern cpu_set_t *__sched_cpualloc (size_t __count) throw () ;
extern void __sched_cpufree (cpu_set_t *__set) throw ();

}

 


extern "C" {

 
extern int sched_setparam (__pid_t __pid, __const struct sched_param *__param)
     throw ();

 
extern int sched_getparam (__pid_t __pid, struct sched_param *__param) throw ();

 
extern int sched_setscheduler (__pid_t __pid, int __policy,
			       __const struct sched_param *__param) throw ();

 
extern int sched_getscheduler (__pid_t __pid) throw ();

 
extern int sched_yield (void) throw ();

 
extern int sched_get_priority_max (int __algorithm) throw ();

 
extern int sched_get_priority_min (int __algorithm) throw ();

 
extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) throw ();


 






 
extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
			      __const cpu_set_t *__cpuset) throw ();

 
extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
			      cpu_set_t *__cpuset) throw ();

}

















 



 



extern "C" {


 






















 



 



 


 


 
 



 


 






 





 

 


 

 


 


 





 


 



 
 


 



 




 

















 



 




 


 


 
 
 
 
 
 
 

 



 










 
struct tm
{
  int tm_sec;			 
  int tm_min;			 
  int tm_hour;			 
  int tm_mday;			 
  int tm_mon;			 
  int tm_year;			 
  int tm_wday;			 
  int tm_yday;			 
  int tm_isdst;			 

  long int tm_gmtoff;		 
  __const char *tm_zone;	 
};




 
struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };

 
struct sigevent;






 
extern clock_t clock (void) throw ();

 
extern time_t time (time_t *__timer) throw ();

 
extern double difftime (time_t __time1, time_t __time0)
     throw () __attribute__ ((__const__));

 
extern time_t mktime (struct tm *__tp) throw ();




 
extern size_t strftime (char *__restrict __s, size_t __maxsize,
			__const char *__restrict __format,
			__const struct tm *__restrict __tp) throw ();



 
extern char *strptime (__const char *__restrict __s,
		       __const char *__restrict __fmt, struct tm *__tp)
     throw ();


 

extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
			  __const char *__restrict __format,
			  __const struct tm *__restrict __tp,
			  __locale_t __loc) throw ();

extern char *strptime_l (__const char *__restrict __s,
			 __const char *__restrict __fmt, struct tm *__tp,
			 __locale_t __loc) throw ();




 
extern struct tm *gmtime (__const time_t *__timer) throw ();


 
extern struct tm *localtime (__const time_t *__timer) throw ();



 
extern struct tm *gmtime_r (__const time_t *__restrict __timer,
			    struct tm *__restrict __tp) throw ();


 
extern struct tm *localtime_r (__const time_t *__restrict __timer,
			       struct tm *__restrict __tp) throw ();



 
extern char *asctime (__const struct tm *__tp) throw ();

 
extern char *ctime (__const time_t *__timer) throw ();


 


 
extern char *asctime_r (__const struct tm *__restrict __tp,
			char *__restrict __buf) throw ();

 
extern char *ctime_r (__const time_t *__restrict __timer,
		      char *__restrict __buf) throw ();


 
extern char *__tzname[2];	 
extern int __daylight;		 
extern long int __timezone;	 


 
extern char *tzname[2];


 
extern void tzset (void) throw ();

extern int daylight;
extern long int timezone;


 
extern int stime (__const time_t *__when) throw ();



 



 

 
extern time_t timegm (struct tm *__tp) throw ();

 
extern time_t timelocal (struct tm *__tp) throw ();

 
extern int dysize (int __year) throw ()  __attribute__ ((__const__));





 
extern int nanosleep (__const struct timespec *__requested_time,
		      struct timespec *__remaining);


 
extern int clock_getres (clockid_t __clock_id, struct timespec *__res) throw ();

 
extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) throw ();

 
extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     throw ();




 
extern int clock_nanosleep (clockid_t __clock_id, int __flags,
			    __const struct timespec *__req,
			    struct timespec *__rem);

 
extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) throw ();


 
extern int timer_create (clockid_t __clock_id,
			 struct sigevent *__restrict __evp,
			 timer_t *__restrict __timerid) throw ();

 
extern int timer_delete (timer_t __timerid) throw ();

 
extern int timer_settime (timer_t __timerid, int __flags,
			  __const struct itimerspec *__restrict __value,
			  struct itimerspec *__restrict __ovalue) throw ();

 
extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     throw ();

 
extern int timer_getoverrun (timer_t __timerid) throw ();












 
extern int getdate_err;







 
extern struct tm *getdate (__const char *__string);










 
extern int getdate_r (__const char *__restrict __string,
		      struct tm *__restrict __resbufp);

}



















 

 


 



typedef long int __jmp_buf[8];


 



 
enum
{
  PTHREAD_CREATE_JOINABLE,
  PTHREAD_CREATE_DETACHED
};


 
enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP
  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL
   
  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP
};


 
enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};


 
enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};


 


 
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};

 


 
enum
{
  PTHREAD_INHERIT_SCHED,
  PTHREAD_EXPLICIT_SCHED
};


 
enum
{
  PTHREAD_SCOPE_SYSTEM,
  PTHREAD_SCOPE_PROCESS
};


 
enum
{
  PTHREAD_PROCESS_PRIVATE,
  PTHREAD_PROCESS_SHARED
};



 


 
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);              
  void *__arg;                             
  int __canceltype;                        
  struct _pthread_cleanup_buffer *__prev;  
};

 
enum
{
  PTHREAD_CANCEL_ENABLE,
  PTHREAD_CANCEL_DISABLE
};
enum
{
  PTHREAD_CANCEL_DEFERRED,
  PTHREAD_CANCEL_ASYNCHRONOUS
};


 




 


extern "C" {



 
extern int pthread_create (pthread_t *__restrict __newthread,
			   __const pthread_attr_t *__restrict __attr,
			   void *(*__start_routine) (void *),
			   void *__restrict __arg) throw () __attribute__ ((__nonnull__ (1, 3)));




 
extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));






 
extern int pthread_join (pthread_t __th, void **__thread_return);


 
extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) throw ();






 
extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
				 __const struct timespec *__abstime);




 
extern int pthread_detach (pthread_t __th) throw ();


 
extern pthread_t pthread_self (void) throw () __attribute__ ((__const__));

 
extern int pthread_equal (pthread_t __thread1, pthread_t __thread2) throw ();


 



 
extern int pthread_attr_init (pthread_attr_t *__attr) throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_attr_destroy (pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_attr_getdetachstate (__const pthread_attr_t *__attr,
					int *__detachstate)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
					int __detachstate)
     throw () __attribute__ ((__nonnull__ (1)));


 
extern int pthread_attr_getguardsize (__const pthread_attr_t *__attr,
				      size_t *__guardsize)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
				      size_t __guardsize)
     throw () __attribute__ ((__nonnull__ (1)));


 
extern int pthread_attr_getschedparam (__const pthread_attr_t *__restrict
				       __attr,
				       struct sched_param *__restrict __param)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
				       __const struct sched_param *__restrict
				       __param) throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_attr_getschedpolicy (__const pthread_attr_t *__restrict
					__attr, int *__restrict __policy)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_attr_getinheritsched (__const pthread_attr_t *__restrict
					 __attr, int *__restrict __inherit)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
					 int __inherit)
     throw () __attribute__ ((__nonnull__ (1)));


 
extern int pthread_attr_getscope (__const pthread_attr_t *__restrict __attr,
				  int *__restrict __scope)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_attr_getstackaddr (__const pthread_attr_t *__restrict
				      __attr, void **__restrict __stackaddr)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__deprecated__));




 
extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
				      void *__stackaddr)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__));

 
extern int pthread_attr_getstacksize (__const pthread_attr_t *__restrict
				      __attr, size_t *__restrict __stacksize)
     throw () __attribute__ ((__nonnull__ (1, 2)));



 
extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
				      size_t __stacksize)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_attr_getstack (__const pthread_attr_t *__restrict __attr,
				  void **__restrict __stackaddr,
				  size_t *__restrict __stacksize)
     throw () __attribute__ ((__nonnull__ (1, 2, 3)));



 
extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
				  size_t __stacksize) throw () __attribute__ ((__nonnull__ (1)));


 
extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
					size_t __cpusetsize,
					__const cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (1, 3)));


 
extern int pthread_attr_getaffinity_np (__const pthread_attr_t *__attr,
					size_t __cpusetsize,
					cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (1, 3)));




 
extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (2)));


 


 
extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
				  __const struct sched_param *__param)
     throw () __attribute__ ((__nonnull__ (3)));

 
extern int pthread_getschedparam (pthread_t __target_thread,
				  int *__restrict __policy,
				  struct sched_param *__restrict __param)
     throw () __attribute__ ((__nonnull__ (2, 3)));

 
extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     throw ();


 
extern int pthread_getname_np (pthread_t __target_thread, char *__buf,
			       size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));

 
extern int pthread_setname_np (pthread_t __target_thread, __const char *__name)
     throw () __attribute__ ((__nonnull__ (2)));


 
extern int pthread_getconcurrency (void) throw ();

 
extern int pthread_setconcurrency (int __level) throw ();




 
extern int pthread_yield (void) throw ();



 
extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
				   __const cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (3)));

 
extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
				   cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (3)));


 







 
extern int pthread_once (pthread_once_t *__once_control,
			 void (*__init_routine) (void)) __attribute__ ((__nonnull__ (1, 2)));






 


 
extern int pthread_setcancelstate (int __state, int *__oldstate);


 
extern int pthread_setcanceltype (int __type, int *__oldtype);

 
extern int pthread_cancel (pthread_t __th);



 
extern void pthread_testcancel (void);


 

typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));

 


 
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};

 
class __pthread_cleanup_class
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;

 public:
  __pthread_cleanup_class (void (*__fct) (void *), void *__arg)
    : __cancel_routine (__fct), __cancel_arg (__arg), __do_it (1) { }
  ~__pthread_cleanup_class () { if (__do_it) __cancel_routine (__cancel_arg); }
  void __setdoit (int __newval) { __do_it = __newval; }
  void __defer () { pthread_setcanceltype (PTHREAD_CANCEL_DEFERRED,
					   &__cancel_type); }
  void __restore () const { pthread_setcanceltype (__cancel_type, 0); }
};







 


 



 



 

 
struct __jmp_buf_tag;
extern int __sigsetjmp (struct __jmp_buf_tag *__env, int __savemask) throw ();


 

 
extern int pthread_mutex_init (pthread_mutex_t *__mutex,
			       __const pthread_mutexattr_t *__mutexattr)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
				    __const struct timespec *__restrict
				    __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));


 
extern int pthread_mutex_getprioceiling (__const pthread_mutex_t *
					 __restrict __mutex,
					 int *__restrict __prioceiling)
     throw () __attribute__ ((__nonnull__ (1, 2)));


 
extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
					 int __prioceiling,
					 int *__restrict __old_ceiling)
     throw () __attribute__ ((__nonnull__ (1, 3)));


 
extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));
extern int pthread_mutex_consistent_np (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));


 


 
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_mutexattr_getpshared (__const pthread_mutexattr_t *
					 __restrict __attr,
					 int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
					 int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_mutexattr_gettype (__const pthread_mutexattr_t *__restrict
				      __attr, int *__restrict __kind)
     throw () __attribute__ ((__nonnull__ (1, 2)));



 
extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_mutexattr_getprotocol (__const pthread_mutexattr_t *
					  __restrict __attr,
					  int *__restrict __protocol)
     throw () __attribute__ ((__nonnull__ (1, 2)));


 
extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
					  int __protocol)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_mutexattr_getprioceiling (__const pthread_mutexattr_t *
					     __restrict __attr,
					     int *__restrict __prioceiling)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
					     int __prioceiling)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_mutexattr_getrobust (__const pthread_mutexattr_t *__attr,
					int *__robustness)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_mutexattr_getrobust_np (__const pthread_mutexattr_t *__attr,
					   int *__robustness)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
					int __robustness)
     throw () __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *__attr,
					   int __robustness)
     throw () __attribute__ ((__nonnull__ (1)));


 


 
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
				__const pthread_rwlockattr_t *__restrict
				__attr) throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
				       __const struct timespec *__restrict
				       __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
				       __const struct timespec *__restrict
				       __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


 

 
extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_rwlockattr_getpshared (__const pthread_rwlockattr_t *
					  __restrict __attr,
					  int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
					  int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_rwlockattr_getkind_np (__const pthread_rwlockattr_t *
					  __restrict __attr,
					  int *__restrict __pref)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
					  int __pref) throw () __attribute__ ((__nonnull__ (1)));


 


 
extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
			      __const pthread_condattr_t *__restrict
			      __cond_attr) throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_cond_destroy (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_cond_signal (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));





 
extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
			      pthread_mutex_t *__restrict __mutex)
     __attribute__ ((__nonnull__ (1, 2)));







 
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
				   pthread_mutex_t *__restrict __mutex,
				   __const struct timespec *__restrict
				   __abstime) __attribute__ ((__nonnull__ (1, 2, 3)));

 

 
extern int pthread_condattr_init (pthread_condattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_condattr_getpshared (__const pthread_condattr_t *
					__restrict __attr,
					int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
					int __pshared) throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_condattr_getclock (__const pthread_condattr_t *
				      __restrict __attr,
				      __clockid_t *__restrict __clock_id)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
				      __clockid_t __clock_id)
     throw () __attribute__ ((__nonnull__ (1)));


 


 
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


 


 
extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
				 __const pthread_barrierattr_t *__restrict
				 __attr, unsigned int __count)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     throw () __attribute__ ((__nonnull__ (1)));


 
extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_barrierattr_getpshared (__const pthread_barrierattr_t *
					   __restrict __attr,
					   int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
					   int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));


 






 
extern int pthread_key_create (pthread_key_t *__key,
			       void (*__destr_function) (void *))
     throw () __attribute__ ((__nonnull__ (1)));

 
extern int pthread_key_delete (pthread_key_t __key) throw ();

 
extern void *pthread_getspecific (pthread_key_t __key) throw ();

 
extern int pthread_setspecific (pthread_key_t __key,
				__const void *__pointer) throw () ;


 
extern int pthread_getcpuclockid (pthread_t __thread_id,
				  __clockid_t *__clock_id)
     throw () __attribute__ ((__nonnull__ (2)));











 

extern int pthread_atfork (void (*__prepare) (void),
			   void (*__parent) (void),
			   void (*__child) (void)) throw ();


 
extern __inline __attribute__ ((__gnu_inline__)) int
pthread_equal (pthread_t __thread1, pthread_t __thread2) throw ()
{
  return __thread1 == __thread2;
}

}


typedef pthread_t __gthread_t;
typedef pthread_key_t __gthread_key_t;
typedef pthread_once_t __gthread_once_t;
typedef pthread_mutex_t __gthread_mutex_t;
typedef pthread_mutex_t __gthread_recursive_mutex_t;
typedef pthread_cond_t __gthread_cond_t;
typedef struct timespec __gthread_time_t;


 



 



 
static __typeof(pthread_once) __gthrw_pthread_once __attribute__ ((__weakref__("pthread_once"))); 
static __typeof(pthread_getspecific) __gthrw_pthread_getspecific __attribute__ ((__weakref__("pthread_getspecific"))); 
static __typeof(pthread_setspecific) __gthrw_pthread_setspecific __attribute__ ((__weakref__("pthread_setspecific"))); 

static __typeof(pthread_create) __gthrw_pthread_create __attribute__ ((__weakref__("pthread_create"))); 
static __typeof(pthread_join) __gthrw_pthread_join __attribute__ ((__weakref__("pthread_join"))); 
static __typeof(pthread_equal) __gthrw_pthread_equal __attribute__ ((__weakref__("pthread_equal"))); 
static __typeof(pthread_self) __gthrw_pthread_self __attribute__ ((__weakref__("pthread_self"))); 
static __typeof(pthread_detach) __gthrw_pthread_detach __attribute__ ((__weakref__("pthread_detach"))); 
static __typeof(pthread_cancel) __gthrw_pthread_cancel __attribute__ ((__weakref__("pthread_cancel"))); 
static __typeof(sched_yield) __gthrw_sched_yield __attribute__ ((__weakref__("sched_yield"))); 

static __typeof(pthread_mutex_lock) __gthrw_pthread_mutex_lock __attribute__ ((__weakref__("pthread_mutex_lock"))); 
static __typeof(pthread_mutex_trylock) __gthrw_pthread_mutex_trylock __attribute__ ((__weakref__("pthread_mutex_trylock"))); 
static __typeof(pthread_mutex_timedlock) __gthrw_pthread_mutex_timedlock __attribute__ ((__weakref__("pthread_mutex_timedlock"))); 
static __typeof(pthread_mutex_unlock) __gthrw_pthread_mutex_unlock __attribute__ ((__weakref__("pthread_mutex_unlock"))); 
static __typeof(pthread_mutex_init) __gthrw_pthread_mutex_init __attribute__ ((__weakref__("pthread_mutex_init"))); 
static __typeof(pthread_mutex_destroy) __gthrw_pthread_mutex_destroy __attribute__ ((__weakref__("pthread_mutex_destroy"))); 

static __typeof(pthread_cond_broadcast) __gthrw_pthread_cond_broadcast __attribute__ ((__weakref__("pthread_cond_broadcast"))); 
static __typeof(pthread_cond_signal) __gthrw_pthread_cond_signal __attribute__ ((__weakref__("pthread_cond_signal"))); 
static __typeof(pthread_cond_wait) __gthrw_pthread_cond_wait __attribute__ ((__weakref__("pthread_cond_wait"))); 
static __typeof(pthread_cond_timedwait) __gthrw_pthread_cond_timedwait __attribute__ ((__weakref__("pthread_cond_timedwait"))); 
static __typeof(pthread_cond_destroy) __gthrw_pthread_cond_destroy __attribute__ ((__weakref__("pthread_cond_destroy"))); 

static __typeof(pthread_key_create) __gthrw_pthread_key_create __attribute__ ((__weakref__("pthread_key_create"))); 
static __typeof(pthread_key_delete) __gthrw_pthread_key_delete __attribute__ ((__weakref__("pthread_key_delete"))); 
static __typeof(pthread_mutexattr_init) __gthrw_pthread_mutexattr_init __attribute__ ((__weakref__("pthread_mutexattr_init"))); 
static __typeof(pthread_mutexattr_settype) __gthrw_pthread_mutexattr_settype __attribute__ ((__weakref__("pthread_mutexattr_settype"))); 
static __typeof(pthread_mutexattr_destroy) __gthrw_pthread_mutexattr_destroy __attribute__ ((__weakref__("pthread_mutexattr_destroy"))); 













 


static inline int
__gthread_active_p (void)
{
  static void *const __gthread_active_ptr 
    = __extension__ (void *) &__gthrw_pthread_cancel;
  return __gthread_active_ptr != 0;
}




static inline int
__gthread_create (__gthread_t *__threadid, void *(*__func) (void*),
		  void *__args)
{
  return __gthrw_pthread_create (__threadid, __null, __func, __args);
}

static inline int
__gthread_join (__gthread_t __threadid, void **__value_ptr)
{
  return __gthrw_pthread_join (__threadid, __value_ptr);
}

static inline int
__gthread_detach (__gthread_t __threadid)
{
  return __gthrw_pthread_detach (__threadid);
}

static inline int
__gthread_equal (__gthread_t __t1, __gthread_t __t2)
{
  return __gthrw_pthread_equal (__t1, __t2);
}

static inline __gthread_t
__gthread_self (void)
{
  return __gthrw_pthread_self ();
}

static inline int
__gthread_yield (void)
{
  return __gthrw_sched_yield ();
}

static inline int
__gthread_once (__gthread_once_t *__once, void (*__func) (void))
{
  if (__gthread_active_p ())
    return __gthrw_pthread_once (__once, __func);
  else
    return -1;
}

static inline int
__gthread_key_create (__gthread_key_t *__key, void (*__dtor) (void *))
{
  return __gthrw_pthread_key_create (__key, __dtor);
}

static inline int
__gthread_key_delete (__gthread_key_t __key)
{
  return __gthrw_pthread_key_delete (__key);
}

static inline void *
__gthread_getspecific (__gthread_key_t __key)
{
  return __gthrw_pthread_getspecific (__key);
}

static inline int
__gthread_setspecific (__gthread_key_t __key, const void *__ptr)
{
  return __gthrw_pthread_setspecific (__key, __ptr);
}

static inline int
__gthread_mutex_destroy (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_destroy (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_lock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_trylock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_timedlock (__gthread_mutex_t *__mutex,
			   const __gthread_time_t *__abs_timeout)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_timedlock (__mutex, __abs_timeout);
  else
    return 0;
}

static inline int
__gthread_mutex_unlock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_unlock (__mutex);
  else
    return 0;
}


static inline int
__gthread_recursive_mutex_lock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_lock (__mutex);
}

static inline int
__gthread_recursive_mutex_trylock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_trylock (__mutex);
}

static inline int
__gthread_recursive_mutex_timedlock (__gthread_recursive_mutex_t *__mutex,
				     const __gthread_time_t *__abs_timeout)
{
  return __gthread_mutex_timedlock (__mutex, __abs_timeout);
}

static inline int
__gthread_recursive_mutex_unlock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_unlock (__mutex);
}

static inline int
__gthread_cond_broadcast (__gthread_cond_t *__cond)
{
  return __gthrw_pthread_cond_broadcast (__cond);
}

static inline int
__gthread_cond_signal (__gthread_cond_t *__cond)
{
  return __gthrw_pthread_cond_signal (__cond);
}

static inline int
__gthread_cond_wait (__gthread_cond_t *__cond, __gthread_mutex_t *__mutex)
{
  return __gthrw_pthread_cond_wait (__cond, __mutex);
}

static inline int
__gthread_cond_timedwait (__gthread_cond_t *__cond, __gthread_mutex_t *__mutex,
			  const __gthread_time_t *__abs_timeout)
{
  return __gthrw_pthread_cond_timedwait (__cond, __mutex, __abs_timeout);
}

static inline int
__gthread_cond_wait_recursive (__gthread_cond_t *__cond,
			       __gthread_recursive_mutex_t *__mutex)
{
  return __gthread_cond_wait (__cond, __mutex);
}

static inline int
__gthread_cond_timedwait_recursive (__gthread_cond_t *__cond,
				    __gthread_recursive_mutex_t *__mutex,
				    const __gthread_time_t *__abs_timeout)
{
  return __gthread_cond_timedwait (__cond, __mutex, __abs_timeout);
}

static inline int
__gthread_cond_destroy (__gthread_cond_t* __cond)
{
  return __gthrw_pthread_cond_destroy (__cond);
}



 

#pragma GCC visibility pop



























 


typedef int _Atomic_word;















namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  
  
  
  
  static inline _Atomic_word 
  __exchange_and_add(volatile _Atomic_word* __mem, int __val)
  { return __sync_fetch_and_add(__mem, __val); }

  static inline void
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  { __sync_fetch_and_add(__mem, __val); }

  static inline _Atomic_word
  __exchange_and_add_single(_Atomic_word* __mem, int __val)
  {
    _Atomic_word __result = *__mem;
    *__mem += __val;
    return __result;
  }

  static inline void
  __atomic_add_single(_Atomic_word* __mem, int __val)
  { *__mem += __val; }

  static inline _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add_dispatch(_Atomic_word* __mem, int __val)
  {
    if (__gthread_active_p())
      return __exchange_and_add(__mem, __val);
    else
      return __exchange_and_add_single(__mem, __val);
  }

  static inline void
  __attribute__ ((__unused__))
  __atomic_add_dispatch(_Atomic_word* __mem, int __val)
  {
    if (__gthread_active_p())
      __atomic_add(__mem, __val);
    else
      __atomic_add_single(__mem, __val);
  }

}

































 



namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  
  
  
  
  
  enum _Lock_policy { _S_single, _S_mutex, _S_atomic }; 

  
  
  static const _Lock_policy __default_lock_policy = 
  _S_atomic;

  
  
  class __concurrence_lock_error : public std::exception
  {
  public:
    virtual char const*
    what() const throw()
    { return "__gnu_cxx::__concurrence_lock_error"; }
  };

  class __concurrence_unlock_error : public std::exception
  {
  public:
    virtual char const*
    what() const throw()
    { return "__gnu_cxx::__concurrence_unlock_error"; }
  };

  class __concurrence_broadcast_error : public std::exception
  {
  public:
    virtual char const*
    what() const throw()
    { return "__gnu_cxx::__concurrence_broadcast_error"; }
  };

  class __concurrence_wait_error : public std::exception
  {
  public:
    virtual char const*
    what() const throw()
    { return "__gnu_cxx::__concurrence_wait_error"; }
  };

  
  inline void
  __throw_concurrence_lock_error()
  {
    throw __concurrence_lock_error();
  }

  inline void
  __throw_concurrence_unlock_error()
  {
    throw __concurrence_unlock_error();
  }

  inline void
  __throw_concurrence_broadcast_error()
  {
    throw __concurrence_broadcast_error();
  }

  inline void
  __throw_concurrence_wait_error()
  {
    throw __concurrence_wait_error();
  }
 
  class __mutex 
  {
  private:
    __gthread_mutex_t _M_mutex;

    __mutex(const __mutex&);
    __mutex& operator=(const __mutex&);

  public:
    __mutex() 
    { 
      if (__gthread_active_p())
	{
	  __gthread_mutex_t __tmp = { { 0, 0, 0, 0, 0, 0, { 0, 0 } } };
	  _M_mutex = __tmp;
	}
    }

    void lock()
    {
      if (__gthread_active_p())
	{
	  if (__gthread_mutex_lock(&_M_mutex) != 0)
	    __throw_concurrence_lock_error();
	}
    }
    
    void unlock()
    {
      if (__gthread_active_p())
	{
	  if (__gthread_mutex_unlock(&_M_mutex) != 0)
	    __throw_concurrence_unlock_error();
	}
    }

    __gthread_mutex_t* gthread_mutex(void)
      { return &_M_mutex; }
  };

  class __recursive_mutex 
  {
  private:
    __gthread_recursive_mutex_t _M_mutex;

    __recursive_mutex(const __recursive_mutex&);
    __recursive_mutex& operator=(const __recursive_mutex&);

  public:
    __recursive_mutex() 
    { 
      if (__gthread_active_p())
	{
	  __gthread_recursive_mutex_t __tmp = { { 0, 0, 0, 0, PTHREAD_MUTEX_RECURSIVE_NP, 0, { 0, 0 } } };
	  _M_mutex = __tmp;
	}
    }

    void lock()
    { 
      if (__gthread_active_p())
	{
	  if (__gthread_recursive_mutex_lock(&_M_mutex) != 0)
	    __throw_concurrence_lock_error();
	}
    }
    
    void unlock()
    { 
      if (__gthread_active_p())
	{
	  if (__gthread_recursive_mutex_unlock(&_M_mutex) != 0)
	    __throw_concurrence_unlock_error();
	}
    }

    __gthread_recursive_mutex_t* gthread_recursive_mutex(void)
      { return &_M_mutex; }
  };

  
  
  
  class __scoped_lock
  {
  public:
    typedef __mutex __mutex_type;

  private:
    __mutex_type& _M_device;

    __scoped_lock(const __scoped_lock&);
    __scoped_lock& operator=(const __scoped_lock&);

  public:
    explicit __scoped_lock(__mutex_type& __name) : _M_device(__name)
    { _M_device.lock(); }

    ~__scoped_lock() throw()
    { _M_device.unlock(); }
  };

  class __cond
  {
  private:
    __gthread_cond_t _M_cond;

    __cond(const __cond&);
    __cond& operator=(const __cond&);

  public:
    __cond() 
    { 
      if (__gthread_active_p())
	{
	  __gthread_cond_t __tmp = { { 0, 0, 0, 0, 0, (void *) 0, 0, 0 } };
	  _M_cond = __tmp;
	}
    }

    void broadcast()
    {
      if (__gthread_active_p())
	{
	  if (__gthread_cond_broadcast(&_M_cond) != 0)
	    __throw_concurrence_broadcast_error();
	}
    }

    void wait(__mutex *mutex)
    {
      {
	  if (__gthread_cond_wait(&_M_cond, mutex->gthread_mutex()) != 0)
	    __throw_concurrence_wait_error();
      }
    }

    void wait_recursive(__recursive_mutex *mutex)
    {
      {
	  if (__gthread_cond_wait_recursive(&_M_cond,
					    mutex->gthread_recursive_mutex())
	      != 0)
	    __throw_concurrence_wait_error();
      }
    }
  };

}


















































 




 


namespace std __attribute__ ((__visibility__ ("default"))) {

  
  































 
  

 
  template<typename _Arg, typename _Result>
    struct unary_function
    {
      typedef _Arg argument_type;   
                                    

      typedef _Result result_type;  
    };

  

 
  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {
      typedef _Arg1 first_argument_type;   
                                           

      typedef _Arg2 second_argument_type;  
      typedef _Result result_type;         
    };
   

  
  








 
  
  template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };

  
  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };

  
  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };

  
  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };

  
  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };

  
  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };
   

  
  






 
  
  template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };

  
  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };

  
  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };

  
  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };

  
  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };

  
  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };
   

  
  






 
  
  template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };

  
  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };

  
  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };
   

  
  
  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };

  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };

  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };

  
  


























 
  
  template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };

  
  template<typename _Predicate>
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }

  
  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
			     typename _Predicate::second_argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::first_argument_type& __x,
		 const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };

  
  template<typename _Predicate>
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
   

  
  



















 
  
  template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);

    public:
      pointer_to_unary_function() { }

      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };

  
  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }

  
  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);

    public:
      pointer_to_binary_function() { }

      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };

  
  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }
   

  template<typename _Tp>
    struct _Identity : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }

      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };

  template<typename _Pair>
    struct _Select1st : public unary_function<_Pair,
					      typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }

      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }
    };

  template<typename _Pair>
    struct _Select2nd : public unary_function<_Pair,
					      typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }

      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };

  
  













 
  
  
  template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
    };

  
  
  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };

  
  
  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
  };

  
  
  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };

  
  
  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };

  
  
  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };

  
  
  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };

  
  
  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };

  
  
  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

   

}


















































 




 


namespace std __attribute__ ((__visibility__ ("default"))) {

  
  






























 
  
  template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
			    typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;

    public:
      binder1st(const _Operation& __x,
		const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }

      
      
      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } __attribute__ ((__deprecated__));

  
  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }

  
  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
			    typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;

    public:
      binder2nd(const _Operation& __x,
		const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }

      
      
      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } __attribute__ ((__deprecated__));

  
  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    } 
   

}





























 





























 





namespace std
{
  
  template<typename _Tp>
    struct __add_c_ref
    { typedef const _Tp& type; };

  template<typename _Tp>
    struct __add_c_ref<_Tp&>
    { typedef _Tp& type; };

  
  template<typename _Tp>
    struct __add_ref
    { typedef _Tp& type; };

  template<typename _Tp>
    struct __add_ref<_Tp&>
    { typedef _Tp& type; };

  template<std::size_t _Idx, typename _Head, bool _IsEmpty>
    struct _Head_base;

  template<std::size_t _Idx, typename _Head>
    struct _Head_base<_Idx, _Head, true>
    : public _Head
    {
      _Head_base()
      : _Head() { }

      _Head_base(const _Head& __h)
      : _Head(__h) { }

      template<typename _UHead>
        _Head_base(_UHead&& __h)
	: _Head(std::forward<_UHead>(__h)) { }

      _Head&       _M_head()       { return *this; }
      const _Head& _M_head() const { return *this; }
    
      void _M_swap_impl(_Head&&) {   }
    };

  template<std::size_t _Idx, typename _Head>
    struct _Head_base<_Idx, _Head, false>
    {
      _Head_base()
      : _M_head_impl() { }

      _Head_base(const _Head& __h)
      : _M_head_impl(__h) { }

      template<typename _UHead>
        _Head_base(_UHead&& __h)
	: _M_head_impl(std::forward<_UHead>(__h)) { }

      _Head&       _M_head()       { return _M_head_impl; }
      const _Head& _M_head() const { return _M_head_impl; }        

      void
      _M_swap_impl(_Head&& __h)
      { 
	using std::swap;
	swap(__h, _M_head_impl);
      }

      _Head _M_head_impl; 
    };

  






 
  template<std::size_t _Idx, typename... _Elements>
    struct _Tuple_impl; 

  


 
  template<std::size_t _Idx>
    struct _Tuple_impl<_Idx>
    { 
    protected:
      void _M_swap_impl(_Tuple_impl&&) {   }
    };

  



 
  template<std::size_t _Idx, typename _Head, typename... _Tail>
    struct _Tuple_impl<_Idx, _Head, _Tail...>
    : public _Tuple_impl<_Idx + 1, _Tail...>,
      private _Head_base<_Idx, _Head, std::is_empty<_Head>::value>
    {
      typedef _Tuple_impl<_Idx + 1, _Tail...> _Inherited;
      typedef _Head_base<_Idx, _Head, std::is_empty<_Head>::value> _Base;

      _Head&            _M_head()       { return _Base::_M_head(); }
      const _Head&      _M_head() const { return _Base::_M_head(); }

      _Inherited&       _M_tail()       { return *this; }
      const _Inherited& _M_tail() const { return *this; }

      _Tuple_impl()
      : _Inherited(), _Base() { }

      explicit 
      _Tuple_impl(const _Head& __head, const _Tail&... __tail)
      : _Inherited(__tail...), _Base(__head) { }

      template<typename _UHead, typename... _UTail> 
        explicit
        _Tuple_impl(_UHead&& __head, _UTail&&... __tail)
	: _Inherited(std::forward<_UTail>(__tail)...),
	  _Base(std::forward<_UHead>(__head)) { }

      _Tuple_impl(const _Tuple_impl& __in)
      : _Inherited(__in._M_tail()), _Base(__in._M_head()) { }

      _Tuple_impl(_Tuple_impl&& __in)
      : _Inherited(std::move<_Inherited&&>(__in._M_tail())),
	_Base(std::forward<_Head>(__in._M_head())) { }

      template<typename... _UElements>
        _Tuple_impl(const _Tuple_impl<_Idx, _UElements...>& __in)
	: _Inherited(__in._M_tail()), _Base(__in._M_head()) { }

      template<typename... _UElements>
        _Tuple_impl(_Tuple_impl<_Idx, _UElements...>&& __in)
	: _Inherited(std::move<typename _Tuple_impl<_Idx, _UElements...>::
		     _Inherited&&>(__in._M_tail())),
	  _Base(std::forward<typename _Tuple_impl<_Idx, _UElements...>::
		_Base>(__in._M_head())) { }

      _Tuple_impl&
      operator=(const _Tuple_impl& __in)
      {
	_M_head() = __in._M_head();
	_M_tail() = __in._M_tail();
	return *this;
      }

      _Tuple_impl&
      operator=(_Tuple_impl&& __in)
      {
	_M_head() = std::move(__in._M_head());
	_M_tail() = std::move(__in._M_tail());
	return *this;
      }

      template<typename... _UElements>
        _Tuple_impl&
        operator=(const _Tuple_impl<_Idx, _UElements...>& __in)
        {
	  _M_head() = __in._M_head();
	  _M_tail() = __in._M_tail();
	  return *this;
	}

      template<typename... _UElements>
        _Tuple_impl&
        operator=(_Tuple_impl<_Idx, _UElements...>&& __in)
        {
	  _M_head() = std::move(__in._M_head());
	  _M_tail() = std::move(__in._M_tail());
	  return *this;
	}

    protected:
      void
      _M_swap_impl(_Tuple_impl&& __in)
      {
	_Base::_M_swap_impl(__in._M_head());
	_Inherited::_M_swap_impl(__in._M_tail());
      }
    };

  
  template<typename... _Elements> 
    class tuple : public _Tuple_impl<0, _Elements...>
    {
      typedef _Tuple_impl<0, _Elements...> _Inherited;

    public:
      tuple()
      : _Inherited() { }

      explicit
      tuple(const _Elements&... __elements)
      : _Inherited(__elements...) { }

      template<typename... _UElements>
        explicit
        tuple(_UElements&&... __elements)
	: _Inherited(std::forward<_UElements>(__elements)...) {	}

      tuple(const tuple& __in)
      : _Inherited(static_cast<const _Inherited&>(__in)) { }

      tuple(tuple&& __in)
      : _Inherited(std::move<_Inherited>(__in)) { }

      template<typename... _UElements>
        tuple(const tuple<_UElements...>& __in)
	: _Inherited(static_cast<const _Tuple_impl<0, _UElements...>&>(__in))
	{ }

      template<typename... _UElements>
        tuple(tuple<_UElements...>&& __in)
	: _Inherited(std::move<_Tuple_impl<0, _UElements...> >(__in)) { }

      
      template<typename... _UElements>
        tuple(tuple<_UElements...>& __in)
	: _Inherited(static_cast<const _Tuple_impl<0, _UElements...>&>(__in))
	{ }

      tuple&
      operator=(const tuple& __in)
      {
	static_cast<_Inherited&>(*this) = __in;
	return *this;
      }

      tuple&
      operator=(tuple&& __in)
      {
	static_cast<_Inherited&>(*this) = std::move(__in);
	return *this;
      }

      template<typename... _UElements>
        tuple&
        operator=(const tuple<_UElements...>& __in)
        {
	  static_cast<_Inherited&>(*this) = __in;
	  return *this;
	}

      template<typename... _UElements>
        tuple&
        operator=(tuple<_UElements...>&& __in)
        {
	  static_cast<_Inherited&>(*this) = std::move(__in);
	  return *this;
	}

      void
      swap(tuple&& __in)
      { _Inherited::_M_swap_impl(__in); }
    };


  template<>  
    class tuple<>
    {
    public:
      void swap(tuple&&) {   }
    };

  
  template<typename _T1, typename _T2>
    class tuple<_T1, _T2> : public _Tuple_impl<0, _T1, _T2>
    {
      typedef _Tuple_impl<0, _T1, _T2> _Inherited;

    public:
      tuple()
      : _Inherited() { }

      explicit
      tuple(const _T1& __a1, const _T2& __a2)
      : _Inherited(__a1, __a2) { }

      template<typename _U1, typename _U2>
        explicit
        tuple(_U1&& __a1, _U2&& __a2)
	: _Inherited(std::forward<_U1>(__a1), std::forward<_U2>(__a2)) { }

      tuple(const tuple& __in)
      : _Inherited(static_cast<const _Inherited&>(__in)) { }

      tuple(tuple&& __in)
      : _Inherited(std::move<_Inherited>(__in)) { }

      template<typename _U1, typename _U2>
        tuple(const tuple<_U1, _U2>& __in)
	: _Inherited(static_cast<const _Tuple_impl<0, _U1, _U2>&>(__in)) { }

      template<typename _U1, typename _U2>
        tuple(tuple<_U1, _U2>&& __in)
	: _Inherited(std::move<_Tuple_impl<0, _U1, _U2> >(__in)) { }

      template<typename _U1, typename _U2>
        tuple(const pair<_U1, _U2>& __in)
	: _Inherited(__in.first, __in.second) { }

      template<typename _U1, typename _U2>
        tuple(pair<_U1, _U2>&& __in)
	: _Inherited(std::move(__in.first), std::move(__in.second)) { }

      tuple&
      operator=(const tuple& __in)
      {
	static_cast<_Inherited&>(*this) = __in;
	return *this;
      }

      tuple&
      operator=(tuple&& __in)
      {
	static_cast<_Inherited&>(*this) = std::move(__in);
	return *this;
      }

      template<typename _U1, typename _U2>
        tuple&
        operator=(const tuple<_U1, _U2>& __in)
        {
	  static_cast<_Inherited&>(*this) = __in;
	  return *this;
	}

      template<typename _U1, typename _U2>
        tuple&
        operator=(tuple<_U1, _U2>&& __in)
        {
	  static_cast<_Inherited&>(*this) = std::move(__in);
	  return *this;
	}

      template<typename _U1, typename _U2>
        tuple&
        operator=(const pair<_U1, _U2>& __in)
        {
	  this->_M_head() = __in.first;
	  this->_M_tail()._M_head() = __in.second;
	  return *this;
	}

      template<typename _U1, typename _U2>
        tuple&
        operator=(pair<_U1, _U2>&& __in)
        {
	  this->_M_head() = std::move(__in.first);
	  this->_M_tail()._M_head() = std::move(__in.second);
	  return *this;
	}

      void
      swap(tuple&& __in)
      { 
	using std::swap;
	swap(this->_M_head(), __in._M_head());
	swap(this->_M_tail()._M_head(), __in._M_tail()._M_head());	
      }
    };


  
  template<std::size_t __i, typename _Tp>
    struct tuple_element;

  


 
  template<std::size_t __i, typename _Head, typename... _Tail>
    struct tuple_element<__i, tuple<_Head, _Tail...> >
    : tuple_element<__i - 1, tuple<_Tail...> > { };

  

 
  template<typename _Head, typename... _Tail>
    struct tuple_element<0, tuple<_Head, _Tail...> >
    {
      typedef _Head type;
    };

  
  template<typename _Tp>
    struct tuple_size;

  
  template<typename... _Elements>
    struct tuple_size<tuple<_Elements...> >
    {
      static const std::size_t value = sizeof...(_Elements);
    };

  template<typename... _Elements>
    const std::size_t tuple_size<tuple<_Elements...> >::value;

  template<std::size_t __i, typename _Head, typename... _Tail>
    inline typename __add_ref<_Head>::type
    __get_helper(_Tuple_impl<__i, _Head, _Tail...>& __t)
    { return __t._M_head(); }

  template<std::size_t __i, typename _Head, typename... _Tail>
    inline typename __add_c_ref<_Head>::type
    __get_helper(const _Tuple_impl<__i, _Head, _Tail...>& __t)
    { return __t._M_head(); }

  
  
  template<std::size_t __i, typename... _Elements>
    inline typename __add_ref<
                      typename tuple_element<__i, tuple<_Elements...> >::type
                    >::type
    get(tuple<_Elements...>& __t)
    { return __get_helper<__i>(__t); }

  template<std::size_t __i, typename... _Elements>
    inline typename __add_c_ref<
                      typename tuple_element<__i, tuple<_Elements...> >::type
                    >::type
    get(const tuple<_Elements...>& __t)
    { return __get_helper<__i>(__t); }

  
  template<std::size_t __check_equal_size, std::size_t __i, std::size_t __j,
	   typename _Tp, typename _Up>
    struct __tuple_compare;

  template<std::size_t __i, std::size_t __j, typename _Tp, typename _Up>
    struct __tuple_compare<0, __i, __j, _Tp, _Up>
    {
      static bool __eq(const _Tp& __t, const _Up& __u)
      {
	return (get<__i>(__t) == get<__i>(__u) &&
		__tuple_compare<0, __i + 1, __j, _Tp, _Up>::__eq(__t, __u));
      }
     
      static bool __less(const _Tp& __t, const _Up& __u)
      {
	return ((get<__i>(__t) < get<__i>(__u))
		|| !(get<__i>(__u) < get<__i>(__t)) &&
		__tuple_compare<0, __i + 1, __j, _Tp, _Up>::__less(__t, __u));
      }
    };

  template<std::size_t __i, typename _Tp, typename _Up>
    struct __tuple_compare<0, __i, __i, _Tp, _Up>
    {
      static bool __eq(const _Tp&, const _Up&)
      { return true; }
     
      static bool __less(const _Tp&, const _Up&)
      { return false; }
    };

  template<typename... _TElements, typename... _UElements>
    bool
    operator==(const tuple<_TElements...>& __t,
	       const tuple<_UElements...>& __u)
    {
      typedef tuple<_TElements...> _Tp;
      typedef tuple<_UElements...> _Up;
      return (__tuple_compare<tuple_size<_Tp>::value - tuple_size<_Up>::value,
	      0, tuple_size<_Tp>::value, _Tp, _Up>::__eq(__t, __u));
    }

  template<typename... _TElements, typename... _UElements>
    bool
    operator<(const tuple<_TElements...>& __t,
	      const tuple<_UElements...>& __u)
    {
      typedef tuple<_TElements...> _Tp;
      typedef tuple<_UElements...> _Up;
      return (__tuple_compare<tuple_size<_Tp>::value - tuple_size<_Up>::value,
	      0, tuple_size<_Tp>::value, _Tp, _Up>::__less(__t, __u));
    }

  template<typename... _TElements, typename... _UElements>
    inline bool
    operator!=(const tuple<_TElements...>& __t,
	       const tuple<_UElements...>& __u)
    { return !(__t == __u); }

  template<typename... _TElements, typename... _UElements>
    inline bool
    operator>(const tuple<_TElements...>& __t,
	      const tuple<_UElements...>& __u)
    { return __u < __t; }

  template<typename... _TElements, typename... _UElements>
    inline bool
    operator<=(const tuple<_TElements...>& __t,
	       const tuple<_UElements...>& __u)
    { return !(__u < __t); }

  template<typename... _TElements, typename... _UElements>
    inline bool
    operator>=(const tuple<_TElements...>& __t,
	       const tuple<_UElements...>& __u)
    { return !(__t < __u); }

  
  template<typename... _Elements>
    inline tuple<typename __decay_and_strip<_Elements>::__type...>
    make_tuple(_Elements&&... __args)
    {
      typedef tuple<typename __decay_and_strip<_Elements>::__type...>
	__result_type;
      return __result_type(std::forward<_Elements>(__args)...);
    }

  template<std::size_t...> struct __index_holder { };    

  template<std::size_t __i, typename _IdxHolder, typename... _Elements>
    struct __index_holder_impl;

  template<std::size_t __i, std::size_t... _Indexes, typename _IdxHolder,
	   typename... _Elements>
    struct __index_holder_impl<__i, __index_holder<_Indexes...>,
			       _IdxHolder, _Elements...> 
    {
      typedef typename __index_holder_impl<__i + 1,
					   __index_holder<_Indexes..., __i>,
					   _Elements...>::type type;
    };
 
  template<std::size_t __i, std::size_t... _Indexes>
    struct __index_holder_impl<__i, __index_holder<_Indexes...> >
    { typedef __index_holder<_Indexes...> type; };

  template<typename... _Elements>
    struct __make_index_holder 
    : __index_holder_impl<0, __index_holder<>, _Elements...> { };
    
  template<typename... _TElements, std::size_t... _TIdx,
	   typename... _UElements, std::size_t... _UIdx> 
    inline tuple<_TElements..., _UElements...> 
    __tuple_cat_helper(const tuple<_TElements...>& __t,
		       const __index_holder<_TIdx...>&,
                       const tuple<_UElements...>& __u,
		       const __index_holder<_UIdx...>&)
    { return tuple<_TElements..., _UElements...>(get<_TIdx>(__t)...,
						 get<_UIdx>(__u)...); }

  template<typename... _TElements, std::size_t... _TIdx,
	   typename... _UElements, std::size_t... _UIdx> 
    inline tuple<_TElements..., _UElements...> 
    __tuple_cat_helper(tuple<_TElements...>&& __t,
		       const __index_holder<_TIdx...>&, 
		       const tuple<_UElements...>& __u,
		       const __index_holder<_UIdx...>&)
    { return tuple<_TElements..., _UElements...>
	(std::move(get<_TIdx>(__t))..., get<_UIdx>(__u)...); }

  template<typename... _TElements, std::size_t... _TIdx,
	   typename... _UElements, std::size_t... _UIdx>
    inline tuple<_TElements..., _UElements...> 
    __tuple_cat_helper(const tuple<_TElements...>& __t,
		       const __index_holder<_TIdx...>&, 
		       tuple<_UElements...>&& __u,
		       const __index_holder<_UIdx...>&)
    { return tuple<_TElements..., _UElements...>
	(get<_TIdx>(__t)..., std::move(get<_UIdx>(__u))...); }

  template<typename... _TElements, std::size_t... _TIdx,
	   typename... _UElements, std::size_t... _UIdx> 
    inline tuple<_TElements..., _UElements...> 
    __tuple_cat_helper(tuple<_TElements...>&& __t,
		       const __index_holder<_TIdx...>&, 
		       tuple<_UElements...>&& __u,
		       const __index_holder<_UIdx...>&)
    { return tuple<_TElements..., _UElements...>
	(std::move(get<_TIdx>(__t))..., std::move(get<_UIdx>(__u))...); }

  template<typename... _TElements, typename... _UElements>
    inline tuple<_TElements..., _UElements...> 
    tuple_cat(const tuple<_TElements...>& __t, const tuple<_UElements...>& __u)
    {
      return __tuple_cat_helper(__t, typename
				__make_index_holder<_TElements...>::type(),
				__u, typename
				__make_index_holder<_UElements...>::type());
    }

  template<typename... _TElements, typename... _UElements>
    inline tuple<_TElements..., _UElements...> 
    tuple_cat(tuple<_TElements...>&& __t, const tuple<_UElements...>& __u)
    {
      return __tuple_cat_helper(std::move(__t), typename
				 __make_index_holder<_TElements...>::type(),
				 __u, typename
				 __make_index_holder<_UElements...>::type());
    }

  template<typename... _TElements, typename... _UElements>
    inline tuple<_TElements..., _UElements...> 
    tuple_cat(const tuple<_TElements...>& __t, tuple<_UElements...>&& __u)
    {
      return __tuple_cat_helper(__t, typename
				__make_index_holder<_TElements...>::type(),
				std::move(__u), typename
				__make_index_holder<_UElements...>::type());
    }

  template<typename... _TElements, typename... _UElements>
    inline tuple<_TElements..., _UElements...>
    tuple_cat(tuple<_TElements...>&& __t, tuple<_UElements...>&& __u)
    {
      return __tuple_cat_helper(std::move(__t), typename
				__make_index_holder<_TElements...>::type(),
				std::move(__u), typename
				__make_index_holder<_UElements...>::type());
    }

  template<typename... _Elements>
    inline tuple<_Elements&...>
    tie(_Elements&... __args)
    { return tuple<_Elements&...>(__args...); }

  template<typename... _Elements>
    inline void 
    swap(tuple<_Elements...>& __x, tuple<_Elements...>& __y)
    { __x.swap(__y); }

  template<typename... _Elements>
    inline void
    swap(tuple<_Elements...>&& __x, tuple<_Elements...>& __y)
    { __x.swap(__y); }

  template<typename... _Elements>
    inline void
    swap(tuple<_Elements...>& __x, tuple<_Elements...>&& __y)
    { __x.swap(__y); }

  
  
  struct _Swallow_assign
  {
    template<class _Tp>
      _Swallow_assign&
      operator=(const _Tp&)
      { return *this; }
  };

  
  namespace
  {
    _Swallow_assign ignore;
  }; 
}



namespace std __attribute__ ((__visibility__ ("default"))) {

  


 

  
  template<typename _Tp> 
    struct default_delete
      {
	default_delete() { }

	template<typename _Up>
	  default_delete(const default_delete<_Up>&) { }

	void
	operator()(_Tp* __ptr) const
	{
	  static_assert(sizeof(_Tp)>0,
			"can't delete pointer to incomplete type");
	  delete __ptr;
	}
    };

  
  
  
  template<typename _Tp> 
    struct default_delete<_Tp[]>
    {
      void
      operator()(_Tp* __ptr) const
      {
	static_assert(sizeof(_Tp)>0,
		      "can't delete pointer to incomplete type");
	delete [] __ptr;
      }
    };

  
  template <typename _Tp, typename _Tp_Deleter = default_delete<_Tp> > 
    class unique_ptr
    {
      typedef std::tuple<_Tp*, _Tp_Deleter>  __tuple_type;
      typedef __tuple_type unique_ptr::*     __unspecified_bool_type;
      typedef _Tp* unique_ptr::*             __unspecified_pointer_type;

    public:
      typedef _Tp*               pointer;
      typedef _Tp                element_type;      
      typedef _Tp_Deleter        deleter_type;

      
      unique_ptr()
      : _M_t(pointer(), deleter_type())
      { static_assert(!std::is_pointer<deleter_type>::value,
		      "constructed with null function pointer deleter"); }

      explicit
      unique_ptr(pointer __p)
      : _M_t(__p, deleter_type())
      { static_assert(!std::is_pointer<deleter_type>::value,
		     "constructed with null function pointer deleter"); }

      unique_ptr(pointer __p,
          typename std::conditional<std::is_reference<deleter_type>::value, 
            deleter_type, const deleter_type&>::type __d)
      : _M_t(__p, __d) { }

      unique_ptr(pointer __p,
          typename std::remove_reference<deleter_type>::type&& __d)
      : _M_t(std::move(__p), std::move(__d))
      { static_assert(!std::is_reference<deleter_type>::value, 
		      "rvalue deleter bound to reference"); }

      
      unique_ptr(unique_ptr&& __u) 
      : _M_t(__u.release(), std::forward<deleter_type>(__u.get_deleter())) { }

      template<typename _Up, typename _Up_Deleter> 
        unique_ptr(unique_ptr<_Up, _Up_Deleter>&& __u) 
        : _M_t(__u.release(), std::forward<deleter_type>(__u.get_deleter()))
	{ }

      
      ~unique_ptr() { reset(); }
    
      
      unique_ptr&
      operator=(unique_ptr&& __u)
      { 
        reset(__u.release()); 
        get_deleter() = std::move(__u.get_deleter()); 
        return *this;
      }

      template<typename _Up, typename _Up_Deleter> 
        unique_ptr&
        operator=(unique_ptr<_Up, _Up_Deleter>&& __u)
	{
          reset(__u.release()); 
          get_deleter() = std::move(__u.get_deleter()); 
          return *this;
        }

      unique_ptr&
      operator=(__unspecified_pointer_type) 
      {
	reset();
	return *this;
      }

      
      typename std::add_lvalue_reference<element_type>::type operator*() const
      {
	;
	return *get();
      }

      pointer
      operator->() const
      {
	;
	return get();
      }

      pointer
      get() const
      { return std::get<0>(_M_t); }

      typename std::add_lvalue_reference<deleter_type>::type
      get_deleter()
      { return std::get<1>(_M_t); }

      typename std::add_lvalue_reference<
          typename std::add_const<deleter_type>::type
              >::type
      get_deleter() const
      { return std::get<1>(_M_t); }

      operator __unspecified_bool_type () const
      { return get() == 0 ? 0 : &unique_ptr::_M_t; }

      
      pointer
      release() 
      {
	pointer __p = get();
	std::get<0>(_M_t) = 0;
	return __p;
      }

      void
      reset(pointer __p = pointer())
      {
	if (__p != get())
	  {
	    get_deleter()(get());
	    std::get<0>(_M_t) = __p;
	  }
      }

      void
      swap(unique_ptr&& __u)
      {
	using std::swap;
	swap(_M_t, __u._M_t);
      }

      
      unique_ptr(const unique_ptr&) = delete;

      template<typename _Up, typename _Up_Deleter> 
        unique_ptr(const unique_ptr<_Up, _Up_Deleter>&) = delete;

      unique_ptr& operator=(const unique_ptr&) = delete;

      template<typename _Up, typename _Up_Deleter> 
        unique_ptr& operator=(const unique_ptr<_Up, _Up_Deleter>&) = delete;

    private:
      __tuple_type _M_t;
  };
 
  
  
  
  
  template<typename _Tp, typename _Tp_Deleter> 
    class unique_ptr<_Tp[], _Tp_Deleter>
    {
      typedef std::tuple<_Tp*, _Tp_Deleter>  __tuple_type;
      typedef __tuple_type unique_ptr::*     __unspecified_bool_type;
      typedef _Tp* unique_ptr::*             __unspecified_pointer_type;

    public:
      typedef _Tp*               pointer;
      typedef _Tp                element_type;      
      typedef _Tp_Deleter        deleter_type;

      
      unique_ptr()
      : _M_t(pointer(), deleter_type())
      { static_assert(!std::is_pointer<deleter_type>::value,
		      "constructed with null function pointer deleter"); }

      explicit
      unique_ptr(pointer __p)
      : _M_t(__p, deleter_type())
      { static_assert(!std::is_pointer<deleter_type>::value,
		      "constructed with null function pointer deleter"); }

      unique_ptr(pointer __p,
          typename std::conditional<std::is_reference<deleter_type>::value, 
              deleter_type, const deleter_type&>::type __d) 
      : _M_t(__p, __d) { }

      unique_ptr(pointer __p,
		 typename std::remove_reference<deleter_type>::type && __d)
      : _M_t(std::move(__p), std::move(__d))
      { static_assert(!std::is_reference<deleter_type>::value, 
		      "rvalue deleter bound to reference"); }

      
      unique_ptr(unique_ptr&& __u) 
      : _M_t(__u.release(), std::forward<deleter_type>(__u.get_deleter())) { }

      template<typename _Up, typename _Up_Deleter> 
        unique_ptr(unique_ptr<_Up, _Up_Deleter>&& __u) 
	: _M_t(__u.release(), std::forward<deleter_type>(__u.get_deleter()))
	{ }

      
      ~unique_ptr() { reset(); }

      
      unique_ptr&
      operator=(unique_ptr&& __u)
      {
	reset(__u.release());
	get_deleter() = std::move(__u.get_deleter()); 
	return *this; 
      }

      template<typename _Up, typename _Up_Deleter> 
        unique_ptr&
        operator=(unique_ptr<_Up, _Up_Deleter>&& __u)
	{
          reset(__u.release());
          get_deleter() = std::move(__u.get_deleter()); 
          return *this;
        }

      unique_ptr&
      operator=(__unspecified_pointer_type)
      {
	reset();
	return *this;
      }

      
      typename std::add_lvalue_reference<element_type>::type 
      operator[](size_t __i) const 
      {
	;
	return get()[__i];
      }

      pointer
      get() const
      { return std::get<0>(_M_t); }

      typename std::add_lvalue_reference<deleter_type>::type 
      get_deleter()
      { return std::get<1>(_M_t); }

      typename std::add_lvalue_reference<
          typename std::add_const<deleter_type>::type
              >::type 
      get_deleter() const
      { return std::get<1>(_M_t); }    

      operator __unspecified_bool_type () const 
      { return get() == 0 ? 0 : &unique_ptr::_M_t; }
    
      
      pointer
      release() 
      {
	pointer __p = get();
	std::get<0>(_M_t) = 0;
	return __p;
      }

      void
      reset(pointer __p = pointer()) 
      {
	if (__p != get())
	{
	  get_deleter()(get());
	  std::get<0>(_M_t) = __p;
	}
      }

      
      template<typename _Up>
        void reset(_Up) = delete;

      void
      swap(unique_ptr&& __u)
      {
	using std::swap;
	swap(_M_t, __u._M_t);
      }

      
      unique_ptr(const unique_ptr&) = delete;
      unique_ptr& operator=(const unique_ptr&) = delete;

      
      
      template<typename _Up>
        unique_ptr(_Up*, typename
		   std::conditional<std::is_reference<deleter_type>::value,
		   deleter_type, const deleter_type&>::type,
		   typename std::enable_if<std::is_convertible<_Up*, 
		   pointer>::value>::type* = 0) = delete;

      template<typename _Up>
        unique_ptr(_Up*, typename std::remove_reference<deleter_type>::type&&,
		   typename std::enable_if<std::is_convertible<_Up*, 
		   pointer>::value>::type* = 0) = delete;

      template<typename _Up>
        explicit
        unique_ptr(_Up*, typename std::enable_if<std::is_convertible<_Up*, 
		   pointer>::value>::type* = 0) = delete;

    private:
      __tuple_type _M_t;
  };
  
  template<typename _Tp, typename _Tp_Deleter> 
    inline void
    swap(unique_ptr<_Tp, _Tp_Deleter>& __x,
	 unique_ptr<_Tp, _Tp_Deleter>& __y)
    { __x.swap(__y); }

  template<typename _Tp, typename _Tp_Deleter> 
    inline void
    swap(unique_ptr<_Tp, _Tp_Deleter>&& __x,
	 unique_ptr<_Tp, _Tp_Deleter>& __y)
    { __x.swap(__y); }

  template<typename _Tp, typename _Tp_Deleter> 
    inline void
    swap(unique_ptr<_Tp, _Tp_Deleter>& __x,
	 unique_ptr<_Tp, _Tp_Deleter>&& __y)
    { __x.swap(__y); }
  
  template<typename _Tp, typename _Tp_Deleter,
	   typename _Up, typename _Up_Deleter>
    inline bool
    operator==(const unique_ptr<_Tp, _Tp_Deleter>& __x,
	       const unique_ptr<_Up, _Up_Deleter>& __y)
    { return __x.get() == __y.get(); }

  template<typename _Tp, typename _Tp_Deleter,
	   typename _Up, typename _Up_Deleter>
    inline bool
    operator!=(const unique_ptr<_Tp, _Tp_Deleter>& __x,
	       const unique_ptr<_Up, _Up_Deleter>& __y)
    { return !(__x.get() == __y.get()); }

  template<typename _Tp, typename _Tp_Deleter,
	   typename _Up, typename _Up_Deleter>
    inline bool
    operator<(const unique_ptr<_Tp, _Tp_Deleter>& __x,
	      const unique_ptr<_Up, _Up_Deleter>& __y)
    { return __x.get() < __y.get(); }

  template<typename _Tp, typename _Tp_Deleter,
	   typename _Up, typename _Up_Deleter>
    inline bool
    operator<=(const unique_ptr<_Tp, _Tp_Deleter>& __x,
	       const unique_ptr<_Up, _Up_Deleter>& __y)
    { return !(__y.get() < __x.get()); }

  template<typename _Tp, typename _Tp_Deleter,
	   typename _Up, typename _Up_Deleter>
    inline bool
    operator>(const unique_ptr<_Tp, _Tp_Deleter>& __x,
	      const unique_ptr<_Up, _Up_Deleter>& __y)
    { return __y.get() < __x.get(); }

  template<typename _Tp, typename _Tp_Deleter,
	   typename _Up, typename _Up_Deleter>
    inline bool
    operator>=(const unique_ptr<_Tp, _Tp_Deleter>& __x,
	       const unique_ptr<_Up, _Up_Deleter>& __y)
    { return !(__x.get() < __y.get()); }

  

}






































 



 































 
































 

namespace std
{


  
  
  
  template<typename _Tp>
    struct hash : public std::unary_function<_Tp, size_t>
    {
      size_t
      operator()(_Tp __val) const;
    };

  
  template<typename _Tp>
    struct hash<_Tp*> : public std::unary_function<_Tp*, size_t>
    {
      size_t
      operator()(_Tp* __p) const
      { return reinterpret_cast<size_t>(__p); }
    };

  

  template< > inline size_t hash<bool> ::operator()(bool __val) const { return static_cast<size_t>(__val); };
  template< > inline size_t hash<char> ::operator()(char __val) const { return static_cast<size_t>(__val); };
  template< > inline size_t hash<signed char> ::operator()(signed char __val) const { return static_cast<size_t>(__val); };
  template< > inline size_t hash<unsigned char> ::operator()(unsigned char __val) const { return static_cast<size_t>(__val); };
  template< > inline size_t hash<wchar_t> ::operator()(wchar_t __val) const { return static_cast<size_t>(__val); };
  template< > inline size_t hash<char16_t> ::operator()(char16_t __val) const { return static_cast<size_t>(__val); };
  template< > inline size_t hash<char32_t> ::operator()(char32_t __val) const { return static_cast<size_t>(__val); };
  template< > inline size_t hash<short> ::operator()(short __val) const { return static_cast<size_t>(__val); };
  template< > inline size_t hash<int> ::operator()(int __val) const { return static_cast<size_t>(__val); };
  template< > inline size_t hash<long> ::operator()(long __val) const { return static_cast<size_t>(__val); };
  template< > inline size_t hash<long long> ::operator()(long long __val) const { return static_cast<size_t>(__val); };
  template< > inline size_t hash<unsigned short> ::operator()(unsigned short __val) const { return static_cast<size_t>(__val); };
  template< > inline size_t hash<unsigned int> ::operator()(unsigned int __val) const { return static_cast<size_t>(__val); };
  template< > inline size_t hash<unsigned long> ::operator()(unsigned long __val) const { return static_cast<size_t>(__val); };
  template< > inline size_t hash<unsigned long long> ::operator()(unsigned long long __val) const { return static_cast<size_t>(__val); };


  
  

  
  template<size_t = sizeof(size_t)>
    struct _Fnv_hash
    {
      static size_t
      hash(const char* __first, size_t __length)
      {
	size_t __result = 0;
	for (; __length > 0; --__length)
	  __result = (__result * 131) + *__first++;
	return __result;
      }
    };

  template<>
    struct _Fnv_hash<4>
    {
      static size_t
      hash(const char* __first, size_t __length)
      {
	size_t __result = static_cast<size_t>(2166136261UL);
	for (; __length > 0; --__length)
	  {
	    __result ^= static_cast<size_t>(*__first++);
	    __result *= static_cast<size_t>(16777619UL);
	  }
	return __result;
      }
    };
  
  template<>
    struct _Fnv_hash<8>
    {
      static size_t
      hash(const char* __first, size_t __length)
      {
	size_t __result =
	  static_cast<size_t>(14695981039346656037ULL);
	for (; __length > 0; --__length)
	  {
	    __result ^= static_cast<size_t>(*__first++);
	    __result *= static_cast<size_t>(1099511628211ULL);
	  }
	return __result;
      }
    };

  
  template<>
    inline size_t
    hash<float>::operator()(float __val) const
    {
      size_t __result = 0;
      
      
      if (__val != 0.0f)
	__result = _Fnv_hash<>::hash(reinterpret_cast<const char*>(&__val),
				     sizeof(__val));
      return __result;
    };

  
  template<>
    inline size_t
    hash<double>::operator()(double __val) const
    {
	size_t __result = 0;

	
	if (__val != 0.0)
	  __result = _Fnv_hash<>::hash(reinterpret_cast<const char*>(&__val),
				       sizeof(__val));
	return __result;
    };

  
  template<>
    size_t
    hash<long double>::operator()(long double __val) const;

  
  template<>
    size_t
    hash<string>::operator()(string) const;

  template<>
    size_t
    hash<const string&>::operator()(const string&) const;

  template<>
    size_t
    hash<wstring>::operator()(wstring) const;

  template<>
    size_t
    hash<const wstring&>::operator()(const wstring&) const;


}


namespace std
{
  struct error_code;

  template<>
    size_t
    hash<error_code>::operator()(error_code) const;
}





























 

namespace std
{


  template<typename _MemberPointer>
    class _Mem_fn;

  



 
  template<typename _Tp>
    class _Has_result_type_helper : __sfinae_types
    {
      template<typename _Up>
        struct _Wrap_type
	{ };

      template<typename _Up>
        static __one __test(_Wrap_type<typename _Up::result_type>*);

      template<typename _Up>
        static __two __test(...);

    public:
      static const bool value = sizeof(__test<_Tp>(0)) == 1;
    };

  template<typename _Tp>
    struct _Has_result_type
    : integral_constant<bool,
	      _Has_result_type_helper<typename remove_cv<_Tp>::type>::value>
    { };

  

 
  
  template<bool _Has_result_type, typename _Functor>
    struct _Maybe_get_result_type
    { };

  template<typename _Functor>
    struct _Maybe_get_result_type<true, _Functor>
    {
      typedef typename _Functor::result_type result_type;
    };

  


 
  template<typename _Functor>
    struct _Weak_result_type_impl
    : _Maybe_get_result_type<_Has_result_type<_Functor>::value, _Functor>
    {
    };

  
  template<typename _Res, typename... _ArgTypes> 
    struct _Weak_result_type_impl<_Res(_ArgTypes...)>
    {
      typedef _Res result_type;
    };

  
  template<typename _Res, typename... _ArgTypes> 
    struct _Weak_result_type_impl<_Res(&)(_ArgTypes...)>
    {
      typedef _Res result_type;
    };

  
  template<typename _Res, typename... _ArgTypes> 
    struct _Weak_result_type_impl<_Res(*)(_ArgTypes...)>
    {
      typedef _Res result_type;
    };

  
  template<typename _Res, typename _Class, typename... _ArgTypes> 
    struct _Weak_result_type_impl<_Res (_Class::*)(_ArgTypes...)>
    {
      typedef _Res result_type;
    };

  
  template<typename _Res, typename _Class, typename... _ArgTypes> 
    struct _Weak_result_type_impl<_Res (_Class::*)(_ArgTypes...) const>
    {
      typedef _Res result_type;
    };

  
  template<typename _Res, typename _Class, typename... _ArgTypes> 
    struct _Weak_result_type_impl<_Res (_Class::*)(_ArgTypes...) volatile>
    {
      typedef _Res result_type;
    };

  
  template<typename _Res, typename _Class, typename... _ArgTypes> 
    struct _Weak_result_type_impl<_Res (_Class::*)(_ArgTypes...)const volatile>
    {
      typedef _Res result_type;
    };

  


 
  template<typename _Functor>
    struct _Weak_result_type
    : _Weak_result_type_impl<typename remove_cv<_Functor>::type>
    {
    };

  template<typename _Signature>
    class result_of;

  




 
  template<bool _Has_result_type, typename _Signature>
    struct _Result_of_impl;

  
  template<typename _Res, typename _Class, typename _T1>
    struct _Result_of_impl<false, _Res _Class::*(_T1)>
    {
      typedef typename _Mem_fn<_Res _Class::*>
                ::template _Result_type<_T1>::type type;
    };

  


  
  template<typename _Functor, typename... _ArgTypes>
    class result_of<_Functor(_ArgTypes...)>
    : public _Result_of_impl<
               _Has_result_type<_Weak_result_type<_Functor> >::value,
               _Functor(_ArgTypes...)>
    {
    };

  
  template<typename _Functor, typename... _ArgTypes>
    struct _Result_of_impl<true, _Functor(_ArgTypes...)>
    {
      typedef typename _Weak_result_type<_Functor>::result_type type;
    };

  


 
  template<typename _Functor, typename... _ArgTypes>
    struct _Result_of_impl<false, _Functor(_ArgTypes...)>
    {
      typedef typename _Functor
                ::template result<_Functor(_ArgTypes...)>::type type;
    };

  


 
  template<typename _Functor>
    struct _Result_of_impl<false, _Functor()>
    {
      typedef void type;
    };

  
  template<typename _Tp>
    struct _Derives_from_unary_function : __sfinae_types
    {
    private:
      template<typename _T1, typename _Res>
        static __one __test(const volatile unary_function<_T1, _Res>*);

      
      
      static __two __test(...);

    public:
      static const bool value = sizeof(__test((_Tp*)0)) == 1;
    };

  
  template<typename _Tp>
    struct _Derives_from_binary_function : __sfinae_types
    {
    private:
      template<typename _T1, typename _T2, typename _Res>
        static __one __test(const volatile binary_function<_T1, _T2, _Res>*);

      
      
      static __two __test(...);

    public:
      static const bool value = sizeof(__test((_Tp*)0)) == 1;
    };

  
  template<typename _Tp, bool _IsFunctionType = is_function<_Tp>::value>
    struct _Function_to_function_pointer
    {
      typedef _Tp type;
    };

  template<typename _Tp>
    struct _Function_to_function_pointer<_Tp, true>
    {
      typedef _Tp* type;
    };

  


 
  template<typename _Functor, typename... _Args>
    inline
    typename __gnu_cxx::__enable_if<
             (!is_member_pointer<_Functor>::value
              && !is_function<_Functor>::value
              && !is_function<typename remove_pointer<_Functor>::type>::value),
             typename result_of<_Functor(_Args...)>::type
           >::__type
    __invoke(_Functor& __f, _Args&... __args)
    {
      return __f(__args...);
    }

  template<typename _Functor, typename... _Args>
    inline
    typename __gnu_cxx::__enable_if<
             (is_member_pointer<_Functor>::value
              && !is_function<_Functor>::value
              && !is_function<typename remove_pointer<_Functor>::type>::value),
             typename result_of<_Functor(_Args...)>::type
           >::__type
    __invoke(_Functor& __f, _Args&... __args)
    {
      return mem_fn(__f)(__args...);
    }

  
  template<typename _Functor, typename... _Args>
    inline
    typename __gnu_cxx::__enable_if<
             (is_pointer<_Functor>::value
              && is_function<typename remove_pointer<_Functor>::type>::value),
             typename result_of<_Functor(_Args...)>::type
           >::__type
    __invoke(_Functor __f, _Args&... __args)
    {
      return __f(__args...);
    }

  



 
  template<bool _Unary, bool _Binary, typename _Tp>
    struct _Reference_wrapper_base_impl;

  
  template<typename _Tp>
    struct _Reference_wrapper_base_impl<false, false, _Tp>
    : _Weak_result_type<_Tp>
    { };

  
  template<typename _Tp>
    struct _Reference_wrapper_base_impl<true, false, _Tp>
    : unary_function<typename _Tp::argument_type,
		     typename _Tp::result_type>
    { };

  
  template<typename _Tp>
    struct _Reference_wrapper_base_impl<false, true, _Tp>
    : binary_function<typename _Tp::first_argument_type,
		      typename _Tp::second_argument_type,
		      typename _Tp::result_type>
    { };

  
  
   template<typename _Tp>
    struct _Reference_wrapper_base_impl<true, true, _Tp>
    : unary_function<typename _Tp::argument_type,
		     typename _Tp::result_type>,
      binary_function<typename _Tp::first_argument_type,
		      typename _Tp::second_argument_type,
		      typename _Tp::result_type>
    {
      typedef typename _Tp::result_type result_type;
    };

  




 
  template<typename _Tp>
    struct _Reference_wrapper_base
    : _Reference_wrapper_base_impl<
      _Derives_from_unary_function<_Tp>::value,
      _Derives_from_binary_function<_Tp>::value,
      _Tp>
    { };

  
  template<typename _Res, typename _T1>
    struct _Reference_wrapper_base<_Res(_T1)>
    : unary_function<_T1, _Res>
    { };

  
  template<typename _Res, typename _T1, typename _T2>
    struct _Reference_wrapper_base<_Res(_T1, _T2)>
    : binary_function<_T1, _T2, _Res>
    { };

  
  template<typename _Res, typename _T1>
    struct _Reference_wrapper_base<_Res(*)(_T1)>
    : unary_function<_T1, _Res>
    { };

  
  template<typename _Res, typename _T1, typename _T2>
    struct _Reference_wrapper_base<_Res(*)(_T1, _T2)>
    : binary_function<_T1, _T2, _Res>
    { };

  
  template<typename _Res, typename _T1>
    struct _Reference_wrapper_base<_Res (_T1::*)()>
    : unary_function<_T1*, _Res>
    { };

  
  template<typename _Res, typename _T1, typename _T2>
    struct _Reference_wrapper_base<_Res (_T1::*)(_T2)>
    : binary_function<_T1*, _T2, _Res>
    { };

  
  template<typename _Res, typename _T1>
    struct _Reference_wrapper_base<_Res (_T1::*)() const>
    : unary_function<const _T1*, _Res>
    { };

  
  template<typename _Res, typename _T1, typename _T2>
    struct _Reference_wrapper_base<_Res (_T1::*)(_T2) const>
    : binary_function<const _T1*, _T2, _Res>
    { };

  
  template<typename _Res, typename _T1>
    struct _Reference_wrapper_base<_Res (_T1::*)() volatile>
    : unary_function<volatile _T1*, _Res>
    { };

  
  template<typename _Res, typename _T1, typename _T2>
    struct _Reference_wrapper_base<_Res (_T1::*)(_T2) volatile>
    : binary_function<volatile _T1*, _T2, _Res>
    { };

  
  template<typename _Res, typename _T1>
    struct _Reference_wrapper_base<_Res (_T1::*)() const volatile>
    : unary_function<const volatile _T1*, _Res>
    { };

  
  template<typename _Res, typename _T1, typename _T2>
    struct _Reference_wrapper_base<_Res (_T1::*)(_T2) const volatile>
    : binary_function<const volatile _T1*, _T2, _Res>
    { };

  
  template<typename _Tp>
    class reference_wrapper
    : public _Reference_wrapper_base<typename remove_cv<_Tp>::type>
    {
      
      
      typedef typename _Function_to_function_pointer<_Tp>::type
        _M_func_type;

      _Tp* _M_data;
    public:
      typedef _Tp type;

      explicit
      reference_wrapper(_Tp& __indata): _M_data(&__indata)
      { }

      reference_wrapper(const reference_wrapper<_Tp>& __inref):
      _M_data(__inref._M_data)
      { }

      reference_wrapper&
      operator=(const reference_wrapper<_Tp>& __inref)
      {
        _M_data = __inref._M_data;
        return *this;
      }

      operator _Tp&() const
      { return this->get(); }

      _Tp&
      get() const
      { return *_M_data; }

      template<typename... _Args>
        typename result_of<_M_func_type(_Args...)>::type
        operator()(_Args&... __args) const
        {
	  return __invoke(get(), __args...);
	}
    };


  
  template<typename _Tp>
    inline reference_wrapper<_Tp>
    ref(_Tp& __t)
    { return reference_wrapper<_Tp>(__t); }

  
  template<typename _Tp>
    inline reference_wrapper<const _Tp>
    cref(const _Tp& __t)
    { return reference_wrapper<const _Tp>(__t); }

  template<typename _Tp>
    inline reference_wrapper<_Tp>
    ref(reference_wrapper<_Tp> __t)
    { return ref(__t.get()); }

  template<typename _Tp>
    inline reference_wrapper<const _Tp>
    cref(reference_wrapper<_Tp> __t)
    { return cref(__t.get()); }

  template<typename _Tp, bool>
    struct _Mem_fn_const_or_non
    {
      typedef const _Tp& type;
    };

  template<typename _Tp>
    struct _Mem_fn_const_or_non<_Tp, false>
    {
      typedef _Tp& type;
    };

  



 
  template<typename _Res, typename... _ArgTypes> 
    struct _Maybe_unary_or_binary_function { };

  
  template<typename _Res, typename _T1> 
    struct _Maybe_unary_or_binary_function<_Res, _T1>
    : std::unary_function<_T1, _Res> { };

  
  template<typename _Res, typename _T1, typename _T2> 
    struct _Maybe_unary_or_binary_function<_Res, _T1, _T2>
    : std::binary_function<_T1, _T2, _Res> { };

  
  template<typename _Res, typename _Class, typename... _ArgTypes>
    class _Mem_fn<_Res (_Class::*)(_ArgTypes...)>
    : public _Maybe_unary_or_binary_function<_Res, _Class*, _ArgTypes...>
    {
      typedef _Res (_Class::*_Functor)(_ArgTypes...);

      template<typename _Tp>
        _Res
        _M_call(_Tp& __object, const volatile _Class *, 
                _ArgTypes... __args) const
        { return (__object.*__pmf)(__args...); }

      template<typename _Tp>
        _Res
        _M_call(_Tp& __ptr, const volatile void *, _ArgTypes... __args) const
        { return ((*__ptr).*__pmf)(__args...); }

    public:
      typedef _Res result_type;

      explicit _Mem_fn(_Functor __pmf) : __pmf(__pmf) { }

      
      _Res
      operator()(_Class& __object, _ArgTypes... __args) const
      { return (__object.*__pmf)(__args...); }

      
      _Res
      operator()(_Class* __object, _ArgTypes... __args) const
      { return (__object->*__pmf)(__args...); }

      
      template<typename _Tp>
        _Res
	operator()(_Tp& __object, _ArgTypes... __args) const
        { return _M_call(__object, &__object, __args...); }

    private:
      _Functor __pmf;
    };

  
  template<typename _Res, typename _Class, typename... _ArgTypes>
    class _Mem_fn<_Res (_Class::*)(_ArgTypes...) const>
    : public _Maybe_unary_or_binary_function<_Res, const _Class*, 
					     _ArgTypes...>
    {
      typedef _Res (_Class::*_Functor)(_ArgTypes...) const;

      template<typename _Tp>
        _Res
        _M_call(_Tp& __object, const volatile _Class *, 
                _ArgTypes... __args) const
        { return (__object.*__pmf)(__args...); }

      template<typename _Tp>
        _Res
        _M_call(_Tp& __ptr, const volatile void *, _ArgTypes... __args) const
        { return ((*__ptr).*__pmf)(__args...); }

    public:
      typedef _Res result_type;

      explicit _Mem_fn(_Functor __pmf) : __pmf(__pmf) { }

      
      _Res
      operator()(const _Class& __object, _ArgTypes... __args) const
      { return (__object.*__pmf)(__args...); }

      
      _Res
      operator()(const _Class* __object, _ArgTypes... __args) const
      { return (__object->*__pmf)(__args...); }

      
      template<typename _Tp>
        _Res operator()(_Tp& __object, _ArgTypes... __args) const
        { return _M_call(__object, &__object, __args...); }

    private:
      _Functor __pmf;
    };

  
  template<typename _Res, typename _Class, typename... _ArgTypes>
    class _Mem_fn<_Res (_Class::*)(_ArgTypes...) volatile>
    : public _Maybe_unary_or_binary_function<_Res, volatile _Class*, 
					     _ArgTypes...>
    {
      typedef _Res (_Class::*_Functor)(_ArgTypes...) volatile;

      template<typename _Tp>
        _Res
        _M_call(_Tp& __object, const volatile _Class *, 
                _ArgTypes... __args) const
        { return (__object.*__pmf)(__args...); }

      template<typename _Tp>
        _Res
        _M_call(_Tp& __ptr, const volatile void *, _ArgTypes... __args) const
        { return ((*__ptr).*__pmf)(__args...); }

    public:
      typedef _Res result_type;

      explicit _Mem_fn(_Functor __pmf) : __pmf(__pmf) { }

      
      _Res
      operator()(volatile _Class& __object, _ArgTypes... __args) const
      { return (__object.*__pmf)(__args...); }

      
      _Res
      operator()(volatile _Class* __object, _ArgTypes... __args) const
      { return (__object->*__pmf)(__args...); }

      
      template<typename _Tp>
        _Res
	operator()(_Tp& __object, _ArgTypes... __args) const
        { return _M_call(__object, &__object, __args...); }

    private:
      _Functor __pmf;
    };

  
  template<typename _Res, typename _Class, typename... _ArgTypes>
    class _Mem_fn<_Res (_Class::*)(_ArgTypes...) const volatile>
    : public _Maybe_unary_or_binary_function<_Res, const volatile _Class*, 
					     _ArgTypes...>
    {
      typedef _Res (_Class::*_Functor)(_ArgTypes...) const volatile;

      template<typename _Tp>
        _Res
        _M_call(_Tp& __object, const volatile _Class *, 
                _ArgTypes... __args) const
        { return (__object.*__pmf)(__args...); }

      template<typename _Tp>
        _Res
        _M_call(_Tp& __ptr, const volatile void *, _ArgTypes... __args) const
        { return ((*__ptr).*__pmf)(__args...); }

    public:
      typedef _Res result_type;

      explicit _Mem_fn(_Functor __pmf) : __pmf(__pmf) { }

      
      _Res 
      operator()(const volatile _Class& __object, _ArgTypes... __args) const
      { return (__object.*__pmf)(__args...); }

      
      _Res 
      operator()(const volatile _Class* __object, _ArgTypes... __args) const
      { return (__object->*__pmf)(__args...); }

      
      template<typename _Tp>
        _Res operator()(_Tp& __object, _ArgTypes... __args) const
        { return _M_call(__object, &__object, __args...); }

    private:
      _Functor __pmf;
    };


  template<typename _Res, typename _Class>
    class _Mem_fn<_Res _Class::*>
    {
      
      
      template<typename _Tp>
        _Res&
        _M_call(_Tp& __object, _Class *) const
        { return __object.*__pm; }

      template<typename _Tp, typename _Up>
        _Res&
        _M_call(_Tp& __object, _Up * const *) const
        { return (*__object).*__pm; }

      template<typename _Tp, typename _Up>
        const _Res&
        _M_call(_Tp& __object, const _Up * const *) const
        { return (*__object).*__pm; }

      template<typename _Tp>
        const _Res&
        _M_call(_Tp& __object, const _Class *) const
        { return __object.*__pm; }

      template<typename _Tp>
        const _Res&
        _M_call(_Tp& __ptr, const volatile void*) const
        { return (*__ptr).*__pm; }

      template<typename _Tp> static _Tp& __get_ref();

      template<typename _Tp>
        static __sfinae_types::__one __check_const(_Tp&, _Class*);
      template<typename _Tp, typename _Up>
        static __sfinae_types::__one __check_const(_Tp&, _Up * const *);
      template<typename _Tp, typename _Up>
        static __sfinae_types::__two __check_const(_Tp&, const _Up * const *);
      template<typename _Tp>
        static __sfinae_types::__two __check_const(_Tp&, const _Class*);
      template<typename _Tp>
        static __sfinae_types::__two __check_const(_Tp&, const volatile void*);

    public:
      template<typename _Tp>
        struct _Result_type
	: _Mem_fn_const_or_non<_Res,
	  (sizeof(__sfinae_types::__two)
	   == sizeof(__check_const<_Tp>(__get_ref<_Tp>(), (_Tp*)0)))>
        { };

      template<typename _Signature>
        struct result;

      template<typename _CVMem, typename _Tp>
        struct result<_CVMem(_Tp)>
	: public _Result_type<_Tp> { };

      template<typename _CVMem, typename _Tp>
        struct result<_CVMem(_Tp&)>
	: public _Result_type<_Tp> { };

      explicit
      _Mem_fn(_Res _Class::*__pm) : __pm(__pm) { }

      
      _Res&
      operator()(_Class& __object) const
      { return __object.*__pm; }

      const _Res&
      operator()(const _Class& __object) const
      { return __object.*__pm; }

      
      _Res&
      operator()(_Class* __object) const
      { return __object->*__pm; }

      const _Res&
      operator()(const _Class* __object) const
      { return __object->*__pm; }

      
      template<typename _Tp>
        typename _Result_type<_Tp>::type
        operator()(_Tp& __unknown) const
        { return _M_call(__unknown, &__unknown); }

    private:
      _Res _Class::*__pm;
    };

  


 
  template<typename _Tp, typename _Class>
    inline _Mem_fn<_Tp _Class::*>
    mem_fn(_Tp _Class::* __pm)
    {
      return _Mem_fn<_Tp _Class::*>(__pm);
    }

  



 
  template<typename _Tp>
    struct is_bind_expression
    { static const bool value = false; };

  template<typename _Tp>
    const bool is_bind_expression<_Tp>::value;

  


 
  template<typename _Tp>
    struct is_placeholder
    { static const int value = 0; };

  template<typename _Tp>
    const int is_placeholder<_Tp>::value;

  
  template<int _Num> struct _Placeholder { };

  





 
  namespace placeholders 
  { 
    namespace 
    {
      _Placeholder<1> _1;
      _Placeholder<2> _2;
      _Placeholder<3> _3;
      _Placeholder<4> _4;
      _Placeholder<5> _5;
      _Placeholder<6> _6;
      _Placeholder<7> _7;
      _Placeholder<8> _8;
      _Placeholder<9> _9;
      _Placeholder<10> _10;
      _Placeholder<11> _11;
      _Placeholder<12> _12;
      _Placeholder<13> _13;
      _Placeholder<14> _14;
      _Placeholder<15> _15;
      _Placeholder<16> _16;
      _Placeholder<17> _17;
      _Placeholder<18> _18;
      _Placeholder<19> _19;
      _Placeholder<20> _20;
      _Placeholder<21> _21;
      _Placeholder<22> _22;
      _Placeholder<23> _23;
      _Placeholder<24> _24;
      _Placeholder<25> _25;
      _Placeholder<26> _26;
      _Placeholder<27> _27;
      _Placeholder<28> _28;
      _Placeholder<29> _29;
    } 
  }

  


 
  template<int _Num>
    struct is_placeholder<_Placeholder<_Num> >
    { static const int value = _Num; };

  template<int _Num>
    const int is_placeholder<_Placeholder<_Num> >::value;

  


 
  template<int... _Indexes>
    struct _Index_tuple { };

  
  template<std::size_t _Num, typename _Tuple = _Index_tuple<> >
    struct _Build_index_tuple;
 
  template<std::size_t _Num, int... _Indexes> 
    struct _Build_index_tuple<_Num, _Index_tuple<_Indexes...> >
    : _Build_index_tuple<_Num - 1, 
                         _Index_tuple<_Indexes..., sizeof...(_Indexes)> >
    {
    };

  template<int... _Indexes>
    struct _Build_index_tuple<0, _Index_tuple<_Indexes...> >
    {
      typedef _Index_tuple<_Indexes...> __type;
    };

  


 
  struct _No_tuple_element;

  



 
  template<int __i, typename _Tuple, bool _IsSafe>
    struct _Safe_tuple_element_impl
    : tuple_element<__i, _Tuple> { };

  



 
  template<int __i, typename _Tuple>
    struct _Safe_tuple_element_impl<__i, _Tuple, false>
    {
      typedef _No_tuple_element type;
    };

  


 
 template<int __i, typename _Tuple>
   struct _Safe_tuple_element
   : _Safe_tuple_element_impl<__i, _Tuple, 
                              (__i >= 0 && __i < tuple_size<_Tuple>::value)>
   {
   };

  









 
  template<typename _Arg,
           bool _IsBindExp = is_bind_expression<_Arg>::value,
           bool _IsPlaceholder = (is_placeholder<_Arg>::value > 0)>
    class _Mu;

  


 
  template<typename _Tp>
    class _Mu<reference_wrapper<_Tp>, false, false>
    {
    public:
      typedef _Tp& result_type;

      


 
      template<typename _CVRef, typename _Tuple>
        result_type
        operator()(_CVRef& __arg, const _Tuple&) const volatile
        { return __arg.get(); }
    };

  



 
  template<typename _Arg>
    class _Mu<_Arg, true, false>
    {
    public:
      template<typename _Signature> class result;

      
      
      
      template<typename _CVMu, typename _CVArg, typename... _Args>
        class result<_CVMu(_CVArg, tuple<_Args...>)>
	: public result_of<_CVArg(_Args...)> { };

      template<typename _CVArg, typename... _Args>
        typename result_of<_CVArg(_Args...)>::type
        operator()(_CVArg& __arg,
		   const tuple<_Args...>& __tuple) const volatile
        {
	  
	  typedef typename _Build_index_tuple<sizeof...(_Args)>::__type
	    _Indexes;
	  return this->__call(__arg, __tuple, _Indexes());
	}

    private:
      
      
      template<typename _CVArg, typename... _Args, int... _Indexes>
        typename result_of<_CVArg(_Args...)>::type
        __call(_CVArg& __arg, const tuple<_Args...>& __tuple,
	       const _Index_tuple<_Indexes...>&) const volatile
        {
	  return __arg( get<_Indexes>(__tuple)...);
	}
    };

  



 
  template<typename _Arg>
    class _Mu<_Arg, false, true>
    {
    public:
      template<typename _Signature> class result;

      template<typename _CVMu, typename _CVArg, typename _Tuple>
        class result<_CVMu(_CVArg, _Tuple)>
        {
	  
	  
	  
	  typedef typename _Safe_tuple_element<(is_placeholder<_Arg>::value
						- 1), _Tuple>::type
	    __base_type;

	public:
	  typedef typename add_lvalue_reference<__base_type>::type type;
	};

      template<typename _Tuple>
        typename result<_Mu(_Arg, _Tuple)>::type
        operator()(const volatile _Arg&, const _Tuple& __tuple) const volatile
        {
	  return ::std:: get<(is_placeholder<_Arg>::value
					  - 1)>(__tuple);
	}
    };

  



 
  template<typename _Arg>
    class _Mu<_Arg, false, false>
    {
    public:
      template<typename _Signature> struct result;

      template<typename _CVMu, typename _CVArg, typename _Tuple>
        struct result<_CVMu(_CVArg, _Tuple)>
        {
	  typedef typename add_lvalue_reference<_CVArg>::type type;
	};

      
      template<typename _CVArg, typename _Tuple>
        _CVArg&
        operator()(_CVArg& __arg, const _Tuple&) const volatile
        { return __arg; }
    };

  



 
  template<typename _Tp>
    struct _Maybe_wrap_member_pointer
    {
      typedef _Tp type;
      
      static const _Tp&
      __do_wrap(const _Tp& __x)
      { return __x; }
    };

  



 
  template<typename _Tp, typename _Class>
    struct _Maybe_wrap_member_pointer<_Tp _Class::*>
    {
      typedef _Mem_fn<_Tp _Class::*> type;
      
      static type
      __do_wrap(_Tp _Class::* __pm)
      { return type(__pm); }
    };

  
  template<typename _Signature>
    struct _Bind;

   template<typename _Functor, typename... _Bound_args>
    class _Bind<_Functor(_Bound_args...)>
    : public _Weak_result_type<_Functor>
    {
      typedef _Bind __self_type;
      typedef typename _Build_index_tuple<sizeof...(_Bound_args)>::__type 
        _Bound_indexes;

      _Functor _M_f;
      tuple<_Bound_args...> _M_bound_args;

      
      template<typename... _Args, int... _Indexes>
        typename result_of<
                   _Functor(typename result_of<_Mu<_Bound_args> 
                            (_Bound_args, tuple<_Args...>)>::type...)
                 >::type
        __call(const tuple<_Args...>& __args, _Index_tuple<_Indexes...>)
        {
          return _M_f(_Mu<_Bound_args>()
                      ( get<_Indexes>(_M_bound_args), __args)...);
        }

      
      template<typename... _Args, int... _Indexes>
        typename result_of<
                   const _Functor(typename result_of<_Mu<_Bound_args> 
                                    (const _Bound_args, tuple<_Args...>)
                                  >::type...)>::type
        __call(const tuple<_Args...>& __args, _Index_tuple<_Indexes...>) const
        {
          return _M_f(_Mu<_Bound_args>()
                      ( get<_Indexes>(_M_bound_args), __args)...);
        }

      
      template<typename... _Args, int... _Indexes>
        typename result_of<
                   volatile _Functor(typename result_of<_Mu<_Bound_args> 
                                    (volatile _Bound_args, tuple<_Args...>)
                                  >::type...)>::type
        __call(const tuple<_Args...>& __args, 
               _Index_tuple<_Indexes...>) volatile
        {
          return _M_f(_Mu<_Bound_args>()
                      ( get<_Indexes>(_M_bound_args), __args)...);
        }

      
      template<typename... _Args, int... _Indexes>
        typename result_of<
                   const volatile _Functor(typename result_of<_Mu<_Bound_args> 
                                    (const volatile _Bound_args, 
                                     tuple<_Args...>)
                                  >::type...)>::type
        __call(const tuple<_Args...>& __args, 
               _Index_tuple<_Indexes...>) const volatile
        {
          return _M_f(_Mu<_Bound_args>()
                      ( get<_Indexes>(_M_bound_args), __args)...);
        }

     public:
      explicit _Bind(_Functor __f, _Bound_args... __bound_args)
        : _M_f(__f), _M_bound_args(__bound_args...) { }

      
      template<typename... _Args>
        typename result_of<
                   _Functor(typename result_of<_Mu<_Bound_args> 
                            (_Bound_args, tuple<_Args...>)>::type...)
                 >::type
        operator()(_Args&... __args)
        {
          return this->__call( tie(__args...), _Bound_indexes());
        }

      
      template<typename... _Args>
        typename result_of<
                   const _Functor(typename result_of<_Mu<_Bound_args> 
                            (const _Bound_args, tuple<_Args...>)>::type...)
                 >::type
        operator()(_Args&... __args) const
        {
          return this->__call( tie(__args...), _Bound_indexes());
        }


      
      template<typename... _Args>
        typename result_of<
                   volatile _Functor(typename result_of<_Mu<_Bound_args> 
                            (volatile _Bound_args, tuple<_Args...>)>::type...)
                 >::type
        operator()(_Args&... __args) volatile
        {
          return this->__call( tie(__args...), _Bound_indexes());
        }


      
      template<typename... _Args>
        typename result_of<
                   const volatile _Functor(typename result_of<_Mu<_Bound_args> 
                            (const volatile _Bound_args, 
                             tuple<_Args...>)>::type...)
                 >::type
        operator()(_Args&... __args) const volatile
        {
          return this->__call( tie(__args...), _Bound_indexes());
        }
    };

  
  template<typename _Result, typename _Signature>
    struct _Bind_result;

  template<typename _Result, typename _Functor, typename... _Bound_args>
    class _Bind_result<_Result, _Functor(_Bound_args...)>
    {
      typedef _Bind_result __self_type;
      typedef typename _Build_index_tuple<sizeof...(_Bound_args)>::__type 
        _Bound_indexes;

      _Functor _M_f;
      tuple<_Bound_args...> _M_bound_args;

      
      template<typename... _Args, int... _Indexes>
        _Result
        __call(const tuple<_Args...>& __args, _Index_tuple<_Indexes...>)
        {
          return _M_f(_Mu<_Bound_args>()
                      ( get<_Indexes>(_M_bound_args), __args)...);
        }

      
      template<typename... _Args, int... _Indexes>
        _Result
        __call(const tuple<_Args...>& __args, _Index_tuple<_Indexes...>) const
        {
          return _M_f(_Mu<_Bound_args>()
                      ( get<_Indexes>(_M_bound_args), __args)...);
        }

      
      template<typename... _Args, int... _Indexes>
        _Result
        __call(const tuple<_Args...>& __args, 
               _Index_tuple<_Indexes...>) volatile
        {
          return _M_f(_Mu<_Bound_args>()
                      ( get<_Indexes>(_M_bound_args), __args)...);
        }

      
      template<typename... _Args, int... _Indexes>
        _Result
        __call(const tuple<_Args...>& __args, 
               _Index_tuple<_Indexes...>) const volatile
        {
          return _M_f(_Mu<_Bound_args>()
                      ( get<_Indexes>(_M_bound_args), __args)...);
        }

    public:
      typedef _Result result_type;

      explicit
      _Bind_result(_Functor __f, _Bound_args... __bound_args)
      : _M_f(__f), _M_bound_args(__bound_args...) { }

      
      template<typename... _Args>
        result_type
        operator()(_Args&... __args)
        {
          return this->__call( tie(__args...), _Bound_indexes());
        }

      
      template<typename... _Args>
        result_type
        operator()(_Args&... __args) const
        {
          return this->__call( tie(__args...), _Bound_indexes());
        }

      
      template<typename... _Args>
        result_type
        operator()(_Args&... __args) volatile
        {
          return this->__call( tie(__args...), _Bound_indexes());
        }

      
      template<typename... _Args>
        result_type
        operator()(_Args&... __args) const volatile
        {
          return this->__call( tie(__args...), _Bound_indexes());
        }
    };

  
  template<typename _Signature>
    struct is_bind_expression<_Bind<_Signature> >
    { static const bool value = true; };

  template<typename _Signature>
    const bool is_bind_expression<_Bind<_Signature> >::value;

  
  template<typename _Result, typename _Signature>
    struct is_bind_expression<_Bind_result<_Result, _Signature> >
    { static const bool value = true; };

  template<typename _Result, typename _Signature>
    const bool is_bind_expression<_Bind_result<_Result, _Signature> >::value;

  
  template<typename _Functor, typename... _ArgTypes>
    inline
    _Bind<typename _Maybe_wrap_member_pointer<_Functor>::type(_ArgTypes...)>
    bind(_Functor __f, _ArgTypes... __args)
    {
      typedef _Maybe_wrap_member_pointer<_Functor> __maybe_type;
      typedef typename __maybe_type::type __functor_type;
      typedef _Bind<__functor_type(_ArgTypes...)> __result_type;
      return __result_type(__maybe_type::__do_wrap(__f), __args...);
    } 

  template<typename _Result, typename _Functor, typename... _ArgTypes>
    inline
    _Bind_result<_Result,
		 typename _Maybe_wrap_member_pointer<_Functor>::type
                            (_ArgTypes...)>
    bind(_Functor __f, _ArgTypes... __args)
    {
      typedef _Maybe_wrap_member_pointer<_Functor> __maybe_type;
      typedef typename __maybe_type::type __functor_type;
      typedef _Bind_result<_Result, __functor_type(_ArgTypes...)>
	__result_type;
      return __result_type(__maybe_type::__do_wrap(__f), __args...);
    }

  



 
  class bad_function_call : public std::exception { };

  



 
  struct _M_clear_type;

  



 
  template<typename _Tp>
    struct __is_location_invariant
    : integral_constant<bool,
                        (is_pointer<_Tp>::value
                         || is_member_pointer<_Tp>::value)>
    {
    };

  class _Undefined_class;

  union _Nocopy_types
  {
    void*       _M_object;
    const void* _M_const_object;
    void (*_M_function_pointer)();
    void (_Undefined_class::*_M_member_pointer)();
  };

  union _Any_data
  {
    void*       _M_access()       { return &_M_pod_data[0]; }
    const void* _M_access() const { return &_M_pod_data[0]; }

    template<typename _Tp>
      _Tp&
      _M_access()
      { return *static_cast<_Tp*>(_M_access()); }

    template<typename _Tp>
      const _Tp&
      _M_access() const
      { return *static_cast<const _Tp*>(_M_access()); }

    _Nocopy_types _M_unused;
    char _M_pod_data[sizeof(_Nocopy_types)];
  };

  enum _Manager_operation
  {
    __get_type_info,
    __get_functor_ptr,
    __clone_functor,
    __destroy_functor
  };

  
  
  template<typename _Tp>
    struct _Simple_type_wrapper
    {
      _Simple_type_wrapper(_Tp __value) : __value(__value) { }

      _Tp __value;
    };

  template<typename _Tp>
    struct __is_location_invariant<_Simple_type_wrapper<_Tp> >
    : __is_location_invariant<_Tp>
    {
    };

  
  
  template<typename _Functor>
    inline _Functor&
    __callable_functor(_Functor& __f)
    { return __f; }

  template<typename _Member, typename _Class>
    inline _Mem_fn<_Member _Class::*>
    __callable_functor(_Member _Class::* &__p)
    { return mem_fn(__p); }

  template<typename _Member, typename _Class>
    inline _Mem_fn<_Member _Class::*>
    __callable_functor(_Member _Class::* const &__p)
    { return mem_fn(__p); }

  template<typename _Signature>
    class function;

  
  class _Function_base
  {
  public:
    static const std::size_t _M_max_size = sizeof(_Nocopy_types);
    static const std::size_t _M_max_align = __alignof__(_Nocopy_types);

    template<typename _Functor>
      class _Base_manager
      {
      protected:
	static const bool __stored_locally =
        (__is_location_invariant<_Functor>::value
         && sizeof(_Functor) <= _M_max_size
         && __alignof__(_Functor) <= _M_max_align
         && (_M_max_align % __alignof__(_Functor) == 0));
	
	typedef integral_constant<bool, __stored_locally> _Local_storage;

	
	static _Functor*
	_M_get_pointer(const _Any_data& __source)
	{
	  const _Functor* __ptr =
	    __stored_locally? &__source._M_access<_Functor>()
	      : __source._M_access<_Functor*>();
	  return const_cast<_Functor*>(__ptr);
	}

	
	
	static void
	_M_clone(_Any_data& __dest, const _Any_data& __source, true_type)
	{
	  new (__dest._M_access()) _Functor(__source._M_access<_Functor>());
	}

	
	
	static void
	_M_clone(_Any_data& __dest, const _Any_data& __source, false_type)
	{
	  __dest._M_access<_Functor*>() =
	    new _Functor(*__source._M_access<_Functor*>());
	}

	
	
	static void
	_M_destroy(_Any_data& __victim, true_type)
	{
	  __victim._M_access<_Functor>().~_Functor();
	}
	
	
	static void
	_M_destroy(_Any_data& __victim, false_type)
	{
	  delete __victim._M_access<_Functor*>();
	}
	
      public:
	static bool
	_M_manager(_Any_data& __dest, const _Any_data& __source,
		   _Manager_operation __op)
	{
	  switch (__op)
	    {
	    case __get_type_info:
	      __dest._M_access<const type_info*>() = &typeid(_Functor);
	      break;
	    case __get_functor_ptr:
	      __dest._M_access<_Functor*>() = _M_get_pointer(__source);
	      break;
	      
	    case __clone_functor:
	      _M_clone(__dest, __source, _Local_storage());
	      break;

	    case __destroy_functor:
	      _M_destroy(__dest, _Local_storage());
	      break;
	    }
	  return false;
	}

	static void
	_M_init_functor(_Any_data& __functor, const _Functor& __f)
	{ _M_init_functor(__functor, __f, _Local_storage()); }
	
	template<typename _Signature>
	  static bool
	  _M_not_empty_function(const function<_Signature>& __f)
	  { return __f; }

	template<typename _Tp>
	  static bool
	  _M_not_empty_function(const _Tp*& __fp)
	  { return __fp; }

	template<typename _Class, typename _Tp>
	  static bool
	  _M_not_empty_function(_Tp _Class::* const& __mp)
	  { return __mp; }

	template<typename _Tp>
	  static bool
	  _M_not_empty_function(const _Tp&)
	  { return true; }

      private:
	static void
	_M_init_functor(_Any_data& __functor, const _Functor& __f, true_type)
	{ new (__functor._M_access()) _Functor(__f); }

	static void
	_M_init_functor(_Any_data& __functor, const _Functor& __f, false_type)
	{ __functor._M_access<_Functor*>() = new _Functor(__f); }
      };

    template<typename _Functor>
      class _Ref_manager : public _Base_manager<_Functor*>
      {
	typedef _Function_base::_Base_manager<_Functor*> _Base;

    public:
	static bool
	_M_manager(_Any_data& __dest, const _Any_data& __source,
		   _Manager_operation __op)
	{
	  switch (__op)
	    {
	    case __get_type_info:
	      __dest._M_access<const type_info*>() = &typeid(_Functor);
	      break;
	    case __get_functor_ptr:
	      __dest._M_access<_Functor*>() = *_Base::_M_get_pointer(__source);
	      return is_const<_Functor>::value;
	      break;
	      
	    default:
	      _Base::_M_manager(__dest, __source, __op);
	    }
	  return false;
	}

	static void
	_M_init_functor(_Any_data& __functor, reference_wrapper<_Functor> __f)
	{
	  
	  _Base::_M_init_functor(__functor, &__f.get());
	}
      };

    _Function_base() : _M_manager(0) { }
    
    ~_Function_base()
    {
      if (_M_manager)
	_M_manager(_M_functor, _M_functor, __destroy_functor);
    }


    bool _M_empty() const { return !_M_manager; }

    typedef bool (*_Manager_type)(_Any_data&, const _Any_data&,
                                  _Manager_operation);

    _Any_data     _M_functor;
    _Manager_type _M_manager;
  };

  template<typename _Signature, typename _Functor>
    class _Function_handler;

  template<typename _Res, typename _Functor, typename... _ArgTypes>
    class _Function_handler<_Res(_ArgTypes...), _Functor>
    : public _Function_base::_Base_manager<_Functor>
    {
      typedef _Function_base::_Base_manager<_Functor> _Base;

    public:
      static _Res
      _M_invoke(const _Any_data& __functor, _ArgTypes... __args)
      {
        return (*_Base::_M_get_pointer(__functor))(__args...);
      }
    };

  template<typename _Functor, typename... _ArgTypes>
    class _Function_handler<void(_ArgTypes...), _Functor>
    : public _Function_base::_Base_manager<_Functor>
    {
      typedef _Function_base::_Base_manager<_Functor> _Base;

     public:
      static void
      _M_invoke(const _Any_data& __functor, _ArgTypes... __args)
      {
        (*_Base::_M_get_pointer(__functor))(__args...);
      }
    };

  template<typename _Res, typename _Functor, typename... _ArgTypes>
    class _Function_handler<_Res(_ArgTypes...), reference_wrapper<_Functor> >
    : public _Function_base::_Ref_manager<_Functor>
    {
      typedef _Function_base::_Ref_manager<_Functor> _Base;

     public:
      static _Res
      _M_invoke(const _Any_data& __functor, _ArgTypes... __args)
      {
        return 
          __callable_functor(**_Base::_M_get_pointer(__functor))(__args...);
      }
    };

  template<typename _Functor, typename... _ArgTypes>
    class _Function_handler<void(_ArgTypes...), reference_wrapper<_Functor> >
    : public _Function_base::_Ref_manager<_Functor>
    {
      typedef _Function_base::_Ref_manager<_Functor> _Base;

     public:
      static void
      _M_invoke(const _Any_data& __functor, _ArgTypes... __args)
      {
        __callable_functor(**_Base::_M_get_pointer(__functor))(__args...);
      }
    };

  template<typename _Class, typename _Member, typename _Res, 
           typename... _ArgTypes>
    class _Function_handler<_Res(_ArgTypes...), _Member _Class::*>
    : public _Function_handler<void(_ArgTypes...), _Member _Class::*>
    {
      typedef _Function_handler<void(_ArgTypes...), _Member _Class::*>
        _Base;

     public:
      static _Res
      _M_invoke(const _Any_data& __functor, _ArgTypes... __args)
      {
        return 
	  mem_fn(_Base::_M_get_pointer(__functor)->__value)(__args...);
      }
    };

  template<typename _Class, typename _Member, typename... _ArgTypes>
    class _Function_handler<void(_ArgTypes...), _Member _Class::*>
    : public _Function_base::_Base_manager<
                 _Simple_type_wrapper< _Member _Class::* > >
    {
      typedef _Member _Class::* _Functor;
      typedef _Simple_type_wrapper<_Functor> _Wrapper;
      typedef _Function_base::_Base_manager<_Wrapper> _Base;

     public:
      static bool
      _M_manager(_Any_data& __dest, const _Any_data& __source,
                 _Manager_operation __op)
      {
        switch (__op)
	  {
	  case __get_type_info:
	    __dest._M_access<const type_info*>() = &typeid(_Functor);
	    break;
	  case __get_functor_ptr:
	    __dest._M_access<_Functor*>() =
	      &_Base::_M_get_pointer(__source)->__value;
	    break;
	    
	  default:
	    _Base::_M_manager(__dest, __source, __op);
	  }
        return false;
      }

      static void
      _M_invoke(const _Any_data& __functor, _ArgTypes... __args)
      {
        
	  mem_fn(_Base::_M_get_pointer(__functor)->__value)(__args...);
      }
    };

  
  template<typename _Res, typename... _ArgTypes>
    class function<_Res(_ArgTypes...)>
    : public _Maybe_unary_or_binary_function<_Res, _ArgTypes...>,
      private _Function_base
    {
      
      struct _Hidden_type
      {
	_Hidden_type* _M_bool;
      };

      
      typedef _Hidden_type* _Hidden_type::* _Safe_bool;

      typedef _Res _Signature_type(_ArgTypes...);
      
      struct _Useless { };
      
    public:
      typedef _Res result_type;
      
      
      
      


 
      function() : _Function_base() { }
      
      


 
      function(_M_clear_type*) : _Function_base() { }
      
      






 
      function(const function& __x);
      
      














 
      template<typename _Functor>
        function(_Functor __f,
                 typename __gnu_cxx::__enable_if<
                           !is_integral<_Functor>::value, _Useless>::__type
                   = _Useless());

      










 
      function&
      operator=(const function& __x)
      {
        function(__x).swap(*this);
        return *this;
      }

      





 
      function&
      operator=(_M_clear_type*)
      {
        if (_M_manager)
	  {
	    _M_manager(_M_functor, _M_functor, __destroy_functor);
	    _M_manager = 0;
	    _M_invoker = 0;
	  }
        return *this;
      }

      














 
      template<typename _Functor>
        typename __gnu_cxx::__enable_if<!is_integral<_Functor>::value,
	                                function&>::__type
	operator=(_Functor __f)
	{
	  function(__f).swap(*this);
	  return *this;
	}

      
      
      





 
      void swap(function& __x)
      {
	_Any_data __old_functor = _M_functor;
	_M_functor = __x._M_functor;
	__x._M_functor = __old_functor;
	_Manager_type __old_manager = _M_manager;
	_M_manager = __x._M_manager;
	__x._M_manager = __old_manager;
	_Invoker_type __old_invoker = _M_invoker;
	_M_invoker = __x._M_invoker;
	__x._M_invoker = __old_invoker;
      }
      
      

      






 
      operator _Safe_bool() const
      {
        if (_M_empty())
	  return 0;
	else
	  return &_Hidden_type::_M_bool;
      }

      

      






 
      _Res operator()(_ArgTypes... __args) const;

      
      







 
      const type_info& target_type() const;
      
      







 
      template<typename _Functor>       _Functor* target();
      
      
      template<typename _Functor> const _Functor* target() const;

    private:
      
      template<typename _Function>
	void operator==(const function<_Function>&) const;
      template<typename _Function>
	void operator!=(const function<_Function>&) const;

      typedef _Res (*_Invoker_type)(const _Any_data&, _ArgTypes...);
      _Invoker_type _M_invoker;
  };

  template<typename _Res, typename... _ArgTypes>
    function<_Res(_ArgTypes...)>::
    function(const function& __x)
    : _Function_base()
    {
      if (__x)
	{
	  _M_invoker = __x._M_invoker;
	  _M_manager = __x._M_manager;
	  __x._M_manager(_M_functor, __x._M_functor, __clone_functor);
	}
    }

  template<typename _Res, typename... _ArgTypes>
    template<typename _Functor>
      function<_Res(_ArgTypes...)>::
      function(_Functor __f,
	       typename __gnu_cxx::__enable_if<
                       !is_integral<_Functor>::value, _Useless>::__type)
      : _Function_base()
      {
	typedef _Function_handler<_Signature_type, _Functor> _My_handler;

	if (_My_handler::_M_not_empty_function(__f))
	  {
	    _M_invoker = &_My_handler::_M_invoke;
	    _M_manager = &_My_handler::_M_manager;
	    _My_handler::_M_init_functor(_M_functor, __f);
	  }
      }

  template<typename _Res, typename... _ArgTypes>
    _Res
    function<_Res(_ArgTypes...)>::
    operator()(_ArgTypes... __args) const
    {
      if (_M_empty())
        {
          throw bad_function_call();
        }
      return _M_invoker(_M_functor, __args...);
    }

  template<typename _Res, typename... _ArgTypes>
    const type_info&
    function<_Res(_ArgTypes...)>::
    target_type() const
    {
      if (_M_manager)
        {
          _Any_data __typeinfo_result;
          _M_manager(__typeinfo_result, _M_functor, __get_type_info);
          return *__typeinfo_result._M_access<const type_info*>();
        }
      else
	return typeid(void);
    }

  template<typename _Res, typename... _ArgTypes>
    template<typename _Functor>
      _Functor*
      function<_Res(_ArgTypes...)>::
      target()
      {
	if (typeid(_Functor) == target_type() && _M_manager)
	  {
	    _Any_data __ptr;
	    if (_M_manager(__ptr, _M_functor, __get_functor_ptr)
		&& !is_const<_Functor>::value)
	      return 0;
	    else
	      return __ptr._M_access<_Functor*>();
	  }
	else
	  return 0;
      }

  template<typename _Res, typename... _ArgTypes>
    template<typename _Functor>
      const _Functor*
      function<_Res(_ArgTypes...)>::
      target() const
      {
	if (typeid(_Functor) == target_type() && _M_manager)
	  {
	    _Any_data __ptr;
	    _M_manager(__ptr, _M_functor, __get_functor_ptr);
	    return __ptr._M_access<const _Functor*>();
	  }
	else
	  return 0;
      }

  

  





 
  template<typename _Signature>
    inline bool
    operator==(const function<_Signature>& __f, _M_clear_type*)
    { return !__f; }

  
  template<typename _Signature>
    inline bool
    operator==(_M_clear_type*, const function<_Signature>& __f)
    { return !__f; }

  





 
  template<typename _Signature>
    inline bool
    operator!=(const function<_Signature>& __f, _M_clear_type*)
    { return __f; }

  
  template<typename _Signature>
    inline bool
    operator!=(_M_clear_type*, const function<_Signature>& __f)
    { return __f; }

  

  



 
  template<typename _Signature>
    inline void
    swap(function<_Signature>& __x, function<_Signature>& __y)
    { __x.swap(__y); }


}




























 



namespace std __attribute__ ((__visibility__ ("default"))) {

  





 
  template<typename _Tp1>
    struct auto_ptr_ref
    {
      _Tp1* _M_ptr;
      
      explicit
      auto_ptr_ref(_Tp1* __p): _M_ptr(__p) { }
    } __attribute__ ((__deprecated__));


  



























 
  template<typename _Tp>
    class auto_ptr
    {
    private:
      _Tp* _M_ptr;
      
    public:
      
      typedef _Tp element_type;
      
      




 
      explicit
      auto_ptr(element_type* __p = 0) throw() : _M_ptr(__p) { }

      





 
      auto_ptr(auto_ptr& __a) throw() : _M_ptr(__a.release()) { }

      








 
      template<typename _Tp1>
        auto_ptr(auto_ptr<_Tp1>& __a) throw() : _M_ptr(__a.release()) { }

      






 
      auto_ptr&
      operator=(auto_ptr& __a) throw()
      {
	reset(__a.release());
	return *this;
      }

      








 
      template<typename _Tp1>
        auto_ptr&
        operator=(auto_ptr<_Tp1>& __a) throw()
        {
	  reset(__a.release());
	  return *this;
	}

      








 
      ~auto_ptr() { delete _M_ptr; }
      
      






 
      element_type&
      operator*() const throw() 
      {
	;
	return *_M_ptr; 
      }
      
      




 
      element_type*
      operator->() const throw() 
      {
	;
	return _M_ptr; 
      }
      
      








 
      element_type*
      get() const throw() { return _M_ptr; }
      
      









 
      element_type*
      release() throw()
      {
	element_type* __tmp = _M_ptr;
	_M_ptr = 0;
	return __tmp;
      }
      
      





 
      void
      reset(element_type* __p = 0) throw()
      {
	if (__p != _M_ptr)
	  {
	    delete _M_ptr;
	    _M_ptr = __p;
	  }
      }
      
      









 
      auto_ptr(auto_ptr_ref<element_type> __ref) throw()
      : _M_ptr(__ref._M_ptr) { }
      
      auto_ptr&
      operator=(auto_ptr_ref<element_type> __ref) throw()
      {
	if (__ref._M_ptr != this->get())
	  {
	    delete _M_ptr;
	    _M_ptr = __ref._M_ptr;
	  }
	return *this;
      }
      
      template<typename _Tp1>
        operator auto_ptr_ref<_Tp1>() throw()
        { return auto_ptr_ref<_Tp1>(this->release()); }

      template<typename _Tp1>
        operator auto_ptr<_Tp1>() throw()
        { return auto_ptr<_Tp1>(this->release()); }
    } __attribute__ ((__deprecated__));

  
  
  template<>
    class auto_ptr<void>
    {
    public:
      typedef void element_type;
    } __attribute__ ((__deprecated__));

}















































 


namespace std
{


  class bad_weak_ptr : public std::exception
  {
  public:
    virtual char const*
    what() const throw()
    { return "std::bad_weak_ptr"; }
  };

  
  inline void
  __throw_bad_weak_ptr()
  {
    throw bad_weak_ptr();
  }

  using __gnu_cxx::_Lock_policy;
  using __gnu_cxx::__default_lock_policy;
  using __gnu_cxx::_S_single;
  using __gnu_cxx::_S_mutex;
  using __gnu_cxx::_S_atomic;

  
  template<_Lock_policy _Lp>
    class _Mutex_base
    {
    protected:
      
      enum { _S_need_barriers = 0 };
    };

  template<>
    class _Mutex_base<_S_mutex>
    : public __gnu_cxx::__mutex
    {
    protected:
      
      
      
      enum { _S_need_barriers = 1 };
    };

  template<_Lock_policy _Lp = __default_lock_policy>
    class _Sp_counted_base
    : public _Mutex_base<_Lp>
    {
    public:  
      _Sp_counted_base()
      : _M_use_count(1), _M_weak_count(1) { }
      
      virtual
      ~_Sp_counted_base() 
      { }
  
      
      
      virtual void
      _M_dispose() = 0; 
      
      
      virtual void
      _M_destroy() 
      { delete this; }
      
      virtual void*
      _M_get_deleter(const std::type_info&) = 0;

      void
      _M_add_ref_copy()
      { __gnu_cxx::__atomic_add_dispatch(&_M_use_count, 1); }
  
      void
      _M_add_ref_lock();
      
      void
      _M_release() 
      {
	if (__gnu_cxx::__exchange_and_add_dispatch(&_M_use_count, -1) == 1)
	  {
	    _M_dispose();
	    
	    
	    
	    
	    if (_Mutex_base<_Lp>::_S_need_barriers)
	      {
	        __asm __volatile ("" :: : "memory");
	        __asm __volatile ("" :: : "memory");
	      }

	    if (__gnu_cxx::__exchange_and_add_dispatch(&_M_weak_count,
						       -1) == 1)
	      _M_destroy();
	  }
      }
  
      void
      _M_weak_add_ref() 
      { __gnu_cxx::__atomic_add_dispatch(&_M_weak_count, 1); }

      void
      _M_weak_release() 
      {
	if (__gnu_cxx::__exchange_and_add_dispatch(&_M_weak_count, -1) == 1)
	  {
	    if (_Mutex_base<_Lp>::_S_need_barriers)
	      {
	        
	        
	        __asm __volatile ("" :: : "memory");
	        __asm __volatile ("" :: : "memory");
	      }
	    _M_destroy();
	  }
      }
  
      long
      _M_get_use_count() const 
      {
        
        
        return const_cast<const volatile _Atomic_word&>(_M_use_count);
      }

    private:  
      _Sp_counted_base(_Sp_counted_base const&);
      _Sp_counted_base& operator=(_Sp_counted_base const&);

      _Atomic_word  _M_use_count;     
      _Atomic_word  _M_weak_count;    
    };

  template<>
    inline void
    _Sp_counted_base<_S_single>::
    _M_add_ref_lock()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_use_count, 1) == 0)
	{
	  _M_use_count = 0;
	  __throw_bad_weak_ptr();
	}
    }

  template<>
    inline void
    _Sp_counted_base<_S_mutex>::
    _M_add_ref_lock()
    {
      __gnu_cxx::__scoped_lock sentry(*this);
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_use_count, 1) == 0)
	{
	  _M_use_count = 0;
	  __throw_bad_weak_ptr();
	}
    }

  template<> 
    inline void
    _Sp_counted_base<_S_atomic>::
    _M_add_ref_lock()
    {
      
      _Atomic_word __count;
      do
	{
	  __count = _M_use_count;
	  if (__count == 0)
	    __throw_bad_weak_ptr();
	  
	  
	  
	}
      while (!__sync_bool_compare_and_swap(&_M_use_count, __count,
					   __count + 1));
    }


}














































 




namespace std __attribute__ ((__visibility__ ("default"))) {

  


 

  
  template<typename _Ptr, _Lock_policy _Lp>
    class _Sp_counted_ptr
    : public _Sp_counted_base<_Lp>
    {
    public:
      _Sp_counted_ptr(_Ptr __p)
      : _M_ptr(__p) { }
    
      virtual void
      _M_dispose() 
      { delete _M_ptr; }
      
      virtual void
      _M_destroy() 
      { delete this; }
      
      virtual void*
      _M_get_deleter(const std::type_info& __ti)
      { return 0; }
      
      _Sp_counted_ptr(const _Sp_counted_ptr&) = delete;
      _Sp_counted_ptr& operator=(const _Sp_counted_ptr&) = delete;
      
    protected:
      _Ptr             _M_ptr;  
    };

  
  template<typename _Ptr, typename _Deleter, typename _Alloc, _Lock_policy _Lp>
    class _Sp_counted_deleter
    : public _Sp_counted_ptr<_Ptr, _Lp>
    {
      typedef typename _Alloc::template
          rebind<_Sp_counted_deleter>::other _My_alloc_type;

      
      
      
      struct _My_Deleter
      : public _My_alloc_type    
      {
        _Deleter _M_del;         
        _My_Deleter(_Deleter __d, const _Alloc& __a)
          : _My_alloc_type(__a), _M_del(__d) { }
      };

    protected:
      typedef _Sp_counted_ptr<_Ptr, _Lp> _Base_type;

    public:
      


 
      _Sp_counted_deleter(_Ptr __p, _Deleter __d)
      : _Base_type(__p), _M_del(__d, _Alloc()) { }
    
      


 
      _Sp_counted_deleter(_Ptr __p, _Deleter __d, const _Alloc& __a)
      : _Base_type(__p), _M_del(__d, __a) { }
    
      virtual void
      _M_dispose() 
      { _M_del._M_del(_Base_type::_M_ptr); }
      
      virtual void
      _M_destroy() 
      {
        _My_alloc_type __a(_M_del);
        this->~_Sp_counted_deleter();
        __a.deallocate(this, 1);
      }
      
      virtual void*
      _M_get_deleter(const std::type_info& __ti)
      { return __ti == typeid(_Deleter) ? &_M_del._M_del : 0; }
      
    protected:
      _My_Deleter      _M_del;  
    };

  

  template<typename _Tp>
    struct _Sp_destroy_inplace
    {
      void operator()(_Tp* __p) const { if (__p) __p->~_Tp(); }
    };

  struct _Sp_make_shared_tag { };

  template<typename _Tp, typename _Alloc, _Lock_policy _Lp>
    class _Sp_counted_ptr_inplace
    : public _Sp_counted_deleter<_Tp*, _Sp_destroy_inplace<_Tp>, _Alloc, _Lp>
    {
      typedef _Sp_counted_deleter<_Tp*, _Sp_destroy_inplace<_Tp>, _Alloc, _Lp>
        _Base_type;

    public:
      _Sp_counted_ptr_inplace(_Alloc __a)
      : _Base_type(static_cast<_Tp*>(0), _Sp_destroy_inplace<_Tp>(), __a)
      , _M_storage()
      {
        void* __p = &_M_storage;
        ::new (__p) _Tp();  
        _Base_type::_Base_type::_M_ptr = static_cast<_Tp*>(__p);
      }

      template<typename... _Args>
        _Sp_counted_ptr_inplace(_Alloc __a, _Args&&... __args)
        : _Base_type(static_cast<_Tp*>(0), _Sp_destroy_inplace<_Tp>(), __a)
        , _M_storage()
        {
          void* __p = &_M_storage;
          ::new (__p) _Tp(std::forward<_Args>(__args)...);  
          _Base_type::_Base_type::_M_ptr = static_cast<_Tp*>(__p);
        }

      
      virtual void
      _M_destroy() 
      {
        typedef typename _Alloc::template
            rebind<_Sp_counted_ptr_inplace>::other _My_alloc_type;
        _My_alloc_type __a(_Base_type::_M_del);
        this->~_Sp_counted_ptr_inplace();
        __a.deallocate(this, 1);
      }

      
      virtual void*
      _M_get_deleter(const std::type_info& __ti)
      {
        return __ti == typeid(_Sp_make_shared_tag)
               ? static_cast<void*>(&_M_storage)
               : _Base_type::_M_get_deleter(__ti);
      }
      
    private:
      typename aligned_storage<sizeof(_Tp), alignment_of<_Tp>::value>::type
        _M_storage;
    };

  template<_Lock_policy _Lp = __default_lock_policy>
    class __weak_count;

  template<_Lock_policy _Lp = __default_lock_policy>
    class __shared_count
    {
    public: 
      __shared_count()
      : _M_pi(0) 
      { }
  
      template<typename _Ptr>
        __shared_count(_Ptr __p) : _M_pi(0)
        {
          try
            {
              _M_pi = new _Sp_counted_ptr<_Ptr, _Lp>(__p);
            }
          catch(...)
            {
              delete __p;
              throw;
            }
        }

      template<typename _Ptr, typename _Deleter>
        __shared_count(_Ptr __p, _Deleter __d) : _M_pi(0)
        {
          
          typedef std::allocator<int> _Alloc;
          typedef _Sp_counted_deleter<_Ptr, _Deleter, _Alloc, _Lp> _Sp_cd_type;
          typedef std::allocator<_Sp_cd_type> _Alloc2;
          _Alloc2 __a2;
          try
            {
              _M_pi = __a2.allocate(1);
              ::new(static_cast<void*>(_M_pi)) _Sp_cd_type(__p, __d);
            }
          catch(...)
            {
              __d(__p); 
              if (_M_pi)
                __a2.deallocate(static_cast<_Sp_cd_type*>(_M_pi), 1);
              throw;
            }
        }

      template<typename _Ptr, typename _Deleter, typename _Alloc>
        __shared_count(_Ptr __p, _Deleter __d, _Alloc __a) : _M_pi(0)
        {
          typedef _Sp_counted_deleter<_Ptr, _Deleter, _Alloc, _Lp> _Sp_cd_type;
          typedef typename _Alloc::template rebind<_Sp_cd_type>::other _Alloc2;
          _Alloc2 __a2(__a);
          try
            {
              _M_pi = __a2.allocate(1);
              ::new(static_cast<void*>(_M_pi)) _Sp_cd_type(__p, __d, __a);
            }
          catch(...)
            {
              __d(__p); 
              if (_M_pi)
                __a2.deallocate(static_cast<_Sp_cd_type*>(_M_pi), 1);
              throw;
            }
        }

      template<typename _Tp, typename _Alloc, typename... _Args>
        __shared_count(_Sp_make_shared_tag, _Tp*, _Alloc __a, _Args&&... __args)
        : _M_pi(0)
        {
          typedef _Sp_counted_ptr_inplace<_Tp, _Alloc, _Lp> _Sp_cp_type;
          typedef typename _Alloc::template rebind<_Sp_cp_type>::other _Alloc2;
          _Alloc2 __a2(__a);
          try
            {
              _M_pi = __a2.allocate(1);
              ::new(static_cast<void*>(_M_pi)) _Sp_cp_type(__a,
                    std::forward<_Args>(__args)...);
            }
          catch(...)
            {
              if (_M_pi)
        	__a2.deallocate(static_cast<_Sp_cp_type*>(_M_pi), 1);
              throw;
            }
        }

      
      template<typename _Tp>
        explicit
        __shared_count(std::auto_ptr<_Tp>&& __r)
        : _M_pi(new _Sp_counted_ptr<_Tp*, _Lp>(__r.get()))
        { __r.release(); }

      
      template<typename _Tp, typename _Del>
        explicit
        __shared_count(std::unique_ptr<_Tp, _Del>&& __r)
        : _M_pi(_S_create_from_up(std::move(__r)))
        { __r.release(); }

      
      explicit
      __shared_count(const __weak_count<_Lp>& __r);
  
      ~__shared_count() 
      {
        if (_M_pi != 0)
          _M_pi->_M_release();
      }

      __shared_count(const __shared_count& __r)
      : _M_pi(__r._M_pi) 
      {
        if (_M_pi != 0)
          _M_pi->_M_add_ref_copy();
      }
  
      __shared_count&
      operator=(const __shared_count& __r) 
      {
        _Sp_counted_base<_Lp>* __tmp = __r._M_pi;
        if (__tmp != _M_pi)
          {
            if (__tmp != 0)
              __tmp->_M_add_ref_copy();
            if (_M_pi != 0)
              _M_pi->_M_release();
            _M_pi = __tmp;
          }
        return *this;
      }
  
      void
      _M_swap(__shared_count& __r) 
      {
        _Sp_counted_base<_Lp>* __tmp = __r._M_pi;
        __r._M_pi = _M_pi;
        _M_pi = __tmp;
      }
  
      long
      _M_get_use_count() const 
      { return _M_pi != 0 ? _M_pi->_M_get_use_count() : 0; }

      bool
      _M_unique() const 
      { return this->_M_get_use_count() == 1; }

      void*
      _M_get_deleter(const std::type_info& __ti) const
      { return _M_pi ? _M_pi->_M_get_deleter(__ti) : 0; }

      bool
      _M_less(const __shared_count& __rhs) const
      { return std::less<_Sp_counted_base<_Lp>*>()(this->_M_pi, __rhs._M_pi); }

      bool
      _M_less(const __weak_count<_Lp>& __rhs) const
      { return std::less<_Sp_counted_base<_Lp>*>()(this->_M_pi, __rhs._M_pi); }

      
      friend inline bool
      operator==(const __shared_count& __a, const __shared_count& __b)
      { return __a._M_pi == __b._M_pi; }
  
    private:
      friend class __weak_count<_Lp>;

      template<typename _Tp, typename _Del>
        static _Sp_counted_base<_Lp>*
        _S_create_from_up(std::unique_ptr<_Tp, _Del>&& __r,
          typename std::enable_if<!std::is_reference<_Del>::value>::type* = 0)
        {
          return new _Sp_counted_deleter<_Tp*, _Del, std::allocator<_Tp>,
            _Lp>(__r.get(), __r.get_deleter());
        }

      template<typename _Tp, typename _Del>
        static _Sp_counted_base<_Lp>*
        _S_create_from_up(std::unique_ptr<_Tp, _Del>&& __r,
          typename std::enable_if<std::is_reference<_Del>::value>::type* = 0)
        {
          typedef typename std::remove_reference<_Del>::type _Del1;
          typedef std::reference_wrapper<_Del1> _Del2;
          return new _Sp_counted_deleter<_Tp*, _Del2, std::allocator<_Tp>,
            _Lp>(__r.get(), std::ref(__r.get_deleter()));
        }

      _Sp_counted_base<_Lp>*  _M_pi;
    };


  template<_Lock_policy _Lp>
    class __weak_count
    {
    public:
      __weak_count()
      : _M_pi(0) 
      { }
  
      __weak_count(const __shared_count<_Lp>& __r)
      : _M_pi(__r._M_pi) 
      {
	if (_M_pi != 0)
	  _M_pi->_M_weak_add_ref();
      }
      
      __weak_count(const __weak_count<_Lp>& __r)
      : _M_pi(__r._M_pi) 
      {
	if (_M_pi != 0)
	  _M_pi->_M_weak_add_ref();
      }
      
      ~__weak_count() 
      {
	if (_M_pi != 0)
	  _M_pi->_M_weak_release();
      }
      
      __weak_count<_Lp>&
      operator=(const __shared_count<_Lp>& __r) 
      {
	_Sp_counted_base<_Lp>* __tmp = __r._M_pi;
	if (__tmp != 0)
	  __tmp->_M_weak_add_ref();
	if (_M_pi != 0)
	  _M_pi->_M_weak_release();
	_M_pi = __tmp;  
	return *this;
      }
      
      __weak_count<_Lp>&
      operator=(const __weak_count<_Lp>& __r) 
      {
	_Sp_counted_base<_Lp>* __tmp = __r._M_pi;
	if (__tmp != 0)
	  __tmp->_M_weak_add_ref();
	if (_M_pi != 0)
	  _M_pi->_M_weak_release();
	_M_pi = __tmp;
	return *this;
      }

      void
      _M_swap(__weak_count<_Lp>& __r) 
      {
	_Sp_counted_base<_Lp>* __tmp = __r._M_pi;
	__r._M_pi = _M_pi;
	_M_pi = __tmp;
      }
  
      long
      _M_get_use_count() const 
      { return _M_pi != 0 ? _M_pi->_M_get_use_count() : 0; }

      bool
      _M_less(const __weak_count& __rhs) const
      { return std::less<_Sp_counted_base<_Lp>*>()(this->_M_pi, __rhs._M_pi); }

      bool
      _M_less(const __shared_count<_Lp>& __rhs) const
      { return std::less<_Sp_counted_base<_Lp>*>()(this->_M_pi, __rhs._M_pi); }

      
      friend inline bool
      operator==(const __weak_count& __a, const __weak_count& __b)
      { return __a._M_pi == __b._M_pi; }

    private:
      friend class __shared_count<_Lp>;

      _Sp_counted_base<_Lp>*  _M_pi;
    };

  
  template<_Lock_policy _Lp>
    inline
    __shared_count<_Lp>::
    __shared_count(const __weak_count<_Lp>& __r)
    : _M_pi(__r._M_pi)
    {
      if (_M_pi != 0)
	_M_pi->_M_add_ref_lock();
      else
	__throw_bad_weak_ptr();
    }

  
  template<typename _Tp, _Lock_policy _Lp = __default_lock_policy>
    class __shared_ptr;
  
  template<typename _Tp, _Lock_policy _Lp = __default_lock_policy>
    class __weak_ptr;

  template<typename _Tp, _Lock_policy _Lp = __default_lock_policy>
    class __enable_shared_from_this;

  template<typename _Tp>
    class shared_ptr;
  
  template<typename _Tp>
    class weak_ptr;

  template<typename _Tp>
    class enable_shared_from_this;

  

  
  template<_Lock_policy _Lp, typename _Tp1, typename _Tp2>
    void
    __enable_shared_from_this_helper(const __shared_count<_Lp>&,
				     const __enable_shared_from_this<_Tp1,
				     _Lp>*, const _Tp2*);

  
  template<typename _Tp1, typename _Tp2>
    void
    __enable_shared_from_this_helper(const __shared_count<>&,
				     const enable_shared_from_this<_Tp1>*,
				     const _Tp2*);

  template<_Lock_policy _Lp>
    inline void
    __enable_shared_from_this_helper(const __shared_count<_Lp>&, ...)
    { }


  template<typename _Tp, _Lock_policy _Lp>
    class __shared_ptr
    {
    public:
      typedef _Tp   element_type;
      
      

 
      __shared_ptr()
      : _M_ptr(0), _M_refcount() 
      { }

      



 
      template<typename _Tp1>
        explicit
        __shared_ptr(_Tp1* __p)
	: _M_ptr(__p), _M_refcount(__p)
        {
	  
	  
	  __enable_shared_from_this_helper(_M_refcount, __p, __p);
	}

      
      
      
      
      
      
      





 
      template<typename _Tp1, typename _Deleter>
        __shared_ptr(_Tp1* __p, _Deleter __d)
        : _M_ptr(__p), _M_refcount(__p, __d)
        {
	  
	  
	  __enable_shared_from_this_helper(_M_refcount, __p, __p);
	}
      
      
      
      
      
      
      
      
      






 
      template<typename _Tp1, typename _Deleter, typename _Alloc>
        __shared_ptr(_Tp1* __p, _Deleter __d, const _Alloc& __a)
	: _M_ptr(__p), _M_refcount(__p, __d, __a)
        {
	  
	  
	  __enable_shared_from_this_helper(_M_refcount, __p, __p);
	}

      













 
      template<typename _Tp1>
        __shared_ptr(const __shared_ptr<_Tp1, _Lp>& __r, _Tp* __p)
	: _M_ptr(__p), _M_refcount(__r._M_refcount) 
        { }

      
      
      




 
      template<typename _Tp1>
        __shared_ptr(const __shared_ptr<_Tp1, _Lp>& __r)
	: _M_ptr(__r._M_ptr), _M_refcount(__r._M_refcount) 
        {  }

      


 
      __shared_ptr(__shared_ptr&& __r)
      : _M_ptr(__r._M_ptr), _M_refcount() 
      {
        _M_refcount._M_swap(__r._M_refcount);
        __r._M_ptr = 0;
      }

      


 
      template<typename _Tp1>
        __shared_ptr(__shared_ptr<_Tp1, _Lp>&& __r)
	: _M_ptr(__r._M_ptr), _M_refcount() 
        {
          
          _M_refcount._M_swap(__r._M_refcount);
          __r._M_ptr = 0;
        }

      





 
      template<typename _Tp1>
        explicit
        __shared_ptr(const __weak_ptr<_Tp1, _Lp>& __r)
	: _M_refcount(__r._M_refcount) 
        {
	  
	  
	  
	  _M_ptr = __r._M_ptr;
	}

      template<typename _Tp1, typename _Del>
        explicit
        __shared_ptr(const std::unique_ptr<_Tp1, _Del>&) = delete;

      

 
      template<typename _Tp1, typename _Del>
        explicit
        __shared_ptr(std::unique_ptr<_Tp1, _Del>&& __r)
	: _M_ptr(__r.get()), _M_refcount()
        {
	  
	  _Tp1* __tmp = __r.get();
	  _M_refcount = __shared_count<_Lp>(std::move(__r));
	  __enable_shared_from_this_helper(_M_refcount, __tmp, __tmp);
	}

      

 
      template<typename _Tp1>
        explicit
        __shared_ptr(std::auto_ptr<_Tp1>&& __r)
	: _M_ptr(__r.get()), _M_refcount()
        {
	  
	  
	  _Tp1* __tmp = __r.get();
	  _M_refcount = __shared_count<_Lp>(std::move(__r));
	  __enable_shared_from_this_helper(_M_refcount, __tmp, __tmp);
	}

      template<typename _Tp1>
        __shared_ptr&
        operator=(const __shared_ptr<_Tp1, _Lp>& __r) 
        {
	  _M_ptr = __r._M_ptr;
	  _M_refcount = __r._M_refcount; 
	  return *this;
	}

      template<typename _Tp1>
        __shared_ptr&
        operator=(std::auto_ptr<_Tp1>&& __r)
        {
	  __shared_ptr(std::move(__r)).swap(*this);
	  return *this;
	}

      __shared_ptr&
      operator=(__shared_ptr&& __r)
      {
        __shared_ptr(std::move(__r)).swap(*this);
        return *this;
      }
     
      template<class _Tp1>
        __shared_ptr&
        operator=(__shared_ptr<_Tp1, _Lp>&& __r)
        {
          __shared_ptr(std::move(__r)).swap(*this);
          return *this;
        }

      template<typename _Tp1, typename _Del>
        __shared_ptr&
        operator=(const std::unique_ptr<_Tp1, _Del>& __r) = delete;

      template<typename _Tp1, typename _Del>
        __shared_ptr&
        operator=(std::unique_ptr<_Tp1, _Del>&& __r)
        {
	  __shared_ptr(std::move(__r)).swap(*this);
	  return *this;
        }

      void
      reset() 
      { __shared_ptr().swap(*this); }

      template<typename _Tp1>
        void
        reset(_Tp1* __p) 
        {
	  
	  ; 
	  __shared_ptr(__p).swap(*this);
	}

      template<typename _Tp1, typename _Deleter>
        void
        reset(_Tp1* __p, _Deleter __d)
        { __shared_ptr(__p, __d).swap(*this); }

      template<typename _Tp1, typename _Deleter, typename _Alloc>
        void
        reset(_Tp1* __p, _Deleter __d, const _Alloc& __a)
        { __shared_ptr(__p, __d, __a).swap(*this); }

      
      typename std::add_lvalue_reference<_Tp>::type
      operator*() const 
      {
	;
	return *_M_ptr;
      }

      _Tp*
      operator->() const 
      {
	;
	return _M_ptr;
      }
    
      _Tp*
      get() const 
      { return _M_ptr; }

      
    private:
      typedef _Tp* __shared_ptr::*__unspecified_bool_type;

    public:
      operator __unspecified_bool_type() const 
      { return _M_ptr == 0 ? 0 : &__shared_ptr::_M_ptr; }

      bool
      unique() const 
      { return _M_refcount._M_unique(); }

      long
      use_count() const 
      { return _M_refcount._M_get_use_count(); }

      void
      swap(__shared_ptr<_Tp, _Lp>&& __other) 
      {
	std::swap(_M_ptr, __other._M_ptr);
	_M_refcount._M_swap(__other._M_refcount);
      }

      template<typename _Tp1>
        bool
        owner_before(__shared_ptr<_Tp1, _Lp> const& __rhs) const
        { return _M_refcount._M_less(__rhs._M_refcount); }

      template<typename _Tp1>
        bool
        owner_before(__weak_ptr<_Tp1, _Lp> const& __rhs) const
        { return _M_refcount._M_less(__rhs._M_refcount); }

    protected:
      
      template<typename _Alloc, typename... _Args>
        __shared_ptr(_Sp_make_shared_tag __tag, _Alloc __a, _Args&&... __args)
        : _M_ptr(), _M_refcount(__tag, (_Tp*)0, __a,
				std::forward<_Args>(__args)...)
        {
          
          
          void* __p = _M_refcount._M_get_deleter(typeid(__tag));
          _M_ptr = static_cast<_Tp*>(__p);
	  __enable_shared_from_this_helper(_M_refcount, _M_ptr, _M_ptr);
        }

      template<typename _Tp1, _Lock_policy _Lp1, typename _Alloc,
               typename... _Args>
        friend __shared_ptr<_Tp1, _Lp1>
        __allocate_shared(_Alloc __a, _Args&&... __args);

    private:
      void*
      _M_get_deleter(const std::type_info& __ti) const
      { return _M_refcount._M_get_deleter(__ti); }

      template<typename _Tp1, _Lock_policy _Lp1> friend class __shared_ptr;
      template<typename _Tp1, _Lock_policy _Lp1> friend class __weak_ptr;

      template<typename _Del, typename _Tp1, _Lock_policy _Lp1>
        friend _Del* get_deleter(const __shared_ptr<_Tp1, _Lp1>&);

      _Tp*         	   _M_ptr;         
      __shared_count<_Lp>  _M_refcount;    
    };

  
  template<typename _Tp1, typename _Tp2, _Lock_policy _Lp>
    inline bool
    operator==(const __shared_ptr<_Tp1, _Lp>& __a,
        const __shared_ptr<_Tp2, _Lp>& __b)
    { return __a.get() == __b.get(); }

  template<typename _Tp1, typename _Tp2, _Lock_policy _Lp>
    inline bool
    operator!=(const __shared_ptr<_Tp1, _Lp>& __a,
        const __shared_ptr<_Tp2, _Lp>& __b)
    { return __a.get() != __b.get(); }

  template<typename _Tp1, typename _Tp2, _Lock_policy _Lp>
    inline bool
    operator<(const __shared_ptr<_Tp1, _Lp>& __a,
        const __shared_ptr<_Tp2, _Lp>& __b)
    { return __a.get() < __b.get(); }

  template<typename _Sp>
    struct _Sp_less : public binary_function<_Sp, _Sp, bool>
    {
      bool
      operator()(const _Sp& __lhs, const _Sp& __rhs) const
      {
        return std::less<typename _Sp::element_type*>()(__lhs.get(),
            __rhs.get());
      }
    };

  template<typename _Tp, _Lock_policy _Lp>
    struct less<__shared_ptr<_Tp, _Lp>>
    : public _Sp_less<__shared_ptr<_Tp, _Lp>>
    { };

  
  template<typename _Tp, _Lock_policy _Lp>
    inline bool
    operator>(const __shared_ptr<_Tp, _Lp>& __a,
        const __shared_ptr<_Tp, _Lp>& __b)
    { return __a.get() > __b.get(); }

  template<typename _Tp, _Lock_policy _Lp>
    inline bool
    operator>=(const __shared_ptr<_Tp, _Lp>& __a,
        const __shared_ptr<_Tp, _Lp>& __b)
    { return __a.get() >= __b.get(); }

  template<typename _Tp, _Lock_policy _Lp>
    inline bool
    operator<=(const __shared_ptr<_Tp, _Lp>& __a,
        const __shared_ptr<_Tp, _Lp>& __b)
    { return __a.get() <= __b.get(); }

  
  template<typename _Tp, _Lock_policy _Lp>
    inline void
    swap(__shared_ptr<_Tp, _Lp>& __a, __shared_ptr<_Tp, _Lp>& __b)
    { __a.swap(__b); }

  template<typename _Tp, _Lock_policy _Lp>
    inline void
    swap(__shared_ptr<_Tp, _Lp>&& __a, __shared_ptr<_Tp, _Lp>& __b)
    { __a.swap(__b); }

  template<typename _Tp, _Lock_policy _Lp>
    inline void
    swap(__shared_ptr<_Tp, _Lp>& __a, __shared_ptr<_Tp, _Lp>&& __b)
    { __a.swap(__b); }

  
  



 
  template<typename _Tp, typename _Tp1, _Lock_policy _Lp>
    inline __shared_ptr<_Tp, _Lp>
    static_pointer_cast(const __shared_ptr<_Tp1, _Lp>& __r)
    { return __shared_ptr<_Tp, _Lp>(__r, static_cast<_Tp*>(__r.get())); }

  



 
  template<typename _Tp, typename _Tp1, _Lock_policy _Lp>
    inline __shared_ptr<_Tp, _Lp>
    const_pointer_cast(const __shared_ptr<_Tp1, _Lp>& __r)
    { return __shared_ptr<_Tp, _Lp>(__r, const_cast<_Tp*>(__r.get())); }

  



 
  template<typename _Tp, typename _Tp1, _Lock_policy _Lp>
    inline __shared_ptr<_Tp, _Lp>
    dynamic_pointer_cast(const __shared_ptr<_Tp1, _Lp>& __r)
    {
      if (_Tp* __p = dynamic_cast<_Tp*>(__r.get()))
        return __shared_ptr<_Tp, _Lp>(__r, __p);
      return __shared_ptr<_Tp, _Lp>();
    }

  
  template<typename _Ch, typename _Tr, typename _Tp, _Lock_policy _Lp>
    std::basic_ostream<_Ch, _Tr>&
    operator<<(std::basic_ostream<_Ch, _Tr>& __os, 
	       const __shared_ptr<_Tp, _Lp>& __p)
    {
      __os << __p.get();
      return __os;
    }

  
  template<typename _Del, typename _Tp, _Lock_policy _Lp>
    inline _Del*
    get_deleter(const __shared_ptr<_Tp, _Lp>& __p)
    { return static_cast<_Del*>(__p._M_get_deleter(typeid(_Del))); }


  template<typename _Tp, _Lock_policy _Lp>
    class __weak_ptr
    {
    public:
      typedef _Tp element_type;
      
      __weak_ptr()
      : _M_ptr(0), _M_refcount() 
      { }

      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      template<typename _Tp1>
        __weak_ptr(const __weak_ptr<_Tp1, _Lp>& __r)
	: _M_refcount(__r._M_refcount) 
        {
	  
	  _M_ptr = __r.lock().get();
	}

      template<typename _Tp1>
        __weak_ptr(const __shared_ptr<_Tp1, _Lp>& __r)
	: _M_ptr(__r._M_ptr), _M_refcount(__r._M_refcount) 
        {  }

      template<typename _Tp1>
        __weak_ptr&
        operator=(const __weak_ptr<_Tp1, _Lp>& __r) 
        {
	  _M_ptr = __r.lock().get();
	  _M_refcount = __r._M_refcount;
	  return *this;
	}
      
      template<typename _Tp1>
        __weak_ptr&
        operator=(const __shared_ptr<_Tp1, _Lp>& __r) 
        {
	  _M_ptr = __r._M_ptr;
	  _M_refcount = __r._M_refcount;
	  return *this;
	}

      __shared_ptr<_Tp, _Lp>
      lock() const 
      {
	
	if (expired())
	  return __shared_ptr<element_type, _Lp>();

	try
	  {
	    return __shared_ptr<element_type, _Lp>(*this);
	  }
	catch(const bad_weak_ptr&)
	  {
	    
	    
	    
	    return __shared_ptr<element_type, _Lp>();
	  }
	
      } 

      long
      use_count() const 
      { return _M_refcount._M_get_use_count(); }

      bool
      expired() const 
      { return _M_refcount._M_get_use_count() == 0; }

      template<typename _Tp1>
        bool
        owner_before(const __shared_ptr<_Tp1, _Lp>& __rhs) const
        { return _M_refcount._M_less(__rhs._M_refcount); }

      template<typename _Tp1>
        bool
        owner_before(const __weak_ptr<_Tp1, _Lp>& __rhs) const
        { return _M_refcount._M_less(__rhs._M_refcount); }

      void
      reset() 
      { __weak_ptr().swap(*this); }

      void
      swap(__weak_ptr& __s) 
      {
	std::swap(_M_ptr, __s._M_ptr);
	_M_refcount._M_swap(__s._M_refcount);
      }

      
      template<typename _Tp1>
        bool operator<(const __weak_ptr<_Tp1, _Lp>&) const = delete;
      template<typename _Tp1>
        bool operator<=(const __weak_ptr<_Tp1, _Lp>&) const = delete;
      template<typename _Tp1>
        bool operator>(const __weak_ptr<_Tp1, _Lp>&) const = delete;
      template<typename _Tp1>
        bool operator>=(const __weak_ptr<_Tp1, _Lp>&) const = delete;

    private:
      
      void
      _M_assign(_Tp* __ptr, const __shared_count<_Lp>& __refcount)
      {
	_M_ptr = __ptr;
	_M_refcount = __refcount;
      }

      template<typename _Tp1, _Lock_policy _Lp1> friend class __shared_ptr;
      template<typename _Tp1, _Lock_policy _Lp1> friend class __weak_ptr;
      friend class __enable_shared_from_this<_Tp, _Lp>;
      friend class enable_shared_from_this<_Tp>;

      _Tp*       	 _M_ptr;         
      __weak_count<_Lp>  _M_refcount;    
    };

  
  template<typename _Tp, _Lock_policy _Lp>
    inline void
    swap(__weak_ptr<_Tp, _Lp>& __a, __weak_ptr<_Tp, _Lp>& __b)
    { __a.swap(__b); }

  
  template<typename _Tp> struct owner_less;

  template<typename _Tp, typename _Tp1>
    struct _Sp_owner_less : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __lhs, const _Tp& __rhs) const
      { return __lhs.owner_before(__rhs); }
      bool
      operator()(const _Tp& __lhs, const _Tp1& __rhs) const
      { return __lhs.owner_before(__rhs); }
      bool
      operator()(const _Tp1& __lhs, const _Tp& __rhs) const
      { return __lhs.owner_before(__rhs); }
    };

  template<typename _Tp, _Lock_policy _Lp>
    struct owner_less<__shared_ptr<_Tp, _Lp>>
    : public _Sp_owner_less<__shared_ptr<_Tp, _Lp>, __weak_ptr<_Tp, _Lp>>
    { };

  template<typename _Tp, _Lock_policy _Lp>
    struct owner_less<__weak_ptr<_Tp, _Lp>>
    : public _Sp_owner_less<__weak_ptr<_Tp, _Lp>, __shared_ptr<_Tp, _Lp>>
    {
    };


  template<typename _Tp, _Lock_policy _Lp>
    class __enable_shared_from_this
    {
    protected:
      __enable_shared_from_this() { }
      
      __enable_shared_from_this(const __enable_shared_from_this&) { }
      
      __enable_shared_from_this&
      operator=(const __enable_shared_from_this&)
      { return *this; }

      ~__enable_shared_from_this() { }
      
    public:
      __shared_ptr<_Tp, _Lp>
      shared_from_this()
      { return __shared_ptr<_Tp, _Lp>(this->_M_weak_this); }

      __shared_ptr<const _Tp, _Lp>
      shared_from_this() const
      { return __shared_ptr<const _Tp, _Lp>(this->_M_weak_this); }

    private:
      template<typename _Tp1>
        void
        _M_weak_assign(_Tp1* __p, const __shared_count<_Lp>& __n) const
        { _M_weak_this._M_assign(__p, __n); }

      template<typename _Tp1>
        friend void
        __enable_shared_from_this_helper(const __shared_count<_Lp>& __pn,
					 const __enable_shared_from_this* __pe,
					 const _Tp1* __px)
        {
	  if (__pe != 0)
	    __pe->_M_weak_assign(const_cast<_Tp1*>(__px), __pn);
	}

      mutable __weak_ptr<_Tp, _Lp>  _M_weak_this;
    };

  




 
  template<typename _Tp>
    class shared_ptr
    : public __shared_ptr<_Tp>
    {
    public:
      shared_ptr()
      : __shared_ptr<_Tp>() { }

      template<typename _Tp1>
        explicit
        shared_ptr(_Tp1* __p)
	: __shared_ptr<_Tp>(__p) { }

      template<typename _Tp1, typename _Deleter>
        shared_ptr(_Tp1* __p, _Deleter __d)
	: __shared_ptr<_Tp>(__p, __d) { }

      template<typename _Tp1, typename _Deleter, typename _Alloc>
        shared_ptr(_Tp1* __p, _Deleter __d, const _Alloc& __a)
	: __shared_ptr<_Tp>(__p, __d, __a) { }

      
      template<typename _Tp1>
        shared_ptr(const shared_ptr<_Tp1>& __r, _Tp* __p)
	: __shared_ptr<_Tp>(__r, __p) { }

      template<typename _Tp1>
        shared_ptr(const shared_ptr<_Tp1>& __r)
	: __shared_ptr<_Tp>(__r) { }

      shared_ptr(shared_ptr&& __r)
      : __shared_ptr<_Tp>(std::move(__r)) { }

      template<typename _Tp1>
        shared_ptr(shared_ptr<_Tp1>&& __r)
        : __shared_ptr<_Tp>(std::move(__r)) { }

      template<typename _Tp1>
        explicit
        shared_ptr(const weak_ptr<_Tp1>& __r)
	: __shared_ptr<_Tp>(__r) { }

      template<typename _Tp1>
        explicit
        shared_ptr(std::auto_ptr<_Tp1>&& __r)
	: __shared_ptr<_Tp>(std::move(__r)) { }

      template<typename _Tp1, typename _Del>
        explicit
        shared_ptr(const std::unique_ptr<_Tp1, _Del>&) = delete;

      template<typename _Tp1, typename _Del>
        explicit
        shared_ptr(std::unique_ptr<_Tp1, _Del>&& __r)
	: __shared_ptr<_Tp>(std::move(__r)) { }

      template<typename _Tp1>
        shared_ptr&
        operator=(const shared_ptr<_Tp1>& __r) 
        {
	  this->__shared_ptr<_Tp>::operator=(__r);
	  return *this;
	}

      template<typename _Tp1>
        shared_ptr&
        operator=(std::auto_ptr<_Tp1>&& __r)
        {
	  this->__shared_ptr<_Tp>::operator=(std::move(__r));
	  return *this;
	}

      shared_ptr&
      operator=(shared_ptr&& __r)
      {
        this->__shared_ptr<_Tp>::operator=(std::move(__r));
        return *this;
      }
     
      template<class _Tp1>
        shared_ptr&
        operator=(shared_ptr<_Tp1>&& __r)
        {
          this->__shared_ptr<_Tp>::operator=(std::move(__r));
          return *this;
        }

      template<typename _Tp1, typename _Del>
        shared_ptr&
        operator=(const std::unique_ptr<_Tp1, _Del>& __r) = delete;

      template<typename _Tp1, typename _Del>
        shared_ptr&
        operator=(std::unique_ptr<_Tp1, _Del>&& __r)
        {
	  this->__shared_ptr<_Tp>::operator=(std::move(__r));
	  return *this;
	}

    private:
      
      template<typename _Alloc, typename... _Args>
        shared_ptr(_Sp_make_shared_tag __tag, _Alloc __a, _Args&&... __args)
        : __shared_ptr<_Tp>(__tag, __a, std::forward<_Args>(__args)...)
        { }

      template<typename _Tp1, typename _Alloc, typename... _Args>
        friend shared_ptr<_Tp1>
        allocate_shared(_Alloc __a, _Args&&... __args);
    };

  
  template<typename _Tp1, typename _Tp2>
    inline bool
    operator==(const shared_ptr<_Tp1>& __a, const shared_ptr<_Tp2>& __b)
    { return __a.get() == __b.get(); }

  template<typename _Tp1, typename _Tp2>
    inline bool
    operator!=(const shared_ptr<_Tp1>& __a, const shared_ptr<_Tp2>& __b)
    { return __a.get() != __b.get(); }

  template<typename _Tp1, typename _Tp2>
    inline bool
    operator<(const shared_ptr<_Tp1>& __a, const shared_ptr<_Tp2>& __b)
    { return __a.get() < __b.get(); }

  template<typename _Tp>
    struct less<shared_ptr<_Tp>>
    : public _Sp_less<shared_ptr<_Tp>>
    { };

  
  template<typename _Tp>
    inline void
    swap(shared_ptr<_Tp>& __a, shared_ptr<_Tp>& __b)
    { __a.swap(__b); }

  template<typename _Tp>
    inline void
    swap(shared_ptr<_Tp>&& __a, shared_ptr<_Tp>& __b)
    { __a.swap(__b); }

  template<typename _Tp>
    inline void
    swap(shared_ptr<_Tp>& __a, shared_ptr<_Tp>&& __b)
    { __a.swap(__b); }

  
  template<typename _Tp, typename _Tp1>
    inline shared_ptr<_Tp>
    static_pointer_cast(const shared_ptr<_Tp1>& __r)
    { return shared_ptr<_Tp>(__r, static_cast<_Tp*>(__r.get())); }

  template<typename _Tp, typename _Tp1>
    inline shared_ptr<_Tp>
    const_pointer_cast(const shared_ptr<_Tp1>& __r)
    { return shared_ptr<_Tp>(__r, const_cast<_Tp*>(__r.get())); }

  template<typename _Tp, typename _Tp1>
    inline shared_ptr<_Tp>
    dynamic_pointer_cast(const shared_ptr<_Tp1>& __r)
    {
      if (_Tp* __p = dynamic_cast<_Tp*>(__r.get()))
        return shared_ptr<_Tp>(__r, __p);
      return shared_ptr<_Tp>();
    }


  



 
  template<typename _Tp>
    class weak_ptr
    : public __weak_ptr<_Tp>
    {
    public:
      weak_ptr()
      : __weak_ptr<_Tp>() { }
      
      template<typename _Tp1>
        weak_ptr(const weak_ptr<_Tp1>& __r)
	: __weak_ptr<_Tp>(__r) { }

      template<typename _Tp1>
        weak_ptr(const shared_ptr<_Tp1>& __r)
	: __weak_ptr<_Tp>(__r) { }

      template<typename _Tp1>
        weak_ptr&
        operator=(const weak_ptr<_Tp1>& __r) 
        {
	  this->__weak_ptr<_Tp>::operator=(__r);
	  return *this;
	}

      template<typename _Tp1>
        weak_ptr&
        operator=(const shared_ptr<_Tp1>& __r) 
        {
	  this->__weak_ptr<_Tp>::operator=(__r);
	  return *this;
	}

      shared_ptr<_Tp>
      lock() const 
      {
	if (this->expired())
	  return shared_ptr<_Tp>();

	try
	  {
	    return shared_ptr<_Tp>(*this);
	  }
	catch(const bad_weak_ptr&)
	  {
	    return shared_ptr<_Tp>();
	  }
      }

      
      template<typename _Tp1>
        bool operator<(const weak_ptr<_Tp1>&) const = delete;
      template<typename _Tp1>
        bool operator<=(const weak_ptr<_Tp1>&) const = delete;
      template<typename _Tp1>
        bool operator>(const weak_ptr<_Tp1>&) const = delete;
      template<typename _Tp1>
        bool operator>=(const weak_ptr<_Tp1>&) const = delete;
    };

  
  template<typename _Tp>
    inline void
    swap(weak_ptr<_Tp>& __a, weak_ptr<_Tp>& __b)
    { __a.swap(__b); }

  
  template<typename _Tp>
    struct owner_less<shared_ptr<_Tp>>
    : public _Sp_owner_less<shared_ptr<_Tp>, weak_ptr<_Tp>>
    { };

  template<typename _Tp>
    struct owner_less<weak_ptr<_Tp>>
    : public _Sp_owner_less<weak_ptr<_Tp>, shared_ptr<_Tp>>
    { };

  

 
  template<typename _Tp>
    class enable_shared_from_this
    {
    protected:
      enable_shared_from_this() { }
      
      enable_shared_from_this(const enable_shared_from_this&) { }

      enable_shared_from_this&
      operator=(const enable_shared_from_this&)
      { return *this; }

      ~enable_shared_from_this() { }

    public:
      shared_ptr<_Tp>
      shared_from_this()
      { return shared_ptr<_Tp>(this->_M_weak_this); }

      shared_ptr<const _Tp>
      shared_from_this() const
      { return shared_ptr<const _Tp>(this->_M_weak_this); }

    private:
      template<typename _Tp1>
        void
        _M_weak_assign(_Tp1* __p, const __shared_count<>& __n) const
        { _M_weak_this._M_assign(__p, __n); }

      template<typename _Tp1>
        friend void
        __enable_shared_from_this_helper(const __shared_count<>& __pn,
					 const enable_shared_from_this* __pe,
					 const _Tp1* __px)
        {
	  if (__pe != 0)
	    __pe->_M_weak_assign(const_cast<_Tp1*>(__px), __pn);
	}

      mutable weak_ptr<_Tp>  _M_weak_this;
    };

  template<typename _Tp, _Lock_policy _Lp, typename _Alloc, typename... _Args>
    inline __shared_ptr<_Tp, _Lp>
    __allocate_shared(_Alloc __a, _Args&&... __args)
    {
      return __shared_ptr<_Tp, _Lp>(_Sp_make_shared_tag(),
          std::forward<_Alloc>(__a), std::forward<_Args>(__args)...);
    }

  template<typename _Tp, _Lock_policy _Lp, typename... _Args>
    inline __shared_ptr<_Tp, _Lp>
    __make_shared(_Args&&... __args)
    {
      typedef typename std::remove_const<_Tp>::type _Tp_nc;
      return __allocate_shared<_Tp, _Lp>(std::allocator<_Tp_nc>(),
              std::forward<_Args>(__args)...);
    }

  








 
  template<typename _Tp, typename _Alloc, typename... _Args>
    inline shared_ptr<_Tp>
    allocate_shared(_Alloc __a, _Args&&... __args)
    {
      return shared_ptr<_Tp>(_Sp_make_shared_tag(), std::forward<_Alloc>(__a),
              std::forward<_Args>(__args)...);
    }

  




 
  template<typename _Tp, typename... _Args>
    inline shared_ptr<_Tp>
    make_shared(_Args&&... __args)
    {
      typedef typename std::remove_const<_Tp>::type _Tp_nc;
      return allocate_shared<_Tp>(std::allocator<_Tp_nc>(),
              std::forward<_Args>(__args)...);
    }

  

}







 


















































 



 







 


extern "C" {

 
extern void __assert_fail (__const char *__assertion, __const char *__file,
			   unsigned int __line, __const char *__function)
     throw () __attribute__ ((__noreturn__));

 
extern void __assert_perror_fail (int __errnum, __const char *__file,
				  unsigned int __line,
				  __const char *__function)
     throw () __attribute__ ((__noreturn__));



 
extern void __assert (const char *__assertion, const char *__file, int __line)
     throw () __attribute__ ((__noreturn__));


}







 









































 








































 




























 



 





























 



































 


































 




































 









































 








































 




























 



 


















 




 



 



namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  








 
  template<typename _CharT>
    struct _Char_types
    {
      typedef unsigned long   int_type;
      typedef std::streampos  pos_type;
      typedef std::streamoff  off_type;
      typedef std::mbstate_t  state_type;
    };


  













 
  template<typename _CharT>
    struct char_traits
    {
      typedef _CharT                                    char_type;
      typedef typename _Char_types<_CharT>::int_type    int_type;
      typedef typename _Char_types<_CharT>::pos_type    pos_type;
      typedef typename _Char_types<_CharT>::off_type    off_type;
      typedef typename _Char_types<_CharT>::state_type  state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, std::size_t __n);

      static std::size_t
      length(const char_type* __s);

      static const char_type*
      find(const char_type* __s, std::size_t __n, const char_type& __a);

      static char_type*
      move(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      copy(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      assign(char_type* __s, std::size_t __n, char_type __a);

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return !eq_int_type(__c, eof()) ? __c : to_int_type(char_type()); }
    };

  template<typename _CharT>
    int
    char_traits<_CharT>::
    compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
	if (lt(__s1[__i], __s2[__i]))
	  return -1;
	else if (lt(__s2[__i], __s1[__i]))
	  return 1;
      return 0;
    }

  template<typename _CharT>
    std::size_t
    char_traits<_CharT>::
    length(const char_type* __p)
    {
      std::size_t __i = 0;
      while (!eq(__p[__i], char_type()))
        ++__i;
      return __i;
    }

  template<typename _CharT>
    const typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    find(const char_type* __s, std::size_t __n, const char_type& __a)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
        if (eq(__s[__i], __a))
          return __s + __i;
      return 0;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    move(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      return static_cast<_CharT*>(__builtin_memmove(__s1, __s2,
						    __n * sizeof(char_type)));
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    copy(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      
      std::copy(__s2, __s2 + __n, __s1);
      return __s1;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    assign(char_type* __s, std::size_t __n, char_type __a)
    {
      
      std::fill_n(__s, __n, __a);
      return __s;
    }

}

namespace std __attribute__ ((__visibility__ ("default"))) {

  
  










 
  template<class _CharT>
    struct char_traits : public __gnu_cxx::char_traits<_CharT>
    { };


  
  template<>
    struct char_traits<char>
    {
      typedef char              char_type;
      typedef int               int_type;
      typedef streampos         pos_type;
      typedef streamoff         off_type;
      typedef mbstate_t         state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return __builtin_memcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return __builtin_strlen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return static_cast<const char_type*>(__builtin_memchr(__s, __a, __n)); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memmove(__s1, __s2, __n)); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memcpy(__s1, __s2, __n)); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return static_cast<char_type*>(__builtin_memset(__s, __a, __n)); }

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }

      
      
      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(static_cast<unsigned char>(__c)); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return (__c == eof()) ? 0 : __c; }
  };


  
  template<>
    struct char_traits<wchar_t>
    {
      typedef wchar_t           char_type;
      typedef wint_t            int_type;
      typedef streamoff         off_type;
      typedef wstreampos        pos_type;
      typedef mbstate_t         state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return wcslen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return wmemchr(__s, __a, __n); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemmove(__s1, __s2, __n); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcpy(__s1, __s2, __n); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return wmemset(__s, __a, __n); }

      static char_type
      to_char_type(const int_type& __c)
      { return char_type(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return int_type(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((0xffffffffu)); }

      static int_type
      not_eof(const int_type& __c)
      { return eq_int_type(__c, eof()) ? 0 : __c; }
  };

}




























 























 



 


 


 

 

 

 
typedef unsigned char		uint8_t;
typedef unsigned short int	uint16_t;
typedef unsigned int		uint32_t;
typedef unsigned long int	uint64_t;


 

 
typedef signed char		int_least8_t;
typedef short int		int_least16_t;
typedef int			int_least32_t;
typedef long int		int_least64_t;

 
typedef unsigned char		uint_least8_t;
typedef unsigned short int	uint_least16_t;
typedef unsigned int		uint_least32_t;
typedef unsigned long int	uint_least64_t;


 

 
typedef signed char		int_fast8_t;
typedef long int		int_fast16_t;
typedef long int		int_fast32_t;
typedef long int		int_fast64_t;

 
typedef unsigned char		uint_fast8_t;
typedef unsigned long int	uint_fast16_t;
typedef unsigned long int	uint_fast32_t;
typedef unsigned long int	uint_fast64_t;


 
typedef unsigned long int	uintptr_t;


 
typedef long int		intmax_t;
typedef unsigned long int	uintmax_t;



 


 

 
 

 


 
 

 


 
 

 


 


 
 

 


 

 

 

 

 

 




 

 

 

 






























 


namespace std
{


  using ::int8_t;
  using ::int16_t;
  using ::int32_t;
  using ::int64_t;

  using ::int_fast8_t;
  using ::int_fast16_t;
  using ::int_fast32_t;
  using ::int_fast64_t;

  using ::int_least8_t;
  using ::int_least16_t;
  using ::int_least32_t;
  using ::int_least64_t;

  using ::intmax_t;
  using ::intptr_t;
  
  using ::uint8_t;
  using ::uint16_t;
  using ::uint32_t;
  using ::uint64_t;

  using ::uint_fast8_t;
  using ::uint_fast16_t;
  using ::uint_fast32_t;
  using ::uint_fast64_t;

  using ::uint_least8_t;
  using ::uint_least16_t;
  using ::uint_least32_t;
  using ::uint_least64_t;

  using ::uintmax_t;
  using ::uintptr_t;


}



namespace std __attribute__ ((__visibility__ ("default"))) {

  template<>
    struct char_traits<char16_t>
    {
      typedef char16_t          char_type;
      typedef uint_least16_t    int_type;
      typedef streamoff         off_type;
      typedef u16streampos      pos_type;
      typedef mbstate_t         state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
	for (size_t __i = 0; __i < __n; ++__i)
	  if (lt(__s1[__i], __s2[__i]))
	    return -1;
	  else if (lt(__s2[__i], __s1[__i]))
	    return 1;
	return 0;
      }

      static size_t
      length(const char_type* __s)
      {
	size_t __i = 0;
	while (!eq(__s[__i], char_type()))
	  ++__i;
	return __i;
      }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
	for (size_t __i = 0; __i < __n; ++__i)
	  if (eq(__s[__i], __a))
	    return __s + __i;
	return 0;
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
	return (static_cast<char_type*>
		(__builtin_memmove(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
	return (static_cast<char_type*>
		(__builtin_memcpy(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
	for (size_t __i = 0; __i < __n; ++__i)
	  assign(__s[__i], __a);
	return __s;
      }

      static char_type
      to_char_type(const int_type& __c)
      { return char_type(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return int_type(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>(-1); }

      static int_type
      not_eof(const int_type& __c)
      { return eq_int_type(__c, eof()) ? 0 : __c; }
    };

  template<>
    struct char_traits<char32_t>
    {
      typedef char32_t          char_type;
      typedef uint_least32_t    int_type;
      typedef streamoff         off_type;
      typedef u32streampos      pos_type;
      typedef mbstate_t         state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
	for (size_t __i = 0; __i < __n; ++__i)
	  if (lt(__s1[__i], __s2[__i]))
	    return -1;
	  else if (lt(__s2[__i], __s1[__i]))
	    return 1;
	return 0;
      }

      static size_t
      length(const char_type* __s)
      {
	size_t __i = 0;
	while (!eq(__s[__i], char_type()))
	  ++__i;
	return __i;
      }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
	for (size_t __i = 0; __i < __n; ++__i)
	  if (eq(__s[__i], __a))
	    return __s + __i;
	return 0;
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
	return (static_cast<char_type*>
		(__builtin_memmove(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { 
	return (static_cast<char_type*>
		(__builtin_memcpy(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
	for (size_t __i = 0; __i < __n; ++__i)
	  assign(__s[__i], __a);
	return __s;
      }

      static char_type
      to_char_type(const int_type& __c)
      { return char_type(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return int_type(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>(-1); }

      static int_type
      not_eof(const int_type& __c)
      { return eq_int_type(__c, eof()) ? 0 : __c; }
    };

}
































 



































 











































 






















 



 

























 



 



 


 


 
 



 


 






 





 

 


 

 


 


 





 


 



 
 


 



 



















 



enum
{
  __LC_CTYPE = 0,
  __LC_NUMERIC = 1,
  __LC_TIME = 2,
  __LC_COLLATE = 3,
  __LC_MONETARY = 4,
  __LC_MESSAGES = 5,
  __LC_ALL = 6,
  __LC_PAPER = 7,
  __LC_NAME = 8,
  __LC_ADDRESS = 9,
  __LC_TELEPHONE = 10,
  __LC_MEASUREMENT = 11,
  __LC_IDENTIFICATION = 12
};


extern "C" {


 




 
struct lconv
{
   

  char *decimal_point;		 
  char *thousands_sep;		 
  



 
  char *grouping;

   

  
 
  char *int_curr_symbol;
  char *currency_symbol;	 
  char *mon_decimal_point;	 
  char *mon_thousands_sep;	 
  char *mon_grouping;		 
  char *positive_sign;		 
  char *negative_sign;		 
  char int_frac_digits;		 
  char frac_digits;		 
   
  char p_cs_precedes;
   
  char p_sep_by_space;
   
  char n_cs_precedes;
   
  char n_sep_by_space;
  




 
  char p_sign_posn;
  char n_sign_posn;
   
  char int_p_cs_precedes;
   
  char int_p_sep_by_space;
   
  char int_n_cs_precedes;
   
  char int_n_sep_by_space;
  




 
  char int_p_sign_posn;
  char int_n_sign_posn;
};


 
extern char *setlocale (int __category, __const char *__locale) throw ();

 
extern struct lconv *localeconv (void) throw ();













 

 




 
extern __locale_t newlocale (int __category_mask, __const char *__locale,
			     __locale_t __base) throw ();




 


 
extern __locale_t duplocale (__locale_t __dataset) throw ();


 
extern void freelocale (__locale_t __dataset) throw ();





 
extern __locale_t uselocale (__locale_t __dataset) throw ();


 


}





namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::lconv;
  using ::setlocale;
  using ::localeconv;

}



































 




























 



 




namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  extern "C" __typeof(uselocale) __uselocale;

}

namespace std __attribute__ ((__visibility__ ("default"))) {

  typedef __locale_t		__c_locale;

  
  
  
  
  inline int
  __convert_from_v(const __c_locale& __cloc __attribute__ ((__unused__)),
		   char* __out,
		   const int __size __attribute__ ((__unused__)),
		   const char* __fmt, ...)
  {
    __c_locale __old = __gnu_cxx::__uselocale(__cloc);

    __builtin_va_list __args;
    __builtin_va_start(__args, __fmt);

    const int __ret = __builtin_vsnprintf(__out, __size, __fmt, __args);

    __builtin_va_end(__args);

    __gnu_cxx::__uselocale(__old);
    return __ret;
  }

}



































 























 



 



extern "C" {







 


enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),	 
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),	 
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),	 
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),	 
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),	 
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),	 
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),	 
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),	 
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),	 
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),	 
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),	 
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))	 
};
















 
extern __const unsigned short int **__ctype_b_loc (void)
     throw () __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     throw () __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     throw () __attribute__ ((__const));









 
extern int isalnum (int) throw ();
extern int isalpha (int) throw ();
extern int iscntrl (int) throw ();
extern int isdigit (int) throw ();
extern int islower (int) throw ();
extern int isgraph (int) throw ();
extern int isprint (int) throw ();
extern int ispunct (int) throw ();
extern int isspace (int) throw ();
extern int isupper (int) throw ();
extern int isxdigit (int) throw ();


 
extern int tolower (int __c) throw ();

 
extern int toupper (int __c) throw ();




 


extern int isblank (int) throw ();



 
extern int isctype (int __c, int __mask) throw ();



 
extern int isascii (int __c) throw ();


 
extern int toascii (int __c) throw ();


 
extern int _toupper (int) throw ();
extern int _tolower (int) throw ();

 












 


 


 





 
extern int isalnum_l (int, __locale_t) throw ();
extern int isalpha_l (int, __locale_t) throw ();
extern int iscntrl_l (int, __locale_t) throw ();
extern int isdigit_l (int, __locale_t) throw ();
extern int islower_l (int, __locale_t) throw ();
extern int isgraph_l (int, __locale_t) throw ();
extern int isprint_l (int, __locale_t) throw ();
extern int ispunct_l (int, __locale_t) throw ();
extern int isspace_l (int, __locale_t) throw ();
extern int isupper_l (int, __locale_t) throw ();
extern int isxdigit_l (int, __locale_t) throw ();

extern int isblank_l (int, __locale_t) throw ();


 
extern int __tolower_l (int __c, __locale_t __l) throw ();
extern int tolower_l (int __c, __locale_t __l) throw ();

 
extern int __toupper_l (int __c, __locale_t __l) throw ();
extern int toupper_l (int __c, __locale_t __l) throw ();





}





namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;

}




























 



namespace std
{


  using ::isblank;


}



namespace std __attribute__ ((__visibility__ ("default"))) {

  
  class locale;

  template<typename _Facet>
    bool
    has_facet(const locale&) throw();

  template<typename _Facet>
    const _Facet&
    use_facet(const locale&);

  
  template<typename _CharT>
    bool
    isspace(_CharT, const locale&);

  template<typename _CharT>
    bool
    isprint(_CharT, const locale&);

  template<typename _CharT>
    bool
    iscntrl(_CharT, const locale&);

  template<typename _CharT>
    bool
    isupper(_CharT, const locale&);

  template<typename _CharT>
    bool
    islower(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalpha(_CharT, const locale&);

  template<typename _CharT>
    bool
    isdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    ispunct(_CharT, const locale&);

  template<typename _CharT>
    bool
    isxdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalnum(_CharT, const locale&);

  template<typename _CharT>
    bool
    isgraph(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    toupper(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    tolower(_CharT, const locale&);

  
  class ctype_base;
  template<typename _CharT>
    class ctype;
  template<> class ctype<char>;
  template<> class ctype<wchar_t>;
  template<typename _CharT>
    class ctype_byname;
  

  class codecvt_base;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt;
  template<> class codecvt<char, char, mbstate_t>;
  template<> class codecvt<wchar_t, char, mbstate_t>;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname;

  

  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class num_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class num_put;

  template<typename _CharT> class numpunct;
  template<typename _CharT> class numpunct_byname;

  
  template<typename _CharT>
    class collate;
  template<typename _CharT> class
    collate_byname;

  
  class time_base;
  template<typename _CharT, typename _InIter =  istreambuf_iterator<_CharT> >
    class time_get;
  template<typename _CharT, typename _InIter =  istreambuf_iterator<_CharT> >
    class time_get_byname;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put_byname;

  
  class money_base;

  template<typename _CharT, typename _InIter =  istreambuf_iterator<_CharT> >
    class money_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class money_put;

  template<typename _CharT, bool _Intl = false>
    class moneypunct;
  template<typename _CharT, bool _Intl = false>
    class moneypunct_byname;

  
  class messages_base;
  template<typename _CharT>
    class messages;
  template<typename _CharT>
    class messages_byname;

}






























 




































 



































 


































 




  
























#pragma GCC visibility push(default)

namespace __cxxabiv1
{  
  





 
  class __forced_unwind
  {
    virtual ~__forced_unwind() throw();
    virtual void __pure_dummy() = 0; 
  };
}

#pragma GCC visibility pop


namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_write(basic_ostream<_CharT, _Traits>& __out,
		    const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits>       __ostream_type;      
      typedef typename __ostream_type::ios_base    __ios_base;

      const streamsize __put = __out.rdbuf()->sputn(__s, __n);
      if (__put != __n)
	__out.setstate(__ios_base::badbit);
    }

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits>       __ostream_type;      
      typedef typename __ostream_type::ios_base    __ios_base;

      const _CharT __c = __out.fill();
      for (; __n > 0; --__n)
	{
	  const typename _Traits::int_type __put = __out.rdbuf()->sputc(__c);
	  if (_Traits::eq_int_type(__put, _Traits::eof()))
	    {
	      __out.setstate(__ios_base::badbit);
	      break;
	    }
	}
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    __ostream_insert(basic_ostream<_CharT, _Traits>& __out,
		     const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits>       __ostream_type;
      typedef typename __ostream_type::ios_base    __ios_base;

      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
	{
	  try
	    {
	      const streamsize __w = __out.width();
	      if (__w > __n)
		{
		  const bool __left = ((__out.flags()
					& __ios_base::adjustfield)
				       == __ios_base::left);
		  if (!__left)
		    __ostream_fill(__out, __w - __n);
		  if (__out.good())
		    __ostream_write(__out, __s, __n);
		  if (__left && __out.good())
		    __ostream_fill(__out, __w - __n);
		}
	      else
		__ostream_write(__out, __s, __n);
	      __out.width(0);
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      __out._M_setstate(__ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    { __out._M_setstate(__ios_base::badbit); }
	}
      return __out;
    }

  
  
  
  extern template ostream& __ostream_insert(ostream&, const char*, streamsize);

  extern template wostream& __ostream_insert(wostream&, const wchar_t*,
					     streamsize);

}






























 








namespace std __attribute__ ((__visibility__ ("default"))) {

  





















































 
  
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_string
    {
      typedef typename _Alloc::template rebind<_CharT>::other _CharT_alloc_type;

      
    public:
      typedef _Traits					    traits_type;
      typedef typename _Traits::char_type		    value_type;
      typedef _Alloc					    allocator_type;
      typedef typename _CharT_alloc_type::size_type	    size_type;
      typedef typename _CharT_alloc_type::difference_type   difference_type;
      typedef typename _CharT_alloc_type::reference	    reference;
      typedef typename _CharT_alloc_type::const_reference   const_reference;
      typedef typename _CharT_alloc_type::pointer	    pointer;
      typedef typename _CharT_alloc_type::const_pointer	    const_pointer;
      typedef __gnu_cxx::__normal_iterator<pointer, basic_string>  iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>
                                                            const_iterator;
      typedef std::reverse_iterator<const_iterator>	const_reverse_iterator;
      typedef std::reverse_iterator<iterator>		    reverse_iterator;

    private:
      
      
      
      
      
      
      
      
      
      
      
      
      

      struct _Rep_base
      {
	size_type		_M_length;
	size_type		_M_capacity;
	_Atomic_word		_M_refcount;
      };

      struct _Rep : _Rep_base
      {
	
	typedef typename _Alloc::template rebind<char>::other _Raw_bytes_alloc;

	

	
	
	
	
	
	
	
	
	
	
	
	static const size_type	_S_max_size;
	static const _CharT	_S_terminal;

	
        
        static size_type _S_empty_rep_storage[];

        static _Rep&
        _S_empty_rep()
        { 
	  
	  
	  
	  void* __p = reinterpret_cast<void*>(&_S_empty_rep_storage);
	  return *reinterpret_cast<_Rep*>(__p);
	}

        bool
	_M_is_leaked() const
        { return this->_M_refcount < 0; }

        bool
	_M_is_shared() const
        { return this->_M_refcount > 0; }

        void
	_M_set_leaked()
        { this->_M_refcount = -1; }

        void
	_M_set_sharable()
        { this->_M_refcount = 0; }

	void
	_M_set_length_and_sharable(size_type __n)
	{
	  if (__builtin_expect(this != &_S_empty_rep(), false))
	    {
	      this->_M_set_sharable();  
	      this->_M_length = __n;
	      traits_type::assign(this->_M_refdata()[__n], _S_terminal);
	      
	      
	    }
	}

	_CharT*
	_M_refdata() throw()
	{ return reinterpret_cast<_CharT*>(this + 1); }

	_CharT*
	_M_grab(const _Alloc& __alloc1, const _Alloc& __alloc2)
	{
	  return (!_M_is_leaked() && __alloc1 == __alloc2)
	          ? _M_refcopy() : _M_clone(__alloc1);
	}

	
	static _Rep*
	_S_create(size_type, size_type, const _Alloc&);

	void
	_M_dispose(const _Alloc& __a)
	{
	  if (__builtin_expect(this != &_S_empty_rep(), false))
	    if (__gnu_cxx::__exchange_and_add_dispatch(&this->_M_refcount,
						       -1) <= 0)
	      _M_destroy(__a);
	}  

	void
	_M_destroy(const _Alloc&) throw();

	_CharT*
	_M_refcopy() throw()
	{
	  if (__builtin_expect(this != &_S_empty_rep(), false))
            __gnu_cxx::__atomic_add_dispatch(&this->_M_refcount, 1);
	  return _M_refdata();
	}  

	_CharT*
	_M_clone(const _Alloc&, size_type __res = 0);
      };

      
      struct _Alloc_hider : _Alloc
      {
	_Alloc_hider(_CharT* __dat, const _Alloc& __a)
	: _Alloc(__a), _M_p(__dat) { }

	_CharT* _M_p; 
      };

    public:
      
      
      
      
      static const size_type	npos = static_cast<size_type>(-1);

    private:
      
      mutable _Alloc_hider	_M_dataplus;

      _CharT*
      _M_data() const
      { return  _M_dataplus._M_p; }

      _CharT*
      _M_data(_CharT* __p)
      { return (_M_dataplus._M_p = __p); }

      _Rep*
      _M_rep() const
      { return &((reinterpret_cast<_Rep*> (_M_data()))[-1]); }

      
      
      iterator
      _M_ibegin() const
      { return iterator(_M_data()); }

      iterator
      _M_iend() const
      { return iterator(_M_data() + this->size()); }

      void
      _M_leak()    
      {
	if (!_M_rep()->_M_is_leaked())
	  _M_leak_hard();
      }

      size_type
      _M_check(size_type __pos, const char* __s) const
      {
	if (__pos > this->size())
	  __throw_out_of_range((__s));
	return __pos;
      }

      void
      _M_check_length(size_type __n1, size_type __n2, const char* __s) const
      {
	if (this->max_size() - (this->size() - __n1) < __n2)
	  __throw_length_error((__s));
      }

      
      size_type
      _M_limit(size_type __pos, size_type __off) const
      {
	const bool __testoff =  __off < this->size() - __pos;
	return __testoff ? __off : this->size() - __pos;
      }

      
      bool
      _M_disjunct(const _CharT* __s) const
      {
	return (less<const _CharT*>()(__s, _M_data())
		|| less<const _CharT*>()(_M_data() + this->size(), __s));
      }

      
      
      static void
      _M_copy(_CharT* __d, const _CharT* __s, size_type __n)
      {
	if (__n == 1)
	  traits_type::assign(*__d, *__s);
	else
	  traits_type::copy(__d, __s, __n);
      }

      static void
      _M_move(_CharT* __d, const _CharT* __s, size_type __n)
      {
	if (__n == 1)
	  traits_type::assign(*__d, *__s);
	else
	  traits_type::move(__d, __s, __n);	  
      }

      static void
      _M_assign(_CharT* __d, size_type __n, _CharT __c)
      {
	if (__n == 1)
	  traits_type::assign(*__d, __c);
	else
	  traits_type::assign(__d, __n, __c);	  
      }

      
      
      template<class _Iterator>
        static void
        _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)
        {
	  for (; __k1 != __k2; ++__k1, ++__p)
	    traits_type::assign(*__p, *__k1); 
	}

      static void
      _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static void
      _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static int
      _S_compare(size_type __n1, size_type __n2)
      {
	const difference_type __d = difference_type(__n1 - __n2);

	if (__d > __gnu_cxx::__numeric_traits<int>::__max)
	  return __gnu_cxx::__numeric_traits<int>::__max;
	else if (__d < __gnu_cxx::__numeric_traits<int>::__min)
	  return __gnu_cxx::__numeric_traits<int>::__min;
	else
	  return int(__d);
      }

      void
      _M_mutate(size_type __pos, size_type __len1, size_type __len2);

      void
      _M_leak_hard();

      static _Rep&
      _S_empty_rep()
      { return _Rep::_S_empty_rep(); }

    public:
      
      
      

      

 
      inline
      basic_string();

      

 
      explicit
      basic_string(const _Alloc& __a);

      
      


 
      basic_string(const basic_string& __str);
      




 
      basic_string(const basic_string& __str, size_type __pos,
		   size_type __n = npos);
      





 
      basic_string(const basic_string& __str, size_type __pos,
		   size_type __n, const _Alloc& __a);

      







 
      basic_string(const _CharT* __s, size_type __n,
		   const _Alloc& __a = _Alloc());
      



 
      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc());
      




 
      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc());

      



 
      basic_string(initializer_list<_CharT> __l, const _Alloc& __a = _Alloc());

      




 
      template<class _InputIterator>
        basic_string(_InputIterator __beg, _InputIterator __end,
		     const _Alloc& __a = _Alloc());

      

 
      ~basic_string()
      { _M_rep()->_M_dispose(this->get_allocator()); }

      


 
      basic_string&
      operator=(const basic_string& __str) 
      { return this->assign(__str); }

      


 
      basic_string&
      operator=(const _CharT* __s) 
      { return this->assign(__s); }

      





 
      basic_string&
      operator=(_CharT __c) 
      { 
	this->assign(1, __c); 
	return *this;
      }

      


 
      basic_string&
      operator=(initializer_list<_CharT> __l)
      {
	this->assign (__l.begin(), __l.end());
	return *this;
      }

      
      


 
      iterator
      begin()
      {
	_M_leak();
	return iterator(_M_data());
      }

      


 
      const_iterator
      begin() const
      { return const_iterator(_M_data()); }

      


 
      iterator
      end()
      {
	_M_leak();
	return iterator(_M_data() + this->size());
      }

      


 
      const_iterator
      end() const
      { return const_iterator(_M_data() + this->size()); }

      



 
      reverse_iterator
      rbegin()
      { return reverse_iterator(this->end()); }

      



 
      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(this->end()); }

      



 
      reverse_iterator
      rend()
      { return reverse_iterator(this->begin()); }

      



 
      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(this->begin()); }

    public:
      
      
      
      size_type
      size() const
      { return _M_rep()->_M_length; }

      
      
      size_type
      length() const
      { return _M_rep()->_M_length; }

      
      size_type
      max_size() const
      { return _Rep::_S_max_size; }

      








 
      void
      resize(size_type __n, _CharT __c);

      








 
      void
      resize(size_type __n)
      { this->resize(__n, _CharT()); }

      


 
      size_type
      capacity() const
      { return _M_rep()->_M_capacity; }

      















 
      void
      reserve(size_type __res_arg = 0);

      

 
      void
      clear()
      { _M_mutate(0, this->size(), 0); }

      

 
      bool
      empty() const
      { return this->size() == 0; }

      
      








 
      const_reference
      operator[] (size_type __pos) const
      {
	;
	return _M_data()[__pos];
      }

      








 
      reference
      operator[](size_type __pos)
      {
        
	;
        
	;
	_M_leak();
	return _M_data()[__pos];
      }

      








 
      const_reference
      at(size_type __n) const
      {
	if (__n >= this->size())
	  __throw_out_of_range(("basic_string::at"));
	return _M_data()[__n];
      }

      









 
      reference
      at(size_type __n)
      {
	if (__n >= size())
	  __throw_out_of_range(("basic_string::at"));
	_M_leak();
	return _M_data()[__n];
      }

      
      



 
      basic_string&
      operator+=(const basic_string& __str)
      { return this->append(__str); }

      



 
      basic_string&
      operator+=(const _CharT* __s)
      { return this->append(__s); }

      



 
      basic_string&
      operator+=(_CharT __c)
      { 
	this->push_back(__c);
	return *this;
      }

      



 
      basic_string&
      operator+=(initializer_list<_CharT> __l)
      { return this->append(__l.begin(), __l.end()); }

      



 
      basic_string&
      append(const basic_string& __str);

      










 
      basic_string&
      append(const basic_string& __str, size_type __pos, size_type __n);

      




 
      basic_string&
      append(const _CharT* __s, size_type __n);

      



 
      basic_string&
      append(const _CharT* __s)
      {
	;
	return this->append(__s, traits_type::length(__s));
      }

      






 
      basic_string&
      append(size_type __n, _CharT __c);

      



 
      basic_string&
      append(initializer_list<_CharT> __l)
      { return this->append(__l.begin(), __l.end()); }

      






 
      template<class _InputIterator>
        basic_string&
        append(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_iend(), _M_iend(), __first, __last); }

      


 
      void
      push_back(_CharT __c)
      { 
	const size_type __len = 1 + this->size();
	if (__len > this->capacity() || _M_rep()->_M_is_shared())
	  this->reserve(__len);
	traits_type::assign(_M_data()[this->size()], __c);
	_M_rep()->_M_set_length_and_sharable(__len);
      }

      



 
      basic_string&
      assign(const basic_string& __str);

      










 
      basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return this->assign(__str._M_data()
			    + __str._M_check(__pos, "basic_string::assign"),
			    __str._M_limit(__pos, __n)); }

      








 
      basic_string&
      assign(const _CharT* __s, size_type __n);

      







 
      basic_string&
      assign(const _CharT* __s)
      {
	;
	return this->assign(__s, traits_type::length(__s));
      }

      







 
      basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }

      






 
      template<class _InputIterator>
        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_ibegin(), _M_iend(), __first, __last); }

      



 
      basic_string&
      assign(initializer_list<_CharT> __l)
      { return this->assign(__l.begin(), __l.end()); }

      










 
      void
      insert(iterator __p, size_type __n, _CharT __c)
      {	this->replace(__p, __p, __n, __c);  }

      









 
      template<class _InputIterator>
        void
        insert(iterator __p, _InputIterator __beg, _InputIterator __end)
        { this->replace(__p, __p, __beg, __end); }

      




 
      void
      insert(iterator __p, initializer_list<_CharT> __l)
      { this->insert(__p, __l.begin(), __l.end()); }

      









 
      basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->insert(__pos1, __str, size_type(0), __str.size()); }

      
















 
      basic_string&
      insert(size_type __pos1, const basic_string& __str,
	     size_type __pos2, size_type __n)
      { return this->insert(__pos1, __str._M_data()
			    + __str._M_check(__pos2, "basic_string::insert"),
			    __str._M_limit(__pos2, __n)); }

      














 
      basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n);

      













 
      basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
	;
	return this->insert(__pos, __s, traits_type::length(__s));
      }

      














 
      basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
			      size_type(0), __n, __c); }

      










 
      iterator
      insert(iterator __p, _CharT __c)
      {
	;
	const size_type __pos = __p - _M_ibegin();
	_M_replace_aux(__pos, size_type(0), size_type(1), __c);
	_M_rep()->_M_set_leaked();
	return iterator(_M_data() + __pos);
      }

      












 
      basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      { 
	_M_mutate(_M_check(__pos, "basic_string::erase"),
		  _M_limit(__pos, __n), size_type(0));
	return *this;
      }

      






 
      iterator
      erase(iterator __position)
      {
	;
	const size_type __pos = __position - _M_ibegin();
	_M_mutate(__pos, size_type(1), size_type(0));
	_M_rep()->_M_set_leaked();
	return iterator(_M_data() + __pos);
      }

      







 
      iterator
      erase(iterator __first, iterator __last);
 
      














 
      basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }

      
















 
      basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
	      size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
			     + __str._M_check(__pos2, "basic_string::replace"),
			     __str._M_limit(__pos2, __n2)); }

      















 
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
	      size_type __n2);

      













 
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
	;
	return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }

      














 
      basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
			      _M_limit(__pos, __n1), __n2, __c); }

      











 
      basic_string&
      replace(iterator __i1, iterator __i2, const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }

      












 
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s, size_type __n)
      {
	;
	return this->replace(__i1 - _M_ibegin(), __i2 - __i1, __s, __n);
      }

      











 
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s)
      {
	;
	return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }

      












 
      basic_string&
      replace(iterator __i1, iterator __i2, size_type __n, _CharT __c)
      {
	;
	return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __c);
      }

      












 
      template<class _InputIterator>
        basic_string&
        replace(iterator __i1, iterator __i2,
		_InputIterator __k1, _InputIterator __k2)
        {
	  ;
	  ;
	  typedef typename std::__is_integer<_InputIterator>::__type _Integral;
	  return _M_replace_dispatch(__i1, __i2, __k1, __k2, _Integral());
	}

      
      
      basic_string&
      replace(iterator __i1, iterator __i2, _CharT* __k1, _CharT* __k2)
      {
	;
	;
	return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
			     __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
	      const _CharT* __k1, const _CharT* __k2)
      {
	;
	;
	return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
			     __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2, iterator __k1, iterator __k2)
      {
	;
	;
	return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
			     __k1.base(), __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
	      const_iterator __k1, const_iterator __k2)
      {
	;
	;
	return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
			     __k1.base(), __k2 - __k1);
      }
      
      











 
      basic_string& replace(iterator __i1, iterator __i2,
			    initializer_list<_CharT> __l)
      { return this->replace(__i1, __i2, __l.begin(), __l.end()); }

    private:
      template<class _Integer>
	basic_string&
	_M_replace_dispatch(iterator __i1, iterator __i2, _Integer __n,
			    _Integer __val, __true_type)
        { return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __val); }

      template<class _InputIterator>
	basic_string&
	_M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
			    _InputIterator __k2, __false_type);

      basic_string&
      _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
		     _CharT __c);

      basic_string&
      _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
		      size_type __n2);

      
      
      template<class _InIterator>
        static _CharT*
        _S_construct_aux(_InIterator __beg, _InIterator __end,
			 const _Alloc& __a, __false_type)
	{
          typedef typename iterator_traits<_InIterator>::iterator_category _Tag;
          return _S_construct(__beg, __end, __a, _Tag());
	}

      
      
      template<class _Integer>
        static _CharT*
        _S_construct_aux(_Integer __beg, _Integer __end,
			 const _Alloc& __a, __true_type)
        { return _S_construct(static_cast<size_type>(__beg), __end, __a); }

      template<class _InIterator>
        static _CharT*
        _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a)
	{
	  typedef typename std::__is_integer<_InIterator>::__type _Integral;
	  return _S_construct_aux(__beg, __end, __a, _Integral());
        }

      
      template<class _InIterator>
        static _CharT*
         _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
		      input_iterator_tag);

      
      
      template<class _FwdIterator>
        static _CharT*
        _S_construct(_FwdIterator __beg, _FwdIterator __end, const _Alloc& __a,
		     forward_iterator_tag);

      static _CharT*
      _S_construct(size_type __req, _CharT __c, const _Alloc& __a);

    public:

      









 
      size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;

      





 
      void
      swap(basic_string& __s);

      
      




 
      const _CharT*
      c_str() const
      { return _M_data(); }

      




 
      const _CharT*
      data() const
      { return _M_data(); }

      

 
      allocator_type
      get_allocator() const
      { return _M_dataplus; }

      









 
      size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;

      








 
      size_type
      find(const basic_string& __str, size_type __pos = 0) const
      { return this->find(__str.data(), __pos, __str.size()); }

      








 
      size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
	;
	return this->find(__s, __pos, traits_type::length(__s));
      }

      








 
      size_type
      find(_CharT __c, size_type __pos = 0) const;

      








 
      size_type
      rfind(const basic_string& __str, size_type __pos = npos) const
      { return this->rfind(__str.data(), __pos, __str.size()); }

      









 
      size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;

      








 
      size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
	;
	return this->rfind(__s, __pos, traits_type::length(__s));
      }

      








 
      size_type
      rfind(_CharT __c, size_type __pos = npos) const;

      








 
      size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_of(__str.data(), __pos, __str.size()); }

      









 
      size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;

      








 
      size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
	;
	return this->find_first_of(__s, __pos, traits_type::length(__s));
      }

      










 
      size_type
      find_first_of(_CharT __c, size_type __pos = 0) const
      { return this->find(__c, __pos); }

      








 
      size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_of(__str.data(), __pos, __str.size()); }

      









 
      size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;

      








 
      size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
	;
	return this->find_last_of(__s, __pos, traits_type::length(__s));
      }

      










 
      size_type
      find_last_of(_CharT __c, size_type __pos = npos) const
      { return this->rfind(__c, __pos); }

      








 
      size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }

      









 
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
			size_type __n) const;

      








 
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
	;
	return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }

      








 
      size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const;

      








 
      size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }

      










 
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
		       size_type __n) const;
      








 
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
	;
	return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }

      








 
      size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const;

      










 
      basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
			    _M_check(__pos, "basic_string::substr"), __n); }

      











 
      int
      compare(const basic_string& __str) const
      {
	const size_type __size = this->size();
	const size_type __osize = __str.size();
	const size_type __len = std::min(__size, __osize);

	int __r = traits_type::compare(_M_data(), __str.data(), __len);
	if (!__r)
	  __r = _S_compare(__size, __osize);
	return __r;
      }

      















 
      int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;

      



















 
      int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
	      size_type __pos2, size_type __n2) const;

      












 
      int
      compare(const _CharT* __s) const;

      
      
      
















 
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;

      




















 
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
	      size_type __n2) const;
  };

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>::
    basic_string()
    : _M_dataplus(_S_empty_rep()._M_refdata(), _Alloc()) { }

  
  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
	      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }

  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(const _CharT* __lhs,
	      const basic_string<_CharT,_Traits,_Alloc>& __rhs);

  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);

  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
	     const _CharT* __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }

  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc>	__string_type;
      typedef typename __string_type::size_type		__size_type;
      __string_type __str(__lhs);
      __str.append(__size_type(1), __rhs);
      return __str;
    }

  
  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
	       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) == 0; }

  template<typename _CharT>
    inline
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type
    operator==(const basic_string<_CharT>& __lhs,
	       const basic_string<_CharT>& __rhs)
    { return (__lhs.size() == __rhs.size()
	      && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(),
						    __lhs.size())); }

  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const _CharT* __lhs,
	       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) == 0; }

  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
	       const _CharT* __rhs)
    { return __lhs.compare(__rhs) == 0; }

  
  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
	       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }

  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const _CharT* __lhs,
	       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }

  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
	       const _CharT* __rhs)
    { return !(__lhs == __rhs); }

  
  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
	      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) < 0; }

  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
	      const _CharT* __rhs)
    { return __lhs.compare(__rhs) < 0; }

  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const _CharT* __lhs,
	      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) > 0; }

  
  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
	      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) > 0; }

  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
	      const _CharT* __rhs)
    { return __lhs.compare(__rhs) > 0; }

  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const _CharT* __lhs,
	      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) < 0; }

  
  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
	       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) <= 0; }

  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
	       const _CharT* __rhs)
    { return __lhs.compare(__rhs) <= 0; }

  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const _CharT* __lhs,
	       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) >= 0; }

  
  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
	       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) >= 0; }

  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
	       const _CharT* __rhs)
    { return __lhs.compare(__rhs) >= 0; }

  




 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const _CharT* __lhs,
	     const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) <= 0; }

  





 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
	 basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { __lhs.swap(__rhs); }

  









 
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
	       basic_string<_CharT, _Traits, _Alloc>& __str);

  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __is, basic_string<char>& __str);

  







 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
	       const basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      
      
      return __ostream_insert(__os, __str.data(), __str.size());
    }

  











 
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
	    basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);

  










 
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
	    basic_string<_CharT, _Traits, _Alloc>& __str)
    { return getline(__is, __str, __is.widen('\n')); }

  template<>
    basic_istream<char>&
    getline(basic_istream<char>& __in, basic_string<char>& __str,
	    char __delim);

  template<>
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>& __in, basic_string<wchar_t>& __str,
	    wchar_t __delim);

}






























































 




























 



 



































 








































 




























 



 




































 








































 




























 



 


















 




 



 



































 








































 




























 



 


















 



 



extern "C" {























 



 



 


 


 
 



 


 






 





 

 


 

 


 


 





 


 



 
 


 



 




































 



 


 























 



 



 


 


 
 



 


 






 





 

 


 

 


 


 





 


 



 
 


 



 


















 




 



 
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;

typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));



 




 


 



 

 





















 



 


 



 



 








 



 


struct _IO_jump_t;  struct _IO_FILE;

 
typedef void _IO_lock_t;


 

struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  
 
   
  int _pos;
};

 
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};


struct _IO_FILE {
  int _flags;		 

   
   
  char* _IO_read_ptr;	 
  char* _IO_read_end;	 
  char* _IO_read_base;	 
  char* _IO_write_base;	 
  char* _IO_write_ptr;	 
  char* _IO_write_end;	 
  char* _IO_buf_base;	 
  char* _IO_buf_end;	 
   
  char *_IO_save_base;  
  char *_IO_backup_base;   
  char *_IO_save_end;  

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;  

   
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

   

  _IO_lock_t *_lock;
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
  int _mode;
   
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;


 


 
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);






 
typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
				 size_t __n);






 
typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);

 
typedef int __io_close_fn (void *__cookie);


 
typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;

 
typedef struct
{
  __io_read_fn *read;		 
  __io_write_fn *write;		 
  __io_seek_fn *seek;		 
  __io_close_fn *close;		 
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;

 
extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
			     void *__cookie, _IO_cookie_io_functions_t __fns);


extern "C" {

extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);





extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);

 

extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();


extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
			__gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
			 __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();



}


typedef __gnuc_va_list va_list;



 

typedef _G_fpos_t fpos_t;

typedef _G_fpos64_t fpos64_t;

 


 



 



 


 










 
















 







 
extern struct _IO_FILE *stdin;		 
extern struct _IO_FILE *stdout;		 
extern struct _IO_FILE *stderr;		 
 


 
extern int remove (__const char *__filename) throw ();
 
extern int rename (__const char *__old, __const char *__new) throw ();


 
extern int renameat (int __oldfd, __const char *__old, int __newfd,
		     __const char *__new) throw ();





 
extern FILE *tmpfile (void) ;

extern FILE *tmpfile64 (void) ;

 
extern char *tmpnam (char *__s) throw () ;



 
extern char *tmpnam_r (char *__s) throw () ;








 
extern char *tempnam (__const char *__dir, __const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;






 
extern int fclose (FILE *__stream);



 
extern int fflush (FILE *__stream);







 
extern int fflush_unlocked (FILE *__stream);






 
extern int fcloseall (void);






 
extern FILE *fopen (__const char *__restrict __filename,
		    __const char *__restrict __modes) ;



 
extern FILE *freopen (__const char *__restrict __filename,
		      __const char *__restrict __modes,
		      FILE *__restrict __stream) ;

extern FILE *fopen64 (__const char *__restrict __filename,
		      __const char *__restrict __modes) ;
extern FILE *freopen64 (__const char *__restrict __filename,
			__const char *__restrict __modes,
			FILE *__restrict __stream) ;

 
extern FILE *fdopen (int __fd, __const char *__modes) throw () ;


 
extern FILE *fopencookie (void *__restrict __magic_cookie,
			  __const char *__restrict __modes,
			  _IO_cookie_io_functions_t __io_funcs) throw () ;

 
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  throw () ;



 
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;




 
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();


 
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
		    int __modes, size_t __n) throw ();



 
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
		       size_t __size) throw ();

 
extern void setlinebuf (FILE *__stream) throw ();






 
extern int fprintf (FILE *__restrict __stream,
		    __const char *__restrict __format, ...);



 
extern int printf (__const char *__restrict __format, ...);
 
extern int sprintf (char *__restrict __s,
		    __const char *__restrict __format, ...) throw ();




 
extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
		     __gnuc_va_list __arg);



 
extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);
 
extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
		     __gnuc_va_list __arg) throw ();



 
extern int snprintf (char *__restrict __s, size_t __maxlen,
		     __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
		      __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));



 
extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
		      __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
		       __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
		     __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;






 
extern int vdprintf (int __fd, __const char *__restrict __fmt,
		     __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));






 
extern int fscanf (FILE *__restrict __stream,
		   __const char *__restrict __format, ...) ;



 
extern int scanf (__const char *__restrict __format, ...) ;
 
extern int sscanf (__const char *__restrict __s,
		   __const char *__restrict __format, ...) throw ();








 
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
		    __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;




 
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;

 
extern int vsscanf (__const char *__restrict __s,
		    __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));









 
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);




 
extern int getchar (void);



 




 
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);






 
extern int fgetc_unlocked (FILE *__stream);









 
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);




 
extern int putchar (int __c);



 






 
extern int fputc_unlocked (int __c, FILE *__stream);




 
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);


 
extern int getw (FILE *__stream);

 
extern int putw (int __w, FILE *__stream);






 
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;





 
extern char *gets (char *__s) ;







 
extern char *fgets_unlocked (char *__restrict __s, int __n,
			     FILE *__restrict __stream) ;











 
extern __ssize_t __getdelim (char **__restrict __lineptr,
			       size_t *__restrict __n, int __delimiter,
			       FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
			     size_t *__restrict __n, int __delimiter,
			     FILE *__restrict __stream) ;






 
extern __ssize_t getline (char **__restrict __lineptr,
			    size_t *__restrict __n,
			    FILE *__restrict __stream) ;






 
extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);




 
extern int puts (__const char *__s);





 
extern int ungetc (int __c, FILE *__stream);





 
extern size_t fread (void *__restrict __ptr, size_t __size,
		     size_t __n, FILE *__restrict __stream) ;



 
extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
		      size_t __n, FILE *__restrict __s) ;







 
extern int fputs_unlocked (__const char *__restrict __s,
			   FILE *__restrict __stream);






 
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
			      size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
			       size_t __n, FILE *__restrict __stream) ;






 
extern int fseek (FILE *__stream, long int __off, int __whence);



 
extern long int ftell (FILE *__stream) ;



 
extern void rewind (FILE *__stream);





 




 
extern int fseeko (FILE *__stream, __off_t __off, int __whence);



 
extern __off_t ftello (FILE *__stream) ;





 
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);



 
extern int fsetpos (FILE *__stream, __const fpos_t *__pos);


extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos);


 
extern void clearerr (FILE *__stream) throw ();
 
extern int feof (FILE *__stream) throw () ;
 
extern int ferror (FILE *__stream) throw () ;


 
extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;






 
extern void perror (__const char *__s);





 

















 


 

extern int sys_nerr;
extern __const char *__const sys_errlist[];
extern int _sys_nerr;
extern __const char *__const _sys_errlist[];


 
extern int fileno (FILE *__stream) throw () ;

 
extern int fileno_unlocked (FILE *__stream) throw () ;





 
extern FILE *popen (__const char *__command, __const char *__modes) ;




 
extern int pclose (FILE *__stream);


 
extern char *ctermid (char *__s) throw ();


 
extern char *cuserid (char *__s);


struct obstack;			 

 
extern int obstack_printf (struct obstack *__restrict __obstack,
			   __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
			    __const char *__restrict __format,
			    __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));


 

 
extern void flockfile (FILE *__stream) throw ();


 
extern int ftrylockfile (FILE *__stream) throw () ;

 
extern void funlockfile (FILE *__stream) throw ();



 

















 





 
 
extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (__const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}

 
extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return _IO_getc (stdin);
}


 
extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


 
extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}

 
extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}


 
extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}


 
extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


 
extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}

 
extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}


 
extern __inline __attribute__ ((__gnu_inline__)) __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}


 
extern __inline __attribute__ ((__gnu_inline__)) int
feof_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x10) != 0);
}

 
extern __inline __attribute__ ((__gnu_inline__)) int
ferror_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x20) != 0);
}




 

}






namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::FILE;
  using ::fpos_t;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::ferror;
  using ::fflush;
  using ::fgetc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  using ::freopen;
  using ::fscanf;
  using ::fseek;
  using ::fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;
  using ::gets;
  using ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  using ::remove;
  using ::rename;
  using ::rewind;
  using ::scanf;
  using ::setbuf;
  using ::setvbuf;
  using ::sprintf;
  using ::sscanf;
  using ::tmpfile;
  using ::tmpnam;
  using ::ungetc;
  using ::vfprintf;
  using ::vprintf;
  using ::vsprintf;

}



namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {


  using ::snprintf;
  using ::vfscanf;
  using ::vscanf;
  using ::vsnprintf;
  using ::vsscanf;

}

namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::__gnu_cxx::snprintf;
  using ::__gnu_cxx::vfscanf;
  using ::__gnu_cxx::vscanf;
  using ::__gnu_cxx::vsnprintf;
  using ::__gnu_cxx::vsscanf;

}





























 

namespace std
{


  using std::snprintf;
  using std::vsnprintf;

  using std::vfscanf;
  using std::vscanf;
  using std::vsscanf;


}



































 






















 



 



 

extern "C" {


 

















 











 






 

 

 


 
extern int *__errno_location (void) throw () __attribute__ ((__const__));

 







 




 
extern char *program_invocation_name, *program_invocation_short_name;

}





 
typedef int error_t;





namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  
  template<typename _TRet, typename _Ret = _TRet, typename _CharT,
	   typename... _Base>
    _Ret
    __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
	   const char* __name, const _CharT* __str, std::size_t* __idx,
	   _Base... __base)
    {
      _Ret __ret;

      _CharT* __endptr;
      (*__errno_location ()) = 0;
      const _TRet __tmp = __convf(__str, &__endptr, __base...);

      if (__endptr == __str)
	std::__throw_invalid_argument(__name);
      else if ((*__errno_location ()) == 34
	       || (std::__are_same<_Ret, int>::__value
		   && (__tmp < __numeric_traits<int>::__min
		       || __tmp > __numeric_traits<int>::__max)))
	std::__throw_out_of_range(__name);
      else
	__ret = __tmp;

      if (__idx)
	*__idx = __endptr - __str;

      return __ret;
    }

  
  template<typename _String, typename _CharT = typename _String::value_type>
    _String
    __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
				 __builtin_va_list), std::size_t __n,
		 const _CharT* __fmt, ...)
    {
      
      
      _CharT* __s = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
							  * __n));

      __builtin_va_list __args;
      __builtin_va_start(__args, __fmt);

      const int __len = __convf(__s, __n, __fmt, __args);

      __builtin_va_end(__args);

      return _String(__s, __s + __len);
    }

}


namespace std __attribute__ ((__visibility__ ("default"))) {

  
  inline int
  stoi(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa<long, int>(&std::strtol, "stoi", __str.c_str(),
					__idx, __base); }

  inline long
  stol(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtol, "stol", __str.c_str(),
			     __idx, __base); }

  inline unsigned long
  stoul(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtoul, "stoul", __str.c_str(),
			     __idx, __base); }

  inline long long
  stoll(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtoll, "stoll", __str.c_str(),
			     __idx, __base); }

  inline unsigned long long
  stoull(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtoull, "stoull", __str.c_str(),
			     __idx, __base); }

  
  inline float
  stof(const string& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::strtof, "stof", __str.c_str(), __idx); }

  inline double
  stod(const string& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::strtod, "stod", __str.c_str(), __idx); }

  inline long double
  stold(const string& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::strtold, "stold", __str.c_str(), __idx); }

  
  inline string
  to_string(long long __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
					   4 * sizeof(long long),
					   "%lld", __val); }

  inline string
  to_string(unsigned long long __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
					   4 * sizeof(unsigned long long),
					   "%llu", __val); }

  inline string
  to_string(long double __val)
  {
    const int __n = 
      __gnu_cxx::__numeric_traits<long double>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, __n,
					   "%Lf", __val);
  }

  inline int 
  stoi(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa<long, int>(&std::wcstol, "stoi", __str.c_str(),
					__idx, __base); }

  inline long 
  stol(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstol, "stol", __str.c_str(),
			     __idx, __base); }

  inline unsigned long
  stoul(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstoul, "stoul", __str.c_str(),
			     __idx, __base); }

  inline long long
  stoll(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstoll, "stoll", __str.c_str(),
			     __idx, __base); }

  inline unsigned long long
  stoull(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstoull, "stoull", __str.c_str(),
			     __idx, __base); }

  
  inline float
  stof(const wstring& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::wcstof, "stof", __str.c_str(), __idx); }

  inline double
  stod(const wstring& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::wcstod, "stod", __str.c_str(), __idx); }

  inline long double
  stold(const wstring& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::wcstold, "stold", __str.c_str(), __idx); }

  inline wstring
  to_wstring(long long __val)
  { return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf,
					    4 * sizeof(long long),
					    L"%lld", __val); }

  inline wstring
  to_wstring(unsigned long long __val)
  { return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf,
					    4 * sizeof(unsigned long long),
					    L"%llu", __val); }

  inline wstring
  to_wstring(long double __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<long double>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf, __n,
					    L"%Lf", __val);
  }

}
































 











namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_max_size = (((npos - sizeof(_Rep_base))/sizeof(_CharT)) - 1) / 4;

  template<typename _CharT, typename _Traits, typename _Alloc>
    const _CharT
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_terminal = _CharT();

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::npos;

  
  
  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_empty_rep_storage[
    (sizeof(_Rep_base) + sizeof(_CharT) + sizeof(size_type) - 1) /
      sizeof(size_type)];

  
  
  
  
  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
		   input_iterator_tag)
      {
	if (__beg == __end && __a == _Alloc())
	  return _S_empty_rep()._M_refdata();
	
	_CharT __buf[128];
	size_type __len = 0;
	while (__beg != __end && __len < sizeof(__buf) / sizeof(_CharT))
	  {
	    __buf[__len++] = *__beg;
	    ++__beg;
	  }
	_Rep* __r = _Rep::_S_create(__len, size_type(0), __a);
	_M_copy(__r->_M_refdata(), __buf, __len);
	try
	  {
	    while (__beg != __end)
	      {
		if (__len == __r->_M_capacity)
		  {
		    
		    _Rep* __another = _Rep::_S_create(__len + 1, __len, __a);
		    _M_copy(__another->_M_refdata(), __r->_M_refdata(), __len);
		    __r->_M_destroy(__a);
		    __r = __another;
		  }
		__r->_M_refdata()[__len++] = *__beg;
		++__beg;
	      }
	  }
	catch(...)
	  {
	    __r->_M_destroy(__a);
	    throw;
	  }
	__r->_M_set_length_and_sharable(__len);
	return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template <typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
		   forward_iterator_tag)
      {
	if (__beg == __end && __a == _Alloc())
	  return _S_empty_rep()._M_refdata();
	
	if (__builtin_expect(__gnu_cxx::__is_null_pointer(__beg)
			     && __beg != __end, 0))
	  __throw_logic_error(("basic_string::_S_construct NULL not valid"));

	const size_type __dnew = static_cast<size_type>(std::distance(__beg,
								      __end));
	
	_Rep* __r = _Rep::_S_create(__dnew, size_type(0), __a);
	try
	  { _S_copy_chars(__r->_M_refdata(), __beg, __end); }
	catch(...)
	  {
	    __r->_M_destroy(__a);
	    throw;
	  }
	__r->_M_set_length_and_sharable(__dnew);
	return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::
    _S_construct(size_type __n, _CharT __c, const _Alloc& __a)
    {
      if (__n == 0 && __a == _Alloc())
	return _S_empty_rep()._M_refdata();
      
      _Rep* __r = _Rep::_S_create(__n, size_type(0), __a);
      if (__n)
	_M_assign(__r->_M_refdata(), __n, __c);

      __r->_M_set_length_and_sharable(__n);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str)
    : _M_dataplus(__str._M_rep()->_M_grab(_Alloc(__str.get_allocator()),
					  __str.get_allocator()),
		  __str.get_allocator())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _Alloc& __a)
    : _M_dataplus(_S_construct(size_type(), _CharT(), __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos, size_type __n)
    : _M_dataplus(_S_construct(__str._M_data()
			       + __str._M_check(__pos,
						"basic_string::basic_string"),
			       __str._M_data() + __str._M_limit(__pos, __n)
			       + __pos, _Alloc()), _Alloc())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos,
		 size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__str._M_data()
			       + __str._M_check(__pos,
						"basic_string::basic_string"),
			       __str._M_data() + __str._M_limit(__pos, __n)
			       + __pos, __a), __a)
    { }

  
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s + __n, __a), __a)
    { }

  
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s ? __s + traits_type::length(__s) :
			       __s + npos, __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(size_type __n, _CharT __c, const _Alloc& __a)
    : _M_dataplus(_S_construct(__n, __c, __a), __a)
    { }

  
  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(_InputIterator __beg, _InputIterator __end, const _Alloc& __a)
    : _M_dataplus(_S_construct(__beg, __end, __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(initializer_list<_CharT> __l, const _Alloc& __a)
    : _M_dataplus(_S_construct(__l.begin(), __l.end(), __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const basic_string& __str)
    {
      if (_M_rep() != __str._M_rep())
	{
	  
	  const allocator_type __a = this->get_allocator();
	  _CharT* __tmp = __str._M_rep()->_M_grab(__a, __str.get_allocator());
	  _M_rep()->_M_dispose(__a);
	  _M_data(__tmp);
	}
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const _CharT* __s, size_type __n)
    {
      ;
      _M_check_length(this->size(), __n, "basic_string::assign");
      if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
	return _M_replace_safe(size_type(0), this->size(), __s, __n);
      else
	{
	  
	  const size_type __pos = __s - _M_data();
	  if (__pos >= __n)
	    _M_copy(_M_data(), __s, __n);
	  else if (__pos)
	    _M_move(_M_data(), __s, __n);
	  _M_rep()->_M_set_length_and_sharable(__n);
	  return *this;
	}
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(size_type __n, _CharT __c)
    {
      if (__n)
	{
	  _M_check_length(size_type(0), __n, "basic_string::append");	  
	  const size_type __len = __n + this->size();
	  if (__len > this->capacity() || _M_rep()->_M_is_shared())
	    this->reserve(__len);
	  _M_assign(_M_data() + this->size(), __n, __c);
	  _M_rep()->_M_set_length_and_sharable(__len);
	}
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const _CharT* __s, size_type __n)
    {
      ;
      if (__n)
	{
	  _M_check_length(size_type(0), __n, "basic_string::append");
	  const size_type __len = __n + this->size();
	  if (__len > this->capacity() || _M_rep()->_M_is_shared())
	    {
	      if (_M_disjunct(__s))
		this->reserve(__len);
	      else
		{
		  const size_type __off = __s - _M_data();
		  this->reserve(__len);
		  __s = _M_data() + __off;
		}
	    }
	  _M_copy(_M_data() + this->size(), __s, __n);
	  _M_rep()->_M_set_length_and_sharable(__len);
	}
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str)
    {
      const size_type __size = __str.size();
      if (__size)
	{
	  const size_type __len = __size + this->size();
	  if (__len > this->capacity() || _M_rep()->_M_is_shared())
	    this->reserve(__len);
	  _M_copy(_M_data() + this->size(), __str._M_data(), __size);
	  _M_rep()->_M_set_length_and_sharable(__len);
	}
      return *this;
    }    

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str, size_type __pos, size_type __n)
    {
      __str._M_check(__pos, "basic_string::append");
      __n = __str._M_limit(__pos, __n);
      if (__n)
	{
	  const size_type __len = __n + this->size();
	  if (__len > this->capacity() || _M_rep()->_M_is_shared())
	    this->reserve(__len);
	  _M_copy(_M_data() + this->size(), __str._M_data() + __pos, __n);
	  _M_rep()->_M_set_length_and_sharable(__len);	  
	}
      return *this;
    }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     insert(size_type __pos, const _CharT* __s, size_type __n)
     {
       ;
       _M_check(__pos, "basic_string::insert");
       _M_check_length(size_type(0), __n, "basic_string::insert");
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, size_type(0), __s, __n);
       else
         {
           
           const size_type __off = __s - _M_data();
           _M_mutate(__pos, 0, __n);
           __s = _M_data() + __off;
           _CharT* __p = _M_data() + __pos;
           if (__s  + __n <= __p)
             _M_copy(__p, __s, __n);
           else if (__s >= __p)
             _M_copy(__p, __s + __n, __n);
           else
             {
	       const size_type __nleft = __p - __s;
               _M_copy(__p, __s, __nleft);
               _M_copy(__p + __nleft, __p + __n, __n - __nleft);
             }
           return *this;
         }
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     typename basic_string<_CharT, _Traits, _Alloc>::iterator
     basic_string<_CharT, _Traits, _Alloc>::
     erase(iterator __first, iterator __last)
     {
       ;

       
       
       
       const size_type __size = __last - __first;
       if (__size)
	 {
	   const size_type __pos = __first - _M_ibegin();
	   _M_mutate(__pos, __size, size_type(0));
	   _M_rep()->_M_set_leaked();
	   return iterator(_M_data() + __pos);
	 }
       else
	 return __first;
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     replace(size_type __pos, size_type __n1, const _CharT* __s,
	     size_type __n2)
     {
       ;
       _M_check(__pos, "basic_string::replace");
       __n1 = _M_limit(__pos, __n1);
       _M_check_length(__n1, __n2, "basic_string::replace");
       bool __left;
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, __n1, __s, __n2);
       else if ((__left = __s + __n2 <= _M_data() + __pos)
		|| _M_data() + __pos + __n1 <= __s)
	 {
	   
	   size_type __off = __s - _M_data();
	   __left ? __off : (__off += __n2 - __n1);
	   _M_mutate(__pos, __n1, __n2);
	   _M_copy(_M_data() + __pos, _M_data() + __off, __n2);
	   return *this;
	 }
       else
	 {
	   
	   const basic_string __tmp(__s, __n2);
	   return _M_replace_safe(__pos, __n1, __tmp._M_data(), __n2);
	 }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_destroy(const _Alloc& __a) throw ()
    {
      const size_type __size = sizeof(_Rep_base) +
	                       (this->_M_capacity + 1) * sizeof(_CharT);
      _Raw_bytes_alloc(__a).deallocate(reinterpret_cast<char*>(this), __size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_leak_hard()
    {
      if (_M_rep() == &_S_empty_rep())
	return;
      if (_M_rep()->_M_is_shared())
	_M_mutate(0, 0, 0);
      _M_rep()->_M_set_leaked();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_mutate(size_type __pos, size_type __len1, size_type __len2)
    {
      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __len2 - __len1;
      const size_type __how_much = __old_size - __pos - __len1;

      if (__new_size > this->capacity() || _M_rep()->_M_is_shared())
	{
	  
	  const allocator_type __a = get_allocator();
	  _Rep* __r = _Rep::_S_create(__new_size, this->capacity(), __a);

	  if (__pos)
	    _M_copy(__r->_M_refdata(), _M_data(), __pos);
	  if (__how_much)
	    _M_copy(__r->_M_refdata() + __pos + __len2,
		    _M_data() + __pos + __len1, __how_much);

	  _M_rep()->_M_dispose(__a);
	  _M_data(__r->_M_refdata());
	}
      else if (__how_much && __len1 != __len2)
	{
	  
	  _M_move(_M_data() + __pos + __len2,
		  _M_data() + __pos + __len1, __how_much);
	}
      _M_rep()->_M_set_length_and_sharable(__new_size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    reserve(size_type __res)
    {
      if (__res != this->capacity() || _M_rep()->_M_is_shared())
        {
	  
	  if (__res < this->size())
	    __res = this->size();
	  const allocator_type __a = get_allocator();
	  _CharT* __tmp = _M_rep()->_M_clone(__a, __res - this->size());
	  _M_rep()->_M_dispose(__a);
	  _M_data(__tmp);
        }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    swap(basic_string& __s)
    {
      if (_M_rep()->_M_is_leaked())
	_M_rep()->_M_set_sharable();
      if (__s._M_rep()->_M_is_leaked())
	__s._M_rep()->_M_set_sharable();
      if (this->get_allocator() == __s.get_allocator())
	{
	  _CharT* __tmp = _M_data();
	  _M_data(__s._M_data());
	  __s._M_data(__tmp);
	}
      
      else
	{
	  const basic_string __tmp1(_M_ibegin(), _M_iend(),
				    __s.get_allocator());
	  const basic_string __tmp2(__s._M_ibegin(), __s._M_iend(),
				    this->get_allocator());
	  *this = __tmp2;
	  __s = __tmp1;
	}
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::_Rep*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _S_create(size_type __capacity, size_type __old_capacity,
	      const _Alloc& __alloc)
    {
      
      
      if (__capacity > _S_max_size)
	__throw_length_error(("basic_string::_S_create"));

      
      
      

      
      
      
      
      
      
      
      
      

      
      
      
      
      
      
      
      
      
      const size_type __pagesize = 4096;
      const size_type __malloc_header_size = 4 * sizeof(void*);

      
      
      
      
      
      
      if (__capacity > __old_capacity && __capacity < 2 * __old_capacity)
	__capacity = 2 * __old_capacity;

      
      
      
      size_type __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);

      const size_type __adj_size = __size + __malloc_header_size;
      if (__adj_size > __pagesize && __capacity > __old_capacity)
	{
	  const size_type __extra = __pagesize - __adj_size % __pagesize;
	  __capacity += __extra / sizeof(_CharT);
	  
	  if (__capacity > _S_max_size)
	    __capacity = _S_max_size;
	  __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);
	}

      
      
      void* __place = _Raw_bytes_alloc(__alloc).allocate(__size);
      _Rep *__p = new (__place) _Rep;
      __p->_M_capacity = __capacity;
      
      
      
      
      
      
      
      __p->_M_set_sharable();
      return __p;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_clone(const _Alloc& __alloc, size_type __res)
    {
      
      const size_type __requested_cap = this->_M_length + __res;
      _Rep* __r = _Rep::_S_create(__requested_cap, this->_M_capacity,
				  __alloc);
      if (this->_M_length)
	_M_copy(__r->_M_refdata(), _M_refdata(), this->_M_length);

      __r->_M_set_length_and_sharable(this->_M_length);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    resize(size_type __n, _CharT __c)
    {
      const size_type __size = this->size();
      _M_check_length(__size, __n, "basic_string::resize");
      if (__size < __n)
	this->append(__n - __size, __c);
      else if (__n < __size)
	this->erase(__n);
      
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
      basic_string<_CharT, _Traits, _Alloc>&
      basic_string<_CharT, _Traits, _Alloc>::
      _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
			  _InputIterator __k2, __false_type)
      {
	const basic_string __s(__k1, __k2);
	const size_type __n1 = __i2 - __i1;
	_M_check_length(__n1, __s.size(), "basic_string::_M_replace_dispatch");
	return _M_replace_safe(__i1 - _M_ibegin(), __n1, __s._M_data(),
			       __s.size());
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
		   _CharT __c)
    {
      _M_check_length(__n1, __n2, "basic_string::_M_replace_aux");
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
	_M_assign(_M_data() + __pos1, __n2, __c);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
		    size_type __n2)
    {
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
	_M_copy(_M_data() + __pos1, __s, __n2);
      return *this;
    }
   
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
	      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      ;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type	  __size_type;
      const __size_type __len = _Traits::length(__lhs);
      __string_type __str;
      __str.reserve(__len + __rhs.size());
      __str.append(__lhs, __len);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type	  __size_type;
      __string_type __str;
      const __size_type __len = __rhs.size();
      __str.reserve(__len + 1);
      __str.append(__size_type(1), __lhs);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    copy(_CharT* __s, size_type __n, size_type __pos) const
    {
      _M_check(__pos, "basic_string::copy");
      __n = _M_limit(__pos, __n);
      ;
      if (__n)
	_M_copy(__s, _M_data() + __pos, __n);
      
      return __n;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      const _CharT* __data = _M_data();

      if (__n == 0)
	return __pos <= __size ? __pos : npos;

      if (__n <= __size)
	{
	  for (; __pos <= __size - __n; ++__pos)
	    if (traits_type::eq(__data[__pos], __s[0])
		&& traits_type::compare(__data + __pos + 1,
					__s + 1, __n - 1) == 0)
	      return __pos;
	}
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(_CharT __c, size_type __pos) const
    {
      size_type __ret = npos;
      const size_type __size = this->size();
      if (__pos < __size)
	{
	  const _CharT* __data = _M_data();
	  const size_type __n = __size - __pos;
	  const _CharT* __p = traits_type::find(__data + __pos, __n, __c);
	  if (__p)
	    __ret = __p - __data;
	}
      return __ret;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      if (__n <= __size)
	{
	  __pos = std::min(size_type(__size - __n), __pos);
	  const _CharT* __data = _M_data();
	  do
	    {
	      if (traits_type::compare(__data + __pos, __s, __n) == 0)
		return __pos;
	    }
	  while (__pos-- > 0);
	}
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
	{
	  if (--__size > __pos)
	    __size = __pos;
	  for (++__size; __size-- > 0; )
	    if (traits_type::eq(_M_data()[__size], __c))
	      return __size;
	}
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __n && __pos < this->size(); ++__pos)
	{
	  const _CharT* __p = traits_type::find(__s, __n, _M_data()[__pos]);
	  if (__p)
	    return __pos;
	}
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size && __n)
	{
	  if (--__size > __pos)
	    __size = __pos;
	  do
	    {
	      if (traits_type::find(__s, __n, _M_data()[__size]))
		return __size;
	    }
	  while (__size-- != 0);
	}
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __pos < this->size(); ++__pos)
	if (!traits_type::find(__s, __n, _M_data()[__pos]))
	  return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(_CharT __c, size_type __pos) const
    {
      for (; __pos < this->size(); ++__pos)
	if (!traits_type::eq(_M_data()[__pos], __c))
	  return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size)
	{
	  if (--__size > __pos)
	    __size = __pos;
	  do
	    {
	      if (!traits_type::find(__s, __n, _M_data()[__size]))
		return __size;
	    }
	  while (__size--);
	}
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
	{
	  if (--__size > __pos)
	    __size = __pos;
	  do
	    {
	      if (!traits_type::eq(_M_data()[__size], __c))
		return __size;
	    }
	  while (__size--);
	}
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n, const basic_string& __str) const
    {
      _M_check(__pos, "basic_string::compare");
      __n = _M_limit(__pos, __n);
      const size_type __osize = __str.size();
      const size_type __len = std::min(__n, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __str.data(), __len);
      if (!__r)
	__r = _S_compare(__n, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
	    size_type __pos2, size_type __n2) const
    {
      _M_check(__pos1, "basic_string::compare");
      __str._M_check(__pos2, "basic_string::compare");
      __n1 = _M_limit(__pos1, __n1);
      __n2 = __str._M_limit(__pos2, __n2);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos1,
				     __str.data() + __pos2, __len);
      if (!__r)
	__r = _S_compare(__n1, __n2);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(const _CharT* __s) const
    {
      ;
      const size_type __size = this->size();
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__size, __osize);
      int __r = traits_type::compare(_M_data(), __s, __len);
      if (!__r)
	__r = _S_compare(__size, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__n1, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
	__r = _S_compare(__n1, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s,
	    size_type __n2) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
	__r = _S_compare(__n1, __n2);
      return __r;
    }

  
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in,
	       basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_istream<_CharT, _Traits>		__istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc>	__string_type;
      typedef typename __istream_type::ios_base         __ios_base;
      typedef typename __istream_type::int_type		__int_type;
      typedef typename __string_type::size_type		__size_type;
      typedef ctype<_CharT>				__ctype_type;
      typedef typename __ctype_type::ctype_base         __ctype_base;

      __size_type __extracted = 0;
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
	{
	  try
	    {
	      
	      __str.erase();
	      _CharT __buf[128];
	      __size_type __len = 0;	      
	      const streamsize __w = __in.width();
	      const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
		                              : __str.max_size();
	      const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
	      const __int_type __eof = _Traits::eof();
	      __int_type __c = __in.rdbuf()->sgetc();

	      while (__extracted < __n
		     && !_Traits::eq_int_type(__c, __eof)
		     && !__ct.is(__ctype_base::space,
				 _Traits::to_char_type(__c)))
		{
		  if (__len == sizeof(__buf) / sizeof(_CharT))
		    {
		      __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
		      __len = 0;
		    }
		  __buf[__len++] = _Traits::to_char_type(__c);
		  ++__extracted;
		  __c = __in.rdbuf()->snextc();
		}
	      __str.append(__buf, __len);

	      if (_Traits::eq_int_type(__c, __eof))
		__err |= __ios_base::eofbit;
	      __in.width(0);
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      __in._M_setstate(__ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    {
	      
	      
	      
	      __in._M_setstate(__ios_base::badbit);
	    }
	}
      
      if (!__extracted)
	__err |= __ios_base::failbit;
      if (__err)
	__in.setstate(__err);
      return __in;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
	    basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    {
      typedef basic_istream<_CharT, _Traits>		__istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc>	__string_type;
      typedef typename __istream_type::ios_base         __ios_base;
      typedef typename __istream_type::int_type		__int_type;
      typedef typename __string_type::size_type		__size_type;

      __size_type __extracted = 0;
      const __size_type __n = __str.max_size();
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, true);
      if (__cerb)
	{
	  try
	    {
	      __str.erase();
	      const __int_type __idelim = _Traits::to_int_type(__delim);
	      const __int_type __eof = _Traits::eof();
	      __int_type __c = __in.rdbuf()->sgetc();

	      while (__extracted < __n
		     && !_Traits::eq_int_type(__c, __eof)
		     && !_Traits::eq_int_type(__c, __idelim))
		{
		  __str += _Traits::to_char_type(__c);
		  ++__extracted;
		  __c = __in.rdbuf()->snextc();
		}

	      if (_Traits::eq_int_type(__c, __eof))
		__err |= __ios_base::eofbit;
	      else if (_Traits::eq_int_type(__c, __idelim))
		{
		  ++__extracted;		  
		  __in.rdbuf()->sbumpc();
		}
	      else
		__err |= __ios_base::failbit;
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      __in._M_setstate(__ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    {
	      
	      
	      
	      __in._M_setstate(__ios_base::badbit);
	    }
	}
      if (!__extracted)
	__err |= __ios_base::failbit;
      if (__err)
	__in.setstate(__err);
      return __in;
    }

  
  
  
  extern template class basic_string<char>;
  extern template
    basic_istream<char>&
    operator>>(basic_istream<char>&, string&);
  extern template
    basic_ostream<char>&
    operator<<(basic_ostream<char>&, const string&);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&, char);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&);

  extern template class basic_string<wchar_t>;
  extern template
    basic_istream<wchar_t>&
    operator>>(basic_istream<wchar_t>&, wstring&);
  extern template
    basic_ostream<wchar_t>&
    operator<<(basic_ostream<wchar_t>&, const wstring&);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&, wchar_t);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&);

}



namespace std __attribute__ ((__visibility__ ("default"))) {

  
  











 
  class locale
  {
  public:
    
    
    typedef int	category;

    
    class facet;
    class id;
    class _Impl;

    friend class facet;
    friend class _Impl;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;

    
    







 
    static const category none		= 0;
    static const category ctype		= 1L << 0;
    static const category numeric	= 1L << 1;
    static const category collate	= 1L << 2;
    static const category time		= 1L << 3;
    static const category monetary	= 1L << 4;
    static const category messages	= 1L << 5;
    static const category all		= (ctype | numeric | collate |
					   time  | monetary | messages);
    

    

    




 
    locale() throw();

    





 
    locale(const locale& __other) throw();

    






 
    explicit
    locale(const char* __s);

    










 
    locale(const locale& __base, const char* __s, category __cat);

    









 
    locale(const locale& __base, const locale& __add, category __cat);

    








 
    template<typename _Facet>
      locale(const locale& __other, _Facet* __f);

    
    ~locale() throw();

    






 
    const locale&
    operator=(const locale& __other) throw();

    










 
    template<typename _Facet>
      locale
      combine(const locale& __other) const;

    
    


 
    string
    name() const;

    





 
    bool
    operator==(const locale& __other) const throw ();

    




 
    bool
    operator!=(const locale& __other) const throw ()
    { return !(this->operator==(__other)); }

    













 
    template<typename _Char, typename _Traits, typename _Alloc>
      bool
      operator()(const basic_string<_Char, _Traits, _Alloc>& __s1,
		 const basic_string<_Char, _Traits, _Alloc>& __s2) const;

    
    








 
    static locale
    global(const locale&);

    

 
    static const locale&
    classic();

  private:
    
    _Impl*		_M_impl;

    
    static _Impl*       _S_classic;

    
    static _Impl*	_S_global;

    
    
    
    
    static const char* const* const _S_categories;

    
    
    
    
    
    
    
    
    
    
    enum { _S_categories_size = 6 + 6 };

    static __gthread_once_t _S_once;

    explicit
    locale(_Impl*) throw();

    static void
    _S_initialize();

    static void
    _S_initialize_once();

    static category
    _S_normalize_category(category);

    void
    _M_coalesce(const locale& __base, const locale& __add, category __cat);
  };


  
  







 
  class locale::facet
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    mutable _Atomic_word		_M_refcount;

    
    static __c_locale                   _S_c_locale;

    
    static const char			_S_c_name[2];

    static __gthread_once_t		_S_once;

    static void
    _S_initialize_once();

  protected:
    







 
    explicit
    facet(size_t __refs = 0) throw() : _M_refcount(__refs ? 1 : 0)
    { }

    
    virtual
    ~facet();

    static void
    _S_create_c_locale(__c_locale& __cloc, const char* __s,
		       __c_locale __old = 0);

    static __c_locale
    _S_clone_c_locale(__c_locale& __cloc);

    static void
    _S_destroy_c_locale(__c_locale& __cloc);

    
    
    static __c_locale
    _S_get_c_locale();

    static const char*
    _S_get_c_name();

  private:
    void
    _M_add_reference() const throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() const throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
	{
	  try
	    { delete this; }
	  catch(...)
	    { }
	}
    }

    facet(const facet&);  

    facet&
    operator=(const facet&);  
  };


  
  







 
  class locale::id
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw ();

    
    
    
    mutable size_t		_M_index;

    
    static _Atomic_word		_S_refcount;

    void
    operator=(const id&);  

    id(const id&);  

  public:
    
    
    
    id() { }

    size_t
    _M_id() const;
  };


  
  class locale::_Impl
  {
  public:
    
    friend class locale;
    friend class locale::facet;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;

  private:
    
    _Atomic_word			_M_refcount;
    const facet**			_M_facets;
    size_t				_M_facets_size;
    const facet**			_M_caches;
    char**				_M_names;
    static const locale::id* const	_S_id_ctype[];
    static const locale::id* const	_S_id_numeric[];
    static const locale::id* const	_S_id_collate[];
    static const locale::id* const	_S_id_time[];
    static const locale::id* const	_S_id_monetary[];
    static const locale::id* const	_S_id_messages[];
    static const locale::id* const* const _S_facet_categories[];

    void
    _M_add_reference() throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
	{
	  try
	    { delete this; }
	  catch(...)
	    { }
	}
    }

    _Impl(const _Impl&, size_t);
    _Impl(const char*, size_t);
    _Impl(size_t) throw();

   ~_Impl() throw();

    _Impl(const _Impl&);  

    void
    operator=(const _Impl&);  

    bool
    _M_check_same_name()
    {
      bool __ret = true;
      if (_M_names[1])
	
	for (size_t __i = 0; __ret && __i < _S_categories_size - 1; ++__i)
	  __ret = __builtin_strcmp(_M_names[__i], _M_names[__i + 1]) == 0;
      return __ret;
    }

    void
    _M_replace_categories(const _Impl*, category);

    void
    _M_replace_category(const _Impl*, const locale::id* const*);

    void
    _M_replace_facet(const _Impl*, const locale::id*);

    void
    _M_install_facet(const locale::id*, const facet*);

    template<typename _Facet>
      void
      _M_init_facet(_Facet* __facet)
      { _M_install_facet(&_Facet::id, __facet); }

    void
    _M_install_cache(const facet*, size_t);
  };


  









 
  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw();

  











 
  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc);


  










 
  template<typename _CharT>
    class collate : public locale::facet
    {
    public:
      
      
      
      typedef _CharT			char_type;
      typedef basic_string<_CharT>	string_type;
      

    protected:
      
      
      __c_locale			_M_c_locale_collate;

    public:
      
      static locale::id			id;

      





 
      explicit
      collate(size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_get_c_locale())
      { }

      







 
      explicit
      collate(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_clone_c_locale(__cloc))
      { }

      










 
      int
      compare(const _CharT* __lo1, const _CharT* __hi1,
	      const _CharT* __lo2, const _CharT* __hi2) const
      { return this->do_compare(__lo1, __hi1, __lo2, __hi2); }

      












 
      string_type
      transform(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_transform(__lo, __hi); }

      








 
      long
      hash(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_hash(__lo, __hi); }

      
      int
      _M_compare(const _CharT*, const _CharT*) const;

      size_t
      _M_transform(_CharT*, const _CharT*, size_t) const;

  protected:
      
      virtual
      ~collate()
      { _S_destroy_c_locale(_M_c_locale_collate); }

      










 
      virtual int
      do_compare(const _CharT* __lo1, const _CharT* __hi1,
		 const _CharT* __lo2, const _CharT* __hi2) const;

      










 
      virtual string_type
      do_transform(const _CharT* __lo, const _CharT* __hi) const;

      








 
      virtual long
      do_hash(const _CharT* __lo, const _CharT* __hi) const;
    };

  template<typename _CharT>
    locale::id collate<_CharT>::id;

  
  template<>
    int
    collate<char>::_M_compare(const char*, const char*) const;

  template<>
    size_t
    collate<char>::_M_transform(char*, const char*, size_t) const;

  template<>
    int
    collate<wchar_t>::_M_compare(const wchar_t*, const wchar_t*) const;

  template<>
    size_t
    collate<wchar_t>::_M_transform(wchar_t*, const wchar_t*, size_t) const;

  
  template<typename _CharT>
    class collate_byname : public collate<_CharT>
    {
    public:
      
      
      typedef _CharT               char_type;
      typedef basic_string<_CharT> string_type;
      

      explicit
      collate_byname(const char* __s, size_t __refs = 0)
      : collate<_CharT>(__refs)
      {
	if (__builtin_strcmp(__s, "C") != 0
	    && __builtin_strcmp(__s, "POSIX") != 0)
	  {
	    this->_S_destroy_c_locale(this->_M_c_locale_collate);
	    this->_S_create_c_locale(this->_M_c_locale_collate, __s);
	  }
      }

    protected:
      virtual
      ~collate_byname() { }
    };

}




























 







namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _Facet>
    locale::
    locale(const locale& __other, _Facet* __f)
    {
      _M_impl = new _Impl(*__other._M_impl, 1);

      try
	{ _M_impl->_M_install_facet(&_Facet::id, __f); }
      catch(...)
	{
	  _M_impl->_M_remove_reference();
	  throw;
	}
      delete [] _M_impl->_M_names[0];
      _M_impl->_M_names[0] = 0;   
    }

  template<typename _Facet>
    locale
    locale::
    combine(const locale& __other) const
    {
      _Impl* __tmp = new _Impl(*_M_impl, 1);
      try
	{
	  __tmp->_M_replace_facet(__other._M_impl, &_Facet::id);
	}
      catch(...)
	{
	  __tmp->_M_remove_reference();
	  throw;
	}
      return locale(__tmp);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    bool
    locale::
    operator()(const basic_string<_CharT, _Traits, _Alloc>& __s1,
	       const basic_string<_CharT, _Traits, _Alloc>& __s2) const
    {
      typedef std::collate<_CharT> __collate_type;
      const __collate_type& __collate = use_facet<__collate_type>(*this);
      return (__collate.compare(__s1.data(), __s1.data() + __s1.length(),
				__s2.data(), __s2.data() + __s2.length()) < 0);
    }


  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw()
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      return (__i < __loc._M_impl->_M_facets_size
	      && dynamic_cast<const _Facet*>(__facets[__i]));
    }

  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc)
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      if (__i >= __loc._M_impl->_M_facets_size || !__facets[__i])
        __throw_bad_cast();
      return dynamic_cast<const _Facet&>(*__facets[__i]);
    }


  
  template<typename _CharT>
    int
    collate<_CharT>::_M_compare(const _CharT*, const _CharT*) const
    { return 0; }

  
  template<typename _CharT>
    size_t
    collate<_CharT>::_M_transform(_CharT*, const _CharT*, size_t) const
    { return 0; }

  template<typename _CharT>
    int
    collate<_CharT>::
    do_compare(const _CharT* __lo1, const _CharT* __hi1,
	       const _CharT* __lo2, const _CharT* __hi2) const
    {
      
      
      const string_type __one(__lo1, __hi1);
      const string_type __two(__lo2, __hi2);

      const _CharT* __p = __one.c_str();
      const _CharT* __pend = __one.data() + __one.length();
      const _CharT* __q = __two.c_str();
      const _CharT* __qend = __two.data() + __two.length();

      
      
      
      for (;;)
	{
	  const int __res = _M_compare(__p, __q);
	  if (__res)
	    return __res;

	  __p += char_traits<_CharT>::length(__p);
	  __q += char_traits<_CharT>::length(__q);
	  if (__p == __pend && __q == __qend)
	    return 0;
	  else if (__p == __pend)
	    return -1;
	  else if (__q == __qend)
	    return 1;

	  __p++;
	  __q++;
	}
    }

  template<typename _CharT>
    typename collate<_CharT>::string_type
    collate<_CharT>::
    do_transform(const _CharT* __lo, const _CharT* __hi) const
    {
      string_type __ret;

      
      const string_type __str(__lo, __hi);

      const _CharT* __p = __str.c_str();
      const _CharT* __pend = __str.data() + __str.length();

      size_t __len = (__hi - __lo) * 2;

      _CharT* __c = new _CharT[__len];

      try
	{
	  
	  
	  
	  for (;;)
	    {
	      
	      size_t __res = _M_transform(__c, __p, __len);
	      
	      
	      if (__res >= __len)
		{
		  __len = __res + 1;
		  delete [] __c, __c = 0;
		  __c = new _CharT[__len];
		  __res = _M_transform(__c, __p, __len);
		}

	      __ret.append(__c, __res);
	      __p += char_traits<_CharT>::length(__p);
	      if (__p == __pend)
		break;

	      __p++;
	      __ret.push_back(_CharT());
	    }
	}
      catch(...)
	{
	  delete [] __c;
	  throw;
	}

      delete [] __c;

      return __ret;
    }

  template<typename _CharT>
    long
    collate<_CharT>::
    do_hash(const _CharT* __lo, const _CharT* __hi) const
    {
      unsigned long __val = 0;
      for (; __lo < __hi; ++__lo)
	__val =
	  *__lo + ((__val << 7)
		   | (__val >> (__gnu_cxx::__numeric_traits<unsigned long>::
				__digits - 7)));
      return static_cast<long>(__val);
    }

  
  
  
  extern template class collate<char>;
  extern template class collate_byname<char>;

  extern template
    const collate<char>&
    use_facet<collate<char> >(const locale&);

  extern template
    bool
    has_facet<collate<char> >(const locale&);

  extern template class collate<wchar_t>;
  extern template class collate_byname<wchar_t>;

  extern template
    const collate<wchar_t>&
    use_facet<collate<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<collate<wchar_t> >(const locale&);

}




namespace std __attribute__ ((__visibility__ ("default"))) {

  
  
  
  
  enum _Ios_Fmtflags 
    { 
      _S_boolalpha 	= 1L << 0,
      _S_dec 		= 1L << 1,
      _S_fixed 		= 1L << 2,
      _S_hex 		= 1L << 3,
      _S_internal 	= 1L << 4,
      _S_left 		= 1L << 5,
      _S_oct 		= 1L << 6,
      _S_right 		= 1L << 7,
      _S_scientific 	= 1L << 8,
      _S_showbase 	= 1L << 9,
      _S_showpoint 	= 1L << 10,
      _S_showpos 	= 1L << 11,
      _S_skipws 	= 1L << 12,
      _S_unitbuf 	= 1L << 13,
      _S_uppercase 	= 1L << 14,
      _S_adjustfield 	= _S_left | _S_right | _S_internal,
      _S_basefield 	= _S_dec | _S_oct | _S_hex,
      _S_floatfield 	= _S_scientific | _S_fixed,
      _S_ios_fmtflags_end = 1L << 16 
    };

  inline _Ios_Fmtflags
  operator&(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator|(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator^(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Fmtflags&
  operator|=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a | __b; }

  inline _Ios_Fmtflags&
  operator&=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a & __b; }

  inline _Ios_Fmtflags&
  operator^=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a ^ __b; }

  inline _Ios_Fmtflags
  operator~(_Ios_Fmtflags __a)
  { return _Ios_Fmtflags(~static_cast<int>(__a)); }


  enum _Ios_Openmode 
    { 
      _S_app 		= 1L << 0,
      _S_ate 		= 1L << 1,
      _S_bin 		= 1L << 2,
      _S_in 		= 1L << 3,
      _S_out 		= 1L << 4,
      _S_trunc 		= 1L << 5,
      _S_ios_openmode_end = 1L << 16 
    };

  inline _Ios_Openmode
  operator&(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator|(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator^(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Openmode&
  operator|=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a | __b; }

  inline _Ios_Openmode&
  operator&=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a & __b; }

  inline _Ios_Openmode&
  operator^=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a ^ __b; }

  inline _Ios_Openmode
  operator~(_Ios_Openmode __a)
  { return _Ios_Openmode(~static_cast<int>(__a)); }


  enum _Ios_Iostate
    { 
      _S_goodbit 		= 0,
      _S_badbit 		= 1L << 0,
      _S_eofbit 		= 1L << 1,
      _S_failbit		= 1L << 2,
      _S_ios_iostate_end = 1L << 16 
    };

  inline _Ios_Iostate
  operator&(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator|(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator^(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Iostate&
  operator|=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a | __b; }

  inline _Ios_Iostate&
  operator&=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a & __b; }

  inline _Ios_Iostate&
  operator^=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a ^ __b; }

  inline _Ios_Iostate
  operator~(_Ios_Iostate __a)
  { return _Ios_Iostate(~static_cast<int>(__a)); }

  enum _Ios_Seekdir 
    { 
      _S_beg = 0,
      _S_cur = 1,
      _S_end = 2,
      _S_ios_seekdir_end = 1L << 16 
    };

  
  







 
  class ios_base
  {
  public:

    




 
    class failure : public exception
    {
    public:
      
      
      explicit
      failure(const string& __str) throw();

      
      
      virtual
      ~failure() throw();

      virtual const char*
      what() const throw();

    private:
      string _M_msg;
    };

    
    























 
    typedef _Ios_Fmtflags fmtflags;

    
    static const fmtflags boolalpha =   _S_boolalpha;

    
    static const fmtflags dec =         _S_dec;

    
    static const fmtflags fixed =       _S_fixed;

    
    static const fmtflags hex =         _S_hex;

    
    
    
    static const fmtflags internal =    _S_internal;

    
    
    static const fmtflags left =        _S_left;

    
    static const fmtflags oct =         _S_oct;

    
    
    static const fmtflags right =       _S_right;

    
    static const fmtflags scientific =  _S_scientific;

    
    
    static const fmtflags showbase =    _S_showbase;

    
    
    static const fmtflags showpoint =   _S_showpoint;

    
    static const fmtflags showpos =     _S_showpos;

    
    static const fmtflags skipws =      _S_skipws;

    
    static const fmtflags unitbuf =     _S_unitbuf;

    
    
    static const fmtflags uppercase =   _S_uppercase;

    
    static const fmtflags adjustfield = _S_adjustfield;

    
    static const fmtflags basefield =   _S_basefield;

    
    static const fmtflags floatfield =  _S_floatfield;

    
    









 
    typedef _Ios_Iostate iostate;

    
    
    static const iostate badbit =	_S_badbit;

    
    static const iostate eofbit =	_S_eofbit;

    
    
    
    static const iostate failbit =	_S_failbit;

    
    static const iostate goodbit =	_S_goodbit;

    
    











 
    typedef _Ios_Openmode openmode;

    
    static const openmode app =		_S_app;

    
    static const openmode ate =		_S_ate;

    
    
    
    static const openmode binary =	_S_bin;

    
    static const openmode in =		_S_in;

    
    static const openmode out =		_S_out;

    
    static const openmode trunc =	_S_trunc;

    
    







 
    typedef _Ios_Seekdir seekdir;

    
    static const seekdir beg =		_S_beg;

    
    static const seekdir cur =		_S_cur;

    
    static const seekdir end =		_S_end;

    
    typedef int io_state;
    typedef int open_mode;
    typedef int seek_dir;

    typedef std::streampos streampos;
    typedef std::streamoff streamoff;

    
    




 
    enum event
    {
      erase_event,
      imbue_event,
      copyfmt_event
    };

    








 
    typedef void (*event_callback) (event, ios_base&, int);

    








 
    void
    register_callback(event_callback __fn, int __index);

  protected:
    
    

 
    streamsize		_M_precision;
    streamsize		_M_width;
    fmtflags		_M_flags;
    iostate		_M_exception;
    iostate		_M_streambuf_state;
    

    
    
    struct _Callback_list
    {
      
      _Callback_list*		_M_next;
      ios_base::event_callback	_M_fn;
      int			_M_index;
      _Atomic_word		_M_refcount;  

      _Callback_list(ios_base::event_callback __fn, int __index,
		     _Callback_list* __cb)
      : _M_next(__cb), _M_fn(__fn), _M_index(__index), _M_refcount(0) { }

      void
      _M_add_reference() { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

      
      int
      _M_remove_reference() 
      { return __gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1); }
    };

     _Callback_list*	_M_callbacks;

    void
    _M_call_callbacks(event __ev) throw();

    void
    _M_dispose_callbacks(void);

    
    struct _Words
    {
      void*	_M_pword;
      long	_M_iword;
      _Words() : _M_pword(0), _M_iword(0) { }
    };

    
    _Words		_M_word_zero;

    
    
    enum { _S_local_word_size = 8 };
    _Words		_M_local_word[_S_local_word_size];

    
    int			_M_word_size;
    _Words*		_M_word;

    _Words&
    _M_grow_words(int __index, bool __iword);

    
    locale		_M_ios_locale;

    void
    _M_init();

  public:

    
    
    
    
    class Init
    {
      friend class ios_base;
    public:
      Init();
      ~Init();

    private:
      static _Atomic_word	_S_refcount;
      static bool		_S_synced_with_stdio;
    };

    
    


 
    fmtflags
    flags() const
    { return _M_flags; }

    





 
    fmtflags
    flags(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags = __fmtfl;
      return __old;
    }

    






 
    fmtflags
    setf(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags |= __fmtfl;
      return __old;
    }

    







 
    fmtflags
    setf(fmtflags __fmtfl, fmtflags __mask)
    {
      fmtflags __old = _M_flags;
      _M_flags &= ~__mask;
      _M_flags |= (__fmtfl & __mask);
      return __old;
    }

    




 
    void
    unsetf(fmtflags __mask)
    { _M_flags &= ~__mask; }

    





 
    streamsize
    precision() const
    { return _M_precision; }

    



 
    streamsize
    precision(streamsize __prec)
    {
      streamsize __old = _M_precision;
      _M_precision = __prec;
      return __old;
    }

    




 
    streamsize
    width() const
    { return _M_width; }

    



 
    streamsize
    width(streamsize __wide)
    {
      streamsize __old = _M_width;
      _M_width = __wide;
      return __old;
    }

    
    








 
    static bool
    sync_with_stdio(bool __sync = true);

    
    






 
    locale
    imbue(const locale& __loc);

    






 
    locale
    getloc() const
    { return _M_ios_locale; }

    





 
    const locale&
    _M_getloc() const
    { return _M_ios_locale; }

    
    












 
    static int
    xalloc() throw();

    











 
    long&
    iword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
			? _M_word[__ix] : _M_grow_words(__ix, true);
      return __word._M_iword;
    }

    











 
    void*&
    pword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
			? _M_word[__ix] : _M_grow_words(__ix, false);
      return __word._M_pword;
    }

    
    






 
    virtual ~ios_base();

  protected:
    ios_base();

  
  
  private:
    ios_base(const ios_base&);

    ios_base&
    operator=(const ios_base&);
  };

  
  
  inline ios_base&
  boolalpha(ios_base& __base)
  {
    __base.setf(ios_base::boolalpha);
    return __base;
  }

  
  inline ios_base&
  noboolalpha(ios_base& __base)
  {
    __base.unsetf(ios_base::boolalpha);
    return __base;
  }

  
  inline ios_base&
  showbase(ios_base& __base)
  {
    __base.setf(ios_base::showbase);
    return __base;
  }

  
  inline ios_base&
  noshowbase(ios_base& __base)
  {
    __base.unsetf(ios_base::showbase);
    return __base;
  }

  
  inline ios_base&
  showpoint(ios_base& __base)
  {
    __base.setf(ios_base::showpoint);
    return __base;
  }

  
  inline ios_base&
  noshowpoint(ios_base& __base)
  {
    __base.unsetf(ios_base::showpoint);
    return __base;
  }

  
  inline ios_base&
  showpos(ios_base& __base)
  {
    __base.setf(ios_base::showpos);
    return __base;
  }

  
  inline ios_base&
  noshowpos(ios_base& __base)
  {
    __base.unsetf(ios_base::showpos);
    return __base;
  }

  
  inline ios_base&
  skipws(ios_base& __base)
  {
    __base.setf(ios_base::skipws);
    return __base;
  }

  
  inline ios_base&
  noskipws(ios_base& __base)
  {
    __base.unsetf(ios_base::skipws);
    return __base;
  }

  
  inline ios_base&
  uppercase(ios_base& __base)
  {
    __base.setf(ios_base::uppercase);
    return __base;
  }

  
  inline ios_base&
  nouppercase(ios_base& __base)
  {
    __base.unsetf(ios_base::uppercase);
    return __base;
  }

  
  inline ios_base&
  unitbuf(ios_base& __base)
  {
     __base.setf(ios_base::unitbuf);
     return __base;
  }

  
  inline ios_base&
  nounitbuf(ios_base& __base)
  {
     __base.unsetf(ios_base::unitbuf);
     return __base;
  }

  
  
  inline ios_base&
  internal(ios_base& __base)
  {
     __base.setf(ios_base::internal, ios_base::adjustfield);
     return __base;
  }

  
  inline ios_base&
  left(ios_base& __base)
  {
    __base.setf(ios_base::left, ios_base::adjustfield);
    return __base;
  }

  
  inline ios_base&
  right(ios_base& __base)
  {
    __base.setf(ios_base::right, ios_base::adjustfield);
    return __base;
  }

  
  
  inline ios_base&
  dec(ios_base& __base)
  {
    __base.setf(ios_base::dec, ios_base::basefield);
    return __base;
  }

  
  inline ios_base&
  hex(ios_base& __base)
  {
    __base.setf(ios_base::hex, ios_base::basefield);
    return __base;
  }

  
  inline ios_base&
  oct(ios_base& __base)
  {
    __base.setf(ios_base::oct, ios_base::basefield);
    return __base;
  }

  
  
  inline ios_base&
  fixed(ios_base& __base)
  {
    __base.setf(ios_base::fixed, ios_base::floatfield);
    return __base;
  }

  
  inline ios_base&
  scientific(ios_base& __base)
  {
    __base.setf(ios_base::scientific, ios_base::floatfield);
    return __base;
  }

}






























 








namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>*,
			  basic_streambuf<_CharT, _Traits>*, bool&);

  


























































 
  template<typename _CharT, typename _Traits>
    class basic_streambuf 
    {
    public:
      
      



 
      typedef _CharT 					char_type;
      typedef _Traits 					traits_type;
      typedef typename traits_type::int_type 		int_type;
      typedef typename traits_type::pos_type 		pos_type;
      typedef typename traits_type::off_type 		off_type;
      

      
      
      typedef basic_streambuf<char_type, traits_type>  	__streambuf_type;
      
      
      friend class basic_ios<char_type, traits_type>;
      friend class basic_istream<char_type, traits_type>;
      friend class basic_ostream<char_type, traits_type>;
      friend class istreambuf_iterator<char_type, traits_type>;
      friend class ostreambuf_iterator<char_type, traits_type>;

      friend streamsize
      __copy_streambufs_eof<>(__streambuf_type*, __streambuf_type*, bool&);

      template<bool _IsMove, typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value, 
					       _CharT2*>::__type
        __copy_move_a2(istreambuf_iterator<_CharT2>,
		       istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
				  istreambuf_iterator<_CharT2> >::__type
        find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
	     const _CharT2&);

      template<typename _CharT2, typename _Traits2>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&, _CharT2*);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&,
		   basic_string<_CharT2, _Traits2, _Alloc>&);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        getline(basic_istream<_CharT2, _Traits2>&,
		basic_string<_CharT2, _Traits2, _Alloc>&, _CharT2);

    protected:
      
      





 
      char_type* 		_M_in_beg;     
      char_type* 		_M_in_cur;     
      char_type* 		_M_in_end;     
      char_type* 		_M_out_beg;    
      char_type* 		_M_out_cur;    
      char_type* 		_M_out_end;    

      
      locale 			_M_buf_locale;	

  public:
      
      virtual 
      ~basic_streambuf() 
      { }

      
      





 
      locale 
      pubimbue(const locale &__loc)
      {
	locale __tmp(this->getloc());
	this->imbue(__loc);
	_M_buf_locale = __loc;
	return __tmp;
      }

      






 
      locale   
      getloc() const
      { return _M_buf_locale; } 

      
      
      





 
      __streambuf_type* 
      pubsetbuf(char_type* __s, streamsize __n) 
      { return this->setbuf(__s, __n); }

      pos_type 
      pubseekoff(off_type __off, ios_base::seekdir __way, 
		 ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekoff(__off, __way, __mode); }

      pos_type 
      pubseekpos(pos_type __sp,
		 ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekpos(__sp, __mode); }

      int 
      pubsync() { return this->sync(); }
      

      
      






 
      streamsize 
      in_avail() 
      { 
	const streamsize __ret = this->egptr() - this->gptr();
	return __ret ? __ret : this->showmanyc();
      }

      





 
      int_type 
      snextc()
      {
	int_type __ret = traits_type::eof();
	if (__builtin_expect(!traits_type::eq_int_type(this->sbumpc(), 
						       __ret), true))
	  __ret = this->sgetc();
	return __ret;
      }

      






 
      int_type 
      sbumpc()
      {
	int_type __ret;
	if (__builtin_expect(this->gptr() < this->egptr(), true))
	  {
	    __ret = traits_type::to_int_type(*this->gptr());
	    this->gbump(1);
	  }
	else 
	  __ret = this->uflow();
	return __ret;
      }

      






 
      int_type 
      sgetc()
      {
	int_type __ret;
	if (__builtin_expect(this->gptr() < this->egptr(), true))
	  __ret = traits_type::to_int_type(*this->gptr());
	else 
	  __ret = this->underflow();
	return __ret;
      }

      






 
      streamsize 
      sgetn(char_type* __s, streamsize __n)
      { return this->xsgetn(__s, __n); }

      
      







 
      int_type 
      sputbackc(char_type __c)
      {
	int_type __ret;
	const bool __testpos = this->eback() < this->gptr();
	if (__builtin_expect(!__testpos || 
			     !traits_type::eq(__c, this->gptr()[-1]), false))
	  __ret = this->pbackfail(traits_type::to_int_type(__c));
	else 
	  {
	    this->gbump(-1);
	    __ret = traits_type::to_int_type(*this->gptr());
	  }
	return __ret;
      }

      







 
      int_type 
      sungetc()
      {
	int_type __ret;
	if (__builtin_expect(this->eback() < this->gptr(), true))
	  {
	    this->gbump(-1);
	    __ret = traits_type::to_int_type(*this->gptr());
	  }
	else 
	  __ret = this->pbackfail();
	return __ret;
      }

      
      










 
      int_type 
      sputc(char_type __c)
      {
	int_type __ret;
	if (__builtin_expect(this->pptr() < this->epptr(), true))
	  {
	    *this->pptr() = __c;
	    this->pbump(1);
	    __ret = traits_type::to_int_type(__c);
	  }
	else
	  __ret = this->overflow(traits_type::to_int_type(__c));
	return __ret;
      }

      









 
      streamsize 
      sputn(const char_type* __s, streamsize __n)
      { return this->xsputn(__s, __n); }

    protected:
      







 
      basic_streambuf()
      : _M_in_beg(0), _M_in_cur(0), _M_in_end(0), 
      _M_out_beg(0), _M_out_cur(0), _M_out_end(0),
      _M_buf_locale(locale()) 
      { }

      
      
      








 
      char_type* 
      eback() const { return _M_in_beg; }

      char_type* 
      gptr()  const { return _M_in_cur;  }

      char_type* 
      egptr() const { return _M_in_end; }
      

      




 
      void 
      gbump(int __n) { _M_in_cur += __n; }

      






 
      void 
      setg(char_type* __gbeg, char_type* __gnext, char_type* __gend)
      {
	_M_in_beg = __gbeg;
	_M_in_cur = __gnext;
	_M_in_end = __gend;
      }

      
      
      








 
      char_type* 
      pbase() const { return _M_out_beg; }

      char_type* 
      pptr() const { return _M_out_cur; }

      char_type* 
      epptr() const { return _M_out_end; }
      

      




 
      void 
      pbump(int __n) { _M_out_cur += __n; }

      





 
      void 
      setp(char_type* __pbeg, char_type* __pend)
      { 
	_M_out_beg = _M_out_cur = __pbeg; 
	_M_out_end = __pend;
      }

      
      
      










 
      virtual void 
      imbue(const locale&) 
      { }

      
      








 
      virtual basic_streambuf<char_type,_Traits>* 
      setbuf(char_type*, streamsize)
      {	return this; }
      
      





 
      virtual pos_type 
      seekoff(off_type, ios_base::seekdir,
	      ios_base::openmode   = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); } 

      





 
      virtual pos_type 
      seekpos(pos_type, 
	      ios_base::openmode   = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); } 

      






 
      virtual int 
      sync() { return 0; }

      
      
















 
      virtual streamsize 
      showmanyc() { return 0; }

      











 
      virtual streamsize 
      xsgetn(char_type* __s, streamsize __n);

      

















 
      virtual int_type 
      underflow()
      { return traits_type::eof(); }

      







 
      virtual int_type 
      uflow() 
      {
	int_type __ret = traits_type::eof();
	const bool __testeof = traits_type::eq_int_type(this->underflow(), 
							__ret);
	if (!__testeof)
	  {
	    __ret = traits_type::to_int_type(*this->gptr());
	    this->gbump(1);
	  }
	return __ret;    
      }

      
      







 
      virtual int_type 
      pbackfail(int_type    = traits_type::eof())
      { return traits_type::eof(); }

      
      











 
      virtual streamsize 
      xsputn(const char_type* __s, streamsize __n);

      




















 
      virtual int_type 
      overflow(int_type   = traits_type::eof())
      { return traits_type::eof(); }

    
    public:
      






 
      void 
      stossc() 
      {
	if (this->gptr() < this->egptr()) 
	  this->gbump(1);
	else 
	  this->uflow();
      }

    private:
      
      
      basic_streambuf(const __streambuf_type& __sb)
      : _M_in_beg(__sb._M_in_beg), _M_in_cur(__sb._M_in_cur), 
      _M_in_end(__sb._M_in_end), _M_out_beg(__sb._M_out_beg), 
      _M_out_cur(__sb._M_out_cur), _M_out_end(__sb._M_out_cur),
      _M_buf_locale(__sb._M_buf_locale) 
      { }

      __streambuf_type& 
      operator=(const __streambuf_type&) { return *this; };
    };

  
  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>* __sbin,
			  basic_streambuf<char>* __sbout, bool& __ineof);
  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>* __sbin,
			  basic_streambuf<wchar_t>* __sbout, bool& __ineof);

}





























 







namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsgetn(char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
	{
	  const streamsize __buf_len = this->egptr() - this->gptr();
	  if (__buf_len)
	    {
	      const streamsize __remaining = __n - __ret;
	      const streamsize __len = std::min(__buf_len, __remaining);
	      traits_type::copy(__s, this->gptr(), __len);
	      __ret += __len;
	      __s += __len;
	      this->gbump(__len);
	    }

	  if (__ret < __n)
	    {
	      const int_type __c = this->uflow();
	      if (!traits_type::eq_int_type(__c, traits_type::eof()))
		{
		  traits_type::assign(*__s++, traits_type::to_char_type(__c));
		  ++__ret;
		}
	      else
		break;
	    }
	}
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsputn(const char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
	{
	  const streamsize __buf_len = this->epptr() - this->pptr();
	  if (__buf_len)
	    {
	      const streamsize __remaining = __n - __ret;
	      const streamsize __len = std::min(__buf_len, __remaining);
	      traits_type::copy(this->pptr(), __s, __len);
	      __ret += __len;
	      __s += __len;
	      this->pbump(__len);
	    }

	  if (__ret < __n)
	    {
	      int_type __c = this->overflow(traits_type::to_int_type(*__s));
	      if (!traits_type::eq_int_type(__c, traits_type::eof()))
		{
		  ++__ret;
		  ++__s;
		}
	      else
		break;
	    }
	}
      return __ret;
    }

  
  
  
  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>* __sbin,
			  basic_streambuf<_CharT, _Traits>* __sbout,
			  bool& __ineof)
    {
      streamsize __ret = 0;
      __ineof = true;
      typename _Traits::int_type __c = __sbin->sgetc();
      while (!_Traits::eq_int_type(__c, _Traits::eof()))
	{
	  __c = __sbout->sputc(_Traits::to_char_type(__c));
	  if (_Traits::eq_int_type(__c, _Traits::eof()))
	    {
	      __ineof = false;
	      break;
	    }
	  ++__ret;
	  __c = __sbin->snextc();
	}
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    inline streamsize
    __copy_streambufs(basic_streambuf<_CharT, _Traits>* __sbin,
		      basic_streambuf<_CharT, _Traits>* __sbout)
    {
      bool __ineof;
      return __copy_streambufs_eof(__sbin, __sbout, __ineof);
    }

  
  
  
  extern template class basic_streambuf<char>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<char>*,
		      basic_streambuf<char>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>*,
			  basic_streambuf<char>*, bool&);

  extern template class basic_streambuf<wchar_t>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<wchar_t>*,
		      basic_streambuf<wchar_t>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>*,
			  basic_streambuf<wchar_t>*, bool&);

}































 
































 









































 























 




 




 
















 




 



 


 



 



 
typedef unsigned long int wctype_t;




 


enum
{
  __ISwupper = 0,			 
  __ISwlower = 1,			 
  __ISwalpha = 2,			 
  __ISwdigit = 3,			 
  __ISwxdigit = 4,			 
  __ISwspace = 5,			 
  __ISwprint = 6,			 
  __ISwgraph = 7,			 
  __ISwblank = 8,			 
  __ISwcntrl = 9,			 
  __ISwpunct = 10,			 
  __ISwalnum = 11,			 

  _ISwupper = ((__ISwupper) < 8 ? (int) ((1UL << (__ISwupper)) << 24) : ((__ISwupper) < 16 ? (int) ((1UL << (__ISwupper)) << 8) : ((__ISwupper) < 24 ? (int) ((1UL << (__ISwupper)) >> 8) : (int) ((1UL << (__ISwupper)) >> 24)))),	 
  _ISwlower = ((__ISwlower) < 8 ? (int) ((1UL << (__ISwlower)) << 24) : ((__ISwlower) < 16 ? (int) ((1UL << (__ISwlower)) << 8) : ((__ISwlower) < 24 ? (int) ((1UL << (__ISwlower)) >> 8) : (int) ((1UL << (__ISwlower)) >> 24)))),	 
  _ISwalpha = ((__ISwalpha) < 8 ? (int) ((1UL << (__ISwalpha)) << 24) : ((__ISwalpha) < 16 ? (int) ((1UL << (__ISwalpha)) << 8) : ((__ISwalpha) < 24 ? (int) ((1UL << (__ISwalpha)) >> 8) : (int) ((1UL << (__ISwalpha)) >> 24)))),	 
  _ISwdigit = ((__ISwdigit) < 8 ? (int) ((1UL << (__ISwdigit)) << 24) : ((__ISwdigit) < 16 ? (int) ((1UL << (__ISwdigit)) << 8) : ((__ISwdigit) < 24 ? (int) ((1UL << (__ISwdigit)) >> 8) : (int) ((1UL << (__ISwdigit)) >> 24)))),	 
  _ISwxdigit = ((__ISwxdigit) < 8 ? (int) ((1UL << (__ISwxdigit)) << 24) : ((__ISwxdigit) < 16 ? (int) ((1UL << (__ISwxdigit)) << 8) : ((__ISwxdigit) < 24 ? (int) ((1UL << (__ISwxdigit)) >> 8) : (int) ((1UL << (__ISwxdigit)) >> 24)))),	 
  _ISwspace = ((__ISwspace) < 8 ? (int) ((1UL << (__ISwspace)) << 24) : ((__ISwspace) < 16 ? (int) ((1UL << (__ISwspace)) << 8) : ((__ISwspace) < 24 ? (int) ((1UL << (__ISwspace)) >> 8) : (int) ((1UL << (__ISwspace)) >> 24)))),	 
  _ISwprint = ((__ISwprint) < 8 ? (int) ((1UL << (__ISwprint)) << 24) : ((__ISwprint) < 16 ? (int) ((1UL << (__ISwprint)) << 8) : ((__ISwprint) < 24 ? (int) ((1UL << (__ISwprint)) >> 8) : (int) ((1UL << (__ISwprint)) >> 24)))),	 
  _ISwgraph = ((__ISwgraph) < 8 ? (int) ((1UL << (__ISwgraph)) << 24) : ((__ISwgraph) < 16 ? (int) ((1UL << (__ISwgraph)) << 8) : ((__ISwgraph) < 24 ? (int) ((1UL << (__ISwgraph)) >> 8) : (int) ((1UL << (__ISwgraph)) >> 24)))),	 
  _ISwblank = ((__ISwblank) < 8 ? (int) ((1UL << (__ISwblank)) << 24) : ((__ISwblank) < 16 ? (int) ((1UL << (__ISwblank)) << 8) : ((__ISwblank) < 24 ? (int) ((1UL << (__ISwblank)) >> 8) : (int) ((1UL << (__ISwblank)) >> 24)))),	 
  _ISwcntrl = ((__ISwcntrl) < 8 ? (int) ((1UL << (__ISwcntrl)) << 24) : ((__ISwcntrl) < 16 ? (int) ((1UL << (__ISwcntrl)) << 8) : ((__ISwcntrl) < 24 ? (int) ((1UL << (__ISwcntrl)) >> 8) : (int) ((1UL << (__ISwcntrl)) >> 24)))),	 
  _ISwpunct = ((__ISwpunct) < 8 ? (int) ((1UL << (__ISwpunct)) << 24) : ((__ISwpunct) < 16 ? (int) ((1UL << (__ISwpunct)) << 8) : ((__ISwpunct) < 24 ? (int) ((1UL << (__ISwpunct)) >> 8) : (int) ((1UL << (__ISwpunct)) >> 24)))),	 
  _ISwalnum = ((__ISwalnum) < 8 ? (int) ((1UL << (__ISwalnum)) << 24) : ((__ISwalnum) < 16 ? (int) ((1UL << (__ISwalnum)) << 8) : ((__ISwalnum) < 24 ? (int) ((1UL << (__ISwalnum)) >> 8) : (int) ((1UL << (__ISwalnum)) >> 24))))	 
};


extern "C" {




 


 
extern int iswalnum (wint_t __wc) throw ();




 
extern int iswalpha (wint_t __wc) throw ();

 
extern int iswcntrl (wint_t __wc) throw ();


 
extern int iswdigit (wint_t __wc) throw ();


 
extern int iswgraph (wint_t __wc) throw ();



 
extern int iswlower (wint_t __wc) throw ();

 
extern int iswprint (wint_t __wc) throw ();



 
extern int iswpunct (wint_t __wc) throw ();



 
extern int iswspace (wint_t __wc) throw ();



 
extern int iswupper (wint_t __wc) throw ();



 
extern int iswxdigit (wint_t __wc) throw ();



 
extern int iswblank (wint_t __wc) throw ();



 


 
extern wctype_t wctype (__const char *__property) throw ();


 
extern int iswctype (wint_t __wc, wctype_t __desc) throw ();





 



 
typedef __const __int32_t *wctrans_t;




 
extern wint_t towlower (wint_t __wc) throw ();

 
extern wint_t towupper (wint_t __wc) throw ();


}




 



 

extern "C" {



 
extern wctrans_t wctrans (__const char *__property) throw ();

 
extern wint_t towctrans (wint_t __wc, wctrans_t __desc) throw ();


 


 
extern int iswalnum_l (wint_t __wc, __locale_t __locale) throw ();




 
extern int iswalpha_l (wint_t __wc, __locale_t __locale) throw ();

 
extern int iswcntrl_l (wint_t __wc, __locale_t __locale) throw ();


 
extern int iswdigit_l (wint_t __wc, __locale_t __locale) throw ();


 
extern int iswgraph_l (wint_t __wc, __locale_t __locale) throw ();



 
extern int iswlower_l (wint_t __wc, __locale_t __locale) throw ();

 
extern int iswprint_l (wint_t __wc, __locale_t __locale) throw ();



 
extern int iswpunct_l (wint_t __wc, __locale_t __locale) throw ();



 
extern int iswspace_l (wint_t __wc, __locale_t __locale) throw ();



 
extern int iswupper_l (wint_t __wc, __locale_t __locale) throw ();



 
extern int iswxdigit_l (wint_t __wc, __locale_t __locale) throw ();



 
extern int iswblank_l (wint_t __wc, __locale_t __locale) throw ();


 
extern wctype_t wctype_l (__const char *__property, __locale_t __locale)
     throw ();


 
extern int iswctype_l (wint_t __wc, wctype_t __desc, __locale_t __locale)
     throw ();




 

 
extern wint_t towlower_l (wint_t __wc, __locale_t __locale) throw ();

 
extern wint_t towupper_l (wint_t __wc, __locale_t __locale) throw ();


 
extern wctrans_t wctrans_l (__const char *__property, __locale_t __locale)
     throw ();

 
extern wint_t towctrans_l (wint_t __wc, wctrans_t __desc,
			   __locale_t __locale) throw ();


}







namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::wctrans_t;
  using ::wctype_t;
  using ::wint_t;

  using ::iswalnum;
  using ::iswalpha;
  using ::iswblank;
  using ::iswcntrl;
  using ::iswctype;
  using ::iswdigit;
  using ::iswgraph;
  using ::iswlower;
  using ::iswprint;
  using ::iswpunct;
  using ::iswspace;
  using ::iswupper;
  using ::iswxdigit;
  using ::towctrans;
  using ::towlower;
  using ::towupper;
  using ::wctrans;
  using ::wctype;

}





























 


namespace std
{


  using std::iswblank;


}




































 



































  



 


  
namespace std __attribute__ ((__visibility__ ("default"))) {

  
  struct ctype_base
  {
    
    typedef const int* 		__to_type;

    
    
    typedef unsigned short 	mask;   
    static const mask upper    	= _ISupper;
    static const mask lower 	= _ISlower;
    static const mask alpha 	= _ISalpha;
    static const mask digit 	= _ISdigit;
    static const mask xdigit 	= _ISxdigit;
    static const mask space 	= _ISspace;
    static const mask print 	= _ISprint;
    static const mask graph 	= _ISalpha | _ISdigit | _ISpunct;
    static const mask cntrl 	= _IScntrl;
    static const mask punct 	= _ISpunct;
    static const mask alnum 	= _ISalpha | _ISdigit;
  };

}





























 




namespace std __attribute__ ((__visibility__ ("default"))) {
     
  
  
  template<typename _CharT, typename _Traits>
    class istreambuf_iterator
    : public iterator<input_iterator_tag, _CharT, typename _Traits::off_type,
		      _CharT*, _CharT&>
    {
    public:
      
      
      
      typedef _CharT					char_type;
      typedef _Traits					traits_type;
      typedef typename _Traits::int_type		int_type;
      typedef basic_streambuf<_CharT, _Traits>		streambuf_type;
      typedef basic_istream<_CharT, _Traits>		istream_type;
      

      template<typename _CharT2>
	friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
		                    ostreambuf_iterator<_CharT2> >::__type
	copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
	     ostreambuf_iterator<_CharT2>);

      template<bool _IsMove, typename _CharT2>
	friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value, 
					       _CharT2*>::__type
	__copy_move_a2(istreambuf_iterator<_CharT2>,
		       istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
	friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
			            istreambuf_iterator<_CharT2> >::__type
	find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
	     const _CharT2&);

    private:
      
      
      
      
      
      
      
      mutable streambuf_type*	_M_sbuf;
      mutable int_type		_M_c;

    public:
      
      istreambuf_iterator() throw()
      : _M_sbuf(0), _M_c(traits_type::eof()) { }

      
      istreambuf_iterator(istream_type& __s) throw()
      : _M_sbuf(__s.rdbuf()), _M_c(traits_type::eof()) { }

      
      istreambuf_iterator(streambuf_type* __s) throw()
      : _M_sbuf(__s), _M_c(traits_type::eof()) { }

      
      
      
      char_type
      operator*() const
      {
	return traits_type::to_char_type(_M_get());
      }

      
      istreambuf_iterator&
      operator++()
      {
	;
	if (_M_sbuf)
	  {
	    _M_sbuf->sbumpc();
	    _M_c = traits_type::eof();
	  }
	return *this;
      }

      
      istreambuf_iterator
      operator++(int)
      {
	;

	istreambuf_iterator __old = *this;
	if (_M_sbuf)
	  {
	    __old._M_c = _M_sbuf->sbumpc();
	    _M_c = traits_type::eof();
	  }
	return __old;
      }

      
      
      
      
      bool
      equal(const istreambuf_iterator& __b) const
      { return _M_at_eof() == __b._M_at_eof(); }

    private:
      int_type
      _M_get() const
      {
	const int_type __eof = traits_type::eof();
	int_type __ret = __eof;
	if (_M_sbuf)
	  {
	    if (!traits_type::eq_int_type(_M_c, __eof))
	      __ret = _M_c;
	    else if (!traits_type::eq_int_type((__ret = _M_sbuf->sgetc()),
					       __eof))
	      _M_c = __ret;
	    else
	      _M_sbuf = 0;
	  }
	return __ret;
      }

      bool
      _M_at_eof() const
      {
	const int_type __eof = traits_type::eof();
	return traits_type::eq_int_type(_M_get(), __eof);
      }
    };

  template<typename _CharT, typename _Traits>
    inline bool
    operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
	       const istreambuf_iterator<_CharT, _Traits>& __b)
    { return __a.equal(__b); }

  template<typename _CharT, typename _Traits>
    inline bool
    operator!=(const istreambuf_iterator<_CharT, _Traits>& __a,
	       const istreambuf_iterator<_CharT, _Traits>& __b)
    { return !__a.equal(__b); }

  
  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:
      
      
      
      typedef _CharT                           char_type;
      typedef _Traits                          traits_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_ostream<_CharT, _Traits>   ostream_type;
      

      template<typename _CharT2>
	friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
		                    ostreambuf_iterator<_CharT2> >::__type
	copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
	     ostreambuf_iterator<_CharT2>);

    private:
      streambuf_type*	_M_sbuf;
      bool		_M_failed;

    public:
      
      ostreambuf_iterator(ostream_type& __s) throw ()
      : _M_sbuf(__s.rdbuf()), _M_failed(!_M_sbuf) { }

      
      ostreambuf_iterator(streambuf_type* __s) throw ()
      : _M_sbuf(__s), _M_failed(!_M_sbuf) { }

      
      ostreambuf_iterator&
      operator=(_CharT __c)
      {
	if (!_M_failed &&
	    _Traits::eq_int_type(_M_sbuf->sputc(__c), _Traits::eof()))
	  _M_failed = true;
	return *this;
      }

      
      ostreambuf_iterator&
      operator*()
      { return *this; }

      
      ostreambuf_iterator&
      operator++(int)
      { return *this; }

      
      ostreambuf_iterator&
      operator++()
      { return *this; }

      
      bool
      failed() const throw()
      { return _M_failed; }

      ostreambuf_iterator&
      _M_put(const _CharT* __ws, streamsize __len)
      {
	if (__builtin_expect(!_M_failed, true)
	    && __builtin_expect(this->_M_sbuf->sputn(__ws, __len) != __len,
				false))
	  _M_failed = true;
	return *this;
      }
    };

  
  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
    	                 	    ostreambuf_iterator<_CharT> >::__type
    copy(istreambuf_iterator<_CharT> __first,
	 istreambuf_iterator<_CharT> __last,
	 ostreambuf_iterator<_CharT> __result)
    {
      if (__first._M_sbuf && !__last._M_sbuf && !__result._M_failed)
	{
	  bool __ineof;
	  __copy_streambufs_eof(__first._M_sbuf, __result._M_sbuf, __ineof);
	  if (!__ineof)
	    __result._M_failed = true;
	}
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, 
    				    ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(_CharT* __first, _CharT* __last,
		   ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
	__result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
				    ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(const _CharT* __first, const _CharT* __last,
		   ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
	__result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, 
    				    _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT> __first,
		   istreambuf_iterator<_CharT> __last, _CharT* __result)
    {
      typedef istreambuf_iterator<_CharT>                  __is_iterator_type;
      typedef typename __is_iterator_type::traits_type     traits_type;
      typedef typename __is_iterator_type::streambuf_type  streambuf_type;
      typedef typename traits_type::int_type               int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
	{
	  streambuf_type* __sb = __first._M_sbuf;
	  int_type __c = __sb->sgetc();
	  while (!traits_type::eq_int_type(__c, traits_type::eof()))
	    {
	      const streamsize __n = __sb->egptr() - __sb->gptr();
	      if (__n > 1)
		{
		  traits_type::copy(__result, __sb->gptr(), __n);
		  __sb->gbump(__n);
		  __result += __n;
		  __c = __sb->underflow();
		}
	      else
		{
		  *__result++ = traits_type::to_char_type(__c);
		  __c = __sb->snextc();
		}
	    }
	}
      return __result;
    }

  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
		  		    istreambuf_iterator<_CharT> >::__type
    find(istreambuf_iterator<_CharT> __first,
	 istreambuf_iterator<_CharT> __last, const _CharT& __val)
    {
      typedef istreambuf_iterator<_CharT>                  __is_iterator_type;
      typedef typename __is_iterator_type::traits_type     traits_type;
      typedef typename __is_iterator_type::streambuf_type  streambuf_type;
      typedef typename traits_type::int_type               int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
	{
	  const int_type __ival = traits_type::to_int_type(__val);
	  streambuf_type* __sb = __first._M_sbuf;
	  int_type __c = __sb->sgetc();
	  while (!traits_type::eq_int_type(__c, traits_type::eof())
		 && !traits_type::eq_int_type(__c, __ival))
	    {
	      streamsize __n = __sb->egptr() - __sb->gptr();
	      if (__n > 1)
		{
		  const _CharT* __p = traits_type::find(__sb->gptr(),
							__n, __val);
		  if (__p)
		    __n = __p - __sb->gptr();
		  __sb->gbump(__n);
		  __c = __sb->sgetc();
		}
	      else
		__c = __sb->snextc();
	    }

	  if (!traits_type::eq_int_type(__c, traits_type::eof()))
	    __first._M_c = __c;
	  else
	    __first._M_sbuf = 0;
	}
      return __first;
    }

}


namespace std __attribute__ ((__visibility__ ("default"))) {

  

  
  
  
  template<typename _Tv>
    void
    __convert_to_v(const char* __in, _Tv& __out, ios_base::iostate& __err,
		   const __c_locale& __cloc);

  
  template<>
    void
    __convert_to_v(const char*, float&, ios_base::iostate&,
		   const __c_locale&);

  template<>
    void
    __convert_to_v(const char*, double&, ios_base::iostate&,
		   const __c_locale&);

  template<>
    void
    __convert_to_v(const char*, long double&, ios_base::iostate&,
		   const __c_locale&);

  
  
  template<typename _CharT, typename _Traits>
    struct __pad
    {
      static void
      _S_pad(ios_base& __io, _CharT __fill, _CharT* __news,
	     const _CharT* __olds, streamsize __newlen, streamsize __oldlen);
    };

  
  
  
  
  
  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
		   const char* __gbeg, size_t __gsize,
		   const _CharT* __first, const _CharT* __last);

  
  
  
  template<typename _CharT>
    inline
    ostreambuf_iterator<_CharT>
    __write(ostreambuf_iterator<_CharT> __s, const _CharT* __ws, int __len)
    {
      __s._M_put(__ws, __len);
      return __s;
    }

  
  template<typename _CharT, typename _OutIter>
    inline
    _OutIter
    __write(_OutIter __s, const _CharT* __ws, int __len)
    {
      for (int __j = 0; __j < __len; __j++, ++__s)
	*__s = __ws[__j];
      return __s;
    }


  
  

  
  







 
  template<typename _CharT>
    class __ctype_abstract_base : public locale::facet, public ctype_base
    {
    public:
      
      
      typedef _CharT char_type;

      








 
      bool
      is(mask __m, char_type __c) const
      { return this->do_is(__m, __c); }

      











 
      const char_type*
      is(const char_type *__lo, const char_type *__hi, mask *__vec) const
      { return this->do_is(__lo, __hi, __vec); }

      










 
      const char_type*
      scan_is(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_is(__m, __lo, __hi); }

      










 
      const char_type*
      scan_not(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_not(__m, __lo, __hi); }

      








 
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }

      









 
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }

      








 
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }

      









 
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }

      











 
      char_type
      widen(char __c) const
      { return this->do_widen(__c); }

      













 
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      { return this->do_widen(__lo, __hi, __to); }

      













 
      char
      narrow(char_type __c, char __dfault) const
      { return this->do_narrow(__c, __dfault); }

      
















 
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
	      char __dfault, char *__to) const
      { return this->do_narrow(__lo, __hi, __dfault, __to); }

    protected:
      explicit
      __ctype_abstract_base(size_t __refs = 0): facet(__refs) { }

      virtual
      ~__ctype_abstract_base() { }

      











 
      virtual bool
      do_is(mask __m, char_type __c) const = 0;

      














 
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi,
	    mask* __vec) const = 0;

      













 
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo,
		 const char_type* __hi) const = 0;

      













 
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
		  const char_type* __hi) const = 0;

      












 
      virtual char_type
      do_toupper(char_type) const = 0;

      












 
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const = 0;

      











 
      virtual char_type
      do_tolower(char_type) const = 0;

      












 
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const = 0;

      














 
      virtual char_type
      do_widen(char) const = 0;

      
















 
      virtual const char*
      do_widen(const char* __lo, const char* __hi,
	       char_type* __dest) const = 0;

      
















 
      virtual char
      do_narrow(char_type, char __dfault) const = 0;

      



















 
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
		char __dfault, char* __dest) const = 0;
    };

  
  















 
  template<typename _CharT>
    class ctype : public __ctype_abstract_base<_CharT>
    {
    public:
      
      typedef _CharT			char_type;
      typedef typename __ctype_abstract_base<_CharT>::mask mask;

      
      static locale::id			id;

      explicit
      ctype(size_t __refs = 0) : __ctype_abstract_base<_CharT>(__refs) { }

   protected:
      virtual
      ~ctype();

      virtual bool
      do_is(mask __m, char_type __c) const;

      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;

      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;

      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
		  const char_type* __hi) const;

      virtual char_type
      do_toupper(char_type __c) const;

      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_tolower(char_type __c) const;

      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_widen(char __c) const;

      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;

      virtual char
      do_narrow(char_type, char __dfault) const;

      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
		char __dfault, char* __dest) const;
    };

  template<typename _CharT>
    locale::id ctype<_CharT>::id;

  
  






 
  template<>
    class ctype<char> : public locale::facet, public ctype_base
    {
    public:
      
      
      typedef char		char_type;

    protected:
      
      __c_locale		_M_c_locale_ctype;
      bool			_M_del;
      __to_type			_M_toupper;
      __to_type			_M_tolower;
      const mask*		_M_table;
      mutable char		_M_widen_ok;
      mutable char		_M_widen[1 + static_cast<unsigned char>(-1)];
      mutable char		_M_narrow[1 + static_cast<unsigned char>(-1)];
      mutable char		_M_narrow_ok;	
						

    public:
      
      static locale::id        id;
      
      static const size_t      table_size = 1 + static_cast<unsigned char>(-1);

      








 
      explicit
      ctype(const mask* __table = 0, bool __del = false, size_t __refs = 0);

      








 
      explicit
      ctype(__c_locale __cloc, const mask* __table = 0, bool __del = false,
	    size_t __refs = 0);

      







 
      inline bool
      is(mask __m, char __c) const;

      










 
      inline const char*
      is(const char* __lo, const char* __hi, mask* __vec) const;

      









 
      inline const char*
      scan_is(mask __m, const char* __lo, const char* __hi) const;

      









 
      inline const char*
      scan_not(mask __m, const char* __lo, const char* __hi) const;

      










 
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }

      











 
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }

      










 
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }

      











 
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }

      














 
      char_type
      widen(char __c) const
      {
	if (_M_widen_ok)
	  return _M_widen[static_cast<unsigned char>(__c)];
	this->_M_widen_init();
	return this->do_widen(__c);
      }

      
















 
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      {
	if (_M_widen_ok == 1)
	  {
	    __builtin_memcpy(__to, __lo, __hi - __lo);
	    return __hi;
	  }
	if (!_M_widen_ok)
	  _M_widen_init();
	return this->do_widen(__lo, __hi, __to);
      }

      
















 
      char
      narrow(char_type __c, char __dfault) const
      {
	if (_M_narrow[static_cast<unsigned char>(__c)])
	  return _M_narrow[static_cast<unsigned char>(__c)];
	const char __t = do_narrow(__c, __dfault);
	if (__t != __dfault)
	  _M_narrow[static_cast<unsigned char>(__c)] = __t;
	return __t;
      }

      




















 
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
	     char __dfault, char *__to) const
      {
	if (__builtin_expect(_M_narrow_ok == 1, true))
	  {
	    __builtin_memcpy(__to, __lo, __hi - __lo);
	    return __hi;
	  }
	if (!_M_narrow_ok)
	  _M_narrow_init();
	return this->do_narrow(__lo, __hi, __dfault, __to);
      }

      
      
      
      
      const mask*
      table() const throw()
      { return _M_table; }

      
      static const mask*
      classic_table() throw();
    protected:

      




 
      virtual
      ~ctype();

      











 
      virtual char_type
      do_toupper(char_type) const;

      












 
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;

      











 
      virtual char_type
      do_tolower(char_type) const;

      












 
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;

      















 
      virtual char_type
      do_widen(char __c) const
      { return __c; }

      

















 
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const
      {
	__builtin_memcpy(__dest, __lo, __hi - __lo);
	return __hi;
      }

      

















 
      virtual char
      do_narrow(char_type __c, char) const
      { return __c; }

      




















 
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
		char, char* __dest) const
      {
	__builtin_memcpy(__dest, __lo, __hi - __lo);
	return __hi;
      }

    private:
      void _M_narrow_init() const;
      void _M_widen_init() const;
    };

  
  








 
  template<>
    class ctype<wchar_t> : public __ctype_abstract_base<wchar_t>
    {
    public:
      
      
      typedef wchar_t		char_type;
      typedef wctype_t		__wmask_type;

    protected:
      __c_locale		_M_c_locale_ctype;

      
      bool                      _M_narrow_ok;
      char                      _M_narrow[128];
      wint_t                    _M_widen[1 + static_cast<unsigned char>(-1)];

      
      mask                      _M_bit[16];
      __wmask_type              _M_wmask[16];

    public:
      
      
      static locale::id		id;

      





 
      explicit
      ctype(size_t __refs = 0);

      






 
      explicit
      ctype(__c_locale __cloc, size_t __refs = 0);

    protected:
      __wmask_type
      _M_convert_to_wmask(const mask __m) const;

      
      virtual
      ~ctype();

      











 
      virtual bool
      do_is(mask __m, char_type __c) const;

      














 
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;

      













 
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;

      













 
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
		  const char_type* __hi) const;

      











 
      virtual char_type
      do_toupper(char_type) const;

      












 
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;

      











 
      virtual char_type
      do_tolower(char_type) const;

      












 
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;

      















 
      virtual char_type
      do_widen(char) const;

      

















 
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;

      


















 
      virtual char
      do_narrow(char_type, char __dfault) const;

      





















 
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
		char __dfault, char* __dest) const;

      
      void
      _M_initialize_ctype();
    };

  
  template<typename _CharT>
    class ctype_byname : public ctype<_CharT>
    {
    public:
      typedef typename ctype<_CharT>::mask  mask;

      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname() { };
    };

  
  template<>
    class ctype_byname<char> : public ctype<char>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };

  template<>
    class ctype_byname<wchar_t> : public ctype<wchar_t>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };

}





























 




  


  
namespace std __attribute__ ((__visibility__ ("default"))) {

  bool
  ctype<char>::
  is(mask __m, char __c) const
  { return _M_table[static_cast<unsigned char>(__c)] & __m; }

  const char*
  ctype<char>::
  is(const char* __low, const char* __high, mask* __vec) const
  {
    while (__low < __high)
      *__vec++ = _M_table[static_cast<unsigned char>(*__low++)];
    return __high;
  }

  const char*
  ctype<char>::
  scan_is(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high 
	   && !(_M_table[static_cast<unsigned char>(*__low)] & __m))
      ++__low;
    return __low;
  }

  const char*
  ctype<char>::
  scan_not(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high 
	   && (_M_table[static_cast<unsigned char>(*__low)] & __m) != 0)
      ++__low;
    return __low;
  }

}

namespace std __attribute__ ((__visibility__ ("default"))) {

  
  class __num_base
  {
  public:
    
    
    enum
      {
        _S_ominus,
        _S_oplus,
        _S_ox,
        _S_oX,
        _S_odigits,
        _S_odigits_end = _S_odigits + 16,
        _S_oudigits = _S_odigits_end,
        _S_oudigits_end = _S_oudigits + 16,
        _S_oe = _S_odigits + 14,  
        _S_oE = _S_oudigits + 14, 
	_S_oend = _S_oudigits_end
      };

    
    
    
    
    
    static const char* _S_atoms_out;

    
    
    static const char* _S_atoms_in;

    enum
    {
      _S_iminus,
      _S_iplus,
      _S_ix,
      _S_iX,
      _S_izero,
      _S_ie = _S_izero + 14,
      _S_iE = _S_izero + 20,
      _S_iend = 26
    };

    
    
    static void
    _S_format_float(const ios_base& __io, char* __fptr, char __mod);
  };

  template<typename _CharT>
    struct __numpunct_cache : public locale::facet
    {
      const char*			_M_grouping;
      size_t                            _M_grouping_size;
      bool				_M_use_grouping;
      const _CharT*			_M_truename;
      size_t                            _M_truename_size;
      const _CharT*			_M_falsename;
      size_t                            _M_falsename_size;
      _CharT				_M_decimal_point;
      _CharT				_M_thousands_sep;

      
      
      
      
      _CharT				_M_atoms_out[__num_base::_S_oend];

      
      
      
      
      _CharT				_M_atoms_in[__num_base::_S_iend];

      bool				_M_allocated;

      __numpunct_cache(size_t __refs = 0) : facet(__refs),
      _M_grouping(__null), _M_grouping_size(0), _M_use_grouping(false),
      _M_truename(__null), _M_truename_size(0), _M_falsename(__null),
      _M_falsename_size(0), _M_decimal_point(_CharT()),
      _M_thousands_sep(_CharT()), _M_allocated(false)
      { }

      ~__numpunct_cache();

      void
      _M_cache(const locale& __loc);

    private:
      __numpunct_cache&
      operator=(const __numpunct_cache&);
      
      explicit
      __numpunct_cache(const __numpunct_cache&);
    };

  template<typename _CharT>
    __numpunct_cache<_CharT>::~__numpunct_cache()
    {
      if (_M_allocated)
	{
	  delete [] _M_grouping;
	  delete [] _M_truename;
	  delete [] _M_falsename;
	}
    }

  











 
  template<typename _CharT>
    class numpunct : public locale::facet
    {
    public:
      
      
      
      typedef _CharT			char_type;
      typedef basic_string<_CharT>	string_type;
      
      typedef __numpunct_cache<_CharT>  __cache_type;

    protected:
      __cache_type*			_M_data;

    public:
      
      static locale::id			id;

      



 
      explicit
      numpunct(size_t __refs = 0) : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(); }

      







 
      explicit
      numpunct(__cache_type* __cache, size_t __refs = 0)
      : facet(__refs), _M_data(__cache)
      { _M_initialize_numpunct(); }

      







 
      explicit
      numpunct(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(__cloc); }

      







 
      char_type
      decimal_point() const
      { return this->do_decimal_point(); }

      







 
      char_type
      thousands_sep() const
      { return this->do_thousands_sep(); }

      

























 
      string
      grouping() const
      { return this->do_grouping(); }

      







 
      string_type
      truename() const
      { return this->do_truename(); }

      







 
      string_type
      falsename() const
      { return this->do_falsename(); }

    protected:
      
      virtual
      ~numpunct();

      






 
      virtual char_type
      do_decimal_point() const
      { return _M_data->_M_decimal_point; }

      






 
      virtual char_type
      do_thousands_sep() const
      { return _M_data->_M_thousands_sep; }

      







 
      virtual string
      do_grouping() const
      { return _M_data->_M_grouping; }

      







 
      virtual string_type
      do_truename() const
      { return _M_data->_M_truename; }

      







 
      virtual string_type
      do_falsename() const
      { return _M_data->_M_falsename; }

      
      void
      _M_initialize_numpunct(__c_locale __cloc = __null);
    };

  template<typename _CharT>
    locale::id numpunct<_CharT>::id;

  template<>
    numpunct<char>::~numpunct();

  template<>
    void
    numpunct<char>::_M_initialize_numpunct(__c_locale __cloc);

  template<>
    numpunct<wchar_t>::~numpunct();

  template<>
    void
    numpunct<wchar_t>::_M_initialize_numpunct(__c_locale __cloc);

  
  template<typename _CharT>
    class numpunct_byname : public numpunct<_CharT>
    {
    public:
      typedef _CharT			char_type;
      typedef basic_string<_CharT>	string_type;

      explicit
      numpunct_byname(const char* __s, size_t __refs = 0)
      : numpunct<_CharT>(__refs)
      {
	if (__builtin_strcmp(__s, "C") != 0
	    && __builtin_strcmp(__s, "POSIX") != 0)
	  {
	    __c_locale __tmp;
	    this->_S_create_c_locale(__tmp, __s);
	    this->_M_initialize_numpunct(__tmp);
	    this->_S_destroy_c_locale(__tmp);
	  }
      }

    protected:
      virtual
      ~numpunct_byname() { }
    };



  










 
  template<typename _CharT, typename _InIter>
    class num_get : public locale::facet
    {
    public:
      
      
      
      typedef _CharT			char_type;
      typedef _InIter			iter_type;
      

      
      static locale::id			id;

      





 
      explicit
      num_get(size_t __refs = 0) : facet(__refs) { }

      





















 
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
	  ios_base::iostate& __err, bool& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      
      




























 
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
	  ios_base::iostate& __err, long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
	  ios_base::iostate& __err, unsigned short& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
	  ios_base::iostate& __err, unsigned int& __v)   const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
	  ios_base::iostate& __err, unsigned long& __v)  const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
	  ios_base::iostate& __err, long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
	  ios_base::iostate& __err, unsigned long long& __v)  const
      { return this->do_get(__in, __end, __io, __err, __v); }
      

      
      























 
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
	  ios_base::iostate& __err, float& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
	  ios_base::iostate& __err, double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
	  ios_base::iostate& __err, long double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
      

      
























 
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
	  ios_base::iostate& __err, void*& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

    protected:
      
      virtual ~num_get() { }

      iter_type
      _M_extract_float(iter_type, iter_type, ios_base&, ios_base::iostate&,
		       string&) const;

      template<typename _ValueT>
        iter_type
        _M_extract_int(iter_type, iter_type, ios_base&, ios_base::iostate&,
		       _ValueT&) const;

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value, int>::__type
        _M_find(const _CharT2*, size_t __len, _CharT2 __c) const
        {
	  int __ret = -1;
	  if (__len <= 10)
	    {
	      if (__c >= _CharT2('0') && __c < _CharT2(_CharT2('0') + __len))
		__ret = __c - _CharT2('0');
	    }
	  else
	    {
	      if (__c >= _CharT2('0') && __c <= _CharT2('9'))
		__ret = __c - _CharT2('0');
	      else if (__c >= _CharT2('a') && __c <= _CharT2('f'))
		__ret = 10 + (__c - _CharT2('a'));
	      else if (__c >= _CharT2('A') && __c <= _CharT2('F'))
		__ret = 10 + (__c - _CharT2('A'));
	    }
	  return __ret;
	}

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<!__is_char<_CharT2>::__value, 
				      int>::__type
        _M_find(const _CharT2* __zero, size_t __len, _CharT2 __c) const
        {
	  int __ret = -1;
	  const char_type* __q = char_traits<_CharT2>::find(__zero, __len, __c);
	  if (__q)
	    {
	      __ret = __q - __zero;
	      if (__ret > 15)
		__ret -= 6;
	    }
	  return __ret;
	}

      
      












 
      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&, bool&) const;

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
	     ios_base::iostate& __err, long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
	     ios_base::iostate& __err, unsigned short& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
	     ios_base::iostate& __err, unsigned int& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
	     ios_base::iostate& __err, unsigned long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
	     ios_base::iostate& __err, long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }	

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
	     ios_base::iostate& __err, unsigned long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
	     float&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
	     double&) const;

      
      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
	     long double&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
	     void*&) const;

      
      
    };

  template<typename _CharT, typename _InIter>
    locale::id num_get<_CharT, _InIter>::id;


  









 
  template<typename _CharT, typename _OutIter>
    class num_put : public locale::facet
    {
    public:
      
      
      
      typedef _CharT		char_type;
      typedef _OutIter		iter_type;
      

      
      static locale::id		id;

      





 
      explicit
      num_put(size_t __refs = 0) : facet(__refs) { }

      













 
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, bool __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      
      



































 
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
	  unsigned long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
	  unsigned long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }
      

      
      







































 
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, double __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
	  long double __v) const
      { return this->do_put(__s, __f, __fill, __v); }
      

      













 
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
	  const void* __v) const
      { return this->do_put(__s, __f, __fill, __v); }

    protected:
      template<typename _ValueT>
        iter_type
        _M_insert_float(iter_type, ios_base& __io, char_type __fill,
			char __mod, _ValueT __v) const;

      void
      _M_group_float(const char* __grouping, size_t __grouping_size,
		     char_type __sep, const char_type* __p, char_type* __new,
		     char_type* __cs, int& __len) const;

      template<typename _ValueT>
        iter_type
        _M_insert_int(iter_type, ios_base& __io, char_type __fill,
		      _ValueT __v) const;

      void
      _M_group_int(const char* __grouping, size_t __grouping_size,
		   char_type __sep, ios_base& __io, char_type* __new,
		   char_type* __cs, int& __len) const;

      void
      _M_pad(char_type __fill, streamsize __w, ios_base& __io,
	     char_type* __new, const char_type* __cs, int& __len) const;

      
      virtual
      ~num_put() { };

      
      











 
      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, bool __v) const;

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill, long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }	

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
	     unsigned long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
	     long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
	     unsigned long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, double __v) const;

      
      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, long double __v) const;

      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, const void* __v) const;

      
      
    };

  template <typename _CharT, typename _OutIter>
    locale::id num_put<_CharT, _OutIter>::id;



  
  
  
  

  
  template<typename _CharT>
    inline bool
    isspace(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::space, __c); }

  
  template<typename _CharT>
    inline bool
    isprint(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::print, __c); }

  
  template<typename _CharT>
    inline bool
    iscntrl(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::cntrl, __c); }

  
  template<typename _CharT>
    inline bool
    isupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::upper, __c); }

  
  template<typename _CharT>
    inline bool 
    islower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::lower, __c); }

  
  template<typename _CharT>
    inline bool
    isalpha(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alpha, __c); }

  
  template<typename _CharT>
    inline bool
    isdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::digit, __c); }

  
  template<typename _CharT>
    inline bool
    ispunct(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::punct, __c); }

  
  template<typename _CharT>
    inline bool
    isxdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::xdigit, __c); }

  
  template<typename _CharT>
    inline bool
    isalnum(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alnum, __c); }

  
  template<typename _CharT>
    inline bool
    isgraph(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::graph, __c); }

  
  template<typename _CharT>
    inline _CharT
    toupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).toupper(__c); }

  
  template<typename _CharT>
    inline _CharT
    tolower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).tolower(__c); }

}






























 



namespace std __attribute__ ((__visibility__ ("default"))) {

  
  
  template<typename _Facet>
    struct __use_cache
    {
      const _Facet*
      operator() (const locale& __loc) const;
    };

  
  template<typename _CharT>
    struct __use_cache<__numpunct_cache<_CharT> >
    {
      const __numpunct_cache<_CharT>*
      operator() (const locale& __loc) const
      {
	const size_t __i = numpunct<_CharT>::id._M_id();
	const locale::facet** __caches = __loc._M_impl->_M_caches;
	if (!__caches[__i])
	  {
	    __numpunct_cache<_CharT>* __tmp = __null;
	    try
	      {
		__tmp = new __numpunct_cache<_CharT>;
		__tmp->_M_cache(__loc);
	      }
	    catch(...)
	      {
		delete __tmp;
		throw;
	      }
	    __loc._M_impl->_M_install_cache(__tmp, __i);
	  }
	return static_cast<const __numpunct_cache<_CharT>*>(__caches[__i]);
      }
    };

  template<typename _CharT>
    void
    __numpunct_cache<_CharT>::_M_cache(const locale& __loc)
    {
      _M_allocated = true;

      const numpunct<_CharT>& __np = use_facet<numpunct<_CharT> >(__loc);

      _M_grouping_size = __np.grouping().size();
      char* __grouping = new char[_M_grouping_size];
      __np.grouping().copy(__grouping, _M_grouping_size);
      _M_grouping = __grouping;
      _M_use_grouping = (_M_grouping_size
			 && static_cast<signed char>(_M_grouping[0]) > 0
			 && (_M_grouping[0]
			     != __gnu_cxx::__numeric_traits<char>::__max));

      _M_truename_size = __np.truename().size();
      _CharT* __truename = new _CharT[_M_truename_size];
      __np.truename().copy(__truename, _M_truename_size);
      _M_truename = __truename;

      _M_falsename_size = __np.falsename().size();
      _CharT* __falsename = new _CharT[_M_falsename_size];
      __np.falsename().copy(__falsename, _M_falsename_size);
      _M_falsename = __falsename;

      _M_decimal_point = __np.decimal_point();
      _M_thousands_sep = __np.thousands_sep();

      const ctype<_CharT>& __ct = use_facet<ctype<_CharT> >(__loc);
      __ct.widen(__num_base::_S_atoms_out,
		 __num_base::_S_atoms_out + __num_base::_S_oend, _M_atoms_out);
      __ct.widen(__num_base::_S_atoms_in,
		 __num_base::_S_atoms_in + __num_base::_S_iend, _M_atoms_in);
    }

  
  
  
  
  
  
  
  
  bool
  __verify_grouping(const char* __grouping, size_t __grouping_size,
		    const string& __grouping_tmp);



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    _M_extract_float(_InIter __beg, _InIter __end, ios_base& __io,
		     ios_base::iostate& __err, string& __xtrc) const
    {
      typedef char_traits<_CharT>			__traits_type;
      typedef __numpunct_cache<_CharT>                  __cache_type;
      __use_cache<__cache_type> __uc;
      const locale& __loc = __io._M_getloc();
      const __cache_type* __lc = __uc(__loc);
      const _CharT* __lit = __lc->_M_atoms_in;
      char_type __c = char_type();

      
      bool __testeof = __beg == __end;

      
      if (!__testeof)
	{
	  __c = *__beg;
	  const bool __plus = __c == __lit[__num_base::_S_iplus];
	  if ((__plus || __c == __lit[__num_base::_S_iminus])
	      && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
	      && !(__c == __lc->_M_decimal_point))
	    {
	      __xtrc += __plus ? '+' : '-';
	      if (++__beg != __end)
		__c = *__beg;
	      else
		__testeof = true;
	    }
	}

      
      bool __found_mantissa = false;
      int __sep_pos = 0;
      while (!__testeof)
	{
	  if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
	      || __c == __lc->_M_decimal_point)
	    break;
	  else if (__c == __lit[__num_base::_S_izero])
	    {
	      if (!__found_mantissa)
		{
		  __xtrc += '0';
		  __found_mantissa = true;
		}
	      ++__sep_pos;

	      if (++__beg != __end)
		__c = *__beg;
	      else
		__testeof = true;
	    }
	  else
	    break;
	}

      
      bool __found_dec = false;
      bool __found_sci = false;
      string __found_grouping;
      if (__lc->_M_use_grouping)
	__found_grouping.reserve(32);
      const char_type* __lit_zero = __lit + __num_base::_S_izero;

      if (!__lc->_M_allocated)
	
	while (!__testeof)
	  {
	    const int __digit = _M_find(__lit_zero, 10, __c);
	    if (__digit != -1)
	      {
		__xtrc += '0' + __digit;
		__found_mantissa = true;
	      }
	    else if (__c == __lc->_M_decimal_point
		     && !__found_dec && !__found_sci)
	      {
		__xtrc += '.';
		__found_dec = true;
	      }
	    else if ((__c == __lit[__num_base::_S_ie] 
		      || __c == __lit[__num_base::_S_iE])
		     && !__found_sci && __found_mantissa)
	      {
		
		__xtrc += 'e';
		__found_sci = true;
		
		
		if (++__beg != __end)
		  {
		    __c = *__beg;
		    const bool __plus = __c == __lit[__num_base::_S_iplus];
		    if (__plus || __c == __lit[__num_base::_S_iminus])
		      __xtrc += __plus ? '+' : '-';
		    else
		      continue;
		  }
		else
		  {
		    __testeof = true;
		    break;
		  }
	      }
	    else
	      break;

	    if (++__beg != __end)
	      __c = *__beg;
	    else
	      __testeof = true;
	  }
      else
	while (!__testeof)
	  {
	    
	    
	    if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
	      {
		if (!__found_dec && !__found_sci)
		  {
		    
		    
		    if (__sep_pos)
		      {
			__found_grouping += static_cast<char>(__sep_pos);
			__sep_pos = 0;
		      }
		    else
		      {
			
			
			__xtrc.clear();
			break;
		      }
		  }
		else
		  break;
	      }
	    else if (__c == __lc->_M_decimal_point)
	      {
		if (!__found_dec && !__found_sci)
		  {
		    
		    
		    
		    if (__found_grouping.size())
		      __found_grouping += static_cast<char>(__sep_pos);
		    __xtrc += '.';
		    __found_dec = true;
		  }
		else
		  break;
	      }
	    else
	      {
		const char_type* __q =
		  __traits_type::find(__lit_zero, 10, __c);
		if (__q)
		  {
		    __xtrc += '0' + (__q - __lit_zero);
		    __found_mantissa = true;
		    ++__sep_pos;
		  }
		else if ((__c == __lit[__num_base::_S_ie] 
			  || __c == __lit[__num_base::_S_iE])
			 && !__found_sci && __found_mantissa)
		  {
		    
		    if (__found_grouping.size() && !__found_dec)
		      __found_grouping += static_cast<char>(__sep_pos);
		    __xtrc += 'e';
		    __found_sci = true;
		    
		    
		    if (++__beg != __end)
		      {
			__c = *__beg;
			const bool __plus = __c == __lit[__num_base::_S_iplus];
			if ((__plus || __c == __lit[__num_base::_S_iminus])
			    && !(__lc->_M_use_grouping
				 && __c == __lc->_M_thousands_sep)
			    && !(__c == __lc->_M_decimal_point))
		      __xtrc += __plus ? '+' : '-';
			else
			  continue;
		      }
		    else
		      {
			__testeof = true;
			break;
		      }
		  }
		else
		  break;
	      }
	    
	    if (++__beg != __end)
	      __c = *__beg;
	    else
	      __testeof = true;
	  }

      
      
      if (__found_grouping.size())
        {
          
	  if (!__found_dec && !__found_sci)
	    __found_grouping += static_cast<char>(__sep_pos);

          if (!std::__verify_grouping(__lc->_M_grouping, 
				      __lc->_M_grouping_size,
				      __found_grouping))
	    __err = ios_base::failbit;
        }

      return __beg;
    }

  template<typename _CharT, typename _InIter>
    template<typename _ValueT>
      _InIter
      num_get<_CharT, _InIter>::
      _M_extract_int(_InIter __beg, _InIter __end, ios_base& __io,
		     ios_base::iostate& __err, _ValueT& __v) const
      {
        typedef char_traits<_CharT>			     __traits_type;
	using __gnu_cxx::__add_unsigned;
	typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
	typedef __numpunct_cache<_CharT>                     __cache_type;
	__use_cache<__cache_type> __uc;
	const locale& __loc = __io._M_getloc();
	const __cache_type* __lc = __uc(__loc);
	const _CharT* __lit = __lc->_M_atoms_in;
	char_type __c = char_type();

	
	const ios_base::fmtflags __basefield = __io.flags()
	                                       & ios_base::basefield;
	const bool __oct = __basefield == ios_base::oct;
	int __base = __oct ? 8 : (__basefield == ios_base::hex ? 16 : 10);

	
	bool __testeof = __beg == __end;

	
	bool __negative = false;
	if (!__testeof)
	  {
	    __c = *__beg;
	    __negative = __c == __lit[__num_base::_S_iminus];
	    if ((__negative || __c == __lit[__num_base::_S_iplus])
		&& !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
		&& !(__c == __lc->_M_decimal_point))
	      {
		if (++__beg != __end)
		  __c = *__beg;
		else
		  __testeof = true;
	      }
	  }

	
	
	bool __found_zero = false;
	int __sep_pos = 0;
	while (!__testeof)
	  {
	    if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
		|| __c == __lc->_M_decimal_point)
	      break;
	    else if (__c == __lit[__num_base::_S_izero] 
		     && (!__found_zero || __base == 10))
	      {
		__found_zero = true;
		++__sep_pos;
		if (__basefield == 0)
		  __base = 8;
		if (__base == 8)
		  __sep_pos = 0;
	      }
	    else if (__found_zero
		     && (__c == __lit[__num_base::_S_ix]
			 || __c == __lit[__num_base::_S_iX]))
	      {
		if (__basefield == 0)
		  __base = 16;
		if (__base == 16)
		  {
		    __found_zero = false;
		    __sep_pos = 0;
		  }
		else
		  break;
	      }
	    else
	      break;

	    if (++__beg != __end)
	      {
		__c = *__beg;
		if (!__found_zero)
		  break;
	      }
	    else
	      __testeof = true;
	  }
	
	
	
	const size_t __len = (__base == 16 ? __num_base::_S_iend
			      - __num_base::_S_izero : __base);

	
	string __found_grouping;
	if (__lc->_M_use_grouping)
	  __found_grouping.reserve(32);
	bool __testfail = false;
	bool __testoverflow = false;
	const __unsigned_type __max =
	  (__negative && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
	  ? -__gnu_cxx::__numeric_traits<_ValueT>::__min
	  : __gnu_cxx::__numeric_traits<_ValueT>::__max;
	const __unsigned_type __smax = __max / __base;
	__unsigned_type __result = 0;
	int __digit = 0;
	const char_type* __lit_zero = __lit + __num_base::_S_izero;

	if (!__lc->_M_allocated)
	  
	  while (!__testeof)
	    {
	      __digit = _M_find(__lit_zero, __len, __c);
	      if (__digit == -1)
		break;
	      
	      if (__result > __smax)
		__testoverflow = true;
	      else
		{
		  __result *= __base;
		  __testoverflow |= __result > __max - __digit;
		  __result += __digit;
		  ++__sep_pos;
		}
	      
	      if (++__beg != __end)
		__c = *__beg;
	      else
		__testeof = true;
	    }
	else
	  while (!__testeof)
	    {
	      
	      
	      if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
		{
		  
		  
		  if (__sep_pos)
		    {
		      __found_grouping += static_cast<char>(__sep_pos);
		      __sep_pos = 0;
		    }
		  else
		    {
		      __testfail = true;
		      break;
		    }
		}
	      else if (__c == __lc->_M_decimal_point)
		break;
	      else
		{
		  const char_type* __q =
		    __traits_type::find(__lit_zero, __len, __c);
		  if (!__q)
		    break;
		  
		  __digit = __q - __lit_zero;
		  if (__digit > 15)
		    __digit -= 6;
		  if (__result > __smax)
		    __testoverflow = true;
		  else
		    {
		      __result *= __base;
		      __testoverflow |= __result > __max - __digit;
		      __result += __digit;
		      ++__sep_pos;
		    }
		}
	      
	      if (++__beg != __end)
		__c = *__beg;
	      else
		__testeof = true;
	    }
	
	
	
	if (__found_grouping.size())
	  {
	    
	    __found_grouping += static_cast<char>(__sep_pos);

	    if (!std::__verify_grouping(__lc->_M_grouping,
					__lc->_M_grouping_size,
					__found_grouping))
	      __err = ios_base::failbit;
	  }

	
	
	if ((!__sep_pos && !__found_zero && !__found_grouping.size())
	    || __testfail)
	  {
	    __v = 0;
	    __err = ios_base::failbit;
	  }
	else if (__testoverflow)
	  {
	    if (__negative
		&& __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
	      __v = __gnu_cxx::__numeric_traits<_ValueT>::__min;
	    else
	      __v = __gnu_cxx::__numeric_traits<_ValueT>::__max;
	    __err = ios_base::failbit;
	  }
	else
	  __v = __negative ? -__result : __result;

	if (__testeof)
	  __err |= ios_base::eofbit;
	return __beg;
      }

  
  
  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, bool& __v) const
    {
      if (!(__io.flags() & ios_base::boolalpha))
        {
	  
          
          
	  long __l = -1;
          __beg = _M_extract_int(__beg, __end, __io, __err, __l);
	  if (__l == 0 || __l == 1)
	    __v = bool(__l);
	  else
	    {
	      
	      
	      __v = true;
	      __err = ios_base::failbit;
	      if (__beg == __end)
		__err |= ios_base::eofbit;
	    }
        }
      else
        {
	  
	  typedef __numpunct_cache<_CharT>  __cache_type;
	  __use_cache<__cache_type> __uc;
	  const locale& __loc = __io._M_getloc();
	  const __cache_type* __lc = __uc(__loc);

	  bool __testf = true;
	  bool __testt = true;
	  bool __donef = __lc->_M_falsename_size == 0;
	  bool __donet = __lc->_M_truename_size == 0;
	  bool __testeof = false;
	  size_t __n = 0;
	  while (!__donef || !__donet)
	    {
	      if (__beg == __end)
		{
		  __testeof = true;
		  break;
		}

	      const char_type __c = *__beg;

	      if (!__donef)
		__testf = __c == __lc->_M_falsename[__n];

	      if (!__testf && __donet)
		break;

	      if (!__donet)
		__testt = __c == __lc->_M_truename[__n];

	      if (!__testt && __donef)
		break;

	      if (!__testt && !__testf)
		break;

	      ++__n;
	      ++__beg;

	      __donef = !__testf || __n >= __lc->_M_falsename_size;
	      __donet = !__testt || __n >= __lc->_M_truename_size;
	    }
	  if (__testf && __n == __lc->_M_falsename_size && __n)
	    {
	      __v = false;
	      if (__testt && __n == __lc->_M_truename_size)
		__err = ios_base::failbit;
	      else
		__err = __testeof ? ios_base::eofbit : ios_base::goodbit;
	    }
	  else if (__testt && __n == __lc->_M_truename_size && __n)
	    {
	      __v = true;
	      __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
	    }
	  else
	    {
	      
	      
	      __v = false;
	      __err = ios_base::failbit;
	      if (__testeof)
		__err |= ios_base::eofbit;
	    }
	}
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
	   ios_base::iostate& __err, float& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
	__err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
	__err |= ios_base::eofbit;
      return __beg;
    }


  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, long double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
	__err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, void*& __v) const
    {
      
      typedef ios_base::fmtflags        fmtflags;
      const fmtflags __fmt = __io.flags();
      __io.flags((__fmt & ~ios_base::basefield) | ios_base::hex);

      typedef __gnu_cxx::__conditional_type<(sizeof(void*)
					     <= sizeof(unsigned long)),
	unsigned long, unsigned long long>::__type _UIntPtrType;       

      _UIntPtrType __ul;
      __beg = _M_extract_int(__beg, __end, __io, __err, __ul);

      
      __io.flags(__fmt);

      __v = reinterpret_cast<void*>(__ul);
      return __beg;
    }

  
  
  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_pad(_CharT __fill, streamsize __w, ios_base& __io,
	   _CharT* __new, const _CharT* __cs, int& __len) const
    {
      
      
      __pad<_CharT, char_traits<_CharT> >::_S_pad(__io, __fill, __new,
						  __cs, __w, __len);
      __len = static_cast<int>(__w);
    }



  template<typename _CharT, typename _ValueT>
    int
    __int_to_char(_CharT* __bufend, _ValueT __v, const _CharT* __lit,
		  ios_base::fmtflags __flags, bool __dec)
    {
      _CharT* __buf = __bufend;
      if (__builtin_expect(__dec, true))
	{
	  
	  do
	    {
	      *--__buf = __lit[(__v % 10) + __num_base::_S_odigits];
	      __v /= 10;
	    }
	  while (__v != 0);
	}
      else if ((__flags & ios_base::basefield) == ios_base::oct)
	{
	  
	  do
	    {
	      *--__buf = __lit[(__v & 0x7) + __num_base::_S_odigits];
	      __v >>= 3;
	    }
	  while (__v != 0);
	}
      else
	{
	  
	  const bool __uppercase = __flags & ios_base::uppercase;
	  const int __case_offset = __uppercase ? __num_base::_S_oudigits
	                                        : __num_base::_S_odigits;
	  do
	    {
	      *--__buf = __lit[(__v & 0xf) + __case_offset];
	      __v >>= 4;
	    }
	  while (__v != 0);
	}
      return __bufend - __buf;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_int(const char* __grouping, size_t __grouping_size, _CharT __sep,
		 ios_base&, _CharT* __new, _CharT* __cs, int& __len) const
    {
      _CharT* __p = std::__add_grouping(__new, __sep, __grouping,
					__grouping_size, __cs, __cs + __len);
      __len = __p - __new;
    }
  
  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_int(_OutIter __s, ios_base& __io, _CharT __fill,
		    _ValueT __v) const
      {
	using __gnu_cxx::__add_unsigned;
	typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
	typedef __numpunct_cache<_CharT>	             __cache_type;
	__use_cache<__cache_type> __uc;
	const locale& __loc = __io._M_getloc();
	const __cache_type* __lc = __uc(__loc);
	const _CharT* __lit = __lc->_M_atoms_out;
	const ios_base::fmtflags __flags = __io.flags();

	
	const int __ilen = 5 * sizeof(_ValueT);
	_CharT* __cs = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
							     * __ilen));

	
	
	const ios_base::fmtflags __basefield = __flags & ios_base::basefield;
	const bool __dec = (__basefield != ios_base::oct
			    && __basefield != ios_base::hex);
	const __unsigned_type __u = ((__v > 0 || !__dec)
				     ? __unsigned_type(__v)
				     : -__unsigned_type(__v));
 	int __len = __int_to_char(__cs + __ilen, __u, __lit, __flags, __dec);
	__cs += __ilen - __len;

	
	if (__lc->_M_use_grouping)
	  {
	    
	    
	    _CharT* __cs2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
								  * (__len + 1)
								  * 2));
	    _M_group_int(__lc->_M_grouping, __lc->_M_grouping_size,
			 __lc->_M_thousands_sep, __io, __cs2 + 2, __cs, __len);
	    __cs = __cs2 + 2;
	  }

	
	if (__builtin_expect(__dec, true))
	  {
	    
	    if (__v >= 0)
	      {
		if (bool(__flags & ios_base::showpos)
		    && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
		  *--__cs = __lit[__num_base::_S_oplus], ++__len;
	      }
	    else
	      *--__cs = __lit[__num_base::_S_ominus], ++__len;
	  }
	else if (bool(__flags & ios_base::showbase) && __v)
	  {
	    if (__basefield == ios_base::oct)
	      *--__cs = __lit[__num_base::_S_odigits], ++__len;
	    else
	      {
		
		const bool __uppercase = __flags & ios_base::uppercase;
		*--__cs = __lit[__num_base::_S_ox + __uppercase];
		
		*--__cs = __lit[__num_base::_S_odigits];
		__len += 2;
	      }
	  }

	
	const streamsize __w = __io.width();
	if (__w > static_cast<streamsize>(__len))
	  {
	    _CharT* __cs3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
								  * __w));
	    _M_pad(__fill, __w, __io, __cs3, __cs, __len);
	    __cs = __cs3;
	  }
	__io.width(0);

	
	
	return std::__write(__s, __cs, __len);
      }

  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_float(const char* __grouping, size_t __grouping_size,
		   _CharT __sep, const _CharT* __p, _CharT* __new,
		   _CharT* __cs, int& __len) const
    {
      
      
      
      const int __declen = __p ? __p - __cs : __len;
      _CharT* __p2 = std::__add_grouping(__new, __sep, __grouping,
					 __grouping_size,
					 __cs, __cs + __declen);

      
      int __newlen = __p2 - __new;
      if (__p)
	{
	  char_traits<_CharT>::copy(__p2, __p, __len - __declen);
	  __newlen += __len - __declen;
	}
      __len = __newlen;
    }

  
  
  
  
  
  
  
  
  
  
  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_float(_OutIter __s, ios_base& __io, _CharT __fill, char __mod,
		       _ValueT __v) const
      {
	typedef __numpunct_cache<_CharT>                __cache_type;
	__use_cache<__cache_type> __uc;
	const locale& __loc = __io._M_getloc();
	const __cache_type* __lc = __uc(__loc);

	
	const streamsize __prec = __io.precision() < 0 ? 6 : __io.precision();

	const int __max_digits =
	  __gnu_cxx::__numeric_traits<_ValueT>::__digits10;

	
	int __len;
	
	char __fbuf[16];
	__num_base::_S_format_float(__io, __fbuf, __mod);

	
	
	int __cs_size = __max_digits * 3;
	char* __cs = static_cast<char*>(__builtin_alloca(__cs_size));
	__len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
				      __fbuf, __prec, __v);

	
	if (__len >= __cs_size)
	  {
	    __cs_size = __len + 1;
	    __cs = static_cast<char*>(__builtin_alloca(__cs_size));
	    __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
					  __fbuf, __prec, __v);
	  }

	
	
	const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);
	
	_CharT* __ws = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
							     * __len));
	__ctype.widen(__cs, __cs + __len, __ws);
	
	
	_CharT* __wp = 0;
	const char* __p = char_traits<char>::find(__cs, __len, '.');
	if (__p)
	  {
	    __wp = __ws + (__p - __cs);
	    *__wp = __lc->_M_decimal_point;
	  }
	
	
	
	
	if (__lc->_M_use_grouping
	    && (__wp || __len < 3 || (__cs[1] <= '9' && __cs[2] <= '9'
				      && __cs[1] >= '0' && __cs[2] >= '0')))
	  {
	    
	    
	    _CharT* __ws2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
								  * __len * 2));
	    
	    streamsize __off = 0;
	    if (__cs[0] == '-' || __cs[0] == '+')
	      {
		__off = 1;
		__ws2[0] = __ws[0];
		__len -= 1;
	      }
	    
	    _M_group_float(__lc->_M_grouping, __lc->_M_grouping_size,
			   __lc->_M_thousands_sep, __wp, __ws2 + __off,
			   __ws + __off, __len);
	    __len += __off;
	    
	    __ws = __ws2;
	  }

	
	const streamsize __w = __io.width();
	if (__w > static_cast<streamsize>(__len))
	  {
	    _CharT* __ws3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
								  * __w));
	    _M_pad(__fill, __w, __io, __ws3, __ws, __len);
	    __ws = __ws3;
	  }
	__io.width(0);
	
	
	
	return std::__write(__s, __ws, __len);
      }
  
  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, bool __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      if ((__flags & ios_base::boolalpha) == 0)
        {
          const long __l = __v;
          __s = _M_insert_int(__s, __io, __fill, __l);
        }
      else
        {
	  typedef __numpunct_cache<_CharT>              __cache_type;
	  __use_cache<__cache_type> __uc;
	  const locale& __loc = __io._M_getloc();
	  const __cache_type* __lc = __uc(__loc);

	  const _CharT* __name = __v ? __lc->_M_truename
	                             : __lc->_M_falsename;
	  int __len = __v ? __lc->_M_truename_size
	                  : __lc->_M_falsename_size;

	  const streamsize __w = __io.width();
	  if (__w > static_cast<streamsize>(__len))
	    {
	      const streamsize __plen = __w - __len;
	      _CharT* __ps
		= static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
							* __plen));

	      char_traits<_CharT>::assign(__ps, __plen, __fill);
	      __io.width(0);

	      if ((__flags & ios_base::adjustfield) == ios_base::left)
		{
		  __s = std::__write(__s, __name, __len);
		  __s = std::__write(__s, __ps, __plen);
		}
	      else
		{
		  __s = std::__write(__s, __ps, __plen);
		  __s = std::__write(__s, __name, __len);
		}
	      return __s;
	    }
	  __io.width(0);
	  __s = std::__write(__s, __name, __len);
	}
      return __s;
    }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, double __v) const
    { return _M_insert_float(__s, __io, __fill, char(), __v); }


  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
	   long double __v) const
    { return _M_insert_float(__s, __io, __fill, 'L', __v); }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
           const void* __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      const ios_base::fmtflags __fmt = ~(ios_base::basefield
					 | ios_base::uppercase);
      __io.flags((__flags & __fmt) | (ios_base::hex | ios_base::showbase));

      typedef __gnu_cxx::__conditional_type<(sizeof(const void*)
					     <= sizeof(unsigned long)),
	unsigned long, unsigned long long>::__type _UIntPtrType;       

      __s = _M_insert_int(__s, __io, __fill,
			  reinterpret_cast<_UIntPtrType>(__v));
      __io.flags(__flags);
      return __s;
    }



  
  
  
  

  
  
  template<typename _CharT, typename _Traits>
    void
    __pad<_CharT, _Traits>::_S_pad(ios_base& __io, _CharT __fill,
				   _CharT* __news, const _CharT* __olds,
				   streamsize __newlen, streamsize __oldlen)
    {
      const size_t __plen = static_cast<size_t>(__newlen - __oldlen);
      const ios_base::fmtflags __adjust = __io.flags() & ios_base::adjustfield;

      
      if (__adjust == ios_base::left)
	{
	  _Traits::copy(__news, __olds, __oldlen);
	  _Traits::assign(__news + __oldlen, __plen, __fill);
	  return;
	}

      size_t __mod = 0;
      if (__adjust == ios_base::internal)
	{
	  
	  
	  
          const locale& __loc = __io._M_getloc();
	  const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

	  if (__ctype.widen('-') == __olds[0]
	      || __ctype.widen('+') == __olds[0])
	    {
	      __news[0] = __olds[0];
	      __mod = 1;
	      ++__news;
	    }
	  else if (__ctype.widen('0') == __olds[0]
		   && __oldlen > 1
		   && (__ctype.widen('x') == __olds[1]
		       || __ctype.widen('X') == __olds[1]))
	    {
	      __news[0] = __olds[0];
	      __news[1] = __olds[1];
	      __mod = 2;
	      __news += 2;
	    }
	  
	}
      _Traits::assign(__news, __plen, __fill);
      _Traits::copy(__news + __plen, __olds + __mod, __oldlen - __mod);
    }

  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
		   const char* __gbeg, size_t __gsize,
		   const _CharT* __first, const _CharT* __last)
    {
      size_t __idx = 0;
      size_t __ctr = 0;

      while (__last - __first > __gbeg[__idx]
	     && static_cast<signed char>(__gbeg[__idx]) > 0
	     && __gbeg[__idx] != __gnu_cxx::__numeric_traits<char>::__max)
	{
	  __last -= __gbeg[__idx];
	  __idx < __gsize - 1 ? ++__idx : ++__ctr;
	}

      while (__first != __last)
	*__s++ = *__first++;

      while (__ctr--)
	{
	  *__s++ = __sep;	  
	  for (char __i = __gbeg[__idx]; __i > 0; --__i)
	    *__s++ = *__first++;
	}

      while (__idx--)
	{
	  *__s++ = __sep;	  
	  for (char __i = __gbeg[__idx]; __i > 0; --__i)
	    *__s++ = *__first++;
	}

      return __s;
    }

  
  
  
  extern template class numpunct<char>;
  extern template class numpunct_byname<char>;
  extern template class  num_get<char>;
  extern template class  num_put<char>;
  extern template class ctype_byname<char>;

  extern template
    const ctype<char>&
    use_facet<ctype<char> >(const locale&);

  extern template
    const numpunct<char>&
    use_facet<numpunct<char> >(const locale&);

  extern template
    const num_put<char>&
    use_facet<num_put<char> >(const locale&);

  extern template
    const num_get<char>&
    use_facet<num_get<char> >(const locale&);

  extern template
    bool
    has_facet<ctype<char> >(const locale&);

  extern template
    bool
    has_facet<numpunct<char> >(const locale&);

  extern template
    bool
    has_facet<num_put<char> >(const locale&);

  extern template
    bool
    has_facet<num_get<char> >(const locale&);

  extern template class numpunct<wchar_t>;
  extern template class numpunct_byname<wchar_t>;
  extern template class  num_get<wchar_t>;
  extern template class  num_put<wchar_t>;
  extern template class ctype_byname<wchar_t>;

  extern template
    const ctype<wchar_t>&
    use_facet<ctype<wchar_t> >(const locale&);

  extern template
    const numpunct<wchar_t>&
    use_facet<numpunct<wchar_t> >(const locale&);

  extern template
    const num_put<wchar_t>&
    use_facet<num_put<wchar_t> >(const locale&);

  extern template
    const num_get<wchar_t>&
    use_facet<num_get<wchar_t> >(const locale&);

 extern template
    bool
    has_facet<ctype<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<numpunct<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_put<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_get<wchar_t> >(const locale&);

}



namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _Facet>
    inline const _Facet&
    __check_facet(const _Facet* __f)
    {
      if (!__f)
	__throw_bad_cast();
      return *__f;
    }

  
  





 
  template<typename _CharT, typename _Traits>
    class basic_ios : public ios_base
    {
    public:
      
      



 
      typedef _CharT                                 char_type;
      typedef typename _Traits::int_type             int_type;
      typedef typename _Traits::pos_type             pos_type;
      typedef typename _Traits::off_type             off_type;
      typedef _Traits                                traits_type;
      

      
      

 
      typedef ctype<_CharT>                          __ctype_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
						     __num_put_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
						     __num_get_type;
      

      
    protected:
      basic_ostream<_CharT, _Traits>*                _M_tie;
      mutable char_type                              _M_fill;
      mutable bool                                   _M_fill_init;
      basic_streambuf<_CharT, _Traits>*              _M_streambuf;

      
      const __ctype_type*                            _M_ctype;
      
      const __num_put_type*                          _M_num_put;
      
      const __num_get_type*                          _M_num_get;

    public:
      
      




 
      operator void*() const
      { return this->fail() ? 0 : const_cast<basic_ios*>(this); }

      bool
      operator!() const
      { return this->fail(); }
      

      





 
      iostate
      rdstate() const
      { return _M_streambuf_state; }

      





 
      void
      clear(iostate __state = goodbit);

      




 
      void
      setstate(iostate __state)
      { this->clear(this->rdstate() | __state); }

      
      
      
      void
      _M_setstate(iostate __state)
      {
	
	
	_M_streambuf_state |= __state;
	if (this->exceptions() & __state)
	  throw;
      }

      




 
      bool
      good() const
      { return this->rdstate() == 0; }

      




 
      bool
      eof() const
      { return (this->rdstate() & eofbit) != 0; }

      





 
      bool
      fail() const
      { return (this->rdstate() & (badbit | failbit)) != 0; }

      




 
      bool
      bad() const
      { return (this->rdstate() & badbit) != 0; }

      





 
      iostate
      exceptions() const
      { return _M_exception; }

      





























 
      void
      exceptions(iostate __except)
      {
        _M_exception = __except;
        this->clear(_M_streambuf_state);
      }

      
      



 
      explicit
      basic_ios(basic_streambuf<_CharT, _Traits>* __sb)
      : ios_base(), _M_tie(0), _M_fill(), _M_fill_init(false), _M_streambuf(0),
	_M_ctype(0), _M_num_put(0), _M_num_get(0)
      { this->init(__sb); }

      




 
      virtual
      ~basic_ios() { }

      
      







 
      basic_ostream<_CharT, _Traits>*
      tie() const
      { return _M_tie; }

      






 
      basic_ostream<_CharT, _Traits>*
      tie(basic_ostream<_CharT, _Traits>* __tiestr)
      {
        basic_ostream<_CharT, _Traits>* __old = _M_tie;
        _M_tie = __tiestr;
        return __old;
      }

      




 
      basic_streambuf<_CharT, _Traits>*
      rdbuf() const
      { return _M_streambuf; }

      




















 
      basic_streambuf<_CharT, _Traits>*
      rdbuf(basic_streambuf<_CharT, _Traits>* __sb);

      









 
      basic_ios&
      copyfmt(const basic_ios& __rhs);

      




 
      char_type
      fill() const
      {
	if (!_M_fill_init)
	  {
	    _M_fill = this->widen(' ');
	    _M_fill_init = true;
	  }
	return _M_fill;
      }

      







 
      char_type
      fill(char_type __ch)
      {
	char_type __old = this->fill();
	_M_fill = __ch;
	return __old;
      }

      
      









 
      locale
      imbue(const locale& __loc);

      















 
      char
      narrow(char_type __c, char __dfault) const
      { return __check_facet(_M_ctype).narrow(__c, __dfault); }

      













 
      char_type
      widen(char __c) const
      { return __check_facet(_M_ctype).widen(__c); }

    protected:
      
      




 
      basic_ios()
      : ios_base(), _M_tie(0), _M_fill(char_type()), _M_fill_init(false), 
	_M_streambuf(0), _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { }

      




 
      void
      init(basic_streambuf<_CharT, _Traits>* __sb);

      void
      _M_cache_locale(const locale& __loc);
    };

}





























 



namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::clear(iostate __state)
    {
      if (this->rdbuf())
	_M_streambuf_state = __state;
      else
	  _M_streambuf_state = __state | badbit;
      if (this->exceptions() & this->rdstate())
	__throw_ios_failure(("basic_ios::clear"));
    }

  template<typename _CharT, typename _Traits>
    basic_streambuf<_CharT, _Traits>*
    basic_ios<_CharT, _Traits>::rdbuf(basic_streambuf<_CharT, _Traits>* __sb)
    {
      basic_streambuf<_CharT, _Traits>* __old = _M_streambuf;
      _M_streambuf = __sb;
      this->clear();
      return __old;
    }

  template<typename _CharT, typename _Traits>
    basic_ios<_CharT, _Traits>&
    basic_ios<_CharT, _Traits>::copyfmt(const basic_ios& __rhs)
    {
      
      
      if (this != &__rhs)
	{
	  
	  

	  
	  _Words* __words = (__rhs._M_word_size <= _S_local_word_size) ?
	                     _M_local_word : new _Words[__rhs._M_word_size];

	  
	  _Callback_list* __cb = __rhs._M_callbacks;
	  if (__cb)
	    __cb->_M_add_reference();
	  _M_call_callbacks(erase_event);
	  if (_M_word != _M_local_word)
	    {
	      delete [] _M_word;
	      _M_word = 0;
	    }
	  _M_dispose_callbacks();

	  
	  _M_callbacks = __cb;
	  for (int __i = 0; __i < __rhs._M_word_size; ++__i)
	    __words[__i] = __rhs._M_word[__i];
	  _M_word = __words;
	  _M_word_size = __rhs._M_word_size;

	  this->flags(__rhs.flags());
	  this->width(__rhs.width());
	  this->precision(__rhs.precision());
	  this->tie(__rhs.tie());
	  this->fill(__rhs.fill());
	  _M_ios_locale = __rhs.getloc();
	  _M_cache_locale(_M_ios_locale);

	  _M_call_callbacks(copyfmt_event);

	  
	  this->exceptions(__rhs.exceptions());
	}
      return *this;
    }

  
  template<typename _CharT, typename _Traits>
    locale
    basic_ios<_CharT, _Traits>::imbue(const locale& __loc)
    {
      locale __old(this->getloc());
      ios_base::imbue(__loc);
      _M_cache_locale(__loc);
      if (this->rdbuf() != 0)
	this->rdbuf()->pubimbue(__loc);
      return __old;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::init(basic_streambuf<_CharT, _Traits>* __sb)
    {
      
      ios_base::_M_init();

      
      _M_cache_locale(_M_ios_locale);

      
      
      
      
      
      
      
      
      
      
      
      
      _M_fill = _CharT();
      _M_fill_init = false;

      _M_tie = 0;
      _M_exception = goodbit;
      _M_streambuf = __sb;
      _M_streambuf_state = __sb ? goodbit : badbit;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::_M_cache_locale(const locale& __loc)
    {
      if (__builtin_expect(has_facet<__ctype_type>(__loc), true))
	_M_ctype = &use_facet<__ctype_type>(__loc);
      else
	_M_ctype = 0;

      if (__builtin_expect(has_facet<__num_put_type>(__loc), true))
	_M_num_put = &use_facet<__num_put_type>(__loc);
      else
	_M_num_put = 0;

      if (__builtin_expect(has_facet<__num_get_type>(__loc), true))
	_M_num_get = &use_facet<__num_get_type>(__loc);
      else
	_M_num_get = 0;
    }

  
  
  
  extern template class basic_ios<char>;

  extern template class basic_ios<wchar_t>;

}




namespace std __attribute__ ((__visibility__ ("default"))) {

  
  






 
  template<typename _CharT, typename _Traits>
    class basic_ostream : virtual public basic_ios<_CharT, _Traits>
    {
    public:
      
      typedef _CharT                     		char_type;
      typedef typename _Traits::int_type 		int_type;
      typedef typename _Traits::pos_type 		pos_type;
      typedef typename _Traits::off_type 		off_type;
      typedef _Traits                    		traits_type;
      
      
      typedef basic_streambuf<_CharT, _Traits> 		__streambuf_type;
      typedef basic_ios<_CharT, _Traits>		__ios_type;
      typedef basic_ostream<_CharT, _Traits>		__ostream_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >        
      							__num_put_type;
      typedef ctype<_CharT>           			__ctype_type;

      
      





 
      explicit 
      basic_ostream(__streambuf_type* __sb)
      { this->init(__sb); }

      



 
      virtual 
      ~basic_ostream() { }

      
      class sentry;
      friend class sentry;
      
      
      
      
      





 
      __ostream_type&
      operator<<(__ostream_type& (*__pf)(__ostream_type&))
      {
	
	
	
	return __pf(*this);
      }

      __ostream_type&
      operator<<(__ios_type& (*__pf)(__ios_type&))
      {
	
	
	
	__pf(*this);
	return *this;
      }

      __ostream_type&
      operator<<(ios_base& (*__pf) (ios_base&))
      {
	
	
	
	__pf(*this);
	return *this;
      }
      

      
      















 
      
      






 
      __ostream_type& 
      operator<<(long __n)
      { return _M_insert(__n); }
      
      __ostream_type& 
      operator<<(unsigned long __n)
      { return _M_insert(__n); }	

      __ostream_type& 
      operator<<(bool __n)
      { return _M_insert(__n); }

      __ostream_type& 
      operator<<(short __n);

      __ostream_type& 
      operator<<(unsigned short __n)
      {
	
	
	return _M_insert(static_cast<unsigned long>(__n));
      }

      __ostream_type& 
      operator<<(int __n);

      __ostream_type& 
      operator<<(unsigned int __n)
      {
	
	
	return _M_insert(static_cast<unsigned long>(__n));
      }

      __ostream_type& 
      operator<<(long long __n)
      { return _M_insert(__n); }

      __ostream_type& 
      operator<<(unsigned long long __n)
      { return _M_insert(__n); }	

      __ostream_type& 
      operator<<(double __f)
      { return _M_insert(__f); }

      __ostream_type& 
      operator<<(float __f)
      {
	
	
	return _M_insert(static_cast<double>(__f));
      }

      __ostream_type& 
      operator<<(long double __f)
      { return _M_insert(__f); }

      __ostream_type& 
      operator<<(const void* __p)
      { return _M_insert(__p); }

      



















 
      __ostream_type& 
      operator<<(__streambuf_type* __sb);
      

      
      















 
      
      








 
      __ostream_type& 
      put(char_type __c);

      
      void
      _M_write(const char_type* __s, streamsize __n)
      {
	const streamsize __put = this->rdbuf()->sputn(__s, __n);
	if (__put != __n)
	  this->setstate(ios_base::badbit);
      }

      














 
      __ostream_type& 
      write(const char_type* __s, streamsize __n);
      

      







 
      __ostream_type& 
      flush();

      
      





 
      pos_type 
      tellp();

      






 
      __ostream_type& 
      seekp(pos_type);

      







 
       __ostream_type& 
      seekp(off_type, ios_base::seekdir);
      
    protected:
      basic_ostream()
      { this->init(0); }

      template<typename _ValueT>
        __ostream_type&
        _M_insert(_ValueT __v);
    };

  





 
  template <typename _CharT, typename _Traits>
    class basic_ostream<_CharT, _Traits>::sentry
    {
      
      bool 				_M_ok;
      basic_ostream<_CharT, _Traits>& 	_M_os;
      
    public:
      









 
      explicit
      sentry(basic_ostream<_CharT, _Traits>& __os);

      





 
      ~sentry()
      {
	
	if (bool(_M_os.flags() & ios_base::unitbuf) && !uncaught_exception())
	  {
	    
	    if (_M_os.rdbuf() && _M_os.rdbuf()->pubsync() == -1)
	      _M_os.setstate(ios_base::badbit);
	  }
      }

      





 
      operator bool() const
      { return _M_ok; }
    };

  
  
  













 
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
    { return __ostream_insert(__out, &__c, 1); }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
    { return (__out << __out.widen(__c)); }

  
  template <class _Traits> 
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, char __c)
    { return __ostream_insert(__out, &__c, 1); }

  
  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
    { return (__out << static_cast<char>(__c)); }
  
  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
    { return (__out << static_cast<char>(__c)); }
  
  
  
  











 
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
    {
      if (!__s)
	__out.setstate(ios_base::badbit);
      else
	__ostream_insert(__out, __s,
			 static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits> &
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s);

  
  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
    {
      if (!__s)
	__out.setstate(ios_base::badbit);
      else
	__ostream_insert(__out, __s,
			 static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }

  
  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits> &
    operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }
  

  
  






 
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>& 
    endl(basic_ostream<_CharT, _Traits>& __os)
    { return flush(__os.put(__os.widen('\n'))); }

  




 
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>& 
    ends(basic_ostream<_CharT, _Traits>& __os)
    { return __os.put(_CharT()); }
  
  



 
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>& 
    flush(basic_ostream<_CharT, _Traits>& __os)
    { return __os.flush(); }

}






























 








namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>::sentry::
    sentry(basic_ostream<_CharT, _Traits>& __os)
    : _M_ok(false), _M_os(__os)
    {
      
      if (__os.tie() && __os.good())
	__os.tie()->flush();

      if (__os.good())
	_M_ok = true;
      else
	__os.setstate(ios_base::failbit);
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_ostream<_CharT, _Traits>&
      basic_ostream<_CharT, _Traits>::
      _M_insert(_ValueT __v)
      {
	sentry __cerb(*this);
	if (__cerb)
	  {
	    ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
	    try
	      {
		const __num_put_type& __np = __check_facet(this->_M_num_put);
		if (__np.put(*this, *this, this->fill(), __v).failed())
		  __err |= ios_base::badbit;
	      }
	    catch(__cxxabiv1::__forced_unwind&)
	      {
		this->_M_setstate(ios_base::badbit);		
		throw;
	      }
	    catch(...)
	      { this->_M_setstate(ios_base::badbit); }
	    if (__err)
	      this->setstate(__err);
	  }
	return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(short __n)
    {
      
      
      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
	return _M_insert(static_cast<long>(static_cast<unsigned short>(__n)));
      else
	return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(int __n)
    {
      
      
      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
	return _M_insert(static_cast<long>(static_cast<unsigned int>(__n)));
      else
	return _M_insert(static_cast<long>(__n));
    }
  
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(__streambuf_type* __sbin)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this);
      if (__cerb && __sbin)
	{
	  try
	    {
	      if (!__copy_streambufs(__sbin, this->rdbuf()))
		__err |= ios_base::failbit;
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);		
	      throw;
	    }
	  catch(...)
	    { this->_M_setstate(ios_base::failbit); }
	}
      else if (!__sbin)
	__err |= ios_base::badbit;
      if (__err)
	this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    put(char_type __c)
    {
      
      
      
      
      
      
      sentry __cerb(*this);
      if (__cerb)
	{
	  ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
	  try
	    {
	      const int_type __put = this->rdbuf()->sputc(__c);
	      if (traits_type::eq_int_type(__put, traits_type::eof()))
		__err |= ios_base::badbit;
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);		
	      throw;
	    }
	  catch(...)
	    { this->_M_setstate(ios_base::badbit); }
	  if (__err)
	    this->setstate(__err);
	}
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    write(const _CharT* __s, streamsize __n)
    {
      
      
      
      
      
      
      
      sentry __cerb(*this);
      if (__cerb)
	{
	  try
	    { _M_write(__s, __n); }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);		
	      throw;
	    }
	  catch(...)
	    { this->_M_setstate(ios_base::badbit); }
	}
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    flush()
    {
      
      
      
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
	{
	  if (this->rdbuf() && this->rdbuf()->pubsync() == -1)
	    __err |= ios_base::badbit;
	}
      catch(__cxxabiv1::__forced_unwind&)
	{
	  this->_M_setstate(ios_base::badbit);		
	  throw;
	}
      catch(...)
	{ this->_M_setstate(ios_base::badbit); }
      if (__err)
	this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_ostream<_CharT, _Traits>::pos_type
    basic_ostream<_CharT, _Traits>::
    tellp()
    {
      pos_type __ret = pos_type(-1);
      try
	{
	  if (!this->fail())
	    __ret = this->rdbuf()->pubseekoff(0, ios_base::cur, ios_base::out);
	}
      catch(__cxxabiv1::__forced_unwind&)
	{
	  this->_M_setstate(ios_base::badbit);		
	  throw;
	}
      catch(...)
	{ this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(pos_type __pos)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
	{
	  if (!this->fail())
	    {
	      
	      
	      const pos_type __p = this->rdbuf()->pubseekpos(__pos,
							     ios_base::out);

	      
	      if (__p == pos_type(off_type(-1)))
		__err |= ios_base::failbit;
	    }
	}
      catch(__cxxabiv1::__forced_unwind&)
	{
	  this->_M_setstate(ios_base::badbit);		
	  throw;
	}
      catch(...)
	{ this->_M_setstate(ios_base::badbit); }
      if (__err)
	this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(off_type __off, ios_base::seekdir __dir)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
	{
	  if (!this->fail())
	    {
	      
	      
	      const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
							     ios_base::out);

	      
	      if (__p == pos_type(off_type(-1)))
		__err |= ios_base::failbit;
	    }
	}
      catch(__cxxabiv1::__forced_unwind&)
	{
	  this->_M_setstate(ios_base::badbit);		
	  throw;
	}
      catch(...)
	{ this->_M_setstate(ios_base::badbit); }
      if (__err)
	this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
    {
      if (!__s)
	__out.setstate(ios_base::badbit);
      else
	{
	  
	  
	  const size_t __clen = char_traits<char>::length(__s);
	  try
	    {
	      struct __ptr_guard
	      {
		_CharT *__p;
		__ptr_guard (_CharT *__ip): __p(__ip) { }
		~__ptr_guard() { delete[] __p; }
		_CharT* __get() { return __p; }
	      } __pg (new _CharT[__clen]);

	      _CharT *__ws = __pg.__get();
	      for (size_t  __i = 0; __i < __clen; ++__i)
		__ws[__i] = __out.widen(__s[__i]);
	      __ostream_insert(__out, __ws, __clen);
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      __out._M_setstate(ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    { __out._M_setstate(ios_base::badbit); }
	}
      return __out;
    }

  
  
  
  extern template class basic_ostream<char>;
  extern template ostream& endl(ostream&);
  extern template ostream& ends(ostream&);
  extern template ostream& flush(ostream&);
  extern template ostream& operator<<(ostream&, char);
  extern template ostream& operator<<(ostream&, unsigned char);
  extern template ostream& operator<<(ostream&, signed char);
  extern template ostream& operator<<(ostream&, const char*);
  extern template ostream& operator<<(ostream&, const unsigned char*);
  extern template ostream& operator<<(ostream&, const signed char*);

  extern template ostream& ostream::_M_insert(long);
  extern template ostream& ostream::_M_insert(unsigned long);
  extern template ostream& ostream::_M_insert(bool);
  extern template ostream& ostream::_M_insert(long long);
  extern template ostream& ostream::_M_insert(unsigned long long);
  extern template ostream& ostream::_M_insert(double);
  extern template ostream& ostream::_M_insert(long double);
  extern template ostream& ostream::_M_insert(const void*);

  extern template class basic_ostream<wchar_t>;
  extern template wostream& endl(wostream&);
  extern template wostream& ends(wostream&);
  extern template wostream& flush(wostream&);
  extern template wostream& operator<<(wostream&, wchar_t);
  extern template wostream& operator<<(wostream&, char);
  extern template wostream& operator<<(wostream&, const wchar_t*);
  extern template wostream& operator<<(wostream&, const char*);

  extern template wostream& wostream::_M_insert(long);
  extern template wostream& wostream::_M_insert(unsigned long);
  extern template wostream& wostream::_M_insert(bool);
  extern template wostream& wostream::_M_insert(long long);
  extern template wostream& wostream::_M_insert(unsigned long long);
  extern template wostream& wostream::_M_insert(double);
  extern template wostream& wostream::_M_insert(long double);
  extern template wostream& wostream::_M_insert(const void*);

}


































 




namespace std __attribute__ ((__visibility__ ("default"))) {

  
  






 
  template<typename _CharT, typename _Traits>
    class basic_istream : virtual public basic_ios<_CharT, _Traits>
    {
    public:
      
      typedef _CharT                     		char_type;
      typedef typename _Traits::int_type 		int_type;
      typedef typename _Traits::pos_type 		pos_type;
      typedef typename _Traits::off_type 		off_type;
      typedef _Traits                    		traits_type;
      
      
      typedef basic_streambuf<_CharT, _Traits> 		__streambuf_type;
      typedef basic_ios<_CharT, _Traits>		__ios_type;
      typedef basic_istream<_CharT, _Traits>		__istream_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >        
 							__num_get_type;
      typedef ctype<_CharT>           			__ctype_type;

    protected:
      
      


 
      streamsize 		_M_gcount;

    public:
      
      





 
      explicit
      basic_istream(__streambuf_type* __sb)
      : _M_gcount(streamsize(0))
      { this->init(__sb); }

      



 
      virtual 
      ~basic_istream() 
      { _M_gcount = streamsize(0); }

      
      class sentry;
      friend class sentry;

      
      
      
      





 
      __istream_type&
      operator>>(__istream_type& (*__pf)(__istream_type&))
      { return __pf(*this); }

      __istream_type&
      operator>>(__ios_type& (*__pf)(__ios_type&))
      { 
	__pf(*this);
	return *this;
      }

      __istream_type&
      operator>>(ios_base& (*__pf)(ios_base&))
      {
	__pf(*this);
	return *this;
      }
      
      
      
      
















 
      
      






 
      __istream_type& 
      operator>>(bool& __n)
      { return _M_extract(__n); }
      
      __istream_type& 
      operator>>(short& __n);
      
      __istream_type& 
      operator>>(unsigned short& __n)
      { return _M_extract(__n); }

      __istream_type& 
      operator>>(int& __n);
    
      __istream_type& 
      operator>>(unsigned int& __n)
      { return _M_extract(__n); }

      __istream_type& 
      operator>>(long& __n)
      { return _M_extract(__n); }
      
      __istream_type& 
      operator>>(unsigned long& __n)
      { return _M_extract(__n); }

      __istream_type& 
      operator>>(long long& __n)
      { return _M_extract(__n); }

      __istream_type& 
      operator>>(unsigned long long& __n)
      { return _M_extract(__n); }

      __istream_type& 
      operator>>(float& __f)
      { return _M_extract(__f); }

      __istream_type& 
      operator>>(double& __f)
      { return _M_extract(__f); }

      __istream_type& 
      operator>>(long double& __f)
      { return _M_extract(__f); }

      __istream_type& 
      operator>>(void*& __p)
      { return _M_extract(__p); }

      


















 
      __istream_type& 
      operator>>(__streambuf_type* __sb);
      
      
      
      



 
      streamsize 
      gcount() const 
      { return _M_gcount; }
      
      


















 
      
      





 
      int_type 
      get();

      









 
      __istream_type& 
      get(char_type& __c);

      






















 
      __istream_type& 
      get(char_type* __s, streamsize __n, char_type __delim);

      






 
      __istream_type& 
      get(char_type* __s, streamsize __n)
      { return this->get(__s, __n, this->widen('\n')); }

      

















 
      __istream_type&
      get(__streambuf_type& __sb, char_type __delim);

      





 
      __istream_type&
      get(__streambuf_type& __sb)
      { return this->get(__sb, this->widen('\n')); }

      























 
      __istream_type& 
      getline(char_type* __s, streamsize __n, char_type __delim);

      






 
      __istream_type& 
      getline(char_type* __s, streamsize __n)
      { return this->getline(__s, __n, this->widen('\n')); }

      


















 
      __istream_type& 
      ignore();

      __istream_type& 
      ignore(streamsize __n);

      __istream_type& 
      ignore(streamsize __n, int_type __delim);
      
      






 
      int_type 
      peek();
      
      













 
      __istream_type& 
      read(char_type* __s, streamsize __n);

      














 
      streamsize 
      readsome(char_type* __s, streamsize __n);
      
      











 
      __istream_type& 
      putback(char_type __c);

      










 
      __istream_type& 
      unget();

      













 
      int 
      sync();

      









 
      pos_type 
      tellg();

      










 
      __istream_type& 
      seekg(pos_type);

      











 
      __istream_type& 
      seekg(off_type, ios_base::seekdir);
      

    protected:
      basic_istream()
      : _M_gcount(streamsize(0))
      { this->init(0); }

      template<typename _ValueT>
        __istream_type&
        _M_extract(_ValueT& __v);
    };

  
  template<> 
    basic_istream<char>& 
    basic_istream<char>::
    getline(char_type* __s, streamsize __n, char_type __delim);
  
  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n);
  
  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n, int_type __delim);

  template<> 
    basic_istream<wchar_t>& 
    basic_istream<wchar_t>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n);
  
  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n, int_type __delim);

  






 
  template<typename _CharT, typename _Traits>
    class basic_istream<_CharT, _Traits>::sentry
    {
    public:
      
      typedef _Traits 					traits_type;
      typedef basic_streambuf<_CharT, _Traits> 		__streambuf_type;
      typedef basic_istream<_CharT, _Traits> 		__istream_type;
      typedef typename __istream_type::__ctype_type 	__ctype_type;
      typedef typename _Traits::int_type		__int_type;

      



















 
      explicit
      sentry(basic_istream<_CharT, _Traits>& __is, bool __noskipws = false);

      





 
      operator bool() const
      { return _M_ok; }

    private:
      bool _M_ok;
    };

  
  
  









 
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }
  

  
  























 
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s);

  
  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __in, char* __s);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }
  

  
  





 
  template<typename _CharT, typename _Traits>
    class basic_iostream
    : public basic_istream<_CharT, _Traits>, 
      public basic_ostream<_CharT, _Traits>
    {
    public:
      
      
      
      typedef _CharT                     		char_type;
      typedef typename _Traits::int_type 		int_type;
      typedef typename _Traits::pos_type 		pos_type;
      typedef typename _Traits::off_type 		off_type;
      typedef _Traits                    		traits_type;

      
      typedef basic_istream<_CharT, _Traits>		__istream_type;
      typedef basic_ostream<_CharT, _Traits>		__ostream_type;

      




 
      explicit
      basic_iostream(basic_streambuf<_CharT, _Traits>* __sb)
      : __istream_type(__sb), __ostream_type(__sb) { }

      

 
      virtual 
      ~basic_iostream() { }

    protected:
      basic_iostream()
      : __istream_type(), __ostream_type() { }
    };

  
  


















 
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>& 
    ws(basic_istream<_CharT, _Traits>& __is);

}






























 








namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>::sentry::
    sentry(basic_istream<_CharT, _Traits>& __in, bool __noskip) : _M_ok(false)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      if (__in.good())
	{
	  if (__in.tie())
	    __in.tie()->flush();
	  if (!__noskip && bool(__in.flags() & ios_base::skipws))
	    {
	      const __int_type __eof = traits_type::eof();
	      __streambuf_type* __sb = __in.rdbuf();
	      __int_type __c = __sb->sgetc();

	      const __ctype_type& __ct = __check_facet(__in._M_ctype);
	      while (!traits_type::eq_int_type(__c, __eof)
		     && __ct.is(ctype_base::space, 
				traits_type::to_char_type(__c)))
		__c = __sb->snextc();

	      
	      
	      
	      if (traits_type::eq_int_type(__c, __eof))
		__err |= ios_base::eofbit;
	    }
	}

      if (__in.good() && __err == ios_base::goodbit)
	_M_ok = true;
      else
	{
	  __err |= ios_base::failbit;
	  __in.setstate(__err);
	}
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_istream<_CharT, _Traits>&
      basic_istream<_CharT, _Traits>::
      _M_extract(_ValueT& __v)
      {
	sentry __cerb(*this, false);
	if (__cerb)
	  {
	    ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
	    try
	      {
		const __num_get_type& __ng = __check_facet(this->_M_num_get);
		__ng.get(*this, 0, *this, __err, __v);
	      }
	    catch(__cxxabiv1::__forced_unwind&)
	      {
		this->_M_setstate(ios_base::badbit);		
		throw;
	      }
	    catch(...)
	      { this->_M_setstate(ios_base::badbit); }
	    if (__err)
	      this->setstate(__err);
	  }
	return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(short& __n)
    {
      
      
      long __l;
      _M_extract(__l);
      if (!this->fail())
	{
	  if (__gnu_cxx::__numeric_traits<short>::__min <= __l
	      && __l <= __gnu_cxx::__numeric_traits<short>::__max)
	    __n = short(__l);
	  else
	    this->setstate(ios_base::failbit);
	}
      return *this;
    }
    
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(int& __n)
    {
      
      
      long __l;
      _M_extract(__l);
      if (!this->fail())
	{
	  if (__gnu_cxx::__numeric_traits<int>::__min <= __l
	      && __l <= __gnu_cxx::__numeric_traits<int>::__max)
	    __n = int(__l);
	  else
	    this->setstate(ios_base::failbit);
	}
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(__streambuf_type* __sbout)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, false);
      if (__cerb && __sbout)
	{
	  try
	    {
	      bool __ineof;
	      if (!__copy_streambufs_eof(this->rdbuf(), __sbout, __ineof))
		__err |= ios_base::failbit;
	      if (__ineof)
		__err |= ios_base::eofbit;
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::failbit);
	      throw;
	    }
	  catch(...)
	    { this->_M_setstate(ios_base::failbit); }
	}
      else if (!__sbout)
	__err |= ios_base::failbit;
      if (__err)
	this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    get(void)
    {
      const int_type __eof = traits_type::eof();
      int_type __c = __eof;
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
	{
	  try
	    {
	      __c = this->rdbuf()->sbumpc();
	      
	      if (!traits_type::eq_int_type(__c, __eof))
		_M_gcount = 1;
	      else
		__err |= ios_base::eofbit;
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    { this->_M_setstate(ios_base::badbit); }
	}
      if (!_M_gcount)
	__err |= ios_base::failbit;
      if (__err)
	this->setstate(__err);
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type& __c)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
	{
	  try
	    {
	      const int_type __cb = this->rdbuf()->sbumpc();
	      
	      if (!traits_type::eq_int_type(__cb, traits_type::eof()))
		{
		  _M_gcount = 1;
		  __c = traits_type::to_char_type(__cb);
		}
	      else
		__err |= ios_base::eofbit;
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    { this->_M_setstate(ios_base::badbit); }
	}
      if (!_M_gcount)
	__err |= ios_base::failbit;
      if (__err)
	this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
	{
	  try
	    {
	      const int_type __idelim = traits_type::to_int_type(__delim);
	      const int_type __eof = traits_type::eof();
	      __streambuf_type* __sb = this->rdbuf();
	      int_type __c = __sb->sgetc();

	      while (_M_gcount + 1 < __n
		     && !traits_type::eq_int_type(__c, __eof)
		     && !traits_type::eq_int_type(__c, __idelim))
		{
		  *__s++ = traits_type::to_char_type(__c);
		  ++_M_gcount;
		  __c = __sb->snextc();
		}
	      if (traits_type::eq_int_type(__c, __eof))
		__err |= ios_base::eofbit;
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    { this->_M_setstate(ios_base::badbit); }
	}
      
      
      if (__n > 0)
	*__s = char_type();
      if (!_M_gcount)
	__err |= ios_base::failbit;
      if (__err)
	this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(__streambuf_type& __sb, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
	{
	  try
	    {
	      const int_type __idelim = traits_type::to_int_type(__delim);
	      const int_type __eof = traits_type::eof();
	      __streambuf_type* __this_sb = this->rdbuf();
	      int_type __c = __this_sb->sgetc();
	      char_type __c2 = traits_type::to_char_type(__c);

	      while (!traits_type::eq_int_type(__c, __eof)
		     && !traits_type::eq_int_type(__c, __idelim)
		     && !traits_type::eq_int_type(__sb.sputc(__c2), __eof))
		{
		  ++_M_gcount;
		  __c = __this_sb->snextc();
		  __c2 = traits_type::to_char_type(__c);
		}
	      if (traits_type::eq_int_type(__c, __eof))
		__err |= ios_base::eofbit;
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    { this->_M_setstate(ios_base::badbit); }
	}
      if (!_M_gcount)
	__err |= ios_base::failbit;
      if (__err)
	this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    getline(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
        {
          try
            {
              const int_type __idelim = traits_type::to_int_type(__delim);
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();

              while (_M_gcount + 1 < __n
                     && !traits_type::eq_int_type(__c, __eof)
                     && !traits_type::eq_int_type(__c, __idelim))
                {
                  *__s++ = traits_type::to_char_type(__c);
                  __c = __sb->snextc();
                  ++_M_gcount;
                }
              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
              else
                {
                  if (traits_type::eq_int_type(__c, __idelim))
                    {
                      __sb->sbumpc();
                      ++_M_gcount;
                    }
                  else
                    __err |= ios_base::failbit;
                }
            }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);
	      throw;
	    }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
        }
      
      
      if (__n > 0)
	*__s = char_type();
      if (!_M_gcount)
        __err |= ios_base::failbit;
      if (__err)
        this->setstate(__err);
      return *this;
    }

  
  
  
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(void)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
	{
	  ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
	  try
	    {
	      const int_type __eof = traits_type::eof();
	      __streambuf_type* __sb = this->rdbuf();

	      if (traits_type::eq_int_type(__sb->sbumpc(), __eof))
		__err |= ios_base::eofbit;
	      else
		_M_gcount = 1;
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    { this->_M_setstate(ios_base::badbit); }
	  if (__err)
	    this->setstate(__err);
	}
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
          try
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();

	      
	      
	      
	      
	      
	      
	      
	      bool __large_ignore = false;
	      while (true)
		{
		  while (_M_gcount < __n
			 && !traits_type::eq_int_type(__c, __eof))
		    {
		      ++_M_gcount;
		      __c = __sb->snextc();
		    }
		  if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
		      && !traits_type::eq_int_type(__c, __eof))
		    {
		      _M_gcount =
			__gnu_cxx::__numeric_traits<streamsize>::__min;
		      __large_ignore = true;
		    }
		  else
		    break;
		}

	      if (__large_ignore)
		_M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

	      if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
            }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);
	      throw;
	    }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n, int_type __delim)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
          try
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();

	      
	      bool __large_ignore = false;
	      while (true)
		{
		  while (_M_gcount < __n
			 && !traits_type::eq_int_type(__c, __eof)
			 && !traits_type::eq_int_type(__c, __delim))
		    {
		      ++_M_gcount;
		      __c = __sb->snextc();
		    }
		  if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
		      && !traits_type::eq_int_type(__c, __eof)
		      && !traits_type::eq_int_type(__c, __delim))
		    {
		      _M_gcount =
			__gnu_cxx::__numeric_traits<streamsize>::__min;
		      __large_ignore = true;
		    }
		  else
		    break;
		}

	      if (__large_ignore)
		_M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
	      else if (traits_type::eq_int_type(__c, __delim))
		{
		  if (_M_gcount
		      < __gnu_cxx::__numeric_traits<streamsize>::__max)
		    ++_M_gcount;
		  __sb->sbumpc();
		}
            }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);
	      throw;
	    }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    peek(void)
    {
      int_type __c = traits_type::eof();
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
	{
	  ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
	  try
	    {
	      __c = this->rdbuf()->sgetc();
	      if (traits_type::eq_int_type(__c, traits_type::eof()))
		__err |= ios_base::eofbit;
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    { this->_M_setstate(ios_base::badbit); }
	  if (__err)
	    this->setstate(__err);
	}
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    read(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
	{
	  ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
	  try
	    {
	      _M_gcount = this->rdbuf()->sgetn(__s, __n);
	      if (_M_gcount != __n)
		__err |= (ios_base::eofbit | ios_base::failbit);
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    { this->_M_setstate(ios_base::badbit); }
	  if (__err)
	    this->setstate(__err);
	}
      return *this;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_istream<_CharT, _Traits>::
    readsome(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
	{
	  ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
	  try
	    {
	      
	      const streamsize __num = this->rdbuf()->in_avail();
	      if (__num > 0)
		_M_gcount = this->rdbuf()->sgetn(__s, std::min(__num, __n));
	      else if (__num == -1)
		__err |= ios_base::eofbit;
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    { this->_M_setstate(ios_base::badbit); }
	  if (__err)
	    this->setstate(__err);
	}
      return _M_gcount;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    putback(char_type __c)
    {
      
      
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
	{
	  ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
	  try
	    {
	      const int_type __eof = traits_type::eof();
	      __streambuf_type* __sb = this->rdbuf();
	      if (!__sb
		  || traits_type::eq_int_type(__sb->sputbackc(__c), __eof))
		__err |= ios_base::badbit;
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    { this->_M_setstate(ios_base::badbit); }
	  if (__err)
	    this->setstate(__err);
	}
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    unget(void)
    {
      
      
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
	{
	  ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
	  try
	    {
	      const int_type __eof = traits_type::eof();
	      __streambuf_type* __sb = this->rdbuf();
	      if (!__sb
		  || traits_type::eq_int_type(__sb->sungetc(), __eof))
		__err |= ios_base::badbit;
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    { this->_M_setstate(ios_base::badbit); }
	  if (__err)
	    this->setstate(__err);
	}
      return *this;
    }

  template<typename _CharT, typename _Traits>
    int
    basic_istream<_CharT, _Traits>::
    sync(void)
    {
      
      
      int __ret = -1;
      sentry __cerb(*this, true);
      if (__cerb)
	{
	  ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
	  try
	    {
	      __streambuf_type* __sb = this->rdbuf();
	      if (__sb)
		{
		  if (__sb->pubsync() == -1)
		    __err |= ios_base::badbit;
		  else
		    __ret = 0;
		}
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      this->_M_setstate(ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    { this->_M_setstate(ios_base::badbit); }
	  if (__err)
	    this->setstate(__err);
	}
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::pos_type
    basic_istream<_CharT, _Traits>::
    tellg(void)
    {
      
      
      pos_type __ret = pos_type(-1);
      try
	{
	  if (!this->fail())
	    __ret = this->rdbuf()->pubseekoff(0, ios_base::cur,
					      ios_base::in);
	}
      catch(__cxxabiv1::__forced_unwind&)
	{
	  this->_M_setstate(ios_base::badbit);
	  throw;
	}
      catch(...)
	{ this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(pos_type __pos)
    {
      
      
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
	{
	  if (!this->fail())
	    {
	      
	      const pos_type __p = this->rdbuf()->pubseekpos(__pos,
							     ios_base::in);
	      
	      
	      if (__p == pos_type(off_type(-1)))
		__err |= ios_base::failbit;
	    }
	}
      catch(__cxxabiv1::__forced_unwind&)
	{
	  this->_M_setstate(ios_base::badbit);
	  throw;
	}
      catch(...)
	{ this->_M_setstate(ios_base::badbit); }
      if (__err)
	this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(off_type __off, ios_base::seekdir __dir)
    {
      
      
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
	{
	  if (!this->fail())
	    {
	      
	      const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
							     ios_base::in);
	      
	      
	      if (__p == pos_type(off_type(-1)))
		__err |= ios_base::failbit;
	    }
	}
      catch(__cxxabiv1::__forced_unwind&)
	{
	  this->_M_setstate(ios_base::badbit);
	  throw;
	}
      catch(...)
	{ this->_M_setstate(ios_base::badbit); }
      if (__err)
	this->setstate(__err);
      return *this;
    }

  
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
    {
      typedef basic_istream<_CharT, _Traits>		__istream_type;
      typedef typename __istream_type::int_type         __int_type;

      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
	{
	  ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
	  try
	    {
	      const __int_type __cb = __in.rdbuf()->sbumpc();
	      if (!_Traits::eq_int_type(__cb, _Traits::eof()))
		__c = _Traits::to_char_type(__cb);
	      else
		__err |= (ios_base::eofbit | ios_base::failbit);
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      __in._M_setstate(ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    { __in._M_setstate(ios_base::badbit); }
	  if (__err)
	    __in.setstate(__err);
	}
      return __in;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
    {
      typedef basic_istream<_CharT, _Traits>		__istream_type;
      typedef basic_streambuf<_CharT, _Traits>          __streambuf_type;
      typedef typename _Traits::int_type		int_type;
      typedef _CharT					char_type;
      typedef ctype<_CharT>				__ctype_type;

      streamsize __extracted = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
	{
	  try
	    {
	      
	      streamsize __num = __in.width();
	      if (__num <= 0)
		__num = __gnu_cxx::__numeric_traits<streamsize>::__max;

	      const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());

	      const int_type __eof = _Traits::eof();
	      __streambuf_type* __sb = __in.rdbuf();
	      int_type __c = __sb->sgetc();

	      while (__extracted < __num - 1
		     && !_Traits::eq_int_type(__c, __eof)
		     && !__ct.is(ctype_base::space,
				 _Traits::to_char_type(__c)))
		{
		  *__s++ = _Traits::to_char_type(__c);
		  ++__extracted;
		  __c = __sb->snextc();
		}
	      if (_Traits::eq_int_type(__c, __eof))
		__err |= ios_base::eofbit;

	      
	      
	      *__s = char_type();
	      __in.width(0);
	    }
	  catch(__cxxabiv1::__forced_unwind&)
	    {
	      __in._M_setstate(ios_base::badbit);
	      throw;
	    }
	  catch(...)
	    { __in._M_setstate(ios_base::badbit); }
	}
      if (!__extracted)
	__err |= ios_base::failbit;
      if (__err)
	__in.setstate(__err);
      return __in;
    }

  
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __in)
    {
      typedef basic_istream<_CharT, _Traits>		__istream_type;
      typedef basic_streambuf<_CharT, _Traits>          __streambuf_type;
      typedef typename __istream_type::int_type		__int_type;
      typedef ctype<_CharT>				__ctype_type;

      const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
      const __int_type __eof = _Traits::eof();
      __streambuf_type* __sb = __in.rdbuf();
      __int_type __c = __sb->sgetc();

      while (!_Traits::eq_int_type(__c, __eof)
	     && __ct.is(ctype_base::space, _Traits::to_char_type(__c)))
	__c = __sb->snextc();

       if (_Traits::eq_int_type(__c, __eof))
	 __in.setstate(ios_base::eofbit);
      return __in;
    }

  
  
  
  extern template class basic_istream<char>;
  extern template istream& ws(istream&);
  extern template istream& operator>>(istream&, char&);
  extern template istream& operator>>(istream&, char*);
  extern template istream& operator>>(istream&, unsigned char&);
  extern template istream& operator>>(istream&, signed char&);
  extern template istream& operator>>(istream&, unsigned char*);
  extern template istream& operator>>(istream&, signed char*);

  extern template istream& istream::_M_extract(unsigned short&);
  extern template istream& istream::_M_extract(unsigned int&);  
  extern template istream& istream::_M_extract(long&);
  extern template istream& istream::_M_extract(unsigned long&);
  extern template istream& istream::_M_extract(bool&);
  extern template istream& istream::_M_extract(long long&);
  extern template istream& istream::_M_extract(unsigned long long&);
  extern template istream& istream::_M_extract(float&);
  extern template istream& istream::_M_extract(double&);
  extern template istream& istream::_M_extract(long double&);
  extern template istream& istream::_M_extract(void*&);

  extern template class basic_iostream<char>;

  extern template class basic_istream<wchar_t>;
  extern template wistream& ws(wistream&);
  extern template wistream& operator>>(wistream&, wchar_t&);
  extern template wistream& operator>>(wistream&, wchar_t*);

  extern template wistream& wistream::_M_extract(unsigned short&);
  extern template wistream& wistream::_M_extract(unsigned int&);  
  extern template wistream& wistream::_M_extract(long&);
  extern template wistream& wistream::_M_extract(unsigned long&);
  extern template wistream& wistream::_M_extract(bool&);
  extern template wistream& wistream::_M_extract(long long&);
  extern template wistream& wistream::_M_extract(unsigned long long&);
  extern template wistream& wistream::_M_extract(float&);
  extern template wistream& wistream::_M_extract(double&);
  extern template wistream& wistream::_M_extract(long double&);
  extern template wistream& wistream::_M_extract(void*&);

  extern template class basic_iostream<wchar_t>;

}



namespace std __attribute__ ((__visibility__ ("default"))) {

  










 
  
  extern istream cin;		
  extern ostream cout;		
  extern ostream cerr;		
  extern ostream clog;		

  extern wistream wcin;		
  extern wostream wcout;	
  extern wostream wcerr;	
  extern wostream wclog;	
  

  
  static ios_base::Init __ioinit;

}

















namespace boost
{

namespace detail
{

inline void current_function_helper()
{




}

} 

} 



    
    

    namespace boost
    { 
      namespace assertion 
      { 
        namespace detail
        {
          inline void assertion_failed_msg(char const * expr, char const * msg, char const * function,
            char const * file, long line)
          {
            std::cerr
              << "***** Internal Program Error - assertion (" << expr << ") failed in "
              << function << ":\n"
              << file << '(' << line << "): " << msg << std::endl;
				std::abort();
          }
        } 
      } 
    } 



























namespace boost
{



template<class T> inline void checked_delete(T * x)
{
    
    typedef char type_must_be_complete[ sizeof(T)? 1: -1 ];
    (void) sizeof(type_must_be_complete);
    delete x;
}

template<class T> inline void checked_array_delete(T * x)
{
    typedef char type_must_be_complete[ sizeof(T)? 1: -1 ];
    (void) sizeof(type_must_be_complete);
    delete [] x;
}

template<class T> struct checked_deleter
{
    typedef void result_type;
    typedef T * argument_type;

    void operator()(T * x) const
    {
        
        boost::checked_delete(x);
    }
};

template<class T> struct checked_array_deleter
{
    typedef void result_type;
    typedef T * argument_type;

    void operator()(T * x) const
    {
        boost::checked_array_delete(x);
    }
};

} 
































































































namespace
boost
    {
    namespace
    exception_detail
        {
        template <class T>
        class
        refcount_ptr
            {
            public:

            refcount_ptr():
                px_(0)
                {
                }

            ~refcount_ptr()
                {
                release();
                }

            refcount_ptr( refcount_ptr const & x ):
                px_(x.px_)
                {
                add_ref();
                }

            refcount_ptr &
            operator=( refcount_ptr const & x )
                {
                adopt(x.px_);
                return *this;
                }

            void
            adopt( T * px )
                {
                release();
                px_=px;
                add_ref();
                }

            T *
            get() const
                {
                return px_;
                }

            private:

            T * px_;

            void
            add_ref()
                {
                if( px_ )
                    px_->add_ref();
                }

            void
            release()
                {
                if( px_ && px_->release() )
                    px_=0;
                }
            };
        }

    

    template <class Tag,class T>
    class error_info;

    typedef error_info<struct throw_function_,char const *> throw_function;
    typedef error_info<struct throw_file_,char const *> throw_file;
    typedef error_info<struct throw_line_,int> throw_line;

    template <>
    class
    error_info<throw_function_,char const *>
        {
        public:
        typedef char const * value_type;
        value_type v_;
        explicit
        error_info( value_type v ):
            v_(v)
            {
            }
        };

    template <>
    class
    error_info<throw_file_,char const *>
        {
        public:
        typedef char const * value_type;
        value_type v_;
        explicit
        error_info( value_type v ):
            v_(v)
            {
            }
        };

    template <>
    class
    error_info<throw_line_,int>
        {
        public:
        typedef int value_type;
        value_type v_;
        explicit
        error_info( value_type v ):
            v_(v)
            {
            }
        };

#  pragma GCC visibility push (default)
    class exception;
#  pragma GCC visibility pop

    template <class T>
    class shared_ptr;

    namespace
    exception_detail
        {
        class error_info_base;
        struct type_info_;

        struct
        error_info_container
            {
            virtual char const * diagnostic_information( char const * ) const = 0;
            virtual shared_ptr<error_info_base> get( type_info_ const & ) const = 0;
            virtual void set( shared_ptr<error_info_base> const &, type_info_ const & ) = 0;
            virtual void add_ref() const = 0;
            virtual bool release() const = 0;
            virtual refcount_ptr<exception_detail::error_info_container> clone() const = 0;

            protected:

            ~error_info_container() throw()
                {
                }
            };

        template <class>
        struct get_info;

        template <>
        struct get_info<throw_function>;

        template <>
        struct get_info<throw_file>;

        template <>
        struct get_info<throw_line>;

        char const * get_diagnostic_information( exception const &, char const * );

        void copy_boost_exception( exception *, exception const * );

        template <class E,class Tag,class T>
        E const & set_info( E const &, error_info<Tag,T> const & );

        template <class E>
        E const & set_info( E const &, throw_function const & );

        template <class E>
        E const & set_info( E const &, throw_file const & );

        template <class E>
        E const & set_info( E const &, throw_line const & );
        }

#  pragma GCC visibility push (default)
    class
    exception
        {
        protected:

        exception():
            throw_function_(0),
            throw_file_(0),
            throw_line_(-1)
            {
            }


        virtual ~exception() throw()
            = 0 
            ;

        private:

        template <class E>
        friend E const & exception_detail::set_info( E const &, throw_function const & );

        template <class E>
        friend E const & exception_detail::set_info( E const &, throw_file const & );

        template <class E>
        friend E const & exception_detail::set_info( E const &, throw_line const & );

        template <class E,class Tag,class T>
        friend E const & exception_detail::set_info( E const &, error_info<Tag,T> const & );

        friend char const * exception_detail::get_diagnostic_information( exception const &, char const * );

        template <class>
        friend struct exception_detail::get_info;
        friend struct exception_detail::get_info<throw_function>;
        friend struct exception_detail::get_info<throw_file>;
        friend struct exception_detail::get_info<throw_line>;
        friend void exception_detail::copy_boost_exception( exception *, exception const * );
        mutable exception_detail::refcount_ptr<exception_detail::error_info_container> data_;
        mutable char const * throw_function_;
        mutable char const * throw_file_;
        mutable int throw_line_;
        };
#  pragma GCC visibility pop

    inline
    exception::
    ~exception() throw()
        {
        }

    namespace
    exception_detail
        {
        template <class E>
        E const &
        set_info( E const & x, throw_function const & y )
            {
            x.throw_function_=y.v_;
            return x;
            }

        template <class E>
        E const &
        set_info( E const & x, throw_file const & y )
            {
            x.throw_file_=y.v_;
            return x;
            }

        template <class E>
        E const &
        set_info( E const & x, throw_line const & y )
            {
            x.throw_line_=y.v_;
            return x;
            }
        }

    

    namespace
    exception_detail
        {
#  pragma GCC visibility push (default)
        template <class T>
        struct
        error_info_injector:
            public T,
            public exception
            {
            explicit
            error_info_injector( T const & x ):
                T(x)
                {
                }

            ~error_info_injector() throw()
                {
                }
            };
#  pragma GCC visibility pop

        struct large_size { char c[256]; };
        large_size dispatch_boost_exception( exception const * );

        struct small_size { };
        small_size dispatch_boost_exception( void const * );

        template <class,int>
        struct enable_error_info_helper;

        template <class T>
        struct
        enable_error_info_helper<T,sizeof(large_size)>
            {
            typedef T type;
            };

        template <class T>
        struct
        enable_error_info_helper<T,sizeof(small_size)>
            {
            typedef error_info_injector<T> type;
            };

        template <class T>
        struct
        enable_error_info_return_type
            {
            typedef typename enable_error_info_helper<T,sizeof(exception_detail::dispatch_boost_exception(static_cast<T *>(0)))>::type type;
            };
        }

    template <class T>
    inline
    typename
    exception_detail::enable_error_info_return_type<T>::type
    enable_error_info( T const & x )
        {
        typedef typename exception_detail::enable_error_info_return_type<T>::type rt;
        return rt(x);
        }

    

    namespace
    exception_detail
        {
#  pragma GCC visibility push (default)
        class
        clone_base
            {
            public:

            virtual clone_base const * clone() const = 0;
            virtual void rethrow() const = 0;

            virtual
            ~clone_base() throw()
                {
                }
            };
#  pragma GCC visibility pop

        inline
        void
        copy_boost_exception( exception * a, exception const * b )
            {
            refcount_ptr<error_info_container> data;
            if( error_info_container * d=b->data_.get() )
                data = d->clone();
            a->throw_file_ = b->throw_file_;
            a->throw_line_ = b->throw_line_;
            a->throw_function_ = b->throw_function_;
            a->data_ = data;
            }

        inline
        void
        copy_boost_exception( void *, void const * )
            {
            }

        template <class T>
        class
        clone_impl:
            public T,
            public virtual clone_base
            {
            struct clone_tag { };
            clone_impl( clone_impl const & x, clone_tag ):
                T(x)
                {
                copy_boost_exception(this,&x);
                }

            public:

            explicit
            clone_impl( T const & x ):
                T(x)
                {
                copy_boost_exception(this,&x);
                }

            ~clone_impl() throw()
                {
                }

            private:

            clone_base const *
            clone() const
                {
                return new clone_impl(*this,clone_tag());
                }

            void
            rethrow() const
                {
                throw*this;
                }
            };
        }

    template <class T>
    inline
    exception_detail::clone_impl<T>
    enable_current_exception( T const & x )
        {
        return exception_detail::clone_impl<T>(x);
        }
    }


namespace boost
{

inline void throw_exception_assert_compatibility( std::exception const & ) { }

template<class E> __attribute__((__noreturn__)) inline void throw_exception( E const & e )
{
    
    
    throw_exception_assert_compatibility(e);

    throw enable_current_exception(enable_error_info(e));
}


    namespace
    exception_detail
    {
        template <class E>
        __attribute__((__noreturn__))
        void
        throw_exception_( E const & x, char const * current_function, char const * file, int line )
        {
            boost::throw_exception(
                set_info(
                    set_info(
                        set_info(
                            enable_error_info(x),
                            throw_function(current_function)),
                        throw_file(file)),
                    throw_line(line)));
        }
    }
} 

































namespace boost
{








class bad_weak_ptr: public std::exception
{
public:

    virtual char const * what() const throw()
    {
        return "tr1::bad_weak_ptr";
    }
};


} 











































































namespace boost
{

namespace detail
{


typedef std::type_info sp_typeinfo;


} 

} 




namespace boost
{

namespace detail
{

inline int atomic_exchange_and_add( int * pw, int dv )
{
    
    
    

    int r;

    __asm__ __volatile__
    (
        "lock\n\t"
        "xadd %1, %0":
        "=m"( *pw ), "=r"( r ): 
        "m"( *pw ), "1"( dv ): 
        "memory", "cc" 
    );

    return r;
}

inline void atomic_increment( int * pw )
{
    

    __asm__
    (
        "lock\n\t"
        "incl %0":
        "=m"( *pw ): 
        "m"( *pw ): 
        "cc" 
    );
}

inline int atomic_conditional_increment( int * pw )
{
    
    
    

    int rv, tmp;

    __asm__
    (
        "movl %0, %%eax\n\t"
        "0:\n\t"
        "test %%eax, %%eax\n\t"
        "je 1f\n\t"
        "movl %%eax, %2\n\t"
        "incl %2\n\t"
        "lock\n\t"
        "cmpxchgl %2, %0\n\t"
        "jne 0b\n\t"
        "1:":
        "=m"( *pw ), "=&a"( rv ), "=&r"( tmp ): 
        "m"( *pw ): 
        "cc" 
    );

    return rv;
}

class sp_counted_base
{
private:

    sp_counted_base( sp_counted_base const & );
    sp_counted_base & operator= ( sp_counted_base const & );

    int use_count_;        
    int weak_count_;       

public:

    sp_counted_base(): use_count_( 1 ), weak_count_( 1 )
    {
    }

    virtual ~sp_counted_base() 
    {
    }

    
    

    virtual void dispose() = 0; 

    

    virtual void destroy() 
    {
        delete this;
    }

    virtual void * get_deleter( sp_typeinfo const & ti ) = 0;
    virtual void * get_untyped_deleter() = 0;

    void add_ref_copy()
    {
        atomic_increment( &use_count_ );
    }

    bool add_ref_lock() 
    {
        return atomic_conditional_increment( &use_count_ ) != 0;
    }

    void release() 
    {
        if( atomic_exchange_and_add( &use_count_, -1 ) == 1 )
        {
            dispose();
            weak_release();
        }
    }

    void weak_add_ref() 
    {
        atomic_increment( &weak_count_ );
    }

    void weak_release() 
    {
        if( atomic_exchange_and_add( &weak_count_, -1 ) == 1 )
        {
            destroy();
        }
    }

    long use_count() const 
    {
        return static_cast<int const volatile &>( use_count_ );
    }
};

} 

} 

























































 




























 



 


namespace boost
{


namespace detail
{

template<class X> class sp_counted_impl_p: public sp_counted_base
{
private:

    X * px_;

    sp_counted_impl_p( sp_counted_impl_p const & );
    sp_counted_impl_p & operator= ( sp_counted_impl_p const & );

    typedef sp_counted_impl_p<X> this_type;

public:

    explicit sp_counted_impl_p( X * px ): px_( px )
    {
    }

    virtual void dispose() 
    {
        boost::checked_delete( px_ );
    }

    virtual void * get_deleter( detail::sp_typeinfo const & )
    {
        return 0;
    }

    virtual void * get_untyped_deleter()
    {
        return 0;
    }


};





template<class P, class D> class sp_counted_impl_pd: public sp_counted_base
{
private:

    P ptr; 
    D del; 

    sp_counted_impl_pd( sp_counted_impl_pd const & );
    sp_counted_impl_pd & operator= ( sp_counted_impl_pd const & );

    typedef sp_counted_impl_pd<P, D> this_type;

public:

    

    sp_counted_impl_pd( P p, D & d ): ptr( p ), del( d )
    {
    }

    sp_counted_impl_pd( P p ): ptr( p ), del()
    {
    }

    virtual void dispose() 
    {
        del( ptr );
    }

    virtual void * get_deleter( detail::sp_typeinfo const & ti )
    {
        return ti == typeid(D)? &reinterpret_cast<char&>( del ): 0;
    }

    virtual void * get_untyped_deleter()
    {
        return &reinterpret_cast<char&>( del );
    }


};

template<class P, class D, class A> class sp_counted_impl_pda: public sp_counted_base
{
private:

    P p_; 
    D d_; 
    A a_; 

    sp_counted_impl_pda( sp_counted_impl_pda const & );
    sp_counted_impl_pda & operator= ( sp_counted_impl_pda const & );

    typedef sp_counted_impl_pda<P, D, A> this_type;

public:

    

    sp_counted_impl_pda( P p, D & d, A a ): p_( p ), d_( d ), a_( a )
    {
    }

    sp_counted_impl_pda( P p, A a ): p_( p ), d_(), a_( a )
    {
    }

    virtual void dispose() 
    {
        d_( p_ );
    }

    virtual void destroy() 
    {
        typedef typename A::template rebind< this_type >::other A2;

        A2 a2( a_ );

        this->~this_type();
        a2.deallocate( this, 1 );
    }

    virtual void * get_deleter( detail::sp_typeinfo const & ti )
    {
        return ti == typeid(D)? &reinterpret_cast<char&>( d_ ): 0;
    }

    virtual void * get_untyped_deleter()
    {
        return &reinterpret_cast<char&>( d_ );
    }
};


} 

} 




















namespace boost
{

namespace detail
{

template<class T> struct addr_impl_ref
{
    T & v_;

    inline addr_impl_ref( T & v ): v_( v ) {}
    inline operator T& () const { return v_; }

private:
    addr_impl_ref & operator=(const addr_impl_ref &);
};

template<class T> struct addressof_impl
{
    static inline T * f( T & v, long )
    {
        return reinterpret_cast<T*>(
            &const_cast<char&>(reinterpret_cast<const volatile char &>(v)));
    }

    static inline T * f( T * v, int )
    {
        return v;
    }
};

} 

template<class T> T * addressof( T & v )
{

    return boost::detail::addressof_impl<T>::f( boost::detail::addr_impl_ref<T>( v ), 0 );

}





} 


namespace boost
{

namespace detail
{


struct sp_nothrow_tag {};

template< class D > struct sp_inplace_tag
{
};


template< class T > class sp_reference_wrapper
{ 
public:

    explicit sp_reference_wrapper( T & t): t_( boost::addressof( t ) )
    {
    }

    template< class Y > void operator()( Y * p ) const
    {
        (*t_)( p );
    }

private:

    T * t_;
};

template< class D > struct sp_convert_reference
{
    typedef D type;
};

template< class D > struct sp_convert_reference< D& >
{
    typedef sp_reference_wrapper< D > type;
};


class weak_count;

class shared_count
{
private:

    sp_counted_base * pi_;


    friend class weak_count;

public:

    shared_count(): pi_(0) 
    {
    }

    template<class Y> explicit shared_count( Y * p ): pi_( 0 )
    {

        try
        {
            pi_ = new sp_counted_impl_p<Y>( p );
        }
        catch(...)
        {
            boost::checked_delete( p );
            throw;
        }

    }

    template<class P, class D> shared_count( P p, D d ): pi_(0)
    {

        try
        {
            pi_ = new sp_counted_impl_pd<P, D>(p, d);
        }
        catch(...)
        {
            d(p); 
            throw;
        }

    }


    template< class P, class D > shared_count( P p, sp_inplace_tag<D> ): pi_( 0 )
    {

        try
        {
            pi_ = new sp_counted_impl_pd< P, D >( p );
        }
        catch( ... )
        {
            D::operator_fn( p ); 
            throw;
        }

    }


    template<class P, class D, class A> shared_count( P p, D d, A a ): pi_( 0 )
    {
        typedef sp_counted_impl_pda<P, D, A> impl_type;
        typedef typename A::template rebind< impl_type >::other A2;

        A2 a2( a );


        try
        {
            pi_ = a2.allocate( 1, static_cast< impl_type* >( 0 ) );
            new( static_cast< void* >( pi_ ) ) impl_type( p, d, a );
        }
        catch(...)
        {
            d( p );

            if( pi_ != 0 )
            {
                a2.deallocate( static_cast< impl_type* >( pi_ ), 1 );
            }

            throw;
        }

    }


    template< class P, class D, class A > shared_count( P p, sp_inplace_tag< D >, A a ): pi_( 0 )
    {
        typedef sp_counted_impl_pda< P, D, A > impl_type;
        typedef typename A::template rebind< impl_type >::other A2;

        A2 a2( a );


        try
        {
            pi_ = a2.allocate( 1, static_cast< impl_type* >( 0 ) );
            new( static_cast< void* >( pi_ ) ) impl_type( p, a );
        }
        catch(...)
        {
            D::operator_fn( p );

            if( pi_ != 0 )
            {
                a2.deallocate( static_cast< impl_type* >( pi_ ), 1 );
            }

            throw;
        }

    }



    

    template<class Y>
    explicit shared_count( std::auto_ptr<Y> & r ): pi_( new sp_counted_impl_p<Y>( r.get() ) )
    {

        r.release();
    }



    template<class Y, class D>
    explicit shared_count( std::unique_ptr<Y, D> & r ): pi_( 0 )
    {
        typedef typename sp_convert_reference<D>::type D2;

        D2 d2( r.get_deleter() );
        pi_ = new sp_counted_impl_pd< typename std::unique_ptr<Y, D>::pointer, D2 >( r.get(), d2 );


        r.release();
    }


    ~shared_count() 
    {
        if( pi_ != 0 ) pi_->release();
    }

    shared_count(shared_count const & r): pi_(r.pi_) 
    {
        if( pi_ != 0 ) pi_->add_ref_copy();
    }


    explicit shared_count(weak_count const & r); 
    shared_count( weak_count const & r, sp_nothrow_tag ); 

    shared_count & operator= (shared_count const & r) 
    {
        sp_counted_base * tmp = r.pi_;

        if( tmp != pi_ )
        {
            if( tmp != 0 ) tmp->add_ref_copy();
            if( pi_ != 0 ) pi_->release();
            pi_ = tmp;
        }

        return *this;
    }

    void swap(shared_count & r) 
    {
        sp_counted_base * tmp = r.pi_;
        r.pi_ = pi_;
        pi_ = tmp;
    }

    long use_count() const 
    {
        return pi_ != 0? pi_->use_count(): 0;
    }

    bool unique() const 
    {
        return use_count() == 1;
    }

    bool empty() const 
    {
        return pi_ == 0;
    }

    friend inline bool operator==(shared_count const & a, shared_count const & b)
    {
        return a.pi_ == b.pi_;
    }

    friend inline bool operator<(shared_count const & a, shared_count const & b)
    {
        return std::less<sp_counted_base *>()( a.pi_, b.pi_ );
    }

    void * get_deleter( sp_typeinfo const & ti ) const
    {
        return pi_? pi_->get_deleter( ti ): 0;
    }

    void * get_untyped_deleter() const
    {
        return pi_? pi_->get_untyped_deleter(): 0;
    }
};


class weak_count
{
private:

    sp_counted_base * pi_;


    friend class shared_count;

public:

    weak_count(): pi_(0) 
    {
    }

    weak_count(shared_count const & r): pi_(r.pi_) 
    {
        if(pi_ != 0) pi_->weak_add_ref();
    }

    weak_count(weak_count const & r): pi_(r.pi_) 
    {
        if(pi_ != 0) pi_->weak_add_ref();
    }




    ~weak_count() 
    {
        if(pi_ != 0) pi_->weak_release();
    }

    weak_count & operator= (shared_count const & r) 
    {
        sp_counted_base * tmp = r.pi_;

        if( tmp != pi_ )
        {
            if(tmp != 0) tmp->weak_add_ref();
            if(pi_ != 0) pi_->weak_release();
            pi_ = tmp;
        }

        return *this;
    }

    weak_count & operator= (weak_count const & r) 
    {
        sp_counted_base * tmp = r.pi_;

        if( tmp != pi_ )
        {
            if(tmp != 0) tmp->weak_add_ref();
            if(pi_ != 0) pi_->weak_release();
            pi_ = tmp;
        }

        return *this;
    }

    void swap(weak_count & r) 
    {
        sp_counted_base * tmp = r.pi_;
        r.pi_ = pi_;
        pi_ = tmp;
    }

    long use_count() const 
    {
        return pi_ != 0? pi_->use_count(): 0;
    }

    bool empty() const 
    {
        return pi_ == 0;
    }

    friend inline bool operator==(weak_count const & a, weak_count const & b)
    {
        return a.pi_ == b.pi_;
    }

    friend inline bool operator<(weak_count const & a, weak_count const & b)
    {
        return std::less<sp_counted_base *>()(a.pi_, b.pi_);
    }
};

inline shared_count::shared_count( weak_count const & r ): pi_( r.pi_ )
{
    if( pi_ == 0 || !pi_->add_ref_lock() )
    {
        boost::throw_exception( boost::bad_weak_ptr() );
    }
}

inline shared_count::shared_count( weak_count const & r, sp_nothrow_tag ): pi_( r.pi_ )
{
    if( pi_ != 0 && !pi_->add_ref_lock() )
    {
        pi_ = 0;
    }
}

} 

} 



















namespace boost
{

namespace detail
{

template< class Y, class T > struct sp_convertible
{
    typedef char (&yes) [1];
    typedef char (&no)  [2];

    static yes f( T* );
    static no  f( ... );

    enum _vt { value = sizeof( (f)( static_cast<Y*>(0) ) ) == sizeof(yes) };
};

template< class Y, class T > struct sp_convertible< Y, T[] >
{
    enum _vt { value = false };
};

template< class Y, class T > struct sp_convertible< Y[], T[] >
{
    enum _vt { value = sp_convertible< Y[1], T[1] >::value };
};

template< class Y, std::size_t N, class T > struct sp_convertible< Y[N], T[] >
{
    enum _vt { value = sp_convertible< Y[1], T[1] >::value };
};

struct sp_empty
{
};

template< bool > struct sp_enable_if_convertible_impl;

template<> struct sp_enable_if_convertible_impl<true>
{
    typedef sp_empty type;
};

template<> struct sp_enable_if_convertible_impl<false>
{
};

template< class Y, class T > struct sp_enable_if_convertible: public sp_enable_if_convertible_impl< sp_convertible< Y, T >::value >
{
};

} 

} 
















































 




























 



 


























































































namespace boost
{

namespace detail
{

inline void yield( unsigned k )
{
    if( k < 4 )
    {
    }
    else if( k < 16 )
    {
        __asm__ __volatile__( "rep; nop" : : : "memory" );
    }
    else if( k < 32 || k & 1 )
    {
        sched_yield();
    }
    else
    {
        
        struct timespec rqtp = { 0, 0 };

        
        

        rqtp.tv_sec = 0;
        rqtp.tv_nsec = 1000;

        nanosleep( &rqtp, 0 );
    }
}

} 

} 




namespace boost
{

namespace detail
{

class spinlock
{
public:

    int v_;

public:

    bool try_lock()
    {
        int r = __sync_lock_test_and_set( &v_, 1 );
        return r == 0;
    }

    void lock()
    {
        for( unsigned k = 0; !try_lock(); ++k )
        {
            boost::detail::yield( k );
        }
    }

    void unlock()
    {
        __sync_lock_release( &v_ );
    }

public:

    class scoped_lock
    {
    private:

        spinlock & sp_;

        scoped_lock( scoped_lock const & );
        scoped_lock & operator=( scoped_lock const & );

    public:

        explicit scoped_lock( spinlock & sp ): sp_( sp )
        {
            sp.lock();
        }

        ~scoped_lock()
        {
            sp_.unlock();
        }
    };
};

} 
} 






































 




























 



 


namespace boost
{

namespace detail
{

template< int I > class spinlock_pool
{
private:

    static spinlock pool_[ 41 ];

public:

    static spinlock & spinlock_for( void const * pv )
    {
        std::size_t i = reinterpret_cast< std::size_t >( pv ) % 41;
        return pool_[ i ];
    }

    class scoped_lock
    {
    private:

        spinlock & sp_;

        scoped_lock( scoped_lock const & );
        scoped_lock & operator=( scoped_lock const & );

    public:

        explicit scoped_lock( void const * pv ): sp_( spinlock_for( pv ) )
        {
            sp_.lock();
        }

        ~scoped_lock()
        {
            sp_.unlock();
        }
    };
};

template< int I > spinlock spinlock_pool< I >::pool_[ 41 ] =
{
    {0}, {0}, {0}, {0}, {0}, 
    {0}, {0}, {0}, {0}, {0}, 
    {0}, {0}, {0}, {0}, {0}, 
    {0}, {0}, {0}, {0}, {0}, 
    {0}, {0}, {0}, {0}, {0}, 
    {0}, {0}, {0}, {0}, {0}, 
    {0}, {0}, {0}, {0}, {0}, 
    {0}, {0}, {0}, {0}, {0}, 
    {0}
};

} 
} 
















namespace boost
{


















enum memory_order
{
    memory_order_relaxed = 0,
    memory_order_acquire = 1,
    memory_order_release = 2,
    memory_order_acq_rel = 3, 
    memory_order_seq_cst = 7, 
    memory_order_consume = 8
};

} 



















































 



 




















































 




 




































 








































 




























 



 





























 




namespace std __attribute__ ((__visibility__ ("default"))) {

  

















































































 

  






 

  


 

  


 

  


 

  






 

  
























 

  

  template<typename _IIter, typename _Predicate>
    bool
    all_of(_IIter, _IIter, _Predicate);

  template<typename _IIter, typename _Predicate>
    bool
    any_of(_IIter, _IIter, _Predicate);

  template<typename _FIter, typename _Tp>
    bool 
    binary_search(_FIter, _FIter, const _Tp&);

  template<typename _FIter, typename _Tp, typename _Compare>
    bool 
    binary_search(_FIter, _FIter, const _Tp&, _Compare);

  template<typename _IIter, typename _OIter>
    _OIter 
    copy(_IIter, _IIter, _OIter);

  template<typename _BIter1, typename _BIter2>
    _BIter2
    copy_backward(_BIter1, _BIter1, _BIter2);

  template<typename _IIter, typename _OIter, typename _Predicate>
    _OIter
    copy_if(_IIter, _IIter, _OIter, _Predicate);

  template<typename _IIter, typename _Size, typename _OIter>
    _OIter
    copy_n(_IIter, _Size, _OIter);

  
  

  template<typename _FIter, typename _Tp>
    pair<_FIter, _FIter>
    equal_range(_FIter, _FIter, const _Tp&);

  template<typename _FIter, typename _Tp, typename _Compare>
    pair<_FIter, _FIter>
    equal_range(_FIter, _FIter, const _Tp&, _Compare);

  template<typename _FIter, typename _Tp>
    void 
    fill(_FIter, _FIter, const _Tp&);






 

  template<typename _OIter, typename _Size, typename _Tp>
    _OIter
    fill_n(_OIter, _Size, const _Tp&);

  

  template<typename _FIter1, typename _FIter2>
    _FIter1
    find_end(_FIter1, _FIter1, _FIter2, _FIter2);

  template<typename _FIter1, typename _FIter2, typename _BinaryPredicate>
    _FIter1
    find_end(_FIter1, _FIter1, _FIter2, _FIter2, _BinaryPredicate);

  
  

  template<typename _IIter, typename _Predicate>
    _IIter
    find_if_not(_IIter, _IIter, _Predicate);

  
  
  

  template<typename _IIter1, typename _IIter2>
    bool 
    includes(_IIter1, _IIter1, _IIter2, _IIter2);

  template<typename _IIter1, typename _IIter2, typename _Compare>
    bool 
    includes(_IIter1, _IIter1, _IIter2, _IIter2, _Compare);

  template<typename _BIter>
    void 
    inplace_merge(_BIter, _BIter, _BIter);

  template<typename _BIter, typename _Compare>
    void 
    inplace_merge(_BIter, _BIter, _BIter, _Compare);

  template<typename _RAIter>
    bool 
    is_heap(_RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    bool 
    is_heap(_RAIter, _RAIter, _Compare);

  template<typename _RAIter>
    _RAIter 
    is_heap_until(_RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    _RAIter 
    is_heap_until(_RAIter, _RAIter, _Compare);

  template<typename _IIter, typename _Predicate>
    bool
    is_partitioned(_IIter, _IIter, _Predicate);

  template<typename _FIter>
    bool 
    is_sorted(_FIter, _FIter);

  template<typename _FIter, typename _Compare>
    bool 
    is_sorted(_FIter, _FIter, _Compare);

  template<typename _FIter>
    _FIter 
    is_sorted_until(_FIter, _FIter);

  template<typename _FIter, typename _Compare>
    _FIter 
    is_sorted_until(_FIter, _FIter, _Compare);

  template<typename _FIter1, typename _FIter2>
    void 
    iter_swap(_FIter1, _FIter2);

  template<typename _FIter, typename _Tp>
    _FIter 
    lower_bound(_FIter, _FIter, const _Tp&);

  template<typename _FIter, typename _Tp, typename _Compare>
    _FIter 
    lower_bound(_FIter, _FIter, const _Tp&, _Compare);

  template<typename _RAIter>
    void 
    make_heap(_RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    void 
    make_heap(_RAIter, _RAIter, _Compare);

  template<typename _Tp> 
    const _Tp& 
    max(const _Tp&, const _Tp&);

  template<typename _Tp, typename _Compare>
    const _Tp& 
    max(const _Tp&, const _Tp&, _Compare);

  
  

  template<typename _Tp> 
    const _Tp& 
    min(const _Tp&, const _Tp&);

  template<typename _Tp, typename _Compare>
    const _Tp& 
    min(const _Tp&, const _Tp&, _Compare);

  

  template<typename _Tp>
    pair<const _Tp&, const _Tp&> 
    minmax(const _Tp&, const _Tp&);

  template<typename _Tp, typename _Compare>
    pair<const _Tp&, const _Tp&>
    minmax(const _Tp&, const _Tp&, _Compare);

  template<typename _FIter>
    pair<_FIter, _FIter>
    minmax_element(_FIter, _FIter);

  template<typename _FIter, typename _Compare>
    pair<_FIter, _FIter>
    minmax_element(_FIter, _FIter, _Compare);

  template<typename _Tp>
    _Tp
    min(initializer_list<_Tp>);

  template<typename _Tp, typename _Compare>
    _Tp
    min(initializer_list<_Tp>, _Compare);

  template<typename _Tp>
    _Tp
    max(initializer_list<_Tp>);

  template<typename _Tp, typename _Compare>
    _Tp
    max(initializer_list<_Tp>, _Compare);

  template<typename _Tp>
    pair<_Tp, _Tp>
    minmax(initializer_list<_Tp>);

  template<typename _Tp, typename _Compare>
    pair<_Tp, _Tp>
    minmax(initializer_list<_Tp>, _Compare);

  

  template<typename _BIter>
    bool 
    next_permutation(_BIter, _BIter);

  template<typename _BIter, typename _Compare>
    bool 
    next_permutation(_BIter, _BIter, _Compare);

  template<typename _IIter, typename _Predicate>
    bool
    none_of(_IIter, _IIter, _Predicate);

  
  

  template<typename _IIter, typename _RAIter>
    _RAIter
    partial_sort_copy(_IIter, _IIter, _RAIter, _RAIter);

  template<typename _IIter, typename _RAIter, typename _Compare>
    _RAIter
    partial_sort_copy(_IIter, _IIter, _RAIter, _RAIter, _Compare);

  

  template<typename _IIter, typename _OIter1,
	   typename _OIter2, typename _Predicate>
    pair<_OIter1, _OIter2>
    partition_copy(_IIter, _IIter, _OIter1, _OIter2, _Predicate);

  template<typename _FIter, typename _Predicate>
    _FIter
    partition_point(_FIter, _FIter, _Predicate);

  template<typename _RAIter>
    void 
    pop_heap(_RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    void 
    pop_heap(_RAIter, _RAIter, _Compare);

  template<typename _BIter>
    bool 
    prev_permutation(_BIter, _BIter);

  template<typename _BIter, typename _Compare>
    bool 
    prev_permutation(_BIter, _BIter, _Compare);

  template<typename _RAIter>
    void 
    push_heap(_RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    void 
    push_heap(_RAIter, _RAIter, _Compare);

  

  template<typename _FIter, typename _Tp>
    _FIter 
    remove(_FIter, _FIter, const _Tp&);

  template<typename _FIter, typename _Predicate>
    _FIter 
    remove_if(_FIter, _FIter, _Predicate);

  template<typename _IIter, typename _OIter, typename _Tp>
    _OIter 
    remove_copy(_IIter, _IIter, _OIter, const _Tp&);

  template<typename _IIter, typename _OIter, typename _Predicate>
    _OIter 
    remove_copy_if(_IIter, _IIter, _OIter, _Predicate);

  

  template<typename _IIter, typename _OIter, typename _Tp>
    _OIter 
    replace_copy(_IIter, _IIter, _OIter, const _Tp&, const _Tp&);

  template<typename _Iter, typename _OIter, typename _Predicate, typename _Tp>
    _OIter 
    replace_copy_if(_Iter, _Iter, _OIter, _Predicate, const _Tp&);

  

  template<typename _BIter>
    void 
    reverse(_BIter, _BIter);

  template<typename _BIter, typename _OIter>
    _OIter 
    reverse_copy(_BIter, _BIter, _OIter);

  template<typename _FIter>
    void 
    rotate(_FIter, _FIter, _FIter);

  template<typename _FIter, typename _OIter>
    _OIter 
    rotate_copy(_FIter, _FIter, _FIter, _OIter);

  
  
  
  
  
  

  template<typename _RAIter>
    void 
    sort_heap(_RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    void 
    sort_heap(_RAIter, _RAIter, _Compare);

  template<typename _BIter, typename _Predicate>
    _BIter 
    stable_partition(_BIter, _BIter, _Predicate);

  template<typename _Tp> 
    void 
    swap(_Tp&, _Tp&);

  template<typename _Tp, size_t _Nm>
    void
    swap(_Tp (&)[_Nm], _Tp (&)[_Nm]);

  template<typename _FIter1, typename _FIter2>
    _FIter2 
    swap_ranges(_FIter1, _FIter1, _FIter2);

  

  template<typename _FIter>
    _FIter 
    unique(_FIter, _FIter);

  template<typename _FIter, typename _BinaryPredicate>
    _FIter 
    unique(_FIter, _FIter, _BinaryPredicate);

  

  template<typename _FIter, typename _Tp>
    _FIter 
    upper_bound(_FIter, _FIter, const _Tp&);

  template<typename _FIter, typename _Tp, typename _Compare>
    _FIter 
    upper_bound(_FIter, _FIter, const _Tp&, _Compare);

}

namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _FIter>
    _FIter 
    adjacent_find(_FIter, _FIter);

  template<typename _FIter, typename _BinaryPredicate>
    _FIter 
    adjacent_find(_FIter, _FIter, _BinaryPredicate);

  template<typename _IIter, typename _Tp>
    typename iterator_traits<_IIter>::difference_type
    count(_IIter, _IIter, const _Tp&);

  template<typename _IIter, typename _Predicate>
    typename iterator_traits<_IIter>::difference_type
    count_if(_IIter, _IIter, _Predicate);

  template<typename _IIter1, typename _IIter2>
    bool 
    equal(_IIter1, _IIter1, _IIter2);

  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    bool 
    equal(_IIter1, _IIter1, _IIter2, _BinaryPredicate);

  template<typename _IIter, typename _Tp>
    _IIter 
    find(_IIter, _IIter, const _Tp&);

  template<typename _FIter1, typename _FIter2>
    _FIter1
    find_first_of(_FIter1, _FIter1, _FIter2, _FIter2);

  template<typename _FIter1, typename _FIter2, typename _BinaryPredicate>
    _FIter1
    find_first_of(_FIter1, _FIter1, _FIter2, _FIter2, _BinaryPredicate);

  template<typename _IIter, typename _Predicate>
    _IIter
    find_if(_IIter, _IIter, _Predicate);

  template<typename _IIter, typename _Funct>
    _Funct 
    for_each(_IIter, _IIter, _Funct);

  template<typename _FIter, typename _Generator>
    void 
    generate(_FIter, _FIter, _Generator);






 

  template<typename _OIter, typename _Size, typename _Generator>
    _OIter
    generate_n(_OIter, _Size, _Generator);

  template<typename _IIter1, typename _IIter2>
    bool 
    lexicographical_compare(_IIter1, _IIter1, _IIter2, _IIter2);

  template<typename _IIter1, typename _IIter2, typename _Compare>
    bool 
    lexicographical_compare(_IIter1, _IIter1, _IIter2, _IIter2, _Compare);

  template<typename _FIter>
    _FIter 
    max_element(_FIter, _FIter);

  template<typename _FIter, typename _Compare>
    _FIter 
    max_element(_FIter, _FIter, _Compare);

  template<typename _IIter1, typename _IIter2, typename _OIter>
    _OIter 
    merge(_IIter1, _IIter1, _IIter2, _IIter2, _OIter);

  template<typename _IIter1, typename _IIter2, typename _OIter, 
	   typename _Compare>
    _OIter 
    merge(_IIter1, _IIter1, _IIter2, _IIter2, _OIter, _Compare);

  template<typename _FIter>
    _FIter 
    min_element(_FIter, _FIter);

  template<typename _FIter, typename _Compare>
    _FIter 
    min_element(_FIter, _FIter, _Compare);

  template<typename _IIter1, typename _IIter2>
    pair<_IIter1, _IIter2>
    mismatch(_IIter1, _IIter1, _IIter2);

  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    pair<_IIter1, _IIter2>
    mismatch(_IIter1, _IIter1, _IIter2, _BinaryPredicate);

  template<typename _RAIter>
    void 
    nth_element(_RAIter, _RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    void 
    nth_element(_RAIter, _RAIter, _RAIter, _Compare);

  template<typename _RAIter>
    void 
    partial_sort(_RAIter, _RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    void 
    partial_sort(_RAIter, _RAIter, _RAIter, _Compare);

  template<typename _BIter, typename _Predicate>
    _BIter 
    partition(_BIter, _BIter, _Predicate);

  template<typename _RAIter>
    void 
    random_shuffle(_RAIter, _RAIter);

  template<typename _RAIter, typename _Generator>
    void 
    random_shuffle(_RAIter, _RAIter, _Generator&);

  template<typename _FIter, typename _Tp>
    void 
    replace(_FIter, _FIter, const _Tp&, const _Tp&);

  template<typename _FIter, typename _Predicate, typename _Tp>
    void 
    replace_if(_FIter, _FIter, _Predicate, const _Tp&);

  template<typename _FIter1, typename _FIter2>
    _FIter1 
    search(_FIter1, _FIter1, _FIter2, _FIter2);

  template<typename _FIter1, typename _FIter2, typename _BinaryPredicate>
    _FIter1 
    search(_FIter1, _FIter1, _FIter2, _FIter2, _BinaryPredicate);

  template<typename _FIter, typename _Size, typename _Tp>
    _FIter 
    search_n(_FIter, _FIter, _Size, const _Tp&);

  template<typename _FIter, typename _Size, typename _Tp, 
	   typename _BinaryPredicate>
    _FIter 
    search_n(_FIter, _FIter, _Size, const _Tp&, _BinaryPredicate);

  template<typename _IIter1, typename _IIter2, typename _OIter>
    _OIter 
    set_difference(_IIter1, _IIter1, _IIter2, _IIter2, _OIter);

  template<typename _IIter1, typename _IIter2, typename _OIter, 
	   typename _Compare>
    _OIter 
    set_difference(_IIter1, _IIter1, _IIter2, _IIter2, _OIter, _Compare);

  template<typename _IIter1, typename _IIter2, typename _OIter>
    _OIter 
    set_intersection(_IIter1, _IIter1, _IIter2, _IIter2, _OIter);

  template<typename _IIter1, typename _IIter2, typename _OIter,
	   typename _Compare>
    _OIter 
    set_intersection(_IIter1, _IIter1, _IIter2, _IIter2, _OIter, _Compare);

  template<typename _IIter1, typename _IIter2, typename _OIter>
    _OIter
    set_symmetric_difference(_IIter1, _IIter1, _IIter2, _IIter2, _OIter);

  template<typename _IIter1, typename _IIter2, typename _OIter, 
	   typename _Compare>
    _OIter
    set_symmetric_difference(_IIter1, _IIter1, _IIter2, _IIter2, 
			     _OIter, _Compare);

  template<typename _IIter1, typename _IIter2, typename _OIter>
    _OIter 
    set_union(_IIter1, _IIter1, _IIter2, _IIter2, _OIter);

  template<typename _IIter1, typename _IIter2, typename _OIter,
	   typename _Compare>
    _OIter 
    set_union(_IIter1, _IIter1, _IIter2, _IIter2, _OIter, _Compare);

  template<typename _RAIter>
    void 
    sort(_RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    void 
    sort(_RAIter, _RAIter, _Compare);

  template<typename _RAIter>
    void 
    stable_sort(_RAIter, _RAIter);

  template<typename _RAIter, typename _Compare>
    void 
    stable_sort(_RAIter, _RAIter, _Compare);

  template<typename _IIter, typename _OIter, typename _UnaryOperation>
    _OIter 
    transform(_IIter, _IIter, _OIter, _UnaryOperation);

  template<typename _IIter1, typename _IIter2, typename _OIter, 
	   typename _BinaryOperation>
    _OIter 
    transform(_IIter1, _IIter1, _IIter2, _OIter, _BinaryOperation);

  template<typename _IIter, typename _OIter>
    _OIter 
    unique_copy(_IIter, _IIter, _OIter);

  template<typename _IIter, typename _OIter, typename _BinaryPredicate>
    _OIter 
    unique_copy(_IIter, _IIter, _OIter, _BinaryPredicate);

}



















































 




 



namespace std __attribute__ ((__visibility__ ("default"))) {

  


 

  template<typename _RandomAccessIterator, typename _Distance>
    _Distance
    __is_heap_until(_RandomAccessIterator __first, _Distance __n)
    {
      _Distance __parent = 0;
      for (_Distance __child = 1; __child < __n; ++__child)
	{
	  if (__first[__parent] < __first[__child])
	    return __child;
	  if ((__child & 1) == 0)
	    ++__parent;
	}
      return __n;
    }

  template<typename _RandomAccessIterator, typename _Distance,
	   typename _Compare>
    _Distance
    __is_heap_until(_RandomAccessIterator __first, _Distance __n,
		    _Compare __comp)
    {
      _Distance __parent = 0;
      for (_Distance __child = 1; __child < __n; ++__child)
	{
	  if (__comp(__first[__parent], __first[__child]))
	    return __child;
	  if ((__child & 1) == 0)
	    ++__parent;
	}
      return __n;
    }

  
  
  template<typename _RandomAccessIterator, typename _Distance>
    inline bool
    __is_heap(_RandomAccessIterator __first, _Distance __n)
    { return std::__is_heap_until(__first, __n) == __n; }

  template<typename _RandomAccessIterator, typename _Compare,
	   typename _Distance>
    inline bool
    __is_heap(_RandomAccessIterator __first, _Compare __comp, _Distance __n)
    { return std::__is_heap_until(__first, __n, __comp) == __n; }

  template<typename _RandomAccessIterator>
    inline bool
    __is_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
    { return std::__is_heap(__first, std::distance(__first, __last)); }

  template<typename _RandomAccessIterator, typename _Compare>
    inline bool
    __is_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
	      _Compare __comp)
    { return std::__is_heap(__first, __comp, std::distance(__first, __last)); }

  
  

  template<typename _RandomAccessIterator, typename _Distance, typename _Tp>
    void
    __push_heap(_RandomAccessIterator __first,
		_Distance __holeIndex, _Distance __topIndex, _Tp __value)
    {
      _Distance __parent = (__holeIndex - 1) / 2;
      while (__holeIndex > __topIndex && *(__first + __parent) < __value)
	{
	  *(__first + __holeIndex) = std::move(*(__first + __parent));
	  __holeIndex = __parent;
	  __parent = (__holeIndex - 1) / 2;
	}
      *(__first + __holeIndex) = std::move(__value);
    }

  







 
  template<typename _RandomAccessIterator>
    inline void
    push_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	  _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
	  _DistanceType;

      
      
      
      ;
      ;

      _ValueType __value = std::move(*(__last - 1));
      std::__push_heap(__first, _DistanceType((__last - __first) - 1),
		       _DistanceType(0), std::move(__value));
    }

  template<typename _RandomAccessIterator, typename _Distance, typename _Tp,
	   typename _Compare>
    void
    __push_heap(_RandomAccessIterator __first, _Distance __holeIndex,
		_Distance __topIndex, _Tp __value, _Compare __comp)
    {
      _Distance __parent = (__holeIndex - 1) / 2;
      while (__holeIndex > __topIndex
	     && __comp(*(__first + __parent), __value))
	{
	  *(__first + __holeIndex) = std::move(*(__first + __parent));
	  __holeIndex = __parent;
	  __parent = (__holeIndex - 1) / 2;
	}
      *(__first + __holeIndex) = std::move(__value);
    }

  









 
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    push_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
	      _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	  _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
	  _DistanceType;

      
      
      ;
      ;

      _ValueType __value = std::move(*(__last - 1));
      std::__push_heap(__first, _DistanceType((__last - __first) - 1),
		       _DistanceType(0), std::move(__value), __comp);
    }

  template<typename _RandomAccessIterator, typename _Distance, typename _Tp>
    void
    __adjust_heap(_RandomAccessIterator __first, _Distance __holeIndex,
		  _Distance __len, _Tp __value)
    {
      const _Distance __topIndex = __holeIndex;
      _Distance __secondChild = __holeIndex;
      while (__secondChild < (__len - 1) / 2)
	{
	  __secondChild = 2 * (__secondChild + 1);
	  if (*(__first + __secondChild) < *(__first + (__secondChild - 1)))
	    __secondChild--;
	  *(__first + __holeIndex) = std::move(*(__first + __secondChild));
	  __holeIndex = __secondChild;
	}
      if ((__len & 1) == 0 && __secondChild == (__len - 2) / 2)
	{
	  __secondChild = 2 * (__secondChild + 1);
	  *(__first + __holeIndex) = std::move(*(__first + (__secondChild - 1)));
	  __holeIndex = __secondChild - 1;
	}
      std::__push_heap(__first, __holeIndex, __topIndex,
		       std::move(__value));
    }

  template<typename _RandomAccessIterator>
    inline void
    __pop_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
	       _RandomAccessIterator __result)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
	_DistanceType;

      _ValueType __value = std::move(*__result);
      *__result = std::move(*__first);
      std::__adjust_heap(__first, _DistanceType(0),
			 _DistanceType(__last - __first),
			 std::move(__value));
    }

  







 
  template<typename _RandomAccessIterator>
    inline void
    pop_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;

      
      
      
      ;
      ;

      --__last;
      std::__pop_heap(__first, __last, __last);
    }

  template<typename _RandomAccessIterator, typename _Distance,
	   typename _Tp, typename _Compare>
    void
    __adjust_heap(_RandomAccessIterator __first, _Distance __holeIndex,
		  _Distance __len, _Tp __value, _Compare __comp)
    {
      const _Distance __topIndex = __holeIndex;
      _Distance __secondChild = __holeIndex;
      while (__secondChild < (__len - 1) / 2)
	{
	  __secondChild = 2 * (__secondChild + 1);
	  if (__comp(*(__first + __secondChild),
		     *(__first + (__secondChild - 1))))
	    __secondChild--;
	  *(__first + __holeIndex) = std::move(*(__first + __secondChild));
	  __holeIndex = __secondChild;
	}
      if ((__len & 1) == 0 && __secondChild == (__len - 2) / 2)
	{
	  __secondChild = 2 * (__secondChild + 1);
	  *(__first + __holeIndex) = std::move(*(__first + (__secondChild - 1)));
	  __holeIndex = __secondChild - 1;
	}
      std::__push_heap(__first, __holeIndex, __topIndex, 
		       std::move(__value), __comp);      
    }

  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    __pop_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
	       _RandomAccessIterator __result, _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
	_DistanceType;

      _ValueType __value = std::move(*__result);
      *__result = std::move(*__first);
      std::__adjust_heap(__first, _DistanceType(0),
			 _DistanceType(__last - __first),
			 std::move(__value), __comp);
    }

  









 
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    pop_heap(_RandomAccessIterator __first,
	     _RandomAccessIterator __last, _Compare __comp)
    {
      
      
      ;
      ;

      --__last;
      std::__pop_heap(__first, __last, __last, __comp);
    }

  






 
  template<typename _RandomAccessIterator>
    void
    make_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	  _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
	  _DistanceType;

      
      
      
      ;

      if (__last - __first < 2)
	return;

      const _DistanceType __len = __last - __first;
      _DistanceType __parent = (__len - 2) / 2;
      while (true)
	{
	  _ValueType __value = std::move(*(__first + __parent));
	  std::__adjust_heap(__first, __parent, __len, std::move(__value));
	  if (__parent == 0)
	    return;
	  __parent--;
	}
    }

  








 
  template<typename _RandomAccessIterator, typename _Compare>
    void
    make_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
	      _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	  _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
	  _DistanceType;

      
      
      ;

      if (__last - __first < 2)
	return;

      const _DistanceType __len = __last - __first;
      _DistanceType __parent = (__len - 2) / 2;
      while (true)
	{
	  _ValueType __value = std::move(*(__first + __parent));
	  std::__adjust_heap(__first, __parent, __len, std::move(__value),
			     __comp);
	  if (__parent == 0)
	    return;
	  __parent--;
	}
    }

  






 
  template<typename _RandomAccessIterator>
    void
    sort_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      
      
      
      ;
      ;

      while (__last - __first > 1)
	{
	  --__last;
	  std::__pop_heap(__first, __last, __last);
	}
    }

  








 
  template<typename _RandomAccessIterator, typename _Compare>
    void
    sort_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
	      _Compare __comp)
    {
      
      
      ;
      ;

      while (__last - __first > 1)
	{
	  --__last;
	  std::__pop_heap(__first, __last, __last, __comp);
	}
    }

  








 
  template<typename _RandomAccessIterator>
    inline _RandomAccessIterator
    is_heap_until(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      
      
      
      ;

      return __first + std::__is_heap_until(__first, std::distance(__first,
								   __last));
    }

  









 
  template<typename _RandomAccessIterator, typename _Compare>
    inline _RandomAccessIterator
    is_heap_until(_RandomAccessIterator __first, _RandomAccessIterator __last,
		  _Compare __comp)
    {
      
      
      ;

      return __first + std::__is_heap_until(__first, std::distance(__first,
								   __last),
					    __comp);
    }

  





 
  template<typename _RandomAccessIterator>
    inline bool
    is_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
    { return std::is_heap_until(__first, __last) == __last; }

  






 
  template<typename _RandomAccessIterator, typename _Compare>
    inline bool
    is_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
	    _Compare __comp)
    { return std::is_heap_until(__first, __last, __comp) == __last; }

}




namespace std __attribute__ ((__visibility__ ("default"))) {

  










 
  template<typename _Tp>
    inline const _Tp&
    __median(const _Tp& __a, const _Tp& __b, const _Tp& __c)
    {
      
      
      if (__a < __b)
	if (__b < __c)
	  return __b;
	else if (__a < __c)
	  return __c;
	else
	  return __a;
      else if (__a < __c)
	return __a;
      else if (__b < __c)
	return __c;
      else
	return __b;
    }

  











 
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    __median(const _Tp& __a, const _Tp& __b, const _Tp& __c, _Compare __comp)
    {
      
      
      if (__comp(__a, __b))
	if (__comp(__b, __c))
	  return __b;
	else if (__comp(__a, __c))
	  return __c;
	else
	  return __a;
      else if (__comp(__a, __c))
	return __a;
      else if (__comp(__b, __c))
	return __c;
      else
	return __b;
    }

  

  
  template<typename _InputIterator, typename _Tp>
    inline _InputIterator
    __find(_InputIterator __first, _InputIterator __last,
	   const _Tp& __val, input_iterator_tag)
    {
      while (__first != __last && !(*__first == __val))
	++__first;
      return __first;
    }

  
  template<typename _InputIterator, typename _Predicate>
    inline _InputIterator
    __find_if(_InputIterator __first, _InputIterator __last,
	      _Predicate __pred, input_iterator_tag)
    {
      while (__first != __last && !bool(__pred(*__first)))
	++__first;
      return __first;
    }

  
  template<typename _RandomAccessIterator, typename _Tp>
    _RandomAccessIterator
    __find(_RandomAccessIterator __first, _RandomAccessIterator __last,
	   const _Tp& __val, random_access_iterator_tag)
    {
      typename iterator_traits<_RandomAccessIterator>::difference_type
	__trip_count = (__last - __first) >> 2;

      for (; __trip_count > 0; --__trip_count)
	{
	  if (*__first == __val)
	    return __first;
	  ++__first;

	  if (*__first == __val)
	    return __first;
	  ++__first;

	  if (*__first == __val)
	    return __first;
	  ++__first;

	  if (*__first == __val)
	    return __first;
	  ++__first;
	}

      switch (__last - __first)
	{
	case 3:
	  if (*__first == __val)
	    return __first;
	  ++__first;
	case 2:
	  if (*__first == __val)
	    return __first;
	  ++__first;
	case 1:
	  if (*__first == __val)
	    return __first;
	  ++__first;
	case 0:
	default:
	  return __last;
	}
    }

  
  template<typename _RandomAccessIterator, typename _Predicate>
    _RandomAccessIterator
    __find_if(_RandomAccessIterator __first, _RandomAccessIterator __last,
	      _Predicate __pred, random_access_iterator_tag)
    {
      typename iterator_traits<_RandomAccessIterator>::difference_type
	__trip_count = (__last - __first) >> 2;

      for (; __trip_count > 0; --__trip_count)
	{
	  if (__pred(*__first))
	    return __first;
	  ++__first;

	  if (__pred(*__first))
	    return __first;
	  ++__first;

	  if (__pred(*__first))
	    return __first;
	  ++__first;

	  if (__pred(*__first))
	    return __first;
	  ++__first;
	}

      switch (__last - __first)
	{
	case 3:
	  if (__pred(*__first))
	    return __first;
	  ++__first;
	case 2:
	  if (__pred(*__first))
	    return __first;
	  ++__first;
	case 1:
	  if (__pred(*__first))
	    return __first;
	  ++__first;
	case 0:
	default:
	  return __last;
	}
    }

  
  template<typename _InputIterator, typename _Predicate>
    inline _InputIterator
    __find_if_not(_InputIterator __first, _InputIterator __last,
		  _Predicate __pred, input_iterator_tag)
    {
      while (__first != __last && bool(__pred(*__first)))
	++__first;
      return __first;
    }

  
  template<typename _RandomAccessIterator, typename _Predicate>
    _RandomAccessIterator
    __find_if_not(_RandomAccessIterator __first, _RandomAccessIterator __last,
		  _Predicate __pred, random_access_iterator_tag)
    {
      typename iterator_traits<_RandomAccessIterator>::difference_type
	__trip_count = (__last - __first) >> 2;

      for (; __trip_count > 0; --__trip_count)
	{
	  if (!bool(__pred(*__first)))
	    return __first;
	  ++__first;

	  if (!bool(__pred(*__first)))
	    return __first;
	  ++__first;

	  if (!bool(__pred(*__first)))
	    return __first;
	  ++__first;

	  if (!bool(__pred(*__first)))
	    return __first;
	  ++__first;
	}

      switch (__last - __first)
	{
	case 3:
	  if (!bool(__pred(*__first)))
	    return __first;
	  ++__first;
	case 2:
	  if (!bool(__pred(*__first)))
	    return __first;
	  ++__first;
	case 1:
	  if (!bool(__pred(*__first)))
	    return __first;
	  ++__first;
	case 0:
	default:
	  return __last;
	}
    }

  
  
  
  
  
  
  
  
  
  
  
  

  



 
  template<typename _ForwardIterator, typename _Integer, typename _Tp>
    _ForwardIterator
    __search_n(_ForwardIterator __first, _ForwardIterator __last,
	       _Integer __count, const _Tp& __val,
	       std::forward_iterator_tag)
    {
      __first = std::find(__first, __last, __val);
      while (__first != __last)
	{
	  typename iterator_traits<_ForwardIterator>::difference_type
	    __n = __count;
	  _ForwardIterator __i = __first;
	  ++__i;
	  while (__i != __last && __n != 1 && *__i == __val)
	    {
	      ++__i;
	      --__n;
	    }
	  if (__n == 1)
	    return __first;
	  if (__i == __last)
	    return __last;
	  __first = std::find(++__i, __last, __val);
	}
      return __last;
    }

  



 
  template<typename _RandomAccessIter, typename _Integer, typename _Tp>
    _RandomAccessIter
    __search_n(_RandomAccessIter __first, _RandomAccessIter __last,
	       _Integer __count, const _Tp& __val, 
	       std::random_access_iterator_tag)
    {
      
      typedef typename std::iterator_traits<_RandomAccessIter>::difference_type
	_DistanceType;

      _DistanceType __tailSize = __last - __first;
      const _DistanceType __pattSize = __count;

      if (__tailSize < __pattSize)
        return __last;

      const _DistanceType __skipOffset = __pattSize - 1;
      _RandomAccessIter __lookAhead = __first + __skipOffset;
      __tailSize -= __pattSize;

      while (1) 
	{
	  
	  
	  while (!(*__lookAhead == __val)) 
	    {
	      if (__tailSize < __pattSize)
		return __last;  
	      __lookAhead += __pattSize;
	      __tailSize -= __pattSize;
	    }
	  _DistanceType __remainder = __skipOffset;
	  for (_RandomAccessIter __backTrack = __lookAhead - 1; 
	       *__backTrack == __val; --__backTrack)
	    {
	      if (--__remainder == 0)
		return (__lookAhead - __skipOffset); 
	    }
	  if (__remainder > __tailSize)
	    return __last; 
	  __lookAhead += __remainder;
	  __tailSize -= __remainder;
	}
    }

  

  




 
  template<typename _ForwardIterator, typename _Integer, typename _Tp,
           typename _BinaryPredicate>
    _ForwardIterator
    __search_n(_ForwardIterator __first, _ForwardIterator __last,
	       _Integer __count, const _Tp& __val,
	       _BinaryPredicate __binary_pred, std::forward_iterator_tag)
    {
      while (__first != __last && !bool(__binary_pred(*__first, __val)))
        ++__first;

      while (__first != __last)
	{
	  typename iterator_traits<_ForwardIterator>::difference_type
	    __n = __count;
	  _ForwardIterator __i = __first;
	  ++__i;
	  while (__i != __last && __n != 1 && bool(__binary_pred(*__i, __val)))
	    {
	      ++__i;
	      --__n;
	    }
	  if (__n == 1)
	    return __first;
	  if (__i == __last)
	    return __last;
	  __first = ++__i;
	  while (__first != __last
		 && !bool(__binary_pred(*__first, __val)))
	    ++__first;
	}
      return __last;
    }

  




 
  template<typename _RandomAccessIter, typename _Integer, typename _Tp,
	   typename _BinaryPredicate>
    _RandomAccessIter
    __search_n(_RandomAccessIter __first, _RandomAccessIter __last,
	       _Integer __count, const _Tp& __val,
	       _BinaryPredicate __binary_pred, std::random_access_iterator_tag)
    {
      
      typedef typename std::iterator_traits<_RandomAccessIter>::difference_type
	_DistanceType;

      _DistanceType __tailSize = __last - __first;
      const _DistanceType __pattSize = __count;

      if (__tailSize < __pattSize)
        return __last;

      const _DistanceType __skipOffset = __pattSize - 1;
      _RandomAccessIter __lookAhead = __first + __skipOffset;
      __tailSize -= __pattSize;

      while (1) 
	{
	  
	  
	  while (!bool(__binary_pred(*__lookAhead, __val))) 
	    {
	      if (__tailSize < __pattSize)
		return __last;  
	      __lookAhead += __pattSize;
	      __tailSize -= __pattSize;
	    }
	  _DistanceType __remainder = __skipOffset;
	  for (_RandomAccessIter __backTrack = __lookAhead - 1; 
	       __binary_pred(*__backTrack, __val); --__backTrack)
	    {
	      if (--__remainder == 0)
		return (__lookAhead - __skipOffset); 
	    }
	  if (__remainder > __tailSize)
	    return __last; 
	  __lookAhead += __remainder;
	  __tailSize -= __remainder;
	}
    }

  
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator1
    __find_end(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
	       _ForwardIterator2 __first2, _ForwardIterator2 __last2,
	       forward_iterator_tag, forward_iterator_tag)
    {
      if (__first2 == __last2)
	return __last1;
      else
	{
	  _ForwardIterator1 __result = __last1;
	  while (1)
	    {
	      _ForwardIterator1 __new_result
		= std::search(__first1, __last1, __first2, __last2);
	      if (__new_result == __last1)
		return __result;
	      else
		{
		  __result = __new_result;
		  __first1 = __new_result;
		  ++__first1;
		}
	    }
	}
    }

  template<typename _ForwardIterator1, typename _ForwardIterator2,
	   typename _BinaryPredicate>
    _ForwardIterator1
    __find_end(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
	       _ForwardIterator2 __first2, _ForwardIterator2 __last2,
	       forward_iterator_tag, forward_iterator_tag,
	       _BinaryPredicate __comp)
    {
      if (__first2 == __last2)
	return __last1;
      else
	{
	  _ForwardIterator1 __result = __last1;
	  while (1)
	    {
	      _ForwardIterator1 __new_result
		= std::search(__first1, __last1, __first2,
					 __last2, __comp);
	      if (__new_result == __last1)
		return __result;
	      else
		{
		  __result = __new_result;
		  __first1 = __new_result;
		  ++__first1;
		}
	    }
	}
    }

  
  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2>
    _BidirectionalIterator1
    __find_end(_BidirectionalIterator1 __first1,
	       _BidirectionalIterator1 __last1,
	       _BidirectionalIterator2 __first2,
	       _BidirectionalIterator2 __last2,
	       bidirectional_iterator_tag, bidirectional_iterator_tag)
    {
      
      
      

      typedef reverse_iterator<_BidirectionalIterator1> _RevIterator1;
      typedef reverse_iterator<_BidirectionalIterator2> _RevIterator2;

      _RevIterator1 __rlast1(__first1);
      _RevIterator2 __rlast2(__first2);
      _RevIterator1 __rresult = std::search(_RevIterator1(__last1),
						       __rlast1,
						       _RevIterator2(__last2),
						       __rlast2);

      if (__rresult == __rlast1)
	return __last1;
      else
	{
	  _BidirectionalIterator1 __result = __rresult.base();
	  std::advance(__result, -std::distance(__first2, __last2));
	  return __result;
	}
    }

  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2,
	   typename _BinaryPredicate>
    _BidirectionalIterator1
    __find_end(_BidirectionalIterator1 __first1,
	       _BidirectionalIterator1 __last1,
	       _BidirectionalIterator2 __first2,
	       _BidirectionalIterator2 __last2,
	       bidirectional_iterator_tag, bidirectional_iterator_tag,
	       _BinaryPredicate __comp)
    {
      
      
      

      typedef reverse_iterator<_BidirectionalIterator1> _RevIterator1;
      typedef reverse_iterator<_BidirectionalIterator2> _RevIterator2;

      _RevIterator1 __rlast1(__first1);
      _RevIterator2 __rlast2(__first2);
      _RevIterator1 __rresult = std::search(_RevIterator1(__last1), __rlast1,
					    _RevIterator2(__last2), __rlast2,
					    __comp);

      if (__rresult == __rlast1)
	return __last1;
      else
	{
	  _BidirectionalIterator1 __result = __rresult.base();
	  std::advance(__result, -std::distance(__first2, __last2));
	  return __result;
	}
    }

  























 
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline _ForwardIterator1
    find_end(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
	     _ForwardIterator2 __first2, _ForwardIterator2 __last2)
    {
      
      
      
      
      ;
      ;

      return std::__find_end(__first1, __last1, __first2, __last2,
			     std::__iterator_category(__first1),
			     std::__iterator_category(__first2));
    }

  

























 
  template<typename _ForwardIterator1, typename _ForwardIterator2,
	   typename _BinaryPredicate>
    inline _ForwardIterator1
    find_end(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
	     _ForwardIterator2 __first2, _ForwardIterator2 __last2,
	     _BinaryPredicate __comp)
    {
      
      
      
      
      ;
      ;

      return std::__find_end(__first1, __last1, __first2, __last2,
			     std::__iterator_category(__first1),
			     std::__iterator_category(__first2),
			     __comp);
    }

  










 
  template<typename _InputIterator, typename _Predicate>
    inline bool
    all_of(_InputIterator __first, _InputIterator __last, _Predicate __pred)
    { return __last == std::find_if_not(__first, __last, __pred); }

  










 
  template<typename _InputIterator, typename _Predicate>
    inline bool
    none_of(_InputIterator __first, _InputIterator __last, _Predicate __pred)
    { return __last == std::find_if(__first, __last, __pred); }

  










 
  template<typename _InputIterator, typename _Predicate>
    inline bool
    any_of(_InputIterator __first, _InputIterator __last, _Predicate __pred)
    { return !std::none_of(__first, __last, __pred); }

  








 
  template<typename _InputIterator, typename _Predicate>
    inline _InputIterator
    find_if_not(_InputIterator __first, _InputIterator __last,
		_Predicate __pred)
    {
      
      
      
      ;
      return std::__find_if_not(__first, __last, __pred,
				std::__iterator_category(__first));
    }

  








 
  template<typename _InputIterator, typename _Predicate>
    inline bool
    is_partitioned(_InputIterator __first, _InputIterator __last,
		   _Predicate __pred)
    {
      __first = std::find_if_not(__first, __last, __pred);
      return std::none_of(__first, __last, __pred);
    }

  







 
  template<typename _ForwardIterator, typename _Predicate>
    _ForwardIterator
    partition_point(_ForwardIterator __first, _ForwardIterator __last,
		    _Predicate __pred)
    {
      
      
      

      
      ;

      typedef typename iterator_traits<_ForwardIterator>::difference_type
	_DistanceType;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
	{
	  __half = __len >> 1;
	  __middle = __first;
	  std::advance(__middle, __half);
	  if (__pred(*__middle))
	    {
	      __first = __middle;
	      ++__first;
	      __len = __len - __half - 1;
	    }
	  else
	    __len = __half;
	}
      return __first;
    }


  












 
  template<typename _InputIterator, typename _OutputIterator, typename _Tp>
    _OutputIterator
    remove_copy(_InputIterator __first, _InputIterator __last,
		_OutputIterator __result, const _Tp& __value)
    {
      
      
      
      
      ;

      for (; __first != __last; ++__first)
	if (!(*__first == __value))
	  {
	    *__result = *__first;
	    ++__result;
	  }
      return __result;
    }

  













 
  template<typename _InputIterator, typename _OutputIterator,
	   typename _Predicate>
    _OutputIterator
    remove_copy_if(_InputIterator __first, _InputIterator __last,
		   _OutputIterator __result, _Predicate __pred)
    {
      
      
      
      
      ;

      for (; __first != __last; ++__first)
	if (!bool(__pred(*__first)))
	  {
	    *__result = *__first;
	    ++__result;
	  }
      return __result;
    }

  













 
  template<typename _InputIterator, typename _OutputIterator,
	   typename _Predicate>
    _OutputIterator
    copy_if(_InputIterator __first, _InputIterator __last,
	    _OutputIterator __result, _Predicate __pred)
    {
      
      
      
      
      ;

      for (; __first != __last; ++__first)
	if (__pred(*__first))
	  {
	    *__result = *__first;
	    ++__result;
	  }
      return __result;
    }


  template<typename _InputIterator, typename _Size, typename _OutputIterator>
    _OutputIterator
    __copy_n(_InputIterator __first, _Size __n,
	     _OutputIterator __result, input_iterator_tag)
    {
      for (; __n > 0; --__n)
	{
	  *__result = *__first;
	  ++__first;
	  ++__result;
	}
      return __result;
    }

  template<typename _RandomAccessIterator, typename _Size,
	   typename _OutputIterator>
    inline _OutputIterator
    __copy_n(_RandomAccessIterator __first, _Size __n,
	     _OutputIterator __result, random_access_iterator_tag)
    { return std::copy(__first, __first + __n, __result); }

  











 
  template<typename _InputIterator, typename _Size, typename _OutputIterator>
    inline _OutputIterator
    copy_n(_InputIterator __first, _Size __n, _OutputIterator __result)
    {
      
      
      

      return std::__copy_n(__first, __n, __result,
			   std::__iterator_category(__first));
    }

  













 
  template<typename _InputIterator, typename _OutputIterator1,
	   typename _OutputIterator2, typename _Predicate>
    pair<_OutputIterator1, _OutputIterator2>
    partition_copy(_InputIterator __first, _InputIterator __last,
		   _OutputIterator1 __out_true, _OutputIterator2 __out_false,
		   _Predicate __pred)
    {
      
      
      
      
      
      ;
      
      for (; __first != __last; ++__first)
	if (__pred(*__first))
	  {
	    *__out_true = *__first;
	    ++__out_true;
	  }
	else
	  {
	    *__out_false = *__first;
	    ++__out_false;
	  }

      return pair<_OutputIterator1, _OutputIterator2>(__out_true, __out_false);
    }

  















 
  template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    remove(_ForwardIterator __first, _ForwardIterator __last,
	   const _Tp& __value)
    {
      
      
      
      ;

      __first = std::find(__first, __last, __value);
      if(__first == __last)
        return __first;
      _ForwardIterator __result = __first;
      ++__first;
      for(; __first != __last; ++__first)
        if(!(*__first == __value))
          {
            *__result = std::move(*__first);
            ++__result;
          }
      return __result;
    }

  















 
  template<typename _ForwardIterator, typename _Predicate>
    _ForwardIterator
    remove_if(_ForwardIterator __first, _ForwardIterator __last,
	      _Predicate __pred)
    {
      
      
      
      ;

      __first = std::find_if(__first, __last, __pred);
      if(__first == __last)
        return __first;
      _ForwardIterator __result = __first;
      ++__first;
      for(; __first != __last; ++__first)
        if(!bool(__pred(*__first)))
          {
            *__result = std::move(*__first);
            ++__result;
          }
      return __result;
    }

  












 
  template<typename _ForwardIterator>
    _ForwardIterator
    unique(_ForwardIterator __first, _ForwardIterator __last)
    {
      
      
      
      ;

      
      __first = std::adjacent_find(__first, __last);
      if (__first == __last)
	return __last;

      
      _ForwardIterator __dest = __first;
      ++__first;
      while (++__first != __last)
	if (!(*__dest == *__first))
	  *++__dest = std::move(*__first);
      return ++__dest;
    }

  













 
  template<typename _ForwardIterator, typename _BinaryPredicate>
    _ForwardIterator
    unique(_ForwardIterator __first, _ForwardIterator __last,
           _BinaryPredicate __binary_pred)
    {
      
      
      
      ;

      
      __first = std::adjacent_find(__first, __last, __binary_pred);
      if (__first == __last)
	return __last;

      
      _ForwardIterator __dest = __first;
      ++__first;
      while (++__first != __last)
	if (!bool(__binary_pred(*__dest, *__first)))
	  *++__dest = std::move(*__first);
      return ++__dest;
    }

  



 
  template<typename _ForwardIterator, typename _OutputIterator>
    _OutputIterator
    __unique_copy(_ForwardIterator __first, _ForwardIterator __last,
		  _OutputIterator __result,
		  forward_iterator_tag, output_iterator_tag)
    {
      
      _ForwardIterator __next = __first;
      *__result = *__first;
      while (++__next != __last)
	if (!(*__first == *__next))
	  {
	    __first = __next;
	    *++__result = *__first;
	  }
      return ++__result;
    }

  



 
  template<typename _InputIterator, typename _OutputIterator>
    _OutputIterator
    __unique_copy(_InputIterator __first, _InputIterator __last,
		  _OutputIterator __result,
		  input_iterator_tag, output_iterator_tag)
    {
      
      typename iterator_traits<_InputIterator>::value_type __value = *__first;
      *__result = __value;
      while (++__first != __last)
	if (!(__value == *__first))
	  {
	    __value = *__first;
	    *++__result = __value;
	  }
      return ++__result;
    }

  



 
  template<typename _InputIterator, typename _ForwardIterator>
    _ForwardIterator
    __unique_copy(_InputIterator __first, _InputIterator __last,
		  _ForwardIterator __result,
		  input_iterator_tag, forward_iterator_tag)
    {
      
      *__result = *__first;
      while (++__first != __last)
	if (!(*__result == *__first))
	  *++__result = *__first;
      return ++__result;
    }

  




 
  template<typename _ForwardIterator, typename _OutputIterator,
	   typename _BinaryPredicate>
    _OutputIterator
    __unique_copy(_ForwardIterator __first, _ForwardIterator __last,
		  _OutputIterator __result, _BinaryPredicate __binary_pred,
		  forward_iterator_tag, output_iterator_tag)
    {
      
      

      _ForwardIterator __next = __first;
      *__result = *__first;
      while (++__next != __last)
	if (!bool(__binary_pred(*__first, *__next)))
	  {
	    __first = __next;
	    *++__result = *__first;
	  }
      return ++__result;
    }

  




 
  template<typename _InputIterator, typename _OutputIterator,
	   typename _BinaryPredicate>
    _OutputIterator
    __unique_copy(_InputIterator __first, _InputIterator __last,
		  _OutputIterator __result, _BinaryPredicate __binary_pred,
		  input_iterator_tag, output_iterator_tag)
    {
      
      

      typename iterator_traits<_InputIterator>::value_type __value = *__first;
      *__result = __value;
      while (++__first != __last)
	if (!bool(__binary_pred(__value, *__first)))
	  {
	    __value = *__first;
	    *++__result = __value;
	  }
      return ++__result;
    }

  




 
  template<typename _InputIterator, typename _ForwardIterator,
	   typename _BinaryPredicate>
    _ForwardIterator
    __unique_copy(_InputIterator __first, _InputIterator __last,
		  _ForwardIterator __result, _BinaryPredicate __binary_pred,
		  input_iterator_tag, forward_iterator_tag)
    {
      
      

      *__result = *__first;
      while (++__first != __last)
	if (!bool(__binary_pred(*__result, *__first)))
	  *++__result = *__first;
      return ++__result;
    }

  



 
  template<typename _BidirectionalIterator>
    void
    __reverse(_BidirectionalIterator __first, _BidirectionalIterator __last,
	      bidirectional_iterator_tag)
    {
      while (true)
	if (__first == __last || __first == --__last)
	  return;
	else
	  {
	    std::iter_swap(__first, __last);
	    ++__first;
	  }
    }

  



 
  template<typename _RandomAccessIterator>
    void
    __reverse(_RandomAccessIterator __first, _RandomAccessIterator __last,
	      random_access_iterator_tag)
    {
      if (__first == __last)
	return;
      --__last;
      while (__first < __last)
	{
	  std::iter_swap(__first, __last);
	  ++__first;
	  --__last;
	}
    }

  










 
  template<typename _BidirectionalIterator>
    inline void
    reverse(_BidirectionalIterator __first, _BidirectionalIterator __last)
    {
      
      
      ;
      std::__reverse(__first, __last, std::__iterator_category(__first));
    }

  














 
  template<typename _BidirectionalIterator, typename _OutputIterator>
    _OutputIterator
    reverse_copy(_BidirectionalIterator __first, _BidirectionalIterator __last,
		 _OutputIterator __result)
    {
      
      
      
      ;

      while (__first != __last)
	{
	  --__last;
	  *__result = *__last;
	  ++__result;
	}
      return __result;
    }

  


 
  template<typename _EuclideanRingElement>
    _EuclideanRingElement
    __gcd(_EuclideanRingElement __m, _EuclideanRingElement __n)
    {
      while (__n != 0)
	{
	  _EuclideanRingElement __t = __m % __n;
	  __m = __n;
	  __n = __t;
	}
      return __m;
    }

  
  template<typename _ForwardIterator>
    void
    __rotate(_ForwardIterator __first,
	     _ForwardIterator __middle,
	     _ForwardIterator __last,
	     forward_iterator_tag)
    {
      if (__first == __middle || __last  == __middle)
	return;

      _ForwardIterator __first2 = __middle;
      do
	{
	  std::iter_swap(__first, __first2);
	  ++__first;
	  ++__first2;
	  if (__first == __middle)
	    __middle = __first2;
	}
      while (__first2 != __last);

      __first2 = __middle;

      while (__first2 != __last)
	{
	  std::iter_swap(__first, __first2);
	  ++__first;
	  ++__first2;
	  if (__first == __middle)
	    __middle = __first2;
	  else if (__first2 == __last)
	    __first2 = __middle;
	}
    }

   
  template<typename _BidirectionalIterator>
    void
    __rotate(_BidirectionalIterator __first,
	     _BidirectionalIterator __middle,
	     _BidirectionalIterator __last,
	      bidirectional_iterator_tag)
    {
      
      

      if (__first == __middle || __last  == __middle)
	return;

      std::__reverse(__first,  __middle, bidirectional_iterator_tag());
      std::__reverse(__middle, __last,   bidirectional_iterator_tag());

      while (__first != __middle && __middle != __last)
	{
	  std::iter_swap(__first, --__last);
	  ++__first;
	}

      if (__first == __middle)
	std::__reverse(__middle, __last,   bidirectional_iterator_tag());
      else
	std::__reverse(__first,  __middle, bidirectional_iterator_tag());
    }

  
  template<typename _RandomAccessIterator>
    void
    __rotate(_RandomAccessIterator __first,
	     _RandomAccessIterator __middle,
	     _RandomAccessIterator __last,
	     random_access_iterator_tag)
    {
      
      

      if (__first == __middle || __last  == __middle)
	return;

      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
	_Distance;
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;

      const _Distance __n = __last   - __first;
      const _Distance __k = __middle - __first;
      const _Distance __l = __n - __k;

      if (__k == __l)
	{
	  std::swap_ranges(__first, __middle, __middle);
	  return;
	}

      const _Distance __d = std::__gcd(__n, __k);

      for (_Distance __i = 0; __i < __d; __i++)
	{
	  _ValueType __tmp = std::move(*__first);
	  _RandomAccessIterator __p = __first;

	  if (__k < __l)
	    {
	      for (_Distance __j = 0; __j < __l / __d; __j++)
		{
		  if (__p > __first + __l)
		    {
		      *__p = std::move(*(__p - __l));
		      __p -= __l;
		    }

		  *__p = std::move(*(__p + __k));
		  __p += __k;
		}
	    }
	  else
	    {
	      for (_Distance __j = 0; __j < __k / __d - 1; __j ++)
		{
		  if (__p < __last - __k)
		    {
		      *__p = std::move(*(__p + __k));
		      __p += __k;
		    }
		  *__p = std::move(*(__p - __l));
		  __p -= __l;
		}
	    }

	  *__p = std::move(__tmp);
	  ++__first;
	}
    }

  

















 
  template<typename _ForwardIterator>
    inline void
    rotate(_ForwardIterator __first, _ForwardIterator __middle,
	   _ForwardIterator __last)
    {
      
      
      ;
      ;

      typedef typename iterator_traits<_ForwardIterator>::iterator_category
	_IterType;
      std::__rotate(__first, __middle, __last, _IterType());
    }

  
















 
  template<typename _ForwardIterator, typename _OutputIterator>
    _OutputIterator
    rotate_copy(_ForwardIterator __first, _ForwardIterator __middle,
                _ForwardIterator __last, _OutputIterator __result)
    {
      
      
      
      ;
      ;

      return std::copy(__first, __middle,
                       std::copy(__middle, __last, __result));
    }

  
  template<typename _ForwardIterator, typename _Predicate>
    _ForwardIterator
    __partition(_ForwardIterator __first, _ForwardIterator __last,
		_Predicate __pred, forward_iterator_tag)
    {
      if (__first == __last)
	return __first;

      while (__pred(*__first))
	if (++__first == __last)
	  return __first;

      _ForwardIterator __next = __first;

      while (++__next != __last)
	if (__pred(*__next))
	  {
	    std::iter_swap(__first, __next);
	    ++__first;
	  }

      return __first;
    }

  
  template<typename _BidirectionalIterator, typename _Predicate>
    _BidirectionalIterator
    __partition(_BidirectionalIterator __first, _BidirectionalIterator __last,
		_Predicate __pred, bidirectional_iterator_tag)
    {
      while (true)
	{
	  while (true)
	    if (__first == __last)
	      return __first;
	    else if (__pred(*__first))
	      ++__first;
	    else
	      break;
	  --__last;
	  while (true)
	    if (__first == __last)
	      return __first;
	    else if (!bool(__pred(*__last)))
	      --__last;
	    else
	      break;
	  std::iter_swap(__first, __last);
	  ++__first;
	}
    }

  

  
  template<typename _ForwardIterator, typename _Predicate, typename _Distance>
    _ForwardIterator
    __inplace_stable_partition(_ForwardIterator __first,
			       _ForwardIterator __last,
			       _Predicate __pred, _Distance __len)
    {
      if (__len == 1)
	return __pred(*__first) ? __last : __first;
      _ForwardIterator __middle = __first;
      std::advance(__middle, __len / 2);
      _ForwardIterator __begin = std::__inplace_stable_partition(__first,
								 __middle,
								 __pred,
								 __len / 2);
      _ForwardIterator __end = std::__inplace_stable_partition(__middle, __last,
							       __pred,
							       __len
							       - __len / 2);
      std::rotate(__begin, __middle, __end);
      std::advance(__begin, std::distance(__middle, __end));
      return __begin;
    }

  
  template<typename _ForwardIterator, typename _Pointer, typename _Predicate,
	   typename _Distance>
    _ForwardIterator
    __stable_partition_adaptive(_ForwardIterator __first,
				_ForwardIterator __last,
				_Predicate __pred, _Distance __len,
				_Pointer __buffer,
				_Distance __buffer_size)
    {
      if (__len <= __buffer_size)
	{
	  _ForwardIterator __result1 = __first;
	  _Pointer __result2 = __buffer;
	  for (; __first != __last; ++__first)
	    if (__pred(*__first))
	      {
		*__result1 = *__first;
		++__result1;
	      }
	    else
	      {
		*__result2 = *__first;
		++__result2;
	      }
	  std::copy(__buffer, __result2, __result1);
	  return __result1;
	}
      else
	{
	  _ForwardIterator __middle = __first;
	  std::advance(__middle, __len / 2);
	  _ForwardIterator __begin =
	    std::__stable_partition_adaptive(__first, __middle, __pred,
					     __len / 2, __buffer,
					     __buffer_size);
	  _ForwardIterator __end =
	    std::__stable_partition_adaptive(__middle, __last, __pred,
					     __len - __len / 2,
					     __buffer, __buffer_size);
	  std::rotate(__begin, __middle, __end);
	  std::advance(__begin, std::distance(__middle, __end));
	  return __begin;
	}
    }

  















 
  template<typename _ForwardIterator, typename _Predicate>
    _ForwardIterator
    stable_partition(_ForwardIterator __first, _ForwardIterator __last,
		     _Predicate __pred)
    {
      
      
      
      ;

      if (__first == __last)
	return __first;
      else
	{
	  typedef typename iterator_traits<_ForwardIterator>::value_type
	    _ValueType;
	  typedef typename iterator_traits<_ForwardIterator>::difference_type
	    _DistanceType;

	  _Temporary_buffer<_ForwardIterator, _ValueType> __buf(__first,
								__last);
	if (__buf.size() > 0)
	  return
	    std::__stable_partition_adaptive(__first, __last, __pred,
					  _DistanceType(__buf.requested_size()),
					  __buf.begin(),
					  _DistanceType(__buf.size()));
	else
	  return
	    std::__inplace_stable_partition(__first, __last, __pred,
					 _DistanceType(__buf.requested_size()));
	}
    }

  
  template<typename _RandomAccessIterator>
    void
    __heap_select(_RandomAccessIterator __first,
		  _RandomAccessIterator __middle,
		  _RandomAccessIterator __last)
    {
      std::make_heap(__first, __middle);
      for (_RandomAccessIterator __i = __middle; __i < __last; ++__i)
	if (*__i < *__first)
	  std::__pop_heap(__first, __middle, __i);
    }

  
  template<typename _RandomAccessIterator, typename _Compare>
    void
    __heap_select(_RandomAccessIterator __first,
		  _RandomAccessIterator __middle,
		  _RandomAccessIterator __last, _Compare __comp)
    {
      std::make_heap(__first, __middle, __comp);
      for (_RandomAccessIterator __i = __middle; __i < __last; ++__i)
	if (__comp(*__i, *__first))
	  std::__pop_heap(__first, __middle, __i, __comp);
    }

  

  
















 
  template<typename _InputIterator, typename _RandomAccessIterator>
    _RandomAccessIterator
    partial_sort_copy(_InputIterator __first, _InputIterator __last,
		      _RandomAccessIterator __result_first,
		      _RandomAccessIterator __result_last)
    {
      typedef typename iterator_traits<_InputIterator>::value_type
	_InputValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_OutputValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
	_DistanceType;

      
      
      
      
      
      ;
      ;

      if (__result_first == __result_last)
	return __result_last;
      _RandomAccessIterator __result_real_last = __result_first;
      while(__first != __last && __result_real_last != __result_last)
	{
	  *__result_real_last = *__first;
	  ++__result_real_last;
	  ++__first;
	}
      std::make_heap(__result_first, __result_real_last);
      while (__first != __last)
	{
	  if (*__first < *__result_first)
	    std::__adjust_heap(__result_first, _DistanceType(0),
			       _DistanceType(__result_real_last
					     - __result_first),
			       _InputValueType(*__first));
	  ++__first;
	}
      std::sort_heap(__result_first, __result_real_last);
      return __result_real_last;
    }

  


















 
  template<typename _InputIterator, typename _RandomAccessIterator, typename _Compare>
    _RandomAccessIterator
    partial_sort_copy(_InputIterator __first, _InputIterator __last,
		      _RandomAccessIterator __result_first,
		      _RandomAccessIterator __result_last,
		      _Compare __comp)
    {
      typedef typename iterator_traits<_InputIterator>::value_type
	_InputValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_OutputValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
	_DistanceType;

      
      
      
      
      
      
      ;
      ;

      if (__result_first == __result_last)
	return __result_last;
      _RandomAccessIterator __result_real_last = __result_first;
      while(__first != __last && __result_real_last != __result_last)
	{
	  *__result_real_last = *__first;
	  ++__result_real_last;
	  ++__first;
	}
      std::make_heap(__result_first, __result_real_last, __comp);
      while (__first != __last)
	{
	  if (__comp(*__first, *__result_first))
	    std::__adjust_heap(__result_first, _DistanceType(0),
			       _DistanceType(__result_real_last
					     - __result_first),
			       _InputValueType(*__first),
			       __comp);
	  ++__first;
	}
      std::sort_heap(__result_first, __result_real_last, __comp);
      return __result_real_last;
    }

  
  template<typename _RandomAccessIterator, typename _Tp>
    void
    __unguarded_linear_insert(_RandomAccessIterator __last, _Tp __val)
    {
      _RandomAccessIterator __next = __last;
      --__next;
      while (__val < *__next)
	{
	  *__last = *__next;
	  __last = __next;
	  --__next;
	}
      *__last = __val;
    }

  
  template<typename _RandomAccessIterator, typename _Tp, typename _Compare>
    void
    __unguarded_linear_insert(_RandomAccessIterator __last, _Tp __val,
			      _Compare __comp)
    {
      _RandomAccessIterator __next = __last;
      --__next;
      while (__comp(__val, *__next))
	{
	  *__last = *__next;
	  __last = __next;
	  --__next;
	}
      *__last = __val;
    }

  
  template<typename _RandomAccessIterator>
    void
    __insertion_sort(_RandomAccessIterator __first,
		     _RandomAccessIterator __last)
    {
      if (__first == __last)
	return;

      for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i)
	{
	  typename iterator_traits<_RandomAccessIterator>::value_type
	    __val = *__i;
	  if (__val < *__first)
	    {
	      std::copy_backward(__first, __i, __i + 1);
	      *__first = __val;
	    }
	  else
	    std::__unguarded_linear_insert(__i, __val);
	}
    }

  
  template<typename _RandomAccessIterator, typename _Compare>
    void
    __insertion_sort(_RandomAccessIterator __first,
		     _RandomAccessIterator __last, _Compare __comp)
    {
      if (__first == __last) return;

      for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i)
	{
	  typename iterator_traits<_RandomAccessIterator>::value_type
	    __val = *__i;
	  if (__comp(__val, *__first))
	    {
	      std::copy_backward(__first, __i, __i + 1);
	      *__first = __val;
	    }
	  else
	    std::__unguarded_linear_insert(__i, __val, __comp);
	}
    }

  
  template<typename _RandomAccessIterator>
    inline void
    __unguarded_insertion_sort(_RandomAccessIterator __first,
			       _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;

      for (_RandomAccessIterator __i = __first; __i != __last; ++__i)
	std::__unguarded_linear_insert(__i, _ValueType(*__i));
    }

  
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    __unguarded_insertion_sort(_RandomAccessIterator __first,
			       _RandomAccessIterator __last, _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;

      for (_RandomAccessIterator __i = __first; __i != __last; ++__i)
	std::__unguarded_linear_insert(__i, _ValueType(*__i), __comp);
    }

  


 
  enum { _S_threshold = 16 };

  
  template<typename _RandomAccessIterator>
    void
    __final_insertion_sort(_RandomAccessIterator __first,
			   _RandomAccessIterator __last)
    {
      if (__last - __first > int(_S_threshold))
	{
	  std::__insertion_sort(__first, __first + int(_S_threshold));
	  std::__unguarded_insertion_sort(__first + int(_S_threshold), __last);
	}
      else
	std::__insertion_sort(__first, __last);
    }

  
  template<typename _RandomAccessIterator, typename _Compare>
    void
    __final_insertion_sort(_RandomAccessIterator __first,
			   _RandomAccessIterator __last, _Compare __comp)
    {
      if (__last - __first > int(_S_threshold))
	{
	  std::__insertion_sort(__first, __first + int(_S_threshold), __comp);
	  std::__unguarded_insertion_sort(__first + int(_S_threshold), __last,
					  __comp);
	}
      else
	std::__insertion_sort(__first, __last, __comp);
    }

  
  template<typename _RandomAccessIterator, typename _Tp>
    _RandomAccessIterator
    __unguarded_partition(_RandomAccessIterator __first,
			  _RandomAccessIterator __last, _Tp __pivot)
    {
      while (true)
	{
	  while (*__first < __pivot)
	    ++__first;
	  --__last;
	  while (__pivot < *__last)
	    --__last;
	  if (!(__first < __last))
	    return __first;
	  std::iter_swap(__first, __last);
	  ++__first;
	}
    }

  
  template<typename _RandomAccessIterator, typename _Tp, typename _Compare>
    _RandomAccessIterator
    __unguarded_partition(_RandomAccessIterator __first,
			  _RandomAccessIterator __last,
			  _Tp __pivot, _Compare __comp)
    {
      while (true)
	{
	  while (__comp(*__first, __pivot))
	    ++__first;
	  --__last;
	  while (__comp(__pivot, *__last))
	    --__last;
	  if (!(__first < __last))
	    return __first;
	  std::iter_swap(__first, __last);
	  ++__first;
	}
    }

  
  template<typename _RandomAccessIterator, typename _Size>
    void
    __introsort_loop(_RandomAccessIterator __first,
		     _RandomAccessIterator __last,
		     _Size __depth_limit)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;

      while (__last - __first > int(_S_threshold))
	{
	  if (__depth_limit == 0)
	    {
	      std::partial_sort(__first, __last, __last);
	      return;
	    }
	  --__depth_limit;
	  _RandomAccessIterator __cut =
	    std::__unguarded_partition(__first, __last,
				       _ValueType(std::__median(*__first,
								*(__first
								  + (__last
								     - __first)
								  / 2),
								*(__last
								  - 1))));
	  std::__introsort_loop(__cut, __last, __depth_limit);
	  __last = __cut;
	}
    }

  
  template<typename _RandomAccessIterator, typename _Size, typename _Compare>
    void
    __introsort_loop(_RandomAccessIterator __first,
		     _RandomAccessIterator __last,
		     _Size __depth_limit, _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;

      while (__last - __first > int(_S_threshold))
	{
	  if (__depth_limit == 0)
	    {
	      std::partial_sort(__first, __last, __last, __comp);
	      return;
	    }
	  --__depth_limit;
	  _RandomAccessIterator __cut =
	    std::__unguarded_partition(__first, __last,
				       _ValueType(std::__median(*__first,
								*(__first
								  + (__last
								     - __first)
								  / 2),
								*(__last - 1),
								__comp)),
				       __comp);
	  std::__introsort_loop(__cut, __last, __depth_limit, __comp);
	  __last = __cut;
	}
    }

  
  template<typename _Size>
    inline _Size
    __lg(_Size __n)
    {
      _Size __k;
      for (__k = 0; __n != 0; __n >>= 1)
	++__k;
      return __k - 1;
    }

  inline int
  __lg(int __n)
  { return sizeof(int) * 8  - 1 - __builtin_clz(__n); }

  inline long
  __lg(long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline long long
  __lg(long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }

  

  template<typename _RandomAccessIterator, typename _Size>
    void
    __introselect(_RandomAccessIterator __first, _RandomAccessIterator __nth,
		  _RandomAccessIterator __last, _Size __depth_limit)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;

      while (__last - __first > 3)
	{
	  if (__depth_limit == 0)
	    {
	      std::__heap_select(__first, __nth + 1, __last);

	      
	      std::iter_swap(__first, __nth);
	      return;
	    }
	  --__depth_limit;
	  _RandomAccessIterator __cut =
	    std::__unguarded_partition(__first, __last,
				       _ValueType(std::__median(*__first,
								*(__first
								  + (__last
								     - __first)
								  / 2),
								*(__last
								  - 1))));
	  if (__cut <= __nth)
	    __first = __cut;
	  else
	    __last = __cut;
	}
      std::__insertion_sort(__first, __last);
    }

  template<typename _RandomAccessIterator, typename _Size, typename _Compare>
    void
    __introselect(_RandomAccessIterator __first, _RandomAccessIterator __nth,
		  _RandomAccessIterator __last, _Size __depth_limit,
		  _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;

      while (__last - __first > 3)
	{
	  if (__depth_limit == 0)
	    {
	      std::__heap_select(__first, __nth + 1, __last, __comp);
	      
	      std::iter_swap(__first, __nth);
	      return;
	    }
	  --__depth_limit;
	  _RandomAccessIterator __cut =
	    std::__unguarded_partition(__first, __last,
				       _ValueType(std::__median(*__first,
								*(__first
								  + (__last
								     - __first)
								  / 2),
								*(__last - 1),
								__comp)),
				       __comp);
	  if (__cut <= __nth)
	    __first = __cut;
	  else
	    __last = __cut;
	}
      std::__insertion_sort(__first, __last, __comp);
    }

  

  









 
  template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
		const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
	_ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
	_DistanceType;

      
      
      
      ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
	{
	  __half = __len >> 1;
	  __middle = __first;
	  std::advance(__middle, __half);
	  if (*__middle < __val)
	    {
	      __first = __middle;
	      ++__first;
	      __len = __len - __half - 1;
	    }
	  else
	    __len = __half;
	}
      return __first;
    }

  













 
  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
		const _Tp& __val, _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
	_ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
	_DistanceType;

      
      
      
      ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
	{
	  __half = __len >> 1;
	  __middle = __first;
	  std::advance(__middle, __half);
	  if (__comp(*__middle, __val))
	    {
	      __first = __middle;
	      ++__first;
	      __len = __len - __half - 1;
	    }
	  else
	    __len = __half;
	}
      return __first;
    }

  









 
  template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    upper_bound(_ForwardIterator __first, _ForwardIterator __last,
		const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
	_ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
	_DistanceType;

      
      
      
      ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
	{
	  __half = __len >> 1;
	  __middle = __first;
	  std::advance(__middle, __half);
	  if (__val < *__middle)
	    __len = __half;
	  else
	    {
	      __first = __middle;
	      ++__first;
	      __len = __len - __half - 1;
	    }
	}
      return __first;
    }

  













 
  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    _ForwardIterator
    upper_bound(_ForwardIterator __first, _ForwardIterator __last,
		const _Tp& __val, _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
	_ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
	_DistanceType;

      
      
      
      ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
	{
	  __half = __len >> 1;
	  __middle = __first;
	  std::advance(__middle, __half);
	  if (__comp(__val, *__middle))
	    __len = __half;
	  else
	    {
	      __first = __middle;
	      ++__first;
	      __len = __len - __half - 1;
	    }
	}
      return __first;
    }

  















 
  template<typename _ForwardIterator, typename _Tp>
    pair<_ForwardIterator, _ForwardIterator>
    equal_range(_ForwardIterator __first, _ForwardIterator __last,
		const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
	_ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
	_DistanceType;

      
      
      
      	
      ;
      ;      

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle, __left, __right;

      while (__len > 0)
	{
	  __half = __len >> 1;
	  __middle = __first;
	  std::advance(__middle, __half);
	  if (*__middle < __val)
	    {
	      __first = __middle;
	      ++__first;
	      __len = __len - __half - 1;
	    }
	  else if (__val < *__middle)
	    __len = __half;
	  else
	    {
	      __left = std::lower_bound(__first, __middle, __val);
	      std::advance(__first, __len);
	      __right = std::upper_bound(++__middle, __first, __val);
	      return pair<_ForwardIterator, _ForwardIterator>(__left, __right);
	    }
	}
      return pair<_ForwardIterator, _ForwardIterator>(__first, __first);
    }

  















 
  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    pair<_ForwardIterator, _ForwardIterator>
    equal_range(_ForwardIterator __first, _ForwardIterator __last,
		const _Tp& __val,
		_Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
	_ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
	_DistanceType;

      
      
      
      
      ;
      ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle, __left, __right;

      while (__len > 0)
	{
	  __half = __len >> 1;
	  __middle = __first;
	  std::advance(__middle, __half);
	  if (__comp(*__middle, __val))
	    {
	      __first = __middle;
	      ++__first;
	      __len = __len - __half - 1;
	    }
	  else if (__comp(__val, *__middle))
	    __len = __half;
	  else
	    {
	      __left = std::lower_bound(__first, __middle, __val, __comp);
	      std::advance(__first, __len);
	      __right = std::upper_bound(++__middle, __first, __val, __comp);
	      return pair<_ForwardIterator, _ForwardIterator>(__left, __right);
	    }
	}
      return pair<_ForwardIterator, _ForwardIterator>(__first, __first);
    }

  









 
  template<typename _ForwardIterator, typename _Tp>
    bool
    binary_search(_ForwardIterator __first, _ForwardIterator __last,
                  const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
	_ValueType;

      
      
      
      ;
      ;

      _ForwardIterator __i = std::lower_bound(__first, __last, __val);
      return __i != __last && !(__val < *__i);
    }

  













 
  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    bool
    binary_search(_ForwardIterator __first, _ForwardIterator __last,
                  const _Tp& __val, _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
	_ValueType;

      
      
      
      ;
      ;

      _ForwardIterator __i = std::lower_bound(__first, __last, __val, __comp);
      return __i != __last && !bool(__comp(__val, *__i));
    }

  

  
  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2,
	   typename _BidirectionalIterator3>
    _BidirectionalIterator3
    __merge_backward(_BidirectionalIterator1 __first1,
		     _BidirectionalIterator1 __last1,
		     _BidirectionalIterator2 __first2,
		     _BidirectionalIterator2 __last2,
		     _BidirectionalIterator3 __result)
    {
      if (__first1 == __last1)
	return std::copy_backward(__first2, __last2, __result);
      if (__first2 == __last2)
	return std::copy_backward(__first1, __last1, __result);
      --__last1;
      --__last2;
      while (true)
	{
	  if (*__last2 < *__last1)
	    {
	      *--__result = *__last1;
	      if (__first1 == __last1)
		return std::copy_backward(__first2, ++__last2, __result);
	      --__last1;
	    }
	  else
	    {
	      *--__result = *__last2;
	      if (__first2 == __last2)
		return std::copy_backward(__first1, ++__last1, __result);
	      --__last2;
	    }
	}
    }

  
  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2,
	   typename _BidirectionalIterator3, typename _Compare>
    _BidirectionalIterator3
    __merge_backward(_BidirectionalIterator1 __first1,
		     _BidirectionalIterator1 __last1,
		     _BidirectionalIterator2 __first2,
		     _BidirectionalIterator2 __last2,
		     _BidirectionalIterator3 __result,
		     _Compare __comp)
    {
      if (__first1 == __last1)
	return std::copy_backward(__first2, __last2, __result);
      if (__first2 == __last2)
	return std::copy_backward(__first1, __last1, __result);
      --__last1;
      --__last2;
      while (true)
	{
	  if (__comp(*__last2, *__last1))
	    {
	      *--__result = *__last1;
	      if (__first1 == __last1)
		return std::copy_backward(__first2, ++__last2, __result);
	      --__last1;
	    }
	  else
	    {
	      *--__result = *__last2;
	      if (__first2 == __last2)
		return std::copy_backward(__first1, ++__last1, __result);
	      --__last2;
	    }
	}
    }

  
  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2,
	   typename _Distance>
    _BidirectionalIterator1
    __rotate_adaptive(_BidirectionalIterator1 __first,
		      _BidirectionalIterator1 __middle,
		      _BidirectionalIterator1 __last,
		      _Distance __len1, _Distance __len2,
		      _BidirectionalIterator2 __buffer,
		      _Distance __buffer_size)
    {
      _BidirectionalIterator2 __buffer_end;
      if (__len1 > __len2 && __len2 <= __buffer_size)
	{
	  __buffer_end = std::copy(__middle, __last, __buffer);
	  std::copy_backward(__first, __middle, __last);
	  return std::copy(__buffer, __buffer_end, __first);
	}
      else if (__len1 <= __buffer_size)
	{
	  __buffer_end = std::copy(__first, __middle, __buffer);
	  std::copy(__middle, __last, __first);
	  return std::copy_backward(__buffer, __buffer_end, __last);
	}
      else
	{
	  std::rotate(__first, __middle, __last);
	  std::advance(__first, std::distance(__middle, __last));
	  return __first;
	}
    }

  
  template<typename _BidirectionalIterator, typename _Distance,
	   typename _Pointer>
    void
    __merge_adaptive(_BidirectionalIterator __first,
                     _BidirectionalIterator __middle,
		     _BidirectionalIterator __last,
		     _Distance __len1, _Distance __len2,
		     _Pointer __buffer, _Distance __buffer_size)
    {
      if (__len1 <= __len2 && __len1 <= __buffer_size)
	{
	  _Pointer __buffer_end = std::copy(__first, __middle, __buffer);
	  std::merge(__buffer, __buffer_end, __middle, __last, 
				__first);
	}
      else if (__len2 <= __buffer_size)
	{
	  _Pointer __buffer_end = std::copy(__middle, __last, __buffer);
	  std::__merge_backward(__first, __middle, __buffer,
				__buffer_end, __last);
	}
      else
	{
	  _BidirectionalIterator __first_cut = __first;
	  _BidirectionalIterator __second_cut = __middle;
	  _Distance __len11 = 0;
	  _Distance __len22 = 0;
	  if (__len1 > __len2)
	    {
	      __len11 = __len1 / 2;
	      std::advance(__first_cut, __len11);
	      __second_cut = std::lower_bound(__middle, __last,
					      *__first_cut);
	      __len22 = std::distance(__middle, __second_cut);
	    }
	  else
	    {
	      __len22 = __len2 / 2;
	      std::advance(__second_cut, __len22);
	      __first_cut = std::upper_bound(__first, __middle,
					     *__second_cut);
	      __len11 = std::distance(__first, __first_cut);
	    }
	  _BidirectionalIterator __new_middle =
	    std::__rotate_adaptive(__first_cut, __middle, __second_cut,
				   __len1 - __len11, __len22, __buffer,
				   __buffer_size);
	  std::__merge_adaptive(__first, __first_cut, __new_middle, __len11,
				__len22, __buffer, __buffer_size);
	  std::__merge_adaptive(__new_middle, __second_cut, __last,
				__len1 - __len11,
				__len2 - __len22, __buffer, __buffer_size);
	}
    }

  
  template<typename _BidirectionalIterator, typename _Distance, 
	   typename _Pointer, typename _Compare>
    void
    __merge_adaptive(_BidirectionalIterator __first,
                     _BidirectionalIterator __middle,
		     _BidirectionalIterator __last,
		     _Distance __len1, _Distance __len2,
		     _Pointer __buffer, _Distance __buffer_size,
		     _Compare __comp)
    {
      if (__len1 <= __len2 && __len1 <= __buffer_size)
	{
	  _Pointer __buffer_end = std::copy(__first, __middle, __buffer);
	  std::merge(__buffer, __buffer_end, __middle, __last,
				__first, __comp);
	}
      else if (__len2 <= __buffer_size)
	{
	  _Pointer __buffer_end = std::copy(__middle, __last, __buffer);
	  std::__merge_backward(__first, __middle, __buffer, __buffer_end,
				__last, __comp);
	}
      else
	{
	  _BidirectionalIterator __first_cut = __first;
	  _BidirectionalIterator __second_cut = __middle;
	  _Distance __len11 = 0;
	  _Distance __len22 = 0;
	  if (__len1 > __len2)
	    {
	      __len11 = __len1 / 2;
	      std::advance(__first_cut, __len11);
	      __second_cut = std::lower_bound(__middle, __last, *__first_cut,
					      __comp);
	      __len22 = std::distance(__middle, __second_cut);
	    }
	  else
	    {
	      __len22 = __len2 / 2;
	      std::advance(__second_cut, __len22);
	      __first_cut = std::upper_bound(__first, __middle, *__second_cut,
					     __comp);
	      __len11 = std::distance(__first, __first_cut);
	    }
	  _BidirectionalIterator __new_middle =
	    std::__rotate_adaptive(__first_cut, __middle, __second_cut,
				   __len1 - __len11, __len22, __buffer,
				   __buffer_size);
	  std::__merge_adaptive(__first, __first_cut, __new_middle, __len11,
				__len22, __buffer, __buffer_size, __comp);
	  std::__merge_adaptive(__new_middle, __second_cut, __last,
				__len1 - __len11,
				__len2 - __len22, __buffer,
				__buffer_size, __comp);
	}
    }

  
  template<typename _BidirectionalIterator, typename _Distance>
    void
    __merge_without_buffer(_BidirectionalIterator __first,
			   _BidirectionalIterator __middle,
			   _BidirectionalIterator __last,
			   _Distance __len1, _Distance __len2)
    {
      if (__len1 == 0 || __len2 == 0)
	return;
      if (__len1 + __len2 == 2)
	{
	  if (*__middle < *__first)
	    std::iter_swap(__first, __middle);
	  return;
	}
      _BidirectionalIterator __first_cut = __first;
      _BidirectionalIterator __second_cut = __middle;
      _Distance __len11 = 0;
      _Distance __len22 = 0;
      if (__len1 > __len2)
	{
	  __len11 = __len1 / 2;
	  std::advance(__first_cut, __len11);
	  __second_cut = std::lower_bound(__middle, __last, *__first_cut);
	  __len22 = std::distance(__middle, __second_cut);
	}
      else
	{
	  __len22 = __len2 / 2;
	  std::advance(__second_cut, __len22);
	  __first_cut = std::upper_bound(__first, __middle, *__second_cut);
	  __len11 = std::distance(__first, __first_cut);
	}
      std::rotate(__first_cut, __middle, __second_cut);
      _BidirectionalIterator __new_middle = __first_cut;
      std::advance(__new_middle, std::distance(__middle, __second_cut));
      std::__merge_without_buffer(__first, __first_cut, __new_middle,
				  __len11, __len22);
      std::__merge_without_buffer(__new_middle, __second_cut, __last,
				  __len1 - __len11, __len2 - __len22);
    }

  
  template<typename _BidirectionalIterator, typename _Distance,
	   typename _Compare>
    void
    __merge_without_buffer(_BidirectionalIterator __first,
                           _BidirectionalIterator __middle,
			   _BidirectionalIterator __last,
			   _Distance __len1, _Distance __len2,
			   _Compare __comp)
    {
      if (__len1 == 0 || __len2 == 0)
	return;
      if (__len1 + __len2 == 2)
	{
	  if (__comp(*__middle, *__first))
	    std::iter_swap(__first, __middle);
	  return;
	}
      _BidirectionalIterator __first_cut = __first;
      _BidirectionalIterator __second_cut = __middle;
      _Distance __len11 = 0;
      _Distance __len22 = 0;
      if (__len1 > __len2)
	{
	  __len11 = __len1 / 2;
	  std::advance(__first_cut, __len11);
	  __second_cut = std::lower_bound(__middle, __last, *__first_cut,
					  __comp);
	  __len22 = std::distance(__middle, __second_cut);
	}
      else
	{
	  __len22 = __len2 / 2;
	  std::advance(__second_cut, __len22);
	  __first_cut = std::upper_bound(__first, __middle, *__second_cut,
					 __comp);
	  __len11 = std::distance(__first, __first_cut);
	}
      std::rotate(__first_cut, __middle, __second_cut);
      _BidirectionalIterator __new_middle = __first_cut;
      std::advance(__new_middle, std::distance(__middle, __second_cut));
      std::__merge_without_buffer(__first, __first_cut, __new_middle,
				  __len11, __len22, __comp);
      std::__merge_without_buffer(__new_middle, __second_cut, __last,
				  __len1 - __len11, __len2 - __len22, __comp);
    }

  
















 
  template<typename _BidirectionalIterator>
    void
    inplace_merge(_BidirectionalIterator __first,
		  _BidirectionalIterator __middle,
		  _BidirectionalIterator __last)
    {
      typedef typename iterator_traits<_BidirectionalIterator>::value_type
          _ValueType;
      typedef typename iterator_traits<_BidirectionalIterator>::difference_type
          _DistanceType;

      
      
      
      ;
      ;

      if (__first == __middle || __middle == __last)
	return;

      _DistanceType __len1 = std::distance(__first, __middle);
      _DistanceType __len2 = std::distance(__middle, __last);

      _Temporary_buffer<_BidirectionalIterator, _ValueType> __buf(__first,
								  __last);
      if (__buf.begin() == 0)
	std::__merge_without_buffer(__first, __middle, __last, __len1, __len2);
      else
	std::__merge_adaptive(__first, __middle, __last, __len1, __len2,
			      __buf.begin(), _DistanceType(__buf.size()));
    }

  




















 
  template<typename _BidirectionalIterator, typename _Compare>
    void
    inplace_merge(_BidirectionalIterator __first,
		  _BidirectionalIterator __middle,
		  _BidirectionalIterator __last,
		  _Compare __comp)
    {
      typedef typename iterator_traits<_BidirectionalIterator>::value_type
          _ValueType;
      typedef typename iterator_traits<_BidirectionalIterator>::difference_type
          _DistanceType;

      
      
      
      ;
      ;

      if (__first == __middle || __middle == __last)
	return;

      const _DistanceType __len1 = std::distance(__first, __middle);
      const _DistanceType __len2 = std::distance(__middle, __last);

      _Temporary_buffer<_BidirectionalIterator, _ValueType> __buf(__first,
								  __last);
      if (__buf.begin() == 0)
	std::__merge_without_buffer(__first, __middle, __last, __len1,
				    __len2, __comp);
      else
	std::__merge_adaptive(__first, __middle, __last, __len1, __len2,
			      __buf.begin(), _DistanceType(__buf.size()),
			      __comp);
    }

  template<typename _RandomAccessIterator1, typename _RandomAccessIterator2,
	   typename _Distance>
    void
    __merge_sort_loop(_RandomAccessIterator1 __first,
		      _RandomAccessIterator1 __last,
		      _RandomAccessIterator2 __result,
		      _Distance __step_size)
    {
      const _Distance __two_step = 2 * __step_size;

      while (__last - __first >= __two_step)
	{
	  __result = std::merge(__first, __first + __step_size,
					   __first + __step_size,
					   __first + __two_step,
					   __result);
	  __first += __two_step;
	}

      __step_size = std::min(_Distance(__last - __first), __step_size);
      std::merge(__first, __first + __step_size, 
			    __first + __step_size, __last,
			    __result);
    }

  template<typename _RandomAccessIterator1, typename _RandomAccessIterator2,
	   typename _Distance, typename _Compare>
    void
    __merge_sort_loop(_RandomAccessIterator1 __first,
		      _RandomAccessIterator1 __last,
		      _RandomAccessIterator2 __result, _Distance __step_size,
		      _Compare __comp)
    {
      const _Distance __two_step = 2 * __step_size;

      while (__last - __first >= __two_step)
	{
	  __result = std::merge(__first, __first + __step_size,
				__first + __step_size, __first + __two_step,
				__result,
				__comp);
	  __first += __two_step;
	}
      __step_size = std::min(_Distance(__last - __first), __step_size);

      std::merge(__first, __first + __step_size,
			    __first + __step_size, __last, __result, __comp);
    }

  template<typename _RandomAccessIterator, typename _Distance>
    void
    __chunk_insertion_sort(_RandomAccessIterator __first,
			   _RandomAccessIterator __last,
			   _Distance __chunk_size)
    {
      while (__last - __first >= __chunk_size)
	{
	  std::__insertion_sort(__first, __first + __chunk_size);
	  __first += __chunk_size;
	}
      std::__insertion_sort(__first, __last);
    }

  template<typename _RandomAccessIterator, typename _Distance,
	   typename _Compare>
    void
    __chunk_insertion_sort(_RandomAccessIterator __first,
			   _RandomAccessIterator __last,
			   _Distance __chunk_size, _Compare __comp)
    {
      while (__last - __first >= __chunk_size)
	{
	  std::__insertion_sort(__first, __first + __chunk_size, __comp);
	  __first += __chunk_size;
	}
      std::__insertion_sort(__first, __last, __comp);
    }

  enum { _S_chunk_size = 7 };

  template<typename _RandomAccessIterator, typename _Pointer>
    void
    __merge_sort_with_buffer(_RandomAccessIterator __first,
			     _RandomAccessIterator __last,
                             _Pointer __buffer)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
	_Distance;

      const _Distance __len = __last - __first;
      const _Pointer __buffer_last = __buffer + __len;

      _Distance __step_size = _S_chunk_size;
      std::__chunk_insertion_sort(__first, __last, __step_size);

      while (__step_size < __len)
	{
	  std::__merge_sort_loop(__first, __last, __buffer, __step_size);
	  __step_size *= 2;
	  std::__merge_sort_loop(__buffer, __buffer_last, __first, __step_size);
	  __step_size *= 2;
	}
    }

  template<typename _RandomAccessIterator, typename _Pointer, typename _Compare>
    void
    __merge_sort_with_buffer(_RandomAccessIterator __first,
			     _RandomAccessIterator __last,
                             _Pointer __buffer, _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
	_Distance;

      const _Distance __len = __last - __first;
      const _Pointer __buffer_last = __buffer + __len;

      _Distance __step_size = _S_chunk_size;
      std::__chunk_insertion_sort(__first, __last, __step_size, __comp);

      while (__step_size < __len)
	{
	  std::__merge_sort_loop(__first, __last, __buffer,
				 __step_size, __comp);
	  __step_size *= 2;
	  std::__merge_sort_loop(__buffer, __buffer_last, __first,
				 __step_size, __comp);
	  __step_size *= 2;
	}
    }

  template<typename _RandomAccessIterator, typename _Pointer,
	   typename _Distance>
    void
    __stable_sort_adaptive(_RandomAccessIterator __first,
			   _RandomAccessIterator __last,
                           _Pointer __buffer, _Distance __buffer_size)
    {
      const _Distance __len = (__last - __first + 1) / 2;
      const _RandomAccessIterator __middle = __first + __len;
      if (__len > __buffer_size)
	{
	  std::__stable_sort_adaptive(__first, __middle,
				      __buffer, __buffer_size);
	  std::__stable_sort_adaptive(__middle, __last,
				      __buffer, __buffer_size);
	}
      else
	{
	  std::__merge_sort_with_buffer(__first, __middle, __buffer);
	  std::__merge_sort_with_buffer(__middle, __last, __buffer);
	}
      std::__merge_adaptive(__first, __middle, __last,
			    _Distance(__middle - __first),
			    _Distance(__last - __middle),
			    __buffer, __buffer_size);
    }

  template<typename _RandomAccessIterator, typename _Pointer,
	   typename _Distance, typename _Compare>
    void
    __stable_sort_adaptive(_RandomAccessIterator __first,
			   _RandomAccessIterator __last,
                           _Pointer __buffer, _Distance __buffer_size,
                           _Compare __comp)
    {
      const _Distance __len = (__last - __first + 1) / 2;
      const _RandomAccessIterator __middle = __first + __len;
      if (__len > __buffer_size)
	{
	  std::__stable_sort_adaptive(__first, __middle, __buffer,
				      __buffer_size, __comp);
	  std::__stable_sort_adaptive(__middle, __last, __buffer,
				      __buffer_size, __comp);
	}
      else
	{
	  std::__merge_sort_with_buffer(__first, __middle, __buffer, __comp);
	  std::__merge_sort_with_buffer(__middle, __last, __buffer, __comp);
	}
      std::__merge_adaptive(__first, __middle, __last,
			    _Distance(__middle - __first),
			    _Distance(__last - __middle),
			    __buffer, __buffer_size,
			    __comp);
    }

  
  template<typename _RandomAccessIterator>
    void
    __inplace_stable_sort(_RandomAccessIterator __first,
			  _RandomAccessIterator __last)
    {
      if (__last - __first < 15)
	{
	  std::__insertion_sort(__first, __last);
	  return;
	}
      _RandomAccessIterator __middle = __first + (__last - __first) / 2;
      std::__inplace_stable_sort(__first, __middle);
      std::__inplace_stable_sort(__middle, __last);
      std::__merge_without_buffer(__first, __middle, __last,
				  __middle - __first,
				  __last - __middle);
    }

  
  template<typename _RandomAccessIterator, typename _Compare>
    void
    __inplace_stable_sort(_RandomAccessIterator __first,
			  _RandomAccessIterator __last, _Compare __comp)
    {
      if (__last - __first < 15)
	{
	  std::__insertion_sort(__first, __last, __comp);
	  return;
	}
      _RandomAccessIterator __middle = __first + (__last - __first) / 2;
      std::__inplace_stable_sort(__first, __middle, __comp);
      std::__inplace_stable_sort(__middle, __last, __comp);
      std::__merge_without_buffer(__first, __middle, __last,
				  __middle - __first,
				  __last - __middle,
				  __comp);
    }

  

  
  
  
  

  














 
  template<typename _InputIterator1, typename _InputIterator2>
    bool
    includes(_InputIterator1 __first1, _InputIterator1 __last1,
	     _InputIterator2 __first2, _InputIterator2 __last2)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
	_ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
	_ValueType2;

      
      
      
      
      
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
	if (*__first2 < *__first1)
	  return false;
	else if(*__first1 < *__first2)
	  ++__first1;
	else
	  ++__first1, ++__first2;

      return __first2 == __last2;
    }

  


















 
  template<typename _InputIterator1, typename _InputIterator2,
	   typename _Compare>
    bool
    includes(_InputIterator1 __first1, _InputIterator1 __last1,
	     _InputIterator2 __first2, _InputIterator2 __last2,
	     _Compare __comp)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
	_ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
	_ValueType2;

      
      
      
      
      
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
	if (__comp(*__first2, *__first1))
	  return false;
	else if(__comp(*__first1, *__first2))
	  ++__first1;
	else
	  ++__first1, ++__first2;

      return __first2 == __last2;
    }

  
  
  
  
  
  
  
  
  

  










 
  template<typename _BidirectionalIterator>
    bool
    next_permutation(_BidirectionalIterator __first,
		     _BidirectionalIterator __last)
    {
      
      
      
      ;

      if (__first == __last)
	return false;
      _BidirectionalIterator __i = __first;
      ++__i;
      if (__i == __last)
	return false;
      __i = __last;
      --__i;

      for(;;)
	{
	  _BidirectionalIterator __ii = __i;
	  --__i;
	  if (*__i < *__ii)
	    {
	      _BidirectionalIterator __j = __last;
	      while (!(*__i < *--__j))
		{}
	      std::iter_swap(__i, __j);
	      std::reverse(__ii, __last);
	      return true;
	    }
	  if (__i == __first)
	    {
	      std::reverse(__first, __last);
	      return false;
	    }
	}
    }

  













 
  template<typename _BidirectionalIterator, typename _Compare>
    bool
    next_permutation(_BidirectionalIterator __first,
		     _BidirectionalIterator __last, _Compare __comp)
    {
      
      
      
      ;

      if (__first == __last)
	return false;
      _BidirectionalIterator __i = __first;
      ++__i;
      if (__i == __last)
	return false;
      __i = __last;
      --__i;

      for(;;)
	{
	  _BidirectionalIterator __ii = __i;
	  --__i;
	  if (__comp(*__i, *__ii))
	    {
	      _BidirectionalIterator __j = __last;
	      while (!bool(__comp(*__i, *--__j)))
		{}
	      std::iter_swap(__i, __j);
	      std::reverse(__ii, __last);
	      return true;
	    }
	  if (__i == __first)
	    {
	      std::reverse(__first, __last);
	      return false;
	    }
	}
    }

  











 
  template<typename _BidirectionalIterator>
    bool
    prev_permutation(_BidirectionalIterator __first,
		     _BidirectionalIterator __last)
    {
      
      
      
      ;

      if (__first == __last)
	return false;
      _BidirectionalIterator __i = __first;
      ++__i;
      if (__i == __last)
	return false;
      __i = __last;
      --__i;

      for(;;)
	{
	  _BidirectionalIterator __ii = __i;
	  --__i;
	  if (*__ii < *__i)
	    {
	      _BidirectionalIterator __j = __last;
	      while (!(*--__j < *__i))
		{}
	      std::iter_swap(__i, __j);
	      std::reverse(__ii, __last);
	      return true;
	    }
	  if (__i == __first)
	    {
	      std::reverse(__first, __last);
	      return false;
	    }
	}
    }

  













 
  template<typename _BidirectionalIterator, typename _Compare>
    bool
    prev_permutation(_BidirectionalIterator __first,
		     _BidirectionalIterator __last, _Compare __comp)
    {
      
      
      
      ;

      if (__first == __last)
	return false;
      _BidirectionalIterator __i = __first;
      ++__i;
      if (__i == __last)
	return false;
      __i = __last;
      --__i;

      for(;;)
	{
	  _BidirectionalIterator __ii = __i;
	  --__i;
	  if (__comp(*__ii, *__i))
	    {
	      _BidirectionalIterator __j = __last;
	      while (!bool(__comp(*--__j, *__i)))
		{}
	      std::iter_swap(__i, __j);
	      std::reverse(__ii, __last);
	      return true;
	    }
	  if (__i == __first)
	    {
	      std::reverse(__first, __last);
	      return false;
	    }
	}
    }

  
  

  












 
  template<typename _InputIterator, typename _OutputIterator, typename _Tp>
    _OutputIterator
    replace_copy(_InputIterator __first, _InputIterator __last,
		 _OutputIterator __result,
		 const _Tp& __old_value, const _Tp& __new_value)
    {
      
      
      
      
      ;

      for (; __first != __last; ++__first, ++__result)
	if (*__first == __old_value)
	  *__result = __new_value;
	else
	  *__result = *__first;
      return __result;
    }

  













 
  template<typename _InputIterator, typename _OutputIterator,
	   typename _Predicate, typename _Tp>
    _OutputIterator
    replace_copy_if(_InputIterator __first, _InputIterator __last,
		    _OutputIterator __result,
		    _Predicate __pred, const _Tp& __new_value)
    {
      
      
      
      
      ;

      for (; __first != __last; ++__first, ++__result)
	if (__pred(*__first))
	  *__result = __new_value;
	else
	  *__result = *__first;
      return __result;
    }

  





 
  template<typename _ForwardIterator>
    inline bool
    is_sorted(_ForwardIterator __first, _ForwardIterator __last)
    { return std::is_sorted_until(__first, __last) == __last; }

  







 
  template<typename _ForwardIterator, typename _Compare>
    inline bool
    is_sorted(_ForwardIterator __first, _ForwardIterator __last,
	      _Compare __comp)
    { return std::is_sorted_until(__first, __last, __comp) == __last; }

  






 
  template<typename _ForwardIterator>
    _ForwardIterator
    is_sorted_until(_ForwardIterator __first, _ForwardIterator __last)
    {
      
      
      
      ;

      if (__first == __last)
	return __last;

      _ForwardIterator __next = __first;
      for (++__next; __next != __last; __first = __next, ++__next)
	if (*__next < *__first)
	  return __next;
      return __next;
    }

  







 
  template<typename _ForwardIterator, typename _Compare>
    _ForwardIterator
    is_sorted_until(_ForwardIterator __first, _ForwardIterator __last,
		    _Compare __comp)
    {
      
      
      
      ;

      if (__first == __last)
	return __last;

      _ForwardIterator __next = __first;
      for (++__next; __next != __last; __first = __next, ++__next)
	if (__comp(*__next, *__first))
	  return __next;
      return __next;
    }

  





 
  template<typename _Tp>
    inline pair<const _Tp&, const _Tp&>
    minmax(const _Tp& __a, const _Tp& __b)
    {
      
      

      return __b < __a ? pair<const _Tp&, const _Tp&>(__b, __a)
	               : pair<const _Tp&, const _Tp&>(__a, __b);
    }

  






 
  template<typename _Tp, typename _Compare>
    inline pair<const _Tp&, const _Tp&>
    minmax(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {
      return __comp(__b, __a) ? pair<const _Tp&, const _Tp&>(__b, __a)
	                      : pair<const _Tp&, const _Tp&>(__a, __b);
    }

  









 
  template<typename _ForwardIterator>
    pair<_ForwardIterator, _ForwardIterator>
    minmax_element(_ForwardIterator __first, _ForwardIterator __last)
    {
      
      
      
      ;

      _ForwardIterator __next = __first;
      if (__first == __last
	  || ++__next == __last)
	return std::make_pair(__first, __first);

      _ForwardIterator __min, __max;
      if (*__next < *__first)
	{
	  __min = __next;
	  __max = __first;
	}
      else
	{
	  __min = __first;
	  __max = __next;
	}

      __first = __next;
      ++__first;

      while (__first != __last)
	{
	  __next = __first;
	  if (++__next == __last)
	    {
	      if (*__first < *__min)
		__min = __first;
	      else if (!(*__first < *__max))
		__max = __first;
	      break;
	    }

	  if (*__next < *__first)
	    {
	      if (*__next < *__min)
		__min = __next;
	      if (!(*__first < *__max))
		__max = __first;
	    }
	  else
	    {
	      if (*__first < *__min)
		__min = __first;
	      if (!(*__next < *__max))
		__max = __next;
	    }

	  __first = __next;
	  ++__first;
	}

      return std::make_pair(__min, __max);
    }

  










 
  template<typename _ForwardIterator, typename _Compare>
    pair<_ForwardIterator, _ForwardIterator>
    minmax_element(_ForwardIterator __first, _ForwardIterator __last,
		   _Compare __comp)
    {
      
      
      
      ;

      _ForwardIterator __next = __first;
      if (__first == __last
	  || ++__next == __last)
	return std::make_pair(__first, __first);

      _ForwardIterator __min, __max;
      if (__comp(*__next, *__first))
	{
	  __min = __next;
	  __max = __first;
	}
      else
	{
	  __min = __first;
	  __max = __next;
	}

      __first = __next;
      ++__first;

      while (__first != __last)
	{
	  __next = __first;
	  if (++__next == __last)
	    {
	      if (__comp(*__first, *__min))
		__min = __first;
	      else if (!__comp(*__first, *__max))
		__max = __first;
	      break;
	    }

	  if (__comp(*__next, *__first))
	    {
	      if (__comp(*__next, *__min))
		__min = __next;
	      if (!__comp(*__first, *__max))
		__max = __first;
	    }
	  else
	    {
	      if (__comp(*__first, *__min))
		__min = __first;
	      if (!__comp(*__next, *__max))
		__max = __next;
	    }

	  __first = __next;
	  ++__first;
	}

      return std::make_pair(__min, __max);
    }

  
  template<typename _Tp>
    inline _Tp
    min(initializer_list<_Tp> __l)
    { return *std::min_element(__l.begin(), __l.end()); }

  template<typename _Tp, typename _Compare>
    inline _Tp
    min(initializer_list<_Tp> __l, _Compare __comp)
    { return *std::min_element(__l.begin(), __l.end(), __comp); }

  template<typename _Tp>
    inline _Tp
    max(initializer_list<_Tp> __l)
    { return *std::max_element(__l.begin(), __l.end()); }

  template<typename _Tp, typename _Compare>
    inline _Tp
    max(initializer_list<_Tp> __l, _Compare __comp)
    { return *std::max_element(__l.begin(), __l.end(), __comp); }

  template<typename _Tp>
    inline pair<_Tp, _Tp>
    minmax(initializer_list<_Tp> __l)
    {
      pair<const _Tp*, const _Tp*> __p =
	std::minmax_element(__l.begin(), __l.end());
      return std::make_pair(*__p.first, *__p.second);
    }

  template<typename _Tp, typename _Compare>
    inline pair<_Tp, _Tp>
    minmax(initializer_list<_Tp> __l, _Compare __comp)
    {
      pair<const _Tp*, const _Tp*> __p =
	std::minmax_element(__l.begin(), __l.end(), __comp);
      return std::make_pair(*__p.first, *__p.second);
    }

}

namespace std __attribute__ ((__visibility__ ("default"))) {

  










 
  template<typename _InputIterator, typename _Function>
    _Function
    for_each(_InputIterator __first, _InputIterator __last, _Function __f)
    {
      
      
      ;
      for (; __first != __last; ++__first)
	__f(*__first);
      return __f;
    }

  







 
  template<typename _InputIterator, typename _Tp>
    inline _InputIterator
    find(_InputIterator __first, _InputIterator __last,
	 const _Tp& __val)
    {
      
      
      
      ;
      return std::__find(__first, __last, __val,
		         std::__iterator_category(__first));
    }

  








 
  template<typename _InputIterator, typename _Predicate>
    inline _InputIterator
    find_if(_InputIterator __first, _InputIterator __last,
	    _Predicate __pred)
    {
      
      
      
      ;
      return std::__find_if(__first, __last, __pred,
			    std::__iterator_category(__first));
    }

  













 
  template<typename _InputIterator, typename _ForwardIterator>
    _InputIterator
    find_first_of(_InputIterator __first1, _InputIterator __last1,
		  _ForwardIterator __first2, _ForwardIterator __last2)
    {
      
      
      
      
      ;
      ;

      for (; __first1 != __last1; ++__first1)
	for (_ForwardIterator __iter = __first2; __iter != __last2; ++__iter)
	  if (*__first1 == *__iter)
	    return __first1;
      return __last1;
    }

  
















 
  template<typename _InputIterator, typename _ForwardIterator,
	   typename _BinaryPredicate>
    _InputIterator
    find_first_of(_InputIterator __first1, _InputIterator __last1,
		  _ForwardIterator __first2, _ForwardIterator __last2,
		  _BinaryPredicate __comp)
    {
      
      
      
      
      ;
      ;

      for (; __first1 != __last1; ++__first1)
	for (_ForwardIterator __iter = __first2; __iter != __last2; ++__iter)
	  if (__comp(*__first1, *__iter))
	    return __first1;
      return __last1;
    }

  







 
  template<typename _ForwardIterator>
    _ForwardIterator
    adjacent_find(_ForwardIterator __first, _ForwardIterator __last)
    {
      
      
      
      ;
      if (__first == __last)
	return __last;
      _ForwardIterator __next = __first;
      while(++__next != __last)
	{
	  if (*__first == *__next)
	    return __first;
	  __first = __next;
	}
      return __last;
    }

  









 
  template<typename _ForwardIterator, typename _BinaryPredicate>
    _ForwardIterator
    adjacent_find(_ForwardIterator __first, _ForwardIterator __last,
		  _BinaryPredicate __binary_pred)
    {
      
      
      
      ;
      if (__first == __last)
	return __last;
      _ForwardIterator __next = __first;
      while(++__next != __last)
	{
	  if (__binary_pred(*__first, *__next))
	    return __first;
	  __first = __next;
	}
      return __last;
    }

  







 
  template<typename _InputIterator, typename _Tp>
    typename iterator_traits<_InputIterator>::difference_type
    count(_InputIterator __first, _InputIterator __last, const _Tp& __value)
    {
      
      
      
      ;
      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      for (; __first != __last; ++__first)
	if (*__first == __value)
	  ++__n;
      return __n;
    }

  







 
  template<typename _InputIterator, typename _Predicate>
    typename iterator_traits<_InputIterator>::difference_type
    count_if(_InputIterator __first, _InputIterator __last, _Predicate __pred)
    {
      
      
      
      ;
      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      for (; __first != __last; ++__first)
	if (__pred(*__first))
	  ++__n;
      return __n;
    }

  






















 
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator1
    search(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
	   _ForwardIterator2 __first2, _ForwardIterator2 __last2)
    {
      
      
      
      
      ;
      ;

      
      if (__first1 == __last1 || __first2 == __last2)
	return __first1;

      
      _ForwardIterator2 __p1(__first2);
      if (++__p1 == __last2)
	return std::find(__first1, __last1, *__first2);

      
      _ForwardIterator2 __p;
      _ForwardIterator1 __current = __first1;

      for (;;)
	{
	  __first1 = std::find(__first1, __last1, *__first2);
	  if (__first1 == __last1)
	    return __last1;

	  __p = __p1;
	  __current = __first1;
	  if (++__current == __last1)
	    return __last1;

	  while (*__current == *__p)
	    {
	      if (++__p == __last2)
		return __first1;
	      if (++__current == __last1)
		return __last1;
	    }
	  ++__first1;
	}
      return __first1;
    }

  



















 
  template<typename _ForwardIterator1, typename _ForwardIterator2,
	   typename _BinaryPredicate>
    _ForwardIterator1
    search(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
	   _ForwardIterator2 __first2, _ForwardIterator2 __last2,
	   _BinaryPredicate  __predicate)
    {
      
      
      
      
      ;
      ;

      
      if (__first1 == __last1 || __first2 == __last2)
	return __first1;

      
      _ForwardIterator2 __p1(__first2);
      if (++__p1 == __last2)
	{
	  while (__first1 != __last1
		 && !bool(__predicate(*__first1, *__first2)))
	    ++__first1;
	  return __first1;
	}

      
      _ForwardIterator2 __p;
      _ForwardIterator1 __current = __first1;

      for (;;)
	{
	  while (__first1 != __last1
		 && !bool(__predicate(*__first1, *__first2)))
	    ++__first1;
	  if (__first1 == __last1)
	    return __last1;

	  __p = __p1;
	  __current = __first1;
	  if (++__current == __last1)
	    return __last1;

	  while (__predicate(*__current, *__p))
	    {
	      if (++__p == __last2)
		return __first1;
	      if (++__current == __last1)
		return __last1;
	    }
	  ++__first1;
	}
      return __first1;
    }


  












 
  template<typename _ForwardIterator, typename _Integer, typename _Tp>
    _ForwardIterator
    search_n(_ForwardIterator __first, _ForwardIterator __last,
	     _Integer __count, const _Tp& __val)
    {
      
      
      
      ;

      if (__count <= 0)
	return __first;
      if (__count == 1)
	return std::find(__first, __last, __val);
      return std::__search_n(__first, __last, __count, __val,
			     std::__iterator_category(__first));
    }


  














 
  template<typename _ForwardIterator, typename _Integer, typename _Tp,
           typename _BinaryPredicate>
    _ForwardIterator
    search_n(_ForwardIterator __first, _ForwardIterator __last,
	     _Integer __count, const _Tp& __val,
	     _BinaryPredicate __binary_pred)
    {
      
      
      
      ;

      if (__count <= 0)
	return __first;
      if (__count == 1)
	{
	  while (__first != __last && !bool(__binary_pred(*__first, __val)))
	    ++__first;
	  return __first;
	}
      return std::__search_n(__first, __last, __count, __val, __binary_pred,
			     std::__iterator_category(__first));
    }


  














 
  template<typename _InputIterator, typename _OutputIterator,
	   typename _UnaryOperation>
    _OutputIterator
    transform(_InputIterator __first, _InputIterator __last,
	      _OutputIterator __result, _UnaryOperation __unary_op)
    {
      
      
      
      ;

      for (; __first != __last; ++__first, ++__result)
	*__result = __unary_op(*__first);
      return __result;
    }

  
















 
  template<typename _InputIterator1, typename _InputIterator2,
	   typename _OutputIterator, typename _BinaryOperation>
    _OutputIterator
    transform(_InputIterator1 __first1, _InputIterator1 __last1,
	      _InputIterator2 __first2, _OutputIterator __result,
	      _BinaryOperation __binary_op)
    {
      
      
      
      
      ;

      for (; __first1 != __last1; ++__first1, ++__first2, ++__result)
	*__result = __binary_op(*__first1, *__first2);
      return __result;
    }

  











 
  template<typename _ForwardIterator, typename _Tp>
    void
    replace(_ForwardIterator __first, _ForwardIterator __last,
	    const _Tp& __old_value, const _Tp& __new_value)
    {
      
      
      
      
      ;

      for (; __first != __last; ++__first)
	if (*__first == __old_value)
	  *__first = __new_value;
    }

  











 
  template<typename _ForwardIterator, typename _Predicate, typename _Tp>
    void
    replace_if(_ForwardIterator __first, _ForwardIterator __last,
	       _Predicate __pred, const _Tp& __new_value)
    {
      
      
      
      
      ;

      for (; __first != __last; ++__first)
	if (__pred(*__first))
	  *__first = __new_value;
    }

  











 
  template<typename _ForwardIterator, typename _Generator>
    void
    generate(_ForwardIterator __first, _ForwardIterator __last,
	     _Generator __gen)
    {
      
      
      
      ;

      for (; __first != __last; ++__first)
	*__first = __gen();
    }

  











 
  template<typename _OutputIterator, typename _Size, typename _Generator>
    _OutputIterator
    generate_n(_OutputIterator __first, _Size __n, _Generator __gen)
    {
      
      

      for (; __n > 0; --__n, ++__first)
	*__first = __gen();
      return __first;
    }


  



















 
  template<typename _InputIterator, typename _OutputIterator>
    inline _OutputIterator
    unique_copy(_InputIterator __first, _InputIterator __last,
		_OutputIterator __result)
    {
      
      
      
      
      ;

      if (__first == __last)
	return __result;
      return std::__unique_copy(__first, __last, __result,
				std::__iterator_category(__first),
				std::__iterator_category(__result));
    }

  

















 
  template<typename _InputIterator, typename _OutputIterator,
	   typename _BinaryPredicate>
    inline _OutputIterator
    unique_copy(_InputIterator __first, _InputIterator __last,
		_OutputIterator __result,
		_BinaryPredicate __binary_pred)
    {
      
      
      
      ;

      if (__first == __last)
	return __result;
      return std::__unique_copy(__first, __last, __result, __binary_pred,
				std::__iterator_category(__first),
				std::__iterator_category(__result));
    }


  









 
  template<typename _RandomAccessIterator>
    inline void
    random_shuffle(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      
      
      ;

      if (__first != __last)
	for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i)
	  std::iter_swap(__i, __first + (std::rand() % ((__i - __first) + 1)));
    }

  












 
  template<typename _RandomAccessIterator, typename _RandomNumberGenerator>
    void
    random_shuffle(_RandomAccessIterator __first, _RandomAccessIterator __last,
		   _RandomNumberGenerator& __rand)
    {
      
      
      ;

      if (__first == __last)
	return;
      for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i)
	std::iter_swap(__i, __first + __rand((__i - __first) + 1));
    }


  













 
  template<typename _ForwardIterator, typename _Predicate>
    inline _ForwardIterator
    partition(_ForwardIterator __first, _ForwardIterator __last,
	      _Predicate   __pred)
    {
      
      
      
      ;

      return std::__partition(__first, __last, __pred,
			      std::__iterator_category(__first));
    }



  














 
  template<typename _RandomAccessIterator>
    inline void
    partial_sort(_RandomAccessIterator __first,
		 _RandomAccessIterator __middle,
		 _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;

      
      
      
      ;
      ;

      std::__heap_select(__first, __middle, __last);
      std::sort_heap(__first, __middle);
    }

  

















 
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    partial_sort(_RandomAccessIterator __first,
		 _RandomAccessIterator __middle,
		 _RandomAccessIterator __last,
		 _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;

      
      
      
      ;
      ;

      std::__heap_select(__first, __middle, __last, __comp);
      std::sort_heap(__first, __middle, __comp);
    }

  














 
  template<typename _RandomAccessIterator>
    inline void
    nth_element(_RandomAccessIterator __first, _RandomAccessIterator __nth,
		_RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;

      
      
      
      ;
      ;

      if (__first == __last || __nth == __last)
	return;

      std::__introselect(__first, __nth, __last,
			 std::__lg(__last - __first) * 2);
    }

  















 
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    nth_element(_RandomAccessIterator __first, _RandomAccessIterator __nth,
		_RandomAccessIterator __last, _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;

      
      
      
      ;
      ;

      if (__first == __last || __nth == __last)
	return;

      std::__introselect(__first, __nth, __last,
			 std::__lg(__last - __first) * 2, __comp);
    }


  












 
  template<typename _RandomAccessIterator>
    inline void
    sort(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;

      
      
      
      ;

      if (__first != __last)
	{
	  std::__introsort_loop(__first, __last,
				std::__lg(__last - __first) * 2);
	  std::__final_insertion_sort(__first, __last);
	}
    }

  













 
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    sort(_RandomAccessIterator __first, _RandomAccessIterator __last,
	 _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;

      
      
      
      ;

      if (__first != __last)
	{
	  std::__introsort_loop(__first, __last,
				std::__lg(__last - __first) * 2, __comp);
	  std::__final_insertion_sort(__first, __last, __comp);
	}
    }

  
















 
  template<typename _InputIterator1, typename _InputIterator2,
	   typename _OutputIterator>
    _OutputIterator
    merge(_InputIterator1 __first1, _InputIterator1 __last1,
	  _InputIterator2 __first2, _InputIterator2 __last2,
	  _OutputIterator __result)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
	_ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
	_ValueType2;

      
      
      
      
      
      	
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
	{
	  if (*__first2 < *__first1)
	    {
	      *__result = *__first2;
	      ++__first2;
	    }
	  else
	    {
	      *__result = *__first1;
	      ++__first1;
	    }
	  ++__result;
	}
      return std::copy(__first2, __last2, std::copy(__first1, __last1,
						    __result));
    }

  




















 
  template<typename _InputIterator1, typename _InputIterator2,
	   typename _OutputIterator, typename _Compare>
    _OutputIterator
    merge(_InputIterator1 __first1, _InputIterator1 __last1,
	  _InputIterator2 __first2, _InputIterator2 __last2,
	  _OutputIterator __result, _Compare __comp)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
	_ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
	_ValueType2;

      
      
      
      
      
      
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
	{
	  if (__comp(*__first2, *__first1))
	    {
	      *__result = *__first2;
	      ++__first2;
	    }
	  else
	    {
	      *__result = *__first1;
	      ++__first1;
	    }
	  ++__result;
	}
      return std::copy(__first2, __last2, std::copy(__first1, __last1,
						    __result));
    }


  















 
  template<typename _RandomAccessIterator>
    inline void
    stable_sort(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
	_DistanceType;

      
      
      
      ;

      _Temporary_buffer<_RandomAccessIterator, _ValueType> __buf(__first,
								 __last);
      if (__buf.begin() == 0)
	std::__inplace_stable_sort(__first, __last);
      else
	std::__stable_sort_adaptive(__first, __last, __buf.begin(),
				    _DistanceType(__buf.size()));
    }

  
















 
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    stable_sort(_RandomAccessIterator __first, _RandomAccessIterator __last,
		_Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
	_ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
	_DistanceType;

      
      
      
      ;

      _Temporary_buffer<_RandomAccessIterator, _ValueType> __buf(__first,
								 __last);
      if (__buf.begin() == 0)
	std::__inplace_stable_sort(__first, __last, __comp);
      else
	std::__stable_sort_adaptive(__first, __last, __buf.begin(),
				    _DistanceType(__buf.size()), __comp);
    }


  
















 
  template<typename _InputIterator1, typename _InputIterator2,
	   typename _OutputIterator>
    _OutputIterator
    set_union(_InputIterator1 __first1, _InputIterator1 __last1,
	      _InputIterator2 __first2, _InputIterator2 __last2,
	      _OutputIterator __result)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
	_ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
	_ValueType2;

      
      
      
      
      
      
      
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
	{
	  if (*__first1 < *__first2)
	    {
	      *__result = *__first1;
	      ++__first1;
	    }
	  else if (*__first2 < *__first1)
	    {
	      *__result = *__first2;
	      ++__first2;
	    }
	  else
	    {
	      *__result = *__first1;
	      ++__first1;
	      ++__first2;
	    }
	  ++__result;
	}
      return std::copy(__first2, __last2, std::copy(__first1, __last1,
						    __result));
    }

  

















 
  template<typename _InputIterator1, typename _InputIterator2,
	   typename _OutputIterator, typename _Compare>
    _OutputIterator
    set_union(_InputIterator1 __first1, _InputIterator1 __last1,
	      _InputIterator2 __first2, _InputIterator2 __last2,
	      _OutputIterator __result, _Compare __comp)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
	_ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
	_ValueType2;

      
      
      
      
      
      
      
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
	{
	  if (__comp(*__first1, *__first2))
	    {
	      *__result = *__first1;
	      ++__first1;
	    }
	  else if (__comp(*__first2, *__first1))
	    {
	      *__result = *__first2;
	      ++__first2;
	    }
	  else
	    {
	      *__result = *__first1;
	      ++__first1;
	      ++__first2;
	    }
	  ++__result;
	}
      return std::copy(__first2, __last2, std::copy(__first1, __last1,
						    __result));
    }

  















 
  template<typename _InputIterator1, typename _InputIterator2,
	   typename _OutputIterator>
    _OutputIterator
    set_intersection(_InputIterator1 __first1, _InputIterator1 __last1,
		     _InputIterator2 __first2, _InputIterator2 __last2,
		     _OutputIterator __result)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
	_ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
	_ValueType2;

      
      
      
      
      
      
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
	if (*__first1 < *__first2)
	  ++__first1;
	else if (*__first2 < *__first1)
	  ++__first2;
	else
	  {
	    *__result = *__first1;
	    ++__first1;
	    ++__first2;
	    ++__result;
	  }
      return __result;
    }

  


















 
  template<typename _InputIterator1, typename _InputIterator2,
	   typename _OutputIterator, typename _Compare>
    _OutputIterator
    set_intersection(_InputIterator1 __first1, _InputIterator1 __last1,
		     _InputIterator2 __first2, _InputIterator2 __last2,
		     _OutputIterator __result, _Compare __comp)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
	_ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
	_ValueType2;

      
      
      
      
      
      
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
	if (__comp(*__first1, *__first2))
	  ++__first1;
	else if (__comp(*__first2, *__first1))
	  ++__first2;
	else
	  {
	    *__result = *__first1;
	    ++__first1;
	    ++__first2;
	    ++__result;
	  }
      return __result;
    }

  

















 
  template<typename _InputIterator1, typename _InputIterator2,
	   typename _OutputIterator>
    _OutputIterator
    set_difference(_InputIterator1 __first1, _InputIterator1 __last1,
		   _InputIterator2 __first2, _InputIterator2 __last2,
		   _OutputIterator __result)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
	_ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
	_ValueType2;

      
      
      
      
      
      	
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
	if (*__first1 < *__first2)
	  {
	    *__result = *__first1;
	    ++__first1;
	    ++__result;
	  }
	else if (*__first2 < *__first1)
	  ++__first2;
	else
	  {
	    ++__first1;
	    ++__first2;
	  }
      return std::copy(__first1, __last1, __result);
    }

  




















 
  template<typename _InputIterator1, typename _InputIterator2,
	   typename _OutputIterator, typename _Compare>
    _OutputIterator
    set_difference(_InputIterator1 __first1, _InputIterator1 __last1,
		   _InputIterator2 __first2, _InputIterator2 __last2,
		   _OutputIterator __result, _Compare __comp)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
	_ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
	_ValueType2;

      
      
      
      
      
      
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
	if (__comp(*__first1, *__first2))
	  {
	    *__result = *__first1;
	    ++__first1;
	    ++__result;
	  }
	else if (__comp(*__first2, *__first1))
	  ++__first2;
	else
	  {
	    ++__first1;
	    ++__first2;
	  }
      return std::copy(__first1, __last1, __result);
    }

  















 
  template<typename _InputIterator1, typename _InputIterator2,
	   typename _OutputIterator>
    _OutputIterator
    set_symmetric_difference(_InputIterator1 __first1, _InputIterator1 __last1,
			     _InputIterator2 __first2, _InputIterator2 __last2,
			     _OutputIterator __result)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
	_ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
	_ValueType2;

      
      
      
      
      
      
      	
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
	if (*__first1 < *__first2)
	  {
	    *__result = *__first1;
	    ++__first1;
	    ++__result;
	  }
	else if (*__first2 < *__first1)
	  {
	    *__result = *__first2;
	    ++__first2;
	    ++__result;
	  }
	else
	  {
	    ++__first1;
	    ++__first2;
	  }
      return std::copy(__first2, __last2, std::copy(__first1,
						    __last1, __result));
    }

  


















 
  template<typename _InputIterator1, typename _InputIterator2,
	   typename _OutputIterator, typename _Compare>
    _OutputIterator
    set_symmetric_difference(_InputIterator1 __first1, _InputIterator1 __last1,
			     _InputIterator2 __first2, _InputIterator2 __last2,
			     _OutputIterator __result,
			     _Compare __comp)
    {
      typedef typename iterator_traits<_InputIterator1>::value_type
	_ValueType1;
      typedef typename iterator_traits<_InputIterator2>::value_type
	_ValueType2;

      
      
      
      
      
      
      
      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
	if (__comp(*__first1, *__first2))
	  {
	    *__result = *__first1;
	    ++__first1;
	    ++__result;
	  }
	else if (__comp(*__first2, *__first1))
	  {
	    *__result = *__first2;
	    ++__first2;
	    ++__result;
	  }
	else
	  {
	    ++__first1;
	    ++__first2;
	  }
      return std::copy(__first2, __last2, 
		       std::copy(__first1, __last1, __result));
    }


  





 
  template<typename _ForwardIterator>
    _ForwardIterator
    min_element(_ForwardIterator __first, _ForwardIterator __last)
    {
      
      
      
      ;

      if (__first == __last)
	return __first;
      _ForwardIterator __result = __first;
      while (++__first != __last)
	if (*__first < *__result)
	  __result = __first;
      return __result;
    }

  







 
  template<typename _ForwardIterator, typename _Compare>
    _ForwardIterator
    min_element(_ForwardIterator __first, _ForwardIterator __last,
		_Compare __comp)
    {
      
      
      
      ;

      if (__first == __last)
	return __first;
      _ForwardIterator __result = __first;
      while (++__first != __last)
	if (__comp(*__first, *__result))
	  __result = __first;
      return __result;
    }

  





 
  template<typename _ForwardIterator>
    _ForwardIterator
    max_element(_ForwardIterator __first, _ForwardIterator __last)
    {
      
      
      
      ;

      if (__first == __last)
	return __first;
      _ForwardIterator __result = __first;
      while (++__first != __last)
	if (*__result < *__first)
	  __result = __first;
      return __result;
    }

  







 
  template<typename _ForwardIterator, typename _Compare>
    _ForwardIterator
    max_element(_ForwardIterator __first, _ForwardIterator __last,
		_Compare __comp)
    {
      
      
      
      ;

      if (__first == __last) return __first;
      _ForwardIterator __result = __first;
      while (++__first != __last)
	if (__comp(*__result, *__first))
	  __result = __first;
      return __result;
    }

}





































 




























 



 



namespace boost
{

template<class T> class shared_ptr;
template<class T> class weak_ptr;
template<class T> class enable_shared_from_this;
class enable_shared_from_raw;

namespace detail
{



template< class T > struct sp_element
{
    typedef T type;
};


template< class T > struct sp_element< T[] >
{
    typedef T type;
};


template< class T, std::size_t N > struct sp_element< T[N] >
{
    typedef T type;
};





template< class T > struct sp_dereference
{
    typedef T & type;
};

template<> struct sp_dereference< void >
{
    typedef void type;
};


template<> struct sp_dereference< void const >
{
    typedef void type;
};

template<> struct sp_dereference< void volatile >
{
    typedef void type;
};

template<> struct sp_dereference< void const volatile >
{
    typedef void type;
};



template< class T > struct sp_dereference< T[] >
{
    typedef void type;
};


template< class T, std::size_t N > struct sp_dereference< T[N] >
{
    typedef void type;
};





template< class T > struct sp_member_access
{
    typedef T * type;
};


template< class T > struct sp_member_access< T[] >
{
    typedef void type;
};


template< class T, std::size_t N > struct sp_member_access< T[N] >
{
    typedef void type;
};





template< class T > struct sp_array_access
{
    typedef void type;
};


template< class T > struct sp_array_access< T[] >
{
    typedef T & type;
};


template< class T, std::size_t N > struct sp_array_access< T[N] >
{
    typedef T & type;
};





template< class T > struct sp_extent
{
    enum _vt { value = 0 };
};


template< class T, std::size_t N > struct sp_extent< T[N] >
{
    enum _vt { value = N };
};




template< class X, class Y, class T > inline void sp_enable_shared_from_this( boost::shared_ptr<X> const * ppx, Y const * py, boost::enable_shared_from_this< T > const * pe )
{
    if( pe != 0 )
    {
        pe->_internal_accept_owner( ppx, const_cast< Y* >( py ) );
    }
}

template< class X, class Y > inline void sp_enable_shared_from_this( boost::shared_ptr<X> * ppx, Y const * py, boost::enable_shared_from_raw const * pe );


inline void sp_enable_shared_from_this( ... )
{
}





template< class T, class R > struct sp_enable_if_auto_ptr
{
};

template< class T, class R > struct sp_enable_if_auto_ptr< std::auto_ptr< T >, R >
{
    typedef R type;
}; 




template< class Y, class T > inline void sp_assert_convertible()
{

    
    typedef char tmp[ sp_convertible< Y, T >::value? 1: -1 ];
    (void)sizeof( tmp );

}



template< class T, class Y > inline void sp_pointer_construct( boost::shared_ptr< T > * ppx, Y * p, boost::detail::shared_count & pn )
{
    boost::detail::shared_count( p ).swap( pn );
    boost::detail::sp_enable_shared_from_this( ppx, p, p );
}


template< class T, class Y > inline void sp_pointer_construct( boost::shared_ptr< T[] > *  , Y * p, boost::detail::shared_count & pn )
{
    sp_assert_convertible< Y[], T[] >();
    boost::detail::shared_count( p, boost::checked_array_deleter< T >() ).swap( pn );
}

template< class T, std::size_t N, class Y > inline void sp_pointer_construct( boost::shared_ptr< T[N] > *  , Y * p, boost::detail::shared_count & pn )
{
    sp_assert_convertible< Y[N], T[N] >();
    boost::detail::shared_count( p, boost::checked_array_deleter< T >() ).swap( pn );
}




template< class T, class Y > inline void sp_deleter_construct( boost::shared_ptr< T > * ppx, Y * p )
{
    boost::detail::sp_enable_shared_from_this( ppx, p, p );
}


template< class T, class Y > inline void sp_deleter_construct( boost::shared_ptr< T[] > *  , Y *   )
{
    sp_assert_convertible< Y[], T[] >();
}

template< class T, std::size_t N, class Y > inline void sp_deleter_construct( boost::shared_ptr< T[N] > *  , Y *   )
{
    sp_assert_convertible< Y[N], T[N] >();
}


} 










template<class T> class shared_ptr
{
private:

    
    typedef shared_ptr<T> this_type;

public:

    typedef typename boost::detail::sp_element< T >::type element_type;

    shared_ptr()  : px( 0 ), pn() 
    {
    }


    template<class Y>
    explicit shared_ptr( Y * p ): px( p ), pn() 
    {
        boost::detail::sp_pointer_construct( this, p, pn );
    }

    
    
    
    
    

    template<class Y, class D> shared_ptr( Y * p, D d ): px( p ), pn( p, d )
    {
        boost::detail::sp_deleter_construct( this, p );
    }


    

    template<class Y, class D, class A> shared_ptr( Y * p, D d, A a ): px( p ), pn( p, d, a )
    {
        boost::detail::sp_deleter_construct( this, p );
    }





    template<class Y>
    explicit shared_ptr( weak_ptr<Y> const & r ): pn( r.pn ) 
    {
        boost::detail::sp_assert_convertible< Y, T >();

        
        px = r.px;
    }

    template<class Y>
    shared_ptr( weak_ptr<Y> const & r, boost::detail::sp_nothrow_tag )
     : px( 0 ), pn( r.pn, boost::detail::sp_nothrow_tag() )
    {
        if( !pn.empty() )
        {
            px = r.px;
        }
    }

    template<class Y>

    shared_ptr( shared_ptr<Y> const & r, typename boost::detail::sp_enable_if_convertible<Y,T>::type = boost::detail::sp_empty() )

     : px( r.px ), pn( r.pn )
    {
        boost::detail::sp_assert_convertible< Y, T >();
    }

    
    template< class Y >
    shared_ptr( shared_ptr<Y> const & r, element_type * p )  : px( p ), pn( r.pn )
    {
    }


    template<class Y>
    explicit shared_ptr( std::auto_ptr<Y> & r ): px(r.get()), pn()
    {
        boost::detail::sp_assert_convertible< Y, T >();

        Y * tmp = r.get();
        pn = boost::detail::shared_count( r );

        boost::detail::sp_deleter_construct( this, tmp );
    }


    template<class Ap>
    explicit shared_ptr( Ap r, typename boost::detail::sp_enable_if_auto_ptr<Ap, int>::type = 0 ): px( r.get() ), pn()
    {
        typedef typename Ap::element_type Y;

        boost::detail::sp_assert_convertible< Y, T >();

        Y * tmp = r.get();
        pn = boost::detail::shared_count( r );

        boost::detail::sp_deleter_construct( this, tmp );
    }




    

    shared_ptr & operator=( shared_ptr const & r ) 
    {
        this_type(r).swap(*this);
        return *this;
    }


    template<class Y>
    shared_ptr & operator=(shared_ptr<Y> const & r) 
    {
        this_type(r).swap(*this);
        return *this;
    }



    template<class Y>
    shared_ptr & operator=( std::auto_ptr<Y> & r )
    {
        this_type( r ).swap( *this );
        return *this;
    }


    template<class Ap>
    typename boost::detail::sp_enable_if_auto_ptr< Ap, shared_ptr & >::type operator=( Ap r )
    {
        this_type( r ).swap( *this );
        return *this;
    }








    void reset()  
    {
        this_type().swap(*this);
    }

    template<class Y> void reset( Y * p ) 
    {
        ((p == 0 || p != px) ? static_cast<void> (0) : __assert_fail ("p == 0 || p != px", "/usr/gapps/bdiv/chaos_5_x86_64_ib/ic-14-opt-mvapich2-1.9-c++11/boost/1_54_0/include/boost/smart_ptr/shared_ptr.hpp", 624, __PRETTY_FUNCTION__)); 
        this_type( p ).swap( *this );
    }

    template<class Y, class D> void reset( Y * p, D d )
    {
        this_type( p, d ).swap( *this );
    }

    template<class Y, class D, class A> void reset( Y * p, D d, A a )
    {
        this_type( p, d, a ).swap( *this );
    }

    template<class Y> void reset( shared_ptr<Y> const & r, element_type * p )
    {
        this_type( r, p ).swap( *this );
    }
    
    
    typename boost::detail::sp_dereference< T >::type operator* () const
    {
        ((px != 0) ? static_cast<void> (0) : __assert_fail ("px != 0", "/usr/gapps/bdiv/chaos_5_x86_64_ib/ic-14-opt-mvapich2-1.9-c++11/boost/1_54_0/include/boost/smart_ptr/shared_ptr.hpp", 646, __PRETTY_FUNCTION__));
        return *px;
    }
    
    
    typename boost::detail::sp_member_access< T >::type operator-> () const 
    {
        ((px != 0) ? static_cast<void> (0) : __assert_fail ("px != 0", "/usr/gapps/bdiv/chaos_5_x86_64_ib/ic-14-opt-mvapich2-1.9-c++11/boost/1_54_0/include/boost/smart_ptr/shared_ptr.hpp", 653, __PRETTY_FUNCTION__));
        return px;
    }
    
    
    typename boost::detail::sp_array_access< T >::type operator[] ( std::ptrdiff_t i ) const
    {
        ((px != 0) ? static_cast<void> (0) : __assert_fail ("px != 0", "/usr/gapps/bdiv/chaos_5_x86_64_ib/ic-14-opt-mvapich2-1.9-c++11/boost/1_54_0/include/boost/smart_ptr/shared_ptr.hpp", 660, __PRETTY_FUNCTION__));
        ((i >= 0 && ( i < boost::detail::sp_extent< T > ::value || boost::detail::sp_extent< T > ::value == 0 )) ? static_cast<void> (0) : __assert_fail ("i >= 0 && ( i < boost::detail::sp_extent< T >::value || boost::detail::sp_extent< T >::value == 0 )", "/usr/gapps/bdiv/chaos_5_x86_64_ib/ic-14-opt-mvapich2-1.9-c++11/boost/1_54_0/include/boost/smart_ptr/shared_ptr.hpp", 661, __PRETTY_FUNCTION__));

        return px[ i ];
    }

    element_type * get() const 
    {
        return px;
    }











    typedef element_type * this_type::*unspecified_bool_type;

    operator unspecified_bool_type() const 
    {
        return px == 0? 0: &this_type::px;
    }


    
    bool operator! () const 
    {
        return px == 0;
    }

    bool unique() const 
    {
        return pn.unique();
    }

    long use_count() const 
    {
        return pn.use_count();
    }

    void swap( shared_ptr & other ) 
    {
        std::swap(px, other.px);
        pn.swap(other.pn);
    }

    template<class Y> bool owner_before( shared_ptr<Y> const & rhs ) const 
    {
        return pn < rhs.pn;
    }

    template<class Y> bool owner_before( weak_ptr<Y> const & rhs ) const 
    {
        return pn < rhs.pn;
    }

    void * _internal_get_deleter( boost::detail::sp_typeinfo const & ti ) const 
    {
        return pn.get_deleter( ti );
    }

    void * _internal_get_untyped_deleter() const 
    {
        return pn.get_untyped_deleter();
    }

    bool _internal_equiv( shared_ptr const & r ) const 
    {
        return px == r.px && pn == r.pn;
    }





private:

    template<class Y> friend class shared_ptr;
    template<class Y> friend class weak_ptr;



    element_type * px;                 
    boost::detail::shared_count pn;    

};  

template<class T, class U> inline bool operator==(shared_ptr<T> const & a, shared_ptr<U> const & b) 
{
    return a.get() == b.get();
}

template<class T, class U> inline bool operator!=(shared_ptr<T> const & a, shared_ptr<U> const & b) 
{
    return a.get() != b.get();
}



template<class T, class U> inline bool operator<(shared_ptr<T> const & a, shared_ptr<U> const & b) 
{
    return a.owner_before( b );
}

template<class T> inline void swap(shared_ptr<T> & a, shared_ptr<T> & b) 
{
    a.swap(b);
}

template<class T, class U> shared_ptr<T> static_pointer_cast( shared_ptr<U> const & r ) 
{
    (void) static_cast< T* >( static_cast< U* >( 0 ) );

    typedef typename shared_ptr<T>::element_type E;

    E * p = static_cast< E* >( r.get() );
    return shared_ptr<T>( r, p );
}

template<class T, class U> shared_ptr<T> const_pointer_cast( shared_ptr<U> const & r ) 
{
    (void) const_cast< T* >( static_cast< U* >( 0 ) );

    typedef typename shared_ptr<T>::element_type E;

    E * p = const_cast< E* >( r.get() );
    return shared_ptr<T>( r, p );
}

template<class T, class U> shared_ptr<T> dynamic_pointer_cast( shared_ptr<U> const & r ) 
{
    (void) dynamic_cast< T* >( static_cast< U* >( 0 ) );

    typedef typename shared_ptr<T>::element_type E;

    E * p = dynamic_cast< E* >( r.get() );
    return p? shared_ptr<T>( r, p ): shared_ptr<T>();
}

template<class T, class U> shared_ptr<T> reinterpret_pointer_cast( shared_ptr<U> const & r ) 
{
    (void) reinterpret_cast< T* >( static_cast< U* >( 0 ) );

    typedef typename shared_ptr<T>::element_type E;

    E * p = reinterpret_cast< E* >( r.get() );
    return shared_ptr<T>( r, p );
}



template<class T> inline typename shared_ptr<T>::element_type * get_pointer(shared_ptr<T> const & p) 
{
    return p.get();
}







template<class E, class T, class Y> std::basic_ostream<E, T> & operator<< (std::basic_ostream<E, T> & os, shared_ptr<Y> const & p)
{
    os << p.get();
    return os;
}






namespace detail
{


template<class D, class T> D * basic_get_deleter( shared_ptr<T> const & p ) 
{
    return static_cast<D *>( p._internal_get_deleter(typeid(D)) );
}


class esft2_deleter_wrapper
{
private:

    shared_ptr<void> deleter_;

public:

    esft2_deleter_wrapper()
    {
    }

    template< class T > void set_deleter( shared_ptr<T> const & deleter )
    {
        deleter_ = deleter;
    }

    template<typename D> D* get_deleter() const 
    {
        return boost::detail::basic_get_deleter<D>( deleter_ );
    }

    template< class T> void operator()( T* )
    {
        ((deleter_ . use_count() <= 1) ? static_cast<void> (0) : __assert_fail ("deleter_.use_count() <= 1", "/usr/gapps/bdiv/chaos_5_x86_64_ib/ic-14-opt-mvapich2-1.9-c++11/boost/1_54_0/include/boost/smart_ptr/shared_ptr.hpp", 921, __PRETTY_FUNCTION__));
        deleter_.reset();
    }
};

} 

template<class D, class T> D * get_deleter( shared_ptr<T> const & p ) 
{
    D *del = boost::detail::basic_get_deleter<D>(p);

    if(del == 0)
    {
        boost::detail::esft2_deleter_wrapper *del_wrapper = boost::detail::basic_get_deleter<boost::detail::esft2_deleter_wrapper>(p);


        if(del_wrapper) del = del_wrapper->::boost::detail::esft2_deleter_wrapper::get_deleter<D>();
    }

    return del;
}




template<class T> inline bool atomic_is_lock_free( shared_ptr<T> const *   ) 
{
    return false;
}

template<class T> shared_ptr<T> atomic_load( shared_ptr<T> const * p )
{
    boost::detail::spinlock_pool<2>::scoped_lock lock( p );
    return *p;
}

template<class T> inline shared_ptr<T> atomic_load_explicit( shared_ptr<T> const * p, memory_order   )
{
    return atomic_load( p );
}

template<class T> void atomic_store( shared_ptr<T> * p, shared_ptr<T> r )
{
    boost::detail::spinlock_pool<2>::scoped_lock lock( p );
    p->swap( r );
}

template<class T> inline void atomic_store_explicit( shared_ptr<T> * p, shared_ptr<T> r, memory_order   )
{
    atomic_store( p, r ); 
}

template<class T> shared_ptr<T> atomic_exchange( shared_ptr<T> * p, shared_ptr<T> r )
{
    boost::detail::spinlock & sp = boost::detail::spinlock_pool<2>::spinlock_for( p );

    sp.lock();
    p->swap( r );
    sp.unlock();

    return r; 
}

template<class T> shared_ptr<T> atomic_exchange_explicit( shared_ptr<T> * p, shared_ptr<T> r, memory_order   )
{
    return atomic_exchange( p, r ); 
}

template<class T> bool atomic_compare_exchange( shared_ptr<T> * p, shared_ptr<T> * v, shared_ptr<T> w )
{
    boost::detail::spinlock & sp = boost::detail::spinlock_pool<2>::spinlock_for( p );

    sp.lock();

    if( p->_internal_equiv( *v ) )
    {
        p->swap( w );

        sp.unlock();

        return true;
    }
    else
    {
        shared_ptr<T> tmp( *p );

        sp.unlock();

        tmp.swap( *v );
        return false;
    }
}

template<class T> inline bool atomic_compare_exchange_explicit( shared_ptr<T> * p, shared_ptr<T> * v, shared_ptr<T> w, memory_order  , memory_order   )
{
    return atomic_compare_exchange( p, v, w ); 
}




template< class T > struct hash;

template< class T > std::size_t hash_value( boost::shared_ptr<T> const & p ) 
{
    return boost::hash< T* >()( p.get() );
}

} 




























































 




























 



 
































































































































namespace boost { namespace mpl { namespace aux {

template< typename T > struct value_type_wknd
{
    typedef typename T::value_type type;
};


}}}






















































































































namespace boost { namespace mpl {

struct void_;

}}













































namespace boost { namespace mpl {

template< bool C_ > struct bool_;


typedef bool_<true> true_;
typedef bool_<false> false_;

}}





































namespace boost { namespace mpl {
struct integral_c_tag { static const int value = 0; };
}}



namespace boost { namespace mpl {

template< bool C_ > struct bool_
{
    static const bool value = C_;
    typedef integral_c_tag tag;
    typedef bool_ type;
    typedef bool value_type;
    operator bool() const { return this->value; }
};

template< bool C_ >
bool const bool_<C_>::value;

}}
















namespace boost { namespace mpl {


struct na
{
    typedef na type;
    enum { value = 0 };
};

}}





















namespace boost { namespace mpl {

template< typename T >
struct is_na
    : false_
{
};

template<>
struct is_na<na>
    : true_
{
};

template< typename T >
struct is_not_na
    : true_
{
};

template<>
struct is_not_na<na>
    : false_
{
};

template< typename T, typename U > struct if_na
{
    typedef T type;
};

template< typename U > struct if_na<na,U>
{
    typedef U type;
};

}}




















































































































namespace boost { namespace mpl {

template< int N > struct int_;

}}























namespace boost { namespace mpl {

template< int N >
struct int_
{
    static const int value = N;


    typedef int_ type;
    typedef int value_type;
    typedef integral_c_tag tag;




    typedef boost::mpl::int_< static_cast<int>((value + 1)) > next;
    typedef boost::mpl::int_< static_cast<int>((value - 1)) > prior;

    
    
    
    
    operator int() const { return static_cast<int>(this->value); } 
};

template< int N >
int const boost::mpl::int_< N > ::value;

}}
































namespace boost { namespace mpl { namespace aux {

template< typename F > struct template_arity;

}}}


namespace boost { namespace mpl {

template< 
      typename T = na
    , typename Tag = void_
    
    >
struct lambda;

}}











































































































































































































namespace boost { namespace mpl {


template<
      bool C
    , typename T1
    , typename T2
    >
struct if_c
{
    typedef T1 type;
};

template<
      typename T1
    , typename T2
    >
struct if_c<false,T1,T2>
{
    typedef T2 type;
};



template<
      typename T1 = na
    , typename T2 = na
    , typename T3 = na
    >
struct if_
{
 private:
    
    typedef if_c<
          static_cast<bool>(T1::value)
        , T2
        , T3
        > almost_type_;
 
 public:
    typedef typename almost_type_::type type;
    
    
};


template< > struct if_<  na , na , na > { template<  typename T1 , typename T2 , typename T3 , typename T4 =na  , typename T5 =na  > struct apply : if_<  T1 , T2 , T3 > { }; }; template< typename Tag > struct lambda< if_<  na , na , na > , Tag  > { typedef false_ is_le; typedef if_<  na , na , na > result_; typedef if_<  na , na , na > type; };   

}}
















































namespace boost { namespace mpl {

namespace aux {

template< long C_ > 
struct not_impl
    : bool_<!C_>
{
};

} 


template<
      typename T = na
    >
struct not_
    : aux::not_impl<
          T::type::value
        >
{
    
};

template< > struct not_<  na > { template<  typename T1 , typename T2 =na  , typename T3 =na  , typename T4 =na  , typename T5 =na  > struct apply : not_<  T1 > { }; }; template< typename Tag > struct lambda< not_<  na > , Tag  > { typedef false_ is_le; typedef not_<  na > result_; typedef not_<  na > type; };   

}}

































namespace boost { namespace mpl { namespace aux {

typedef char (&no_tag)[1];
typedef char (&yes_tag)[2];

template< bool C_ > struct yes_no_tag
{
    typedef no_tag type;
};

template<> struct yes_no_tag<true>
{
    typedef yes_tag type;
};


template< long n > struct weighted_tag
{
    typedef char (&type)[n];
};


}}}





















































 




























 



 










namespace boost { namespace mpl {

struct failed {};





template< bool C >  struct assert        { typedef void* type; };
template<>          struct assert<false> { typedef assert type; };

template< bool C >
int assertion_failed( typename assert<C>::type );

template< bool C >
struct assertion
{
    static int failed( assert<false> );
};

template<>
struct assertion<true>
{
    static int failed( void* );
};

struct assert_
{
    template< typename T1, typename T2 = na, typename T3 = na, typename T4 = na > struct types {};
    static assert_ const arg;
    enum relations { equal = 1, not_equal, greater, greater_equal, less, less_equal };
};



bool operator==( failed, failed );
bool operator!=( failed, failed );
bool operator>( failed, failed );
bool operator>=( failed, failed );
bool operator<( failed, failed );
bool operator<=( failed, failed );

template< bool (*)(failed, failed), long x, long y > struct assert_relation {};



template< bool > struct assert_arg_pred_impl { typedef int type; };
template<> struct assert_arg_pred_impl<true> { typedef void* type; };

template< typename P > struct assert_arg_pred
{
    typedef typename P::type p_type;
    typedef typename assert_arg_pred_impl< p_type::value >::type type;
};

template< typename P > struct assert_arg_pred_not
{
    typedef typename P::type p_type;
    static const bool p = !p_type::value;
    typedef typename assert_arg_pred_impl<p>::type type;
};

template< typename Pred >
failed ************ (Pred::************ 
      assert_arg( void (*)(Pred), typename assert_arg_pred<Pred>::type )
    );

template< typename Pred >
failed ************ (boost::mpl::not_<Pred>::************ 
      assert_not_arg( void (*)(Pred), typename assert_arg_pred_not<Pred>::type )
    );

template< typename Pred >
assert<false>
assert_arg( void (*)(Pred), typename assert_arg_pred_not<Pred>::type );

template< typename Pred >
assert<false>
assert_not_arg( void (*)(Pred), typename assert_arg_pred<Pred>::type );




}}





















































































































namespace boost { namespace mpl {

namespace aux {

template< bool C_, typename T1, typename T2, typename T3, typename T4 >
struct or_impl
    : true_
{
};

template< typename T1, typename T2, typename T3, typename T4 >
struct or_impl< false,T1,T2,T3,T4 >
    : or_impl<
          T1::type::value
        , T2, T3, T4
        , false_
        >
{
};

template<>
struct or_impl<
          false
        , false_, false_, false_, false_
        >
    : false_
{
};

} 

template<
      typename T1 = na
    , typename T2 = na
    , typename T3 = false_, typename T4 = false_, typename T5 = false_
    >
struct or_

    : aux::or_impl<
          T1::type::value
        , T2, T3, T4, T5
        >

{
};

template< > struct or_<  na , na > { template<  typename T1 , typename T2 , typename T3 =na  , typename T4 =na  , typename T5 =na  > struct apply : or_<  T1 , T2 > { }; };  template< typename Tag > struct lambda< or_<  na , na > , Tag  > { typedef false_ is_le; typedef or_<  na , na > result_; typedef or_<  na , na > type; };  

}}






















































namespace boost { namespace mpl {

namespace aux {

template< bool C_, typename T1, typename T2, typename T3, typename T4 >
struct and_impl
    : false_
{
};

template< typename T1, typename T2, typename T3, typename T4 >
struct and_impl< true,T1,T2,T3,T4 >
    : and_impl<
          T1::type::value
        , T2, T3, T4
        , true_
        >
{
};

template<>
struct and_impl<
          true
        , true_, true_, true_, true_
        >
    : true_
{
};

} 

template<
      typename T1 = na
    , typename T2 = na
    , typename T3 = true_, typename T4 = true_, typename T5 = true_
    >
struct and_

    : aux::and_impl<
          T1::type::value
        , T2, T3, T4, T5
        >

{
};

template< > struct and_<  na , na > { template<  typename T1 , typename T2 , typename T3 =na  , typename T4 =na  , typename T5 =na  > struct apply : and_<  T1 , T2 > { }; };  template< typename Tag > struct lambda< and_<  na , na > , Tag  > { typedef false_ is_le; typedef and_<  na , na > result_; typedef and_<  na , na > type; };  

}}




















namespace boost { namespace mpl {

template<
      typename C = na
    , typename F1 = na
    , typename F2 = na
    >
struct eval_if
    : if_<C,F1,F2>::type
{
    
};



template<
      bool C
    , typename F1
    , typename F2
    >
struct eval_if_c
    : if_c<C,F1,F2>::type
{
};

template< > struct eval_if<  na , na , na > { template<  typename T1 , typename T2 , typename T3 , typename T4 =na  , typename T5 =na  > struct apply : eval_if<  T1 , T2 , T3 > { }; }; template< typename Tag > struct lambda< eval_if<  na , na , na > , Tag  > { typedef false_ is_le; typedef eval_if<  na , na , na > result_; typedef eval_if<  na , na , na > type; };   

}}











namespace boost {






namespace noncopyable_  
{
  class noncopyable
  {
   protected:
    noncopyable() {}
      ~noncopyable() {}
    private:  
      noncopyable( const noncopyable& );
      noncopyable& operator=( const noncopyable& );
  };
}

typedef noncopyable_::noncopyable noncopyable;

} 































































































































































 




























 



 





























































namespace boost { namespace mpl {

template< typename T, T N > struct integral_c;

}}
























namespace boost { namespace mpl {

template< typename T, T N >
struct integral_c
{
    static const T value = N;


    typedef integral_c type;
    typedef T value_type;
    typedef integral_c_tag tag;




    typedef integral_c< T, static_cast<T>((value + 1)) > next;
    typedef integral_c< T, static_cast<T>((value - 1)) > prior;

    
    
    
    
    operator T() const { return static_cast<T>(this->value); } 
};

template< typename T, T N >
T const integral_c< T, N > ::value;

}}



namespace boost { namespace mpl {

template< bool C >
struct integral_c<bool, C>
{
    static const bool value = C;
    typedef integral_c_tag tag;
    typedef integral_c type;
    typedef bool value_type;
    operator bool() const { return this->value; }
};
}}


namespace boost{

template <class T, T val>
struct integral_constant : public mpl::integral_c<T, val>
{
   typedef integral_constant<T,val> type;
};

template<> struct integral_constant<bool,true> : public mpl::true_ 
{
   typedef integral_constant<bool,true> type;
};
template<> struct integral_constant<bool,false> : public mpl::false_ 
{
   typedef integral_constant<bool,false> type;
};

typedef integral_constant<bool,true> true_type;
typedef integral_constant<bool,false> false_type;

}


























namespace boost {

template< typename T > struct is_array : public ::boost::integral_constant<bool,false> { public:   }; 
template< typename T, std::size_t N > struct is_array< T[N] > : public ::boost::integral_constant<bool,true> { public:  };
template< typename T, std::size_t N > struct is_array< T const[N] > : public ::boost::integral_constant<bool,true> { public:  };
template< typename T, std::size_t N > struct is_array< T volatile[N] > : public ::boost::integral_constant<bool,true> { public:  };
template< typename T, std::size_t N > struct is_array< T const volatile[N] > : public ::boost::integral_constant<bool,true> { public:  };
template< typename T > struct is_array< T[] > : public ::boost::integral_constant<bool,true> { public:  };
template< typename T > struct is_array< T const[] > : public ::boost::integral_constant<bool,true> { public:  };
template< typename T > struct is_array< T volatile[] > : public ::boost::integral_constant<bool,true> { public:  };
template< typename T > struct is_array< T const volatile[] > : public ::boost::integral_constant<bool,true> { public:  };


} 


























namespace boost {
namespace type_traits {

typedef char yes_type;
struct no_type
{
   char padding[8];
};

} 
} 



namespace boost 
{
    namespace range_detail
    {          
        using type_traits::yes_type;
        using type_traits::no_type;

        
        
        
        
        yes_type is_string_impl( const char* const );
        yes_type is_string_impl( const wchar_t* const );
        no_type  is_string_impl( ... );
        
        template< std::size_t sz >
        yes_type is_char_array_impl( char (&boost_range_array)[sz] );
        template< std::size_t sz >
        yes_type is_char_array_impl( const char (&boost_range_array)[sz] );
        no_type  is_char_array_impl( ... );
        
        template< std::size_t sz >
        yes_type is_wchar_t_array_impl( wchar_t (&boost_range_array)[sz] );
        template< std::size_t sz >
        yes_type is_wchar_t_array_impl( const wchar_t (&boost_range_array)[sz] );
        no_type  is_wchar_t_array_impl( ... );
                                     
        yes_type is_char_ptr_impl( char* const );
        no_type  is_char_ptr_impl( ... );
        
        yes_type is_const_char_ptr_impl( const char* const );
        no_type  is_const_char_ptr_impl( ... );

        yes_type is_wchar_t_ptr_impl( wchar_t* const );
        no_type  is_wchar_t_ptr_impl( ... );
        
        yes_type is_const_wchar_t_ptr_impl( const wchar_t* const );
        no_type  is_const_wchar_t_ptr_impl( ... );
        
        
        
        

        template< typename Iterator >
        yes_type is_pair_impl( const std::pair<Iterator,Iterator>* );
        no_type  is_pair_impl( ... );

        
        
        

        struct char_or_wchar_t_array_tag {};
        
    } 
    
} 




























































namespace boost {


template< typename T > struct is_void : public ::boost::integral_constant<bool,false> { public:   }; 
template< > struct is_void< void > : public ::boost::integral_constant<bool,true> { public:   };

template< > struct is_void< void const > : public ::boost::integral_constant<bool,true> { public:   };
template< > struct is_void< void volatile > : public ::boost::integral_constant<bool,true> { public:   };
template< > struct is_void< void const volatile > : public ::boost::integral_constant<bool,true> { public:   };


} 
























namespace boost {
namespace type_traits {

template <bool b1, bool b2, bool b3 = false, bool b4 = false, bool b5 = false, bool b6 = false, bool b7 = false>
struct ice_or;

template <bool b1, bool b2, bool b3, bool b4, bool b5, bool b6, bool b7>
struct ice_or
{
    static const bool value = true;
};

template <>
struct ice_or<false, false, false, false, false, false, false>
{
    static const bool value = false;
};

} 
} 



































 




























 



 






namespace boost 
{
    namespace range_detail 
    {        
        
        
        
        
        
        
        
        
        
        
        
        
        
        typedef mpl::int_<1>::type    std_container_;
        typedef mpl::int_<2>::type    std_pair_;
        typedef mpl::int_<3>::type    const_std_pair_;
        typedef mpl::int_<4>::type    array_;
        typedef mpl::int_<5>::type    const_array_;
        typedef mpl::int_<6>::type    char_array_;
        typedef mpl::int_<7>::type    wchar_t_array_;
        typedef mpl::int_<8>::type    char_ptr_;
        typedef mpl::int_<9>::type    const_char_ptr_;
        typedef mpl::int_<10>::type   wchar_t_ptr_;
        typedef mpl::int_<11>::type   const_wchar_t_ptr_;
        typedef mpl::int_<12>::type   string_;
        
        template< typename C >
        struct range_helper
        {
            static C* c;
            static C  ptr;

            static const bool is_pair_ = sizeof( boost::range_detail::is_pair_impl( c ) ) == sizeof( yes_type );
            static const bool is_char_ptr_ = sizeof( boost::range_detail::is_char_ptr_impl( ptr ) ) == sizeof( yes_type );
            static const bool is_const_char_ptr_ = sizeof( boost::range_detail::is_const_char_ptr_impl( ptr ) ) == sizeof( yes_type );
            static const bool is_wchar_t_ptr_ = sizeof( boost::range_detail::is_wchar_t_ptr_impl( ptr ) ) == sizeof( yes_type );
            static const bool is_const_wchar_t_ptr_ = sizeof( boost::range_detail::is_const_wchar_t_ptr_impl( ptr ) ) == sizeof( yes_type );
            static const bool is_char_array_ = sizeof( boost::range_detail::is_char_array_impl( ptr ) ) == sizeof( yes_type );
            static const bool is_wchar_t_array_ = sizeof( boost::range_detail::is_wchar_t_array_impl( ptr ) ) == sizeof( yes_type );
            static const bool is_string_ = (boost::type_traits::ice_or<is_const_char_ptr_, is_const_wchar_t_ptr_> ::value );
            static const bool is_array_ = boost::is_array<C> ::value;
            
        };
        
        template< typename C >
        class range
        {
            typedef typename   boost::mpl::if_c< ::boost::range_detail::range_helper<C>::is_pair_,
                                                                  boost::range_detail::std_pair_,
                                                                  void >::type pair_t;
            typedef typename   boost::mpl::if_c< ::boost::range_detail::range_helper<C>::is_array_,
                                                                    boost::range_detail::array_,
                                                                    pair_t >::type array_t;
            typedef typename   boost::mpl::if_c< ::boost::range_detail::range_helper<C>::is_string_,
                                                                    boost::range_detail::string_,
                                                                    array_t >::type string_t;
            typedef typename   boost::mpl::if_c< ::boost::range_detail::range_helper<C>::is_const_char_ptr_,
                                                                    boost::range_detail::const_char_ptr_,
                                                                    string_t >::type const_char_ptr_t;
            typedef typename   boost::mpl::if_c< ::boost::range_detail::range_helper<C>::is_char_ptr_,
                                                                    boost::range_detail::char_ptr_,
                                                                    const_char_ptr_t >::type char_ptr_t;
            typedef typename   boost::mpl::if_c< ::boost::range_detail::range_helper<C>::is_const_wchar_t_ptr_,
                                                                    boost::range_detail::const_wchar_t_ptr_,
                                                                    char_ptr_t >::type const_wchar_ptr_t;
            typedef typename   boost::mpl::if_c< ::boost::range_detail::range_helper<C>::is_wchar_t_ptr_,
                                                                    boost::range_detail::wchar_t_ptr_,
                                                                    const_wchar_ptr_t >::type wchar_ptr_t;
            typedef typename   boost::mpl::if_c< ::boost::range_detail::range_helper<C>::is_wchar_t_array_,
                                                                    boost::range_detail::wchar_t_array_,
                                                                    wchar_ptr_t >::type wchar_array_t;
            typedef typename   boost::mpl::if_c< ::boost::range_detail::range_helper<C>::is_char_array_,
                                                                    boost::range_detail::char_array_,
                                                                    wchar_array_t >::type char_array_t;
        public:
            typedef typename   boost::mpl::if_c< ::boost::is_void<char_array_t>::value,
                                                                    boost::range_detail::std_container_,
                                                                    char_array_t >::type type;  
        }; 
    }
}
        







































































namespace boost {


template< typename T, typename U > struct is_same : public ::boost::integral_constant<bool,false> { public:   }; 
template< typename T > struct is_same< T,T > : public ::boost::integral_constant<bool,true> { public:   };


} 


















































 




























 



 


















 



 



extern "C" {

 






















 



 



 


 


 
 



 


 






 





 

 


 

 


 


 





 


 



 
 


 



 



 



 
extern void *memcpy (void *__restrict __dest,
		     __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern void *memmove (void *__dest, __const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




 
extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
		      int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));



 
extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));

 
extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

 
extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const void *memchr (__const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) void *
memchr (void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const void *
memchr (__const void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}
}



 
extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const void *rawmemchr (__const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

 
extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const void *memrchr (__const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



 
extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
 
extern char *strncpy (char *__restrict __dest,
		      __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
 
extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
		      size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int strcmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
 
extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

 
extern int strcoll (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
 
extern size_t strxfrm (char *__restrict __dest,
		       __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));




 

 
extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
 
extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
			 __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));

 
extern char *strdup (__const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));



 
extern char *strndup (__const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));

 

 


 
extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *strchr (__const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strchr (char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
strchr (__const char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}
}
 
extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *strrchr (__const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strrchr (char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
strrchr (__const char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}
}



 
extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const char *strchrnul (__const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



 
extern size_t strcspn (__const char *__s, __const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

 
extern size_t strspn (__const char *__s, __const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
 
extern "C++"
{
extern char *strpbrk (char *__s, __const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __const char *strpbrk (__const char *__s, __const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strpbrk (char *__s, __const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
strpbrk (__const char *__s, __const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}
}
 
extern "C++"
{
extern char *strstr (char *__haystack, __const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __const char *strstr (__const char *__haystack,
			     __const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strstr (char *__haystack, __const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
strstr (__const char *__haystack, __const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}
}


 
extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));



 
extern char *__strtok_r (char *__restrict __s,
			 __const char *__restrict __delim,
			 char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));
extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
		       char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

 
extern "C++" char *strcasestr (char *__haystack, __const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" __const char *strcasestr (__const char *__haystack,
				       __const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



 
extern void *memmem (__const void *__haystack, size_t __haystacklen,
		     __const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));


 
extern void *__mempcpy (void *__restrict __dest,
			__const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
		      __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));



 
extern size_t strlen (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



 
extern size_t strnlen (__const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



 
extern char *strerror (int __errnum) throw ();







 

 
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));

 
extern char *strerror_l (int __errnum, __locale_t __l) throw ();



 
extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));

 
extern void bcopy (__const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));

 
extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

 
extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *index (__const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
index (char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
index (__const char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}
}

 
extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *rindex (__const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
rindex (char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
rindex (__const char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}
}


 
extern int ffs (int __i) throw () __attribute__ ((__const__));


 
extern int ffsl (long int __l) throw () __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));

 
extern int strcasecmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

 
extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


 
extern int strcasecmp_l (__const char *__s1, __const char *__s2,
			 __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
			  size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));


 
extern char *strsep (char **__restrict __stringp,
		     __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern char *strsignal (int __sig) throw ();

 
extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));


 
extern char *__stpncpy (char *__restrict __dest,
			__const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
		      __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));

 
extern int strverscmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

 
extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));

 
extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));




 
extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" __const char *basename (__const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));




}


















 




 



 

namespace boost
{
    namespace range_detail
    {
        template <typename T>
        inline void boost_range_silence_warning( const T& ) { }

        
        
        

        inline const char* str_end( const char* s, const char* )
        {
            return s + strlen( s );
        }

        inline const wchar_t* str_end( const wchar_t* s, const wchar_t* )
        {
            return s + wcslen( s );
        }

        template< class Char >
        inline Char* str_end( Char* s )
        {
            return const_cast<Char*>( str_end( s, s ) );
        }

        template< class T, std::size_t sz >
        inline T* array_end( T (&boost_range_array)[sz] )
        {
            return boost_range_array + sz;
        }

        template< class T, std::size_t sz >
        inline const T* array_end( const T (&boost_range_array)[sz] )
        {
            return boost_range_array + sz;
        }

        
        
        

        template< class Char >
        inline std::size_t str_size( const Char* const& s )
        {
            return str_end( s ) - s;
        }

        template< class T, std::size_t sz >
        inline std::size_t array_size( T (&boost_range_array)[sz] )
        {
            boost_range_silence_warning( boost_range_array );
            return sz;
        }

        template< class T, std::size_t sz >
        inline std::size_t array_size( const T (&boost_range_array)[sz] )
        {
            boost_range_silence_warning( boost_range_array );
            return sz;
        }

    } 

} 









































namespace boost {
    namespace range_detail {
        template< typename T > struct exists { typedef void type; };
    }
}













































































































 



 





































 




























 



 




























 




namespace std __attribute__ ((__visibility__ ("default"))) {

  
  template<typename _Tp, typename _CharT = char,
           typename _Traits = char_traits<_CharT>, typename _Dist = ptrdiff_t>
    class istream_iterator
    : public iterator<input_iterator_tag, _Tp, _Dist, const _Tp*, const _Tp&>
    {
    public:
      typedef _CharT                         char_type;
      typedef _Traits                        traits_type;
      typedef basic_istream<_CharT, _Traits> istream_type;

    private:
      istream_type*	_M_stream;
      _Tp		_M_value;
      bool		_M_ok;

    public:
      
      istream_iterator()
      : _M_stream(0), _M_value(), _M_ok(false) {}

      
      istream_iterator(istream_type& __s)
      : _M_stream(&__s)
      { _M_read(); }

      istream_iterator(const istream_iterator& __obj)
      : _M_stream(__obj._M_stream), _M_value(__obj._M_value),
        _M_ok(__obj._M_ok)
      { }

      const _Tp&
      operator*() const
      {
	;
	return _M_value;
      }

      const _Tp*
      operator->() const { return &(operator*()); }

      istream_iterator&
      operator++()
      {
	;
	_M_read();
	return *this;
      }

      istream_iterator
      operator++(int)
      {
	;
	istream_iterator __tmp = *this;
	_M_read();
	return __tmp;
      }

      bool
      _M_equal(const istream_iterator& __x) const
      { return (_M_ok == __x._M_ok) && (!_M_ok || _M_stream == __x._M_stream); }

    private:
      void
      _M_read()
      {
	_M_ok = (_M_stream && *_M_stream) ? true : false;
	if (_M_ok)
	  {
	    *_M_stream >> _M_value;
	    _M_ok = *_M_stream ? true : false;
	  }
      }
    };

  
  template<typename _Tp, typename _CharT, typename _Traits, typename _Dist>
    inline bool
    operator==(const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __x,
	       const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __y)
    { return __x._M_equal(__y); }

  
  template <class _Tp, class _CharT, class _Traits, class _Dist>
    inline bool
    operator!=(const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __x,
	       const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __y)
    { return !__x._M_equal(__y); }

  









 
  template<typename _Tp, typename _CharT = char,
           typename _Traits = char_traits<_CharT> >
    class ostream_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:
      
      
      typedef _CharT                         char_type;
      typedef _Traits                        traits_type;
      typedef basic_ostream<_CharT, _Traits> ostream_type;
      

    private:
      ostream_type*	_M_stream;
      const _CharT*	_M_string;

    public:
      
      ostream_iterator(ostream_type& __s) : _M_stream(&__s), _M_string(0) {}

      








 
      ostream_iterator(ostream_type& __s, const _CharT* __c)
      : _M_stream(&__s), _M_string(__c)  { }

      
      ostream_iterator(const ostream_iterator& __obj)
      : _M_stream(__obj._M_stream), _M_string(__obj._M_string)  { }

      
      
      ostream_iterator&
      operator=(const _Tp& __value)
      {
	;
	*_M_stream << __value;
	if (_M_string) *_M_stream << _M_string;
	return *this;
      }

      ostream_iterator&
      operator*()
      { return *this; }

      ostream_iterator&
      operator++()
      { return *this; }

      ostream_iterator&
      operator++(int)
      { return *this; }
    };

}











    
namespace boost { namespace detail {


template <class Iterator>
struct iterator_traits
    : std::iterator_traits<Iterator>
{};
using std::distance;

}} 





namespace boost { 










template <class Iterator>
struct iterator_value
{
    typedef typename boost::detail::iterator_traits<Iterator>::value_type type;
};
  
template <class Iterator>
struct iterator_reference
{
    typedef typename boost::detail::iterator_traits<Iterator>::reference type;
};
  
  
template <class Iterator>
struct iterator_pointer
{
    typedef typename boost::detail::iterator_traits<Iterator>::pointer type;
};
  
template <class Iterator>
struct iterator_difference
{
    typedef typename boost::detail::iterator_traits<Iterator>::difference_type type;
};

template <class Iterator>
struct iterator_category
{
    typedef typename boost::detail::iterator_traits<Iterator>::iterator_category type;
};


} 



































 




























 



 


namespace boost
{
    
    
    
    
    namespace range_detail {
        template< typename C, typename Enable=void > struct extract_iterator {}; template< typename C > struct extract_iterator< C , typename boost::range_detail::exists< typename C::iterator > ::type > { typedef typename C::iterator type; };
    }

    template< typename C >
    struct range_mutable_iterator : range_detail::extract_iterator<C>
    {};
    
    
    
    

    template< typename Iterator >
    struct range_mutable_iterator< std::pair<Iterator,Iterator> >
    {
        typedef Iterator type;
    };

    
    
    

    template< typename T, std::size_t sz >
    struct range_mutable_iterator< T[sz] >
    {
        typedef T* type;
    };

} 

































































namespace boost {
namespace detail {

template <typename T> struct cv_traits_imp {};

template <typename T>
struct cv_traits_imp<T*>
{
    static const bool is_const = false;
    static const bool is_volatile = false;
    typedef T unqualified_type;
};

template <typename T>
struct cv_traits_imp<const T*>
{
    static const bool is_const = true;
    static const bool is_volatile = false;
    typedef T unqualified_type;
};

template <typename T>
struct cv_traits_imp<volatile T*>
{
    static const bool is_const = false;
    static const bool is_volatile = true;
    typedef T unqualified_type;
};

template <typename T>
struct cv_traits_imp<const volatile T*>
{
    static const bool is_const = true;
    static const bool is_volatile = true;
    typedef T unqualified_type;
};


} 
} 




















































namespace boost {

namespace detail{
template <class T>
struct is_volatile_rval_filter
{
   static const bool value = ::boost::detail::cv_traits_imp<T* > ::is_volatile;
};
}



template< typename T > struct is_volatile : public ::boost::integral_constant<bool,::boost::detail::is_volatile_rval_filter<T> ::value> { public:   }; 
template< typename T > struct is_volatile< T& > : public ::boost::integral_constant<bool,false> { public:  };



} 




















































































 




























 



 


































namespace boost {


namespace detail {

template <typename T, bool is_vol>
struct remove_const_helper
{
    typedef T type;
};

template <typename T>
struct remove_const_helper<T, true>
{
    typedef T volatile type;
};


template <typename T>
struct remove_const_impl
{
    typedef typename remove_const_helper<
          typename cv_traits_imp<T*>::unqualified_type
        , ::boost::is_volatile<T>::value
        >::type type;
};


} 



template< typename T > struct remove_const { public: typedef typename boost::detail::remove_const_impl<T> ::type type;  }; 
template< typename T > struct remove_const<T& > { public: typedef T& type; };
template< typename T, std::size_t N > struct remove_const<T const[N]> { public: typedef T type[N]; };
template< typename T, std::size_t N > struct remove_const<T const volatile[N]> { public: typedef T volatile type[N]; };


} 

















































 




























 



 


namespace boost
{
    
    
    
    
    namespace range_detail {
        template< typename C, typename Enable=void > struct extract_const_iterator {}; template< typename C > struct extract_const_iterator< C , typename boost::range_detail::exists< typename C::const_iterator > ::type > { typedef typename C::const_iterator type; };
    }

    template< typename C >
    struct range_const_iterator : range_detail::extract_const_iterator<C>
    {};
    
    
    
    

    template< typename Iterator >
    struct range_const_iterator< std::pair<Iterator,Iterator> >
    {
        typedef Iterator type;
    };
    
    
    
    

    template< typename T, std::size_t sz >
    struct range_const_iterator< T[sz] >
    {
        typedef const T* type;
    };

} 












































































































namespace boost {


template< typename T > struct is_lvalue_reference : public ::boost::integral_constant<bool,false> { public:   }; 
template< typename T > struct is_lvalue_reference< T& > : public ::boost::integral_constant<bool,true> { public:  };




} 











































































namespace boost {

template< typename T > struct is_rvalue_reference : public ::boost::integral_constant<bool,false> { public:   }; 

} 





































namespace boost {
namespace type_traits {

template <bool b1, bool b2, bool b3 = true, bool b4 = true, bool b5 = true, bool b6 = true, bool b7 = true>
struct ice_and;

template <bool b1, bool b2, bool b3, bool b4, bool b5, bool b6, bool b7>
struct ice_and
{
    static const bool value = false;
};

template <>
struct ice_and<true, true, true, true, true, true, true>
{
    static const bool value = true;
};

} 
} 










namespace boost {
namespace type_traits {

template <bool b>
struct ice_not
{
    static const bool value = true;
};

template <>
struct ice_not<true>
{
    static const bool value = false;
};

} 
} 










namespace boost {
namespace type_traits {

template <int b1, int b2>
struct ice_eq
{
    static const bool value = (b1 == b2);
};

template <int b1, int b2>
struct ice_ne
{
    static const bool value = (b1 != b2);
};

template <int b1, int b2> bool const ice_eq<b1,b2>::value;
template <int b1, int b2> bool const ice_ne<b1,b2>::value;

} 
} 




















































namespace boost {

namespace detail {

template <typename T>
struct is_reference_impl
{
   static const bool value = (::boost::type_traits::ice_or< ::boost::is_lvalue_reference<T> ::value, ::boost::is_rvalue_reference<T> ::value > ::value);
};

} 

template< typename T > struct is_reference : public ::boost::integral_constant<bool,::boost::detail::is_reference_impl<T> ::value> { public:   }; 

} 


































































namespace boost {


namespace detail{




template <class T>
struct is_const_rvalue_filter
{
   static const bool value = ::boost::detail::cv_traits_imp<T* > ::is_const;
};
}


template< typename T > struct is_const : public ::boost::integral_constant<bool,::boost::detail::is_const_rvalue_filter<T> ::value> { public:   }; 
template< typename T > struct is_const< T& > : public ::boost::integral_constant<bool,false> { public:  };




} 

















namespace boost
{


    template< typename C >
    struct range_iterator
    {

        typedef typename
            mpl::eval_if_c< is_const<C>::value,
                            range_const_iterator< typename remove_const<C>::type >,
                            range_mutable_iterator<C> >::type type;

    };

} 




namespace boost
{

namespace range_detail
{

        
        
        
        template< typename C >
        inline typename range_iterator<C>::type
        range_end( C& c )
        {
            
            
            
            
            
            return c.end();
        }

        
        
        

        template< typename Iterator >
        inline Iterator range_end( const std::pair<Iterator,Iterator>& p )
        {
            return p.second;
        }

        template< typename Iterator >
        inline Iterator range_end( std::pair<Iterator,Iterator>& p )
        {
            return p.second;
        }

        
        
        

        template< typename T, std::size_t sz >
        inline const T* range_end( const T (&a)[sz] )
        {
            return range_detail::array_end<T,sz>( a );
        }

        template< typename T, std::size_t sz >
        inline T* range_end( T (&a)[sz] )
        {
            return range_detail::array_end<T,sz>( a );
        }

} 

namespace range_adl_barrier
{

template< class T >
inline typename range_iterator<T>::type end( T& r )
{
    using namespace range_detail;
    return range_end( r );
}

template< class T >
inline typename range_iterator<const T>::type end( const T& r )
{
    using namespace range_detail;
    return range_end( r );
}

    } 
} 


namespace boost
{
    namespace range_adl_barrier
    {
        template< class T >
        inline typename range_iterator<const T>::type
        const_end( const T& r )
        {
            return boost::range_adl_barrier::end( r );
        }
    } 
    using namespace range_adl_barrier;
} 

















namespace boost
{

namespace range_detail
{

    
    
    

    template< typename C >
    inline typename range_iterator<C>::type
    range_begin( C& c )
    {
        
        
        
        
        
        return c.begin();
    }

    
    
    

    template< typename Iterator >
    inline Iterator range_begin( const std::pair<Iterator,Iterator>& p )
    {
        return p.first;
    }

    template< typename Iterator >
    inline Iterator range_begin( std::pair<Iterator,Iterator>& p )
    {
        return p.first;
    }

    
    
    

    
    
    
    template< typename T, std::size_t sz >
    inline const T* range_begin( const T (&a)[sz] )
    {
        return a;
    }

    template< typename T, std::size_t sz >
    inline T* range_begin( T (&a)[sz] )
    {
        return a;
    }


} 




namespace range_adl_barrier
{

template< class T >
inline typename range_iterator<T>::type begin( T& r )
{
    using namespace range_detail;
    return range_begin( r );
}

template< class T >
inline typename range_iterator<const T>::type begin( const T& r )
{
    using namespace range_detail;
    return range_begin( r );
}

    } 
} 


namespace boost
{
    namespace range_adl_barrier
    {
        template< class T >
        inline typename range_iterator<const T>::type
        const_begin( const T& r )
        {
            return boost::range_adl_barrier::begin( r );
        }
    } 

    using namespace range_adl_barrier;
} 














































namespace boost {











template <class T>
inline T next(T x) { return ++x; }

template <class T, class Distance>
inline T next(T x, Distance n)
{
    std::advance(x, n);
    return x;
}

template <class T>
inline T prior(T x) { return --x; }

template <class T, class Distance>
inline T prior(T x, Distance n)
{
    std::advance(x, -n);
    return x;
}

} 

















































 




























 



 


namespace boost
{

  
  
  namespace detail {
   template <class Category, class T, class Distance, class Pointer, class Reference>
   struct iterator_base : std::iterator<Category, T, Distance, Pointer, Reference> {};
  }

  template <class Category, class T, class Distance = std::ptrdiff_t,
            class Pointer = T*, class Reference = T&>
  struct iterator : boost::detail::iterator_base<Category, T, Distance, Pointer, Reference> {};
} 



















 
















namespace boost{


template <bool x> struct STATIC_ASSERTION_FAILURE;

template <> struct STATIC_ASSERTION_FAILURE<true> { enum { value = 1 }; };


template<int x> struct static_assert_test{};

}



































































































namespace boost { namespace mpl {

template<
      typename T = na
    >
struct identity
{
    typedef T type;
    
};

template<
      typename T = na
    >
struct make_identity
{
    typedef identity<T> type;
    
};

template< > struct identity<  na > { template<  typename T1 , typename T2 =na  , typename T3 =na  , typename T4 =na  , typename T5 =na  > struct apply : identity<  T1 > { }; }; template< typename Tag > struct lambda< identity<  na > , Tag  > { typedef false_ is_le; typedef identity<  na > result_; typedef identity<  na > type; };  
template< > struct make_identity<  na > { template<  typename T1 , typename T2 =na  , typename T3 =na  , typename T4 =na  , typename T5 =na  > struct apply : make_identity<  T1 > { }; }; template< typename Tag > struct lambda< make_identity<  na > , Tag  > { typedef false_ is_le; typedef make_identity<  na > result_; typedef make_identity<  na > type; };  

}}






















































namespace boost { namespace mpl {

template< int N > struct arg;

}}
























































































namespace boost { namespace mpl {
template<> struct arg< -1 >
{
    static const int value = -1;
    
    

    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
        typedef U1 type;
        static const std::size_t mpl_assertion_in_line_27 = sizeof( boost::mpl::assertion_failed<false>( boost::mpl::assert_not_arg( (void (*) (boost::mpl::is_na<type>))0, 1 ) ) );
    };
};

template<> struct arg<1>
{
    static const int value = 1;
    typedef arg<2> next;
    
    

    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
        typedef U1 type;
        static const std::size_t mpl_assertion_in_line_45 = sizeof( boost::mpl::assertion_failed<false>( boost::mpl::assert_not_arg( (void (*) (boost::mpl::is_na<type>))0, 1 ) ) );
    };
};

template<> struct arg<2>
{
    static const int value = 2;
    typedef arg<3> next;
    
    

    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
        typedef U2 type;
        static const std::size_t mpl_assertion_in_line_63 = sizeof( boost::mpl::assertion_failed<false>( boost::mpl::assert_not_arg( (void (*) (boost::mpl::is_na<type>))0, 1 ) ) );
    };
};

template<> struct arg<3>
{
    static const int value = 3;
    typedef arg<4> next;
    
    

    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
        typedef U3 type;
        static const std::size_t mpl_assertion_in_line_81 = sizeof( boost::mpl::assertion_failed<false>( boost::mpl::assert_not_arg( (void (*) (boost::mpl::is_na<type>))0, 1 ) ) );
    };
};

template<> struct arg<4>
{
    static const int value = 4;
    typedef arg<5> next;
    
    

    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
        typedef U4 type;
        static const std::size_t mpl_assertion_in_line_99 = sizeof( boost::mpl::assertion_failed<false>( boost::mpl::assert_not_arg( (void (*) (boost::mpl::is_na<type>))0, 1 ) ) );
    };
};

template<> struct arg<5>
{
    static const int value = 5;
    typedef arg<6> next;
    
    

    template<
          typename U1 = na, typename U2 = na, typename U3 = na
        , typename U4 = na, typename U5 = na
        >
    struct apply
    {
        typedef U5 type;
        static const std::size_t mpl_assertion_in_line_117 = sizeof( boost::mpl::assertion_failed<false>( boost::mpl::assert_not_arg( (void (*) (boost::mpl::is_na<type>))0, 1 ) ) );
    };
};



}}








































namespace boost { namespace mpl {
typedef arg< -1 > _;
}}
namespace boost { namespace mpl {



namespace placeholders {
using boost::mpl::_;
}

}}



namespace boost { namespace mpl {
typedef arg<1> _1;

}}
namespace boost { namespace mpl {



namespace placeholders {
using boost::mpl::_1;
}

}}
namespace boost { namespace mpl {
typedef arg<2> _2;

}}
namespace boost { namespace mpl {



namespace placeholders {
using boost::mpl::_2;
}

}}
namespace boost { namespace mpl {
typedef arg<3> _3;

}}
namespace boost { namespace mpl {



namespace placeholders {
using boost::mpl::_3;
}

}}
namespace boost { namespace mpl {
typedef arg<4> _4;

}}
namespace boost { namespace mpl {



namespace placeholders {
using boost::mpl::_4;
}

}}
namespace boost { namespace mpl {
typedef arg<5> _5;

}}
namespace boost { namespace mpl {



namespace placeholders {
using boost::mpl::_5;
}

}}
namespace boost { namespace mpl {
typedef arg<6> _6;

}}
namespace boost { namespace mpl {



namespace placeholders {
using boost::mpl::_6;
}

}}



































































      
      
      















































































namespace boost {




template< typename T > struct is_integral : public ::boost::integral_constant<bool,false> { public:   }; 

template< > struct is_integral< unsigned char > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< unsigned char const > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< unsigned char volatile > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< unsigned char const volatile > : public ::boost::integral_constant<bool,true> { public:   };
template< > struct is_integral< unsigned short > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< unsigned short const > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< unsigned short volatile > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< unsigned short const volatile > : public ::boost::integral_constant<bool,true> { public:   };
template< > struct is_integral< unsigned int > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< unsigned int const > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< unsigned int volatile > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< unsigned int const volatile > : public ::boost::integral_constant<bool,true> { public:   };
template< > struct is_integral< unsigned long > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< unsigned long const > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< unsigned long volatile > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< unsigned long const volatile > : public ::boost::integral_constant<bool,true> { public:   };

template< > struct is_integral< signed char > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< signed char const > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< signed char volatile > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< signed char const volatile > : public ::boost::integral_constant<bool,true> { public:   };
template< > struct is_integral< signed short > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< signed short const > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< signed short volatile > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< signed short const volatile > : public ::boost::integral_constant<bool,true> { public:   };
template< > struct is_integral< signed int > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< signed int const > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< signed int volatile > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< signed int const volatile > : public ::boost::integral_constant<bool,true> { public:   };
template< > struct is_integral< signed long > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< signed long const > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< signed long volatile > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< signed long const volatile > : public ::boost::integral_constant<bool,true> { public:   };

template< > struct is_integral< bool > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< bool const > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< bool volatile > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< bool const volatile > : public ::boost::integral_constant<bool,true> { public:   };
template< > struct is_integral< char > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< char const > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< char volatile > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< char const volatile > : public ::boost::integral_constant<bool,true> { public:   };




template< > struct is_integral< wchar_t > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< wchar_t const > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< wchar_t volatile > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< wchar_t const volatile > : public ::boost::integral_constant<bool,true> { public:   };




template< > struct is_integral< ::boost::ulong_long_type > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< ::boost::ulong_long_type const > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< ::boost::ulong_long_type volatile > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< ::boost::ulong_long_type const volatile > : public ::boost::integral_constant<bool,true> { public:   };
template< > struct is_integral< ::boost::long_long_type > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< ::boost::long_long_type const > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< ::boost::long_long_type volatile > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_integral< ::boost::long_long_type const volatile > : public ::boost::integral_constant<bool,true> { public:   };
        


} 









































































namespace boost {


template< typename T > struct is_float : public ::boost::integral_constant<bool,false> { public:   }; 
template< > struct is_float< float > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_float< float const > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_float< float volatile > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_float< float const volatile > : public ::boost::integral_constant<bool,true> { public:   };
template< > struct is_float< double > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_float< double const > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_float< double volatile > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_float< double const volatile > : public ::boost::integral_constant<bool,true> { public:   };
template< > struct is_float< long double > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_float< long double const > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_float< long double volatile > : public ::boost::integral_constant<bool,true> { public:   }; template< > struct is_float< long double const volatile > : public ::boost::integral_constant<bool,true> { public:   };

} 

































































namespace boost {

namespace detail {

template< typename T >
struct is_arithmetic_impl
{ 
    static const bool value = (::boost::type_traits::ice_or< ::boost::is_integral<T> ::value, ::boost::is_float<T> ::value > ::value); 
};

} 


template< typename T > struct is_arithmetic : public ::boost::integral_constant<bool,::boost::detail::is_arithmetic_impl<T> ::value> { public:   }; 

} 














































































































namespace boost {
namespace detail{

template <class T>
struct is_abstract_imp
{
   static const bool value = __is_abstract(T);
};
}

template< typename T > struct is_abstract : public ::boost::integral_constant<bool,::boost::detail::is_abstract_imp<T> ::value> { public:   }; 

} 






























































namespace boost {

namespace detail {






template <typename T>
struct add_reference_rvalue_layer
{
    typedef T& type;
};


template <typename T>
struct add_reference_impl
{
    typedef typename add_reference_rvalue_layer<T>::type type;
};

template< typename T > struct add_reference_impl<T& > { public: typedef T& type; };



template< > struct add_reference_impl<void> { public: typedef void type; };
template< > struct add_reference_impl<void const> { public: typedef void const type; };
template< > struct add_reference_impl<void volatile> { public: typedef void volatile type; };
template< > struct add_reference_impl<void const volatile> { public: typedef void const volatile type; };

} 

template< typename T > struct add_reference { public: typedef typename boost::detail::add_reference_impl<T> ::type type;  }; 




} 















































namespace boost{

template< typename T > struct add_lvalue_reference { public: typedef typename boost::add_reference<T> ::type type;  }; 


}







































































namespace boost {

namespace type_traits_detail {

    template <typename T, bool b>
    struct add_rvalue_reference_helper
    { typedef T   type; };


    template <typename T>
    struct add_rvalue_reference_imp
    {
       typedef typename boost::type_traits_detail::add_rvalue_reference_helper
                  <T, (is_void<T>::value == false && is_reference<T>::value == false) >::type type;
    };

}

template< typename T > struct add_rvalue_reference { public: typedef typename boost::type_traits_detail::add_rvalue_reference_imp<T> ::type type;  }; 

}  





































namespace boost {
namespace type_traits {


struct false_result
{
    template <typename T> struct result_
    {
        static const bool value = false;
    };
};

}} 


















namespace boost {
namespace type_traits {

template <class R>
struct is_function_ptr_helper
{
    static const bool value = false;
};



template <class R >
struct is_function_ptr_helper<R (*)()> { static const bool value = true; };
template <class R >
struct is_function_ptr_helper<R (*)( ...)> { static const bool value = true; };
template <class R , class T0>
struct is_function_ptr_helper<R (*)( T0)> { static const bool value = true; };
template <class R , class T0>
struct is_function_ptr_helper<R (*)( T0 ...)> { static const bool value = true; };
template <class R , class T0 , class T1>
struct is_function_ptr_helper<R (*)( T0 , T1)> { static const bool value = true; };
template <class R , class T0 , class T1>
struct is_function_ptr_helper<R (*)( T0 , T1 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 ...)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24)> { static const bool value = true; };
template <class R , class T0 , class T1 , class T2 , class T3 , class T4 , class T5 , class T6 , class T7 , class T8 , class T9 , class T10 , class T11 , class T12 , class T13 , class T14 , class T15 , class T16 , class T17 , class T18 , class T19 , class T20 , class T21 , class T22 , class T23 , class T24>
struct is_function_ptr_helper<R (*)( T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 ...)> { static const bool value = true; };

} 
} 




























































namespace boost {


namespace detail {

template<bool is_ref = true>
struct is_function_chooser
    : public ::boost::type_traits::false_result
{
};

template <>
struct is_function_chooser<false>
{
    template< typename T > struct result_
        : public ::boost::type_traits::is_function_ptr_helper<T*>
    {
    };
};

template <typename T>
struct is_function_impl
    : public is_function_chooser< ::boost::is_reference<T>::value >
        ::template result_<T>
{
};


} 


template< typename T > struct is_function : public ::boost::integral_constant<bool,::boost::detail::is_function_impl<T> ::value> { public:   }; 
} 



































































namespace boost {












namespace detail {






struct any_conversion
{
    template <typename T> any_conversion(const volatile T&);
    template <typename T> any_conversion(const T&);
    template <typename T> any_conversion(volatile T&);
    template <typename T> any_conversion(T&);
};

template <typename T> struct checker
{
    static boost::type_traits::no_type _m_check(any_conversion ...);
    static boost::type_traits::yes_type _m_check(T, int);
};

template <typename From, typename To>
struct is_convertible_basic_impl
{
    typedef typename add_lvalue_reference<From>::type lvalue_type;
    typedef typename add_rvalue_reference<From>::type rvalue_type;
    static lvalue_type _m_from;
    static bool const value =
        sizeof( boost::detail::checker<To>::_m_check(_m_from, 0) )
        == sizeof(::boost::type_traits::yes_type);
};


template <typename From, typename To>
struct is_convertible_impl
{
    static const bool value = (::boost::type_traits::ice_and< ::boost::type_traits::ice_or< ::boost::detail::is_convertible_basic_impl<From,To> ::value, ::boost::is_void<To> ::value > ::value, ::boost::type_traits::ice_not< ::boost::is_array<To> ::value > ::value, ::boost::type_traits::ice_not< ::boost::is_function<To> ::value > ::value > ::value);
};

template <bool trivial1, bool trivial2, bool abstract_target>
struct is_convertible_impl_select
{
   template <class From, class To>
   struct rebind
   {
      typedef is_convertible_impl<From, To> type;
   };
};

template <>
struct is_convertible_impl_select<true, true, false>
{
   template <class From, class To>
   struct rebind
   {
      typedef true_type type;
   };
};

template <>
struct is_convertible_impl_select<false, false, true>
{
   template <class From, class To>
   struct rebind
   {
      typedef false_type type;
   };
};

template <>
struct is_convertible_impl_select<true, false, true>
{
   template <class From, class To>
   struct rebind
   {
      typedef false_type type;
   };
};

template <typename From, typename To>
struct is_convertible_impl_dispatch_base
{
   typedef is_convertible_impl_select< 
      ::boost::is_arithmetic<From>::value, 
      ::boost::is_arithmetic<To>::value,
      ::boost::is_abstract<To>::value
   > selector;
   typedef typename selector::template rebind<From, To> isc_binder;
   typedef typename isc_binder::type type;
};

template <typename From, typename To>
struct is_convertible_impl_dispatch 
   : public is_convertible_impl_dispatch_base<From, To>::type
{};








    template< > struct is_convertible_impl< void,void > { public: static const bool value = (true); }; template< > struct is_convertible_impl< void,void const > { public: static const bool value = (true); }; template< > struct is_convertible_impl< void,void volatile > { public: static const bool value = (true); }; template< > struct is_convertible_impl< void,void const volatile > { public: static const bool value = (true); }; template< > struct is_convertible_impl< void const,void > { public: static const bool value = (true); }; template< > struct is_convertible_impl< void const,void const > { public: static const bool value = (true); }; template< > struct is_convertible_impl< void const,void volatile > { public: static const bool value = (true); }; template< > struct is_convertible_impl< void const,void const volatile > { public: static const bool value = (true); }; template< > struct is_convertible_impl< void volatile,void > { public: static const bool value = (true); }; template< > struct is_convertible_impl< void volatile,void const > { public: static const bool value = (true); }; template< > struct is_convertible_impl< void volatile,void volatile > { public: static const bool value = (true); }; template< > struct is_convertible_impl< void volatile,void const volatile > { public: static const bool value = (true); }; template< > struct is_convertible_impl< void const volatile,void > { public: static const bool value = (true); }; template< > struct is_convertible_impl< void const volatile,void const > { public: static const bool value = (true); }; template< > struct is_convertible_impl< void const volatile,void volatile > { public: static const bool value = (true); }; template< > struct is_convertible_impl< void const volatile,void const volatile > { public: static const bool value = (true); };



template< typename To > struct is_convertible_impl< void,To > { public: static const bool value = (false); };
template< typename From > struct is_convertible_impl< From,void > { public: static const bool value = (false); };
template< typename To > struct is_convertible_impl< void const,To > { public: static const bool value = (false); };
template< typename To > struct is_convertible_impl< void volatile,To > { public: static const bool value = (false); };
template< typename To > struct is_convertible_impl< void const volatile,To > { public: static const bool value = (false); };
template< typename From > struct is_convertible_impl< From,void const > { public: static const bool value = (false); };
template< typename From > struct is_convertible_impl< From,void volatile > { public: static const bool value = (false); };
template< typename From > struct is_convertible_impl< From,void const volatile > { public: static const bool value = (false); };

} 

template< typename From, typename To > struct is_convertible : public ::boost::integral_constant<bool,(::boost::detail::is_convertible_impl_dispatch<From,To> ::value)> { public:   }; 


} 

















namespace boost {





struct no_traversal_tag {};

struct incrementable_traversal_tag 
  : no_traversal_tag
{


};
  
struct single_pass_traversal_tag
  : incrementable_traversal_tag
{


};
  
struct forward_traversal_tag
  : single_pass_traversal_tag
{


};
  
struct bidirectional_traversal_tag
  : forward_traversal_tag
{


};
  
struct random_access_traversal_tag
  : bidirectional_traversal_tag
{


};

namespace detail
{  
  
  
  
  
  
  
  template <class Cat>
  struct old_category_to_traversal
    : mpl::eval_if<
          is_convertible<Cat,std::random_access_iterator_tag>
        , mpl::identity<random_access_traversal_tag>
        , mpl::eval_if<
              is_convertible<Cat,std::bidirectional_iterator_tag>
            , mpl::identity<bidirectional_traversal_tag>
            , mpl::eval_if<
                  is_convertible<Cat,std::forward_iterator_tag>
                , mpl::identity<forward_traversal_tag>
                , mpl::eval_if<
                      is_convertible<Cat,std::input_iterator_tag>
                    , mpl::identity<single_pass_traversal_tag>
                    , mpl::eval_if<
                          is_convertible<Cat,std::output_iterator_tag>
                        , mpl::identity<incrementable_traversal_tag>
                        , void
                      >
                  >
              >
          >
      >
  {};


  template <class Traversal>
  struct pure_traversal_tag
    : mpl::eval_if<
          is_convertible<Traversal,random_access_traversal_tag>
        , mpl::identity<random_access_traversal_tag>
        , mpl::eval_if<
              is_convertible<Traversal,bidirectional_traversal_tag>
            , mpl::identity<bidirectional_traversal_tag>
            , mpl::eval_if<
                  is_convertible<Traversal,forward_traversal_tag>
                , mpl::identity<forward_traversal_tag>
                , mpl::eval_if<
                      is_convertible<Traversal,single_pass_traversal_tag>
                    , mpl::identity<single_pass_traversal_tag>
                    , mpl::eval_if<
                          is_convertible<Traversal,incrementable_traversal_tag>
                        , mpl::identity<incrementable_traversal_tag>
                        , void
                      >
                  >
              >
          >
      >
  {
  };
  

} 





template <class Cat>
struct iterator_category_to_traversal
  : mpl::eval_if< 
        is_convertible<Cat,incrementable_traversal_tag>
      , mpl::identity<Cat>
      , boost::detail::old_category_to_traversal<Cat>
    >
{};


template <class Iterator = mpl::_1>
struct iterator_traversal
  : iterator_category_to_traversal<
        typename boost::detail::iterator_traits<Iterator>::iterator_category
    >
{};


} 














































































namespace boost
{

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  template <typename A, typename B>
  struct is_interoperable
    : mpl::or_<
          is_convertible< A, B >
        , is_convertible< B, A > >
  { 
  };

} 


































































































































   
   
   
   
   















namespace boost {
namespace type_traits {

template <typename T>
struct is_mem_fun_pointer_impl
{
    static const bool value = false;
};




template <class R, class T >
struct is_mem_fun_pointer_impl<R (T::*)() > { static const bool value = true; };
template <class R, class T >
struct is_mem_fun_pointer_impl<R (T::*)( ...) > { static const bool value = true; };

template <class R, class T >
struct is_mem_fun_pointer_impl<R (T::*)() const > { static const bool value = true; };

template <class R, class T >
struct is_mem_fun_pointer_impl<R (T::*)() volatile > { static const bool value = true; };

template <class R, class T >
struct is_mem_fun_pointer_impl<R (T::*)() const volatile > { static const bool value = true; };

template <class R, class T >
struct is_mem_fun_pointer_impl<R (T::*)( ...) const > { static const bool value = true; };

template <class R, class T >
struct is_mem_fun_pointer_impl<R (T::*)( ...) volatile > { static const bool value = true; };

template <class R, class T >
struct is_mem_fun_pointer_impl<R (T::*)( ...) const volatile > { static const bool value = true; };
template <class R, class T , class T0>
struct is_mem_fun_pointer_impl<R (T::*)( T0) > { static const bool value = true; };
template <class R, class T , class T0>
struct is_mem_fun_pointer_impl<R (T::*)( T0 ...) > { static const bool value = true; };

template <class R, class T , class T0>
struct is_mem_fun_pointer_impl<R (T::*)( T0) const > { static const bool value = true; };

template <class R, class T , class T0>
struct is_mem_fun_pointer_impl<R (T::*)( T0) volatile > { static const bool value = true; };

template <class R, class T , class T0>
struct is_mem_fun_pointer_impl<R (T::*)( T0) const volatile > { static const bool value = true; };

template <class R, class T , class T0>
struct is_mem_fun_pointer_impl<R (T::*)( T0 ...) const > { static const bool value = true; };

template <class R, class T , class T0>
