#include "code_objects/statemonitor_4_codeobject.h"
#include "objects.h"
#include "brianlib/common_math.h"
#include "brianlib/stdint_compat.h"
#include<cmath>
#include<ctime>
#include<iostream>
#include<fstream>
#include<climits>

////// SUPPORT CODE ///////
namespace {
        
    template < typename T1, typename T2 > struct _higher_type;
    template < > struct _higher_type<int,int> { typedef int type; };
    template < > struct _higher_type<int,long> { typedef long type; };
    template < > struct _higher_type<int,long long> { typedef long long type; };
    template < > struct _higher_type<int,float> { typedef float type; };
    template < > struct _higher_type<int,double> { typedef double type; };
    template < > struct _higher_type<int,long double> { typedef long double type; };
    template < > struct _higher_type<long,int> { typedef long type; };
    template < > struct _higher_type<long,long> { typedef long type; };
    template < > struct _higher_type<long,long long> { typedef long long type; };
    template < > struct _higher_type<long,float> { typedef float type; };
    template < > struct _higher_type<long,double> { typedef double type; };
    template < > struct _higher_type<long,long double> { typedef long double type; };
    template < > struct _higher_type<long long,int> { typedef long long type; };
    template < > struct _higher_type<long long,long> { typedef long long type; };
    template < > struct _higher_type<long long,long long> { typedef long long type; };
    template < > struct _higher_type<long long,float> { typedef float type; };
    template < > struct _higher_type<long long,double> { typedef double type; };
    template < > struct _higher_type<long long,long double> { typedef long double type; };
    template < > struct _higher_type<float,int> { typedef float type; };
    template < > struct _higher_type<float,long> { typedef float type; };
    template < > struct _higher_type<float,long long> { typedef float type; };
    template < > struct _higher_type<float,float> { typedef float type; };
    template < > struct _higher_type<float,double> { typedef double type; };
    template < > struct _higher_type<float,long double> { typedef long double type; };
    template < > struct _higher_type<double,int> { typedef double type; };
    template < > struct _higher_type<double,long> { typedef double type; };
    template < > struct _higher_type<double,long long> { typedef double type; };
    template < > struct _higher_type<double,float> { typedef double type; };
    template < > struct _higher_type<double,double> { typedef double type; };
    template < > struct _higher_type<double,long double> { typedef long double type; };
    template < > struct _higher_type<long double,int> { typedef long double type; };
    template < > struct _higher_type<long double,long> { typedef long double type; };
    template < > struct _higher_type<long double,long long> { typedef long double type; };
    template < > struct _higher_type<long double,float> { typedef long double type; };
    template < > struct _higher_type<long double,double> { typedef long double type; };
    template < > struct _higher_type<long double,long double> { typedef long double type; };
    template < typename T1, typename T2 >
    static inline typename _higher_type<T1,T2>::type
    _brian_mod(T1 x, T2 y)
    {{
        return x-y*floor(1.0*x/y);
    }}
    template < typename T1, typename T2 >
    static inline typename _higher_type<T1,T2>::type
    _brian_floordiv(T1 x, T2 y)
    {{
        return floor(1.0*x/y);
    }}
    #ifdef _MSC_VER
    #define _brian_pow(x, y) (pow((double)(x), (y)))
    #else
    #define _brian_pow(x, y) (pow((x), (y)))
    #endif

}

////// HASH DEFINES ///////



void _run_statemonitor_4_codeobject()
{
    using namespace brian;


    ///// CONSTANTS ///////////
    const size_t _num_source_wE = 100;
double* const _array_statemonitor_4_t = _dynamic_array_statemonitor_4_t.empty()? 0 : &_dynamic_array_statemonitor_4_t[0];
const size_t _numt = _dynamic_array_statemonitor_4_t.size();
const size_t _num_clock_t = 1;
const size_t _numN = 1;
const size_t _num_source_wI_2 = 100;
const size_t _num_source_v = 100;
const size_t _num_source_wI_3 = 100;
const size_t _num_source_wI_1 = 100;
const size_t _num_indices = 0;
    ///// POINTERS ////////////
        
    double* __restrict  _ptr_array_neurongroup_6_wE = _array_neurongroup_6_wE;
    double* __restrict  _ptr_array_statemonitor_4_t = _array_statemonitor_4_t;
    double*   _ptr_array_defaultclock_t = _array_defaultclock_t;
    int32_t*   _ptr_array_statemonitor_4_N = _array_statemonitor_4_N;
    double* __restrict  _ptr_array_neurongroup_6_wI_2 = _array_neurongroup_6_wI_2;
    double* __restrict  _ptr_array_neurongroup_6_v = _array_neurongroup_6_v;
    double* __restrict  _ptr_array_neurongroup_6_wI_3 = _array_neurongroup_6_wI_3;
    double* __restrict  _ptr_array_neurongroup_6_wI_1 = _array_neurongroup_6_wI_1;
    int32_t* __restrict  _ptr_array_statemonitor_4__indices = _array_statemonitor_4__indices;


    _dynamic_array_statemonitor_4_t.push_back(_ptr_array_defaultclock_t[0]);

    const size_t _new_size = _dynamic_array_statemonitor_4_t.size();
    // Resize the dynamic arrays
    _dynamic_array_statemonitor_4_v.resize(_new_size, _num_indices);
    _dynamic_array_statemonitor_4_wE.resize(_new_size, _num_indices);
    _dynamic_array_statemonitor_4_wI_1.resize(_new_size, _num_indices);
    _dynamic_array_statemonitor_4_wI_2.resize(_new_size, _num_indices);
    _dynamic_array_statemonitor_4_wI_3.resize(_new_size, _num_indices);

    // scalar code
    const size_t _vectorisation_idx = -1;
        


    
    for (int _i = 0; _i < (int)_num_indices; _i++)
    {
        // vector code
        const size_t _idx = _ptr_array_statemonitor_4__indices[_i];
        const size_t _vectorisation_idx = _idx;
                
        const double _source_wE = _ptr_array_neurongroup_6_wE[_idx];
        const double _source_v = _ptr_array_neurongroup_6_v[_idx];
        const double _source_wI_3 = _ptr_array_neurongroup_6_wI_3[_idx];
        const double _source_wI_1 = _ptr_array_neurongroup_6_wI_1[_idx];
        const double _source_wI_2 = _ptr_array_neurongroup_6_wI_2[_idx];
        const double _to_record_v = _source_v;
        const double _to_record_wE = _source_wE;
        const double _to_record_wI_1 = _source_wI_1;
        const double _to_record_wI_2 = _source_wI_2;
        const double _to_record_wI_3 = _source_wI_3;


        _dynamic_array_statemonitor_4_v(_new_size-1, _i) = _to_record_v;
        _dynamic_array_statemonitor_4_wE(_new_size-1, _i) = _to_record_wE;
        _dynamic_array_statemonitor_4_wI_1(_new_size-1, _i) = _to_record_wI_1;
        _dynamic_array_statemonitor_4_wI_2(_new_size-1, _i) = _to_record_wI_2;
        _dynamic_array_statemonitor_4_wI_3(_new_size-1, _i) = _to_record_wI_3;
    }

    _ptr_array_statemonitor_4_N[0] = _new_size;


}


