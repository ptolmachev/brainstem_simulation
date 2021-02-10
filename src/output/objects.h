
#ifndef _BRIAN_OBJECTS_H
#define _BRIAN_OBJECTS_H

#include "synapses_classes.h"
#include "brianlib/clocks.h"
#include "brianlib/dynamic_array.h"
#include "brianlib/stdint_compat.h"
#include "network.h"
#include "randomkit.h"
#include<vector>


namespace brian {

// In OpenMP we need one state per thread
extern std::vector< rk_state* > _mersenne_twister_states;

//////////////// clocks ///////////////////
extern Clock defaultclock;

//////////////// networks /////////////////
extern Network magicnetwork;

//////////////// dynamic arrays ///////////
extern std::vector<double> _dynamic_array_ratemonitor_1_rate;
extern std::vector<double> _dynamic_array_ratemonitor_1_t;
extern std::vector<double> _dynamic_array_ratemonitor_2_rate;
extern std::vector<double> _dynamic_array_ratemonitor_2_t;
extern std::vector<double> _dynamic_array_ratemonitor_3_rate;
extern std::vector<double> _dynamic_array_ratemonitor_3_t;
extern std::vector<double> _dynamic_array_ratemonitor_4_rate;
extern std::vector<double> _dynamic_array_ratemonitor_4_t;
extern std::vector<double> _dynamic_array_ratemonitor_5_rate;
extern std::vector<double> _dynamic_array_ratemonitor_5_t;
extern std::vector<double> _dynamic_array_ratemonitor_6_rate;
extern std::vector<double> _dynamic_array_ratemonitor_6_t;
extern std::vector<double> _dynamic_array_ratemonitor_rate;
extern std::vector<double> _dynamic_array_ratemonitor_t;
extern std::vector<int32_t> _dynamic_array_spikemonitor_1_i;
extern std::vector<double> _dynamic_array_spikemonitor_1_t;
extern std::vector<int32_t> _dynamic_array_spikemonitor_2_i;
extern std::vector<double> _dynamic_array_spikemonitor_2_t;
extern std::vector<int32_t> _dynamic_array_spikemonitor_3_i;
extern std::vector<double> _dynamic_array_spikemonitor_3_t;
extern std::vector<int32_t> _dynamic_array_spikemonitor_4_i;
extern std::vector<double> _dynamic_array_spikemonitor_4_t;
extern std::vector<int32_t> _dynamic_array_spikemonitor_5_i;
extern std::vector<double> _dynamic_array_spikemonitor_5_t;
extern std::vector<int32_t> _dynamic_array_spikemonitor_6_i;
extern std::vector<double> _dynamic_array_spikemonitor_6_t;
extern std::vector<int32_t> _dynamic_array_spikemonitor_i;
extern std::vector<double> _dynamic_array_spikemonitor_t;
extern std::vector<double> _dynamic_array_statemonitor_1_t;
extern std::vector<double> _dynamic_array_statemonitor_2_t;
extern std::vector<double> _dynamic_array_statemonitor_3_t;
extern std::vector<double> _dynamic_array_statemonitor_4_t;
extern std::vector<double> _dynamic_array_statemonitor_5_t;
extern std::vector<double> _dynamic_array_statemonitor_6_t;
extern std::vector<double> _dynamic_array_statemonitor_t;
extern std::vector<int32_t> _dynamic_array_synapses_10__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_10__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_10_delay;
extern std::vector<int32_t> _dynamic_array_synapses_10_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_10_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_11__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_11__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_11_delay;
extern std::vector<int32_t> _dynamic_array_synapses_11_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_11_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_12__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_12__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_12_delay;
extern std::vector<int32_t> _dynamic_array_synapses_12_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_12_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_13__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_13__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_13_delay;
extern std::vector<int32_t> _dynamic_array_synapses_13_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_13_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_14__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_14__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_14_delay;
extern std::vector<int32_t> _dynamic_array_synapses_14_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_14_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_15__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_15__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_15_delay;
extern std::vector<int32_t> _dynamic_array_synapses_15_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_15_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_16__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_16__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_16_delay;
extern std::vector<int32_t> _dynamic_array_synapses_16_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_16_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_17__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_17__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_17_delay;
extern std::vector<int32_t> _dynamic_array_synapses_17_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_17_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_18__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_18__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_18_delay;
extern std::vector<int32_t> _dynamic_array_synapses_18_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_18_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_1__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_1__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_1_delay;
extern std::vector<int32_t> _dynamic_array_synapses_1_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_1_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_2__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_2__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_2_delay;
extern std::vector<int32_t> _dynamic_array_synapses_2_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_2_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_3__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_3__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_3_delay;
extern std::vector<int32_t> _dynamic_array_synapses_3_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_3_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_4__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_4__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_4_delay;
extern std::vector<int32_t> _dynamic_array_synapses_4_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_4_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_5__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_5__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_5_delay;
extern std::vector<int32_t> _dynamic_array_synapses_5_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_5_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_6__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_6__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_6_delay;
extern std::vector<int32_t> _dynamic_array_synapses_6_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_6_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_7__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_7__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_7_delay;
extern std::vector<int32_t> _dynamic_array_synapses_7_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_7_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_8__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_8__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_8_delay;
extern std::vector<int32_t> _dynamic_array_synapses_8_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_8_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses_9__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses_9__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_9_delay;
extern std::vector<int32_t> _dynamic_array_synapses_9_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_9_N_outgoing;
extern std::vector<int32_t> _dynamic_array_synapses__synaptic_post;
extern std::vector<int32_t> _dynamic_array_synapses__synaptic_pre;
extern std::vector<double> _dynamic_array_synapses_delay;
extern std::vector<int32_t> _dynamic_array_synapses_N_incoming;
extern std::vector<int32_t> _dynamic_array_synapses_N_outgoing;

//////////////// arrays ///////////////////
extern double *_array_defaultclock_dt;
extern const int _num__array_defaultclock_dt;
extern double *_array_defaultclock_t;
extern const int _num__array_defaultclock_t;
extern int64_t *_array_defaultclock_timestep;
extern const int _num__array_defaultclock_timestep;
extern int32_t *_array_neurongroup_1__spikespace;
extern const int _num__array_neurongroup_1__spikespace;
extern double *_array_neurongroup_1_d;
extern const int _num__array_neurongroup_1_d;
extern int32_t *_array_neurongroup_1_i;
extern const int _num__array_neurongroup_1_i;
extern double *_array_neurongroup_1_lastspike;
extern const int _num__array_neurongroup_1_lastspike;
extern char *_array_neurongroup_1_not_refractory;
extern const int _num__array_neurongroup_1_not_refractory;
extern double *_array_neurongroup_1_u;
extern const int _num__array_neurongroup_1_u;
extern double *_array_neurongroup_1_v;
extern const int _num__array_neurongroup_1_v;
extern double *_array_neurongroup_1_wE;
extern const int _num__array_neurongroup_1_wE;
extern double *_array_neurongroup_1_wE2;
extern const int _num__array_neurongroup_1_wE2;
extern double *_array_neurongroup_1_wI_1;
extern const int _num__array_neurongroup_1_wI_1;
extern double *_array_neurongroup_1_wI_2;
extern const int _num__array_neurongroup_1_wI_2;
extern double *_array_neurongroup_1_wI_3;
extern const int _num__array_neurongroup_1_wI_3;
extern double *_array_neurongroup_1_y;
extern const int _num__array_neurongroup_1_y;
extern int32_t *_array_neurongroup_2__spikespace;
extern const int _num__array_neurongroup_2__spikespace;
extern double *_array_neurongroup_2_d;
extern const int _num__array_neurongroup_2_d;
extern int32_t *_array_neurongroup_2_i;
extern const int _num__array_neurongroup_2_i;
extern double *_array_neurongroup_2_lastspike;
extern const int _num__array_neurongroup_2_lastspike;
extern char *_array_neurongroup_2_not_refractory;
extern const int _num__array_neurongroup_2_not_refractory;
extern double *_array_neurongroup_2_u;
extern const int _num__array_neurongroup_2_u;
extern double *_array_neurongroup_2_v;
extern const int _num__array_neurongroup_2_v;
extern double *_array_neurongroup_2_wE;
extern const int _num__array_neurongroup_2_wE;
extern double *_array_neurongroup_2_wE2;
extern const int _num__array_neurongroup_2_wE2;
extern double *_array_neurongroup_2_wI_1;
extern const int _num__array_neurongroup_2_wI_1;
extern double *_array_neurongroup_2_wI_2;
extern const int _num__array_neurongroup_2_wI_2;
extern double *_array_neurongroup_2_wI_3;
extern const int _num__array_neurongroup_2_wI_3;
extern double *_array_neurongroup_2_y;
extern const int _num__array_neurongroup_2_y;
extern int32_t *_array_neurongroup_3__spikespace;
extern const int _num__array_neurongroup_3__spikespace;
extern double *_array_neurongroup_3_d;
extern const int _num__array_neurongroup_3_d;
extern int32_t *_array_neurongroup_3_i;
extern const int _num__array_neurongroup_3_i;
extern double *_array_neurongroup_3_lastspike;
extern const int _num__array_neurongroup_3_lastspike;
extern char *_array_neurongroup_3_not_refractory;
extern const int _num__array_neurongroup_3_not_refractory;
extern double *_array_neurongroup_3_u;
extern const int _num__array_neurongroup_3_u;
extern double *_array_neurongroup_3_v;
extern const int _num__array_neurongroup_3_v;
extern double *_array_neurongroup_3_wE;
extern const int _num__array_neurongroup_3_wE;
extern double *_array_neurongroup_3_wE2;
extern const int _num__array_neurongroup_3_wE2;
extern double *_array_neurongroup_3_wI_1;
extern const int _num__array_neurongroup_3_wI_1;
extern double *_array_neurongroup_3_wI_2;
extern const int _num__array_neurongroup_3_wI_2;
extern double *_array_neurongroup_3_wI_3;
extern const int _num__array_neurongroup_3_wI_3;
extern double *_array_neurongroup_3_y;
extern const int _num__array_neurongroup_3_y;
extern int32_t *_array_neurongroup_4__spikespace;
extern const int _num__array_neurongroup_4__spikespace;
extern double *_array_neurongroup_4_d;
extern const int _num__array_neurongroup_4_d;
extern int32_t *_array_neurongroup_4_i;
extern const int _num__array_neurongroup_4_i;
extern double *_array_neurongroup_4_lastspike;
extern const int _num__array_neurongroup_4_lastspike;
extern char *_array_neurongroup_4_not_refractory;
extern const int _num__array_neurongroup_4_not_refractory;
extern double *_array_neurongroup_4_u;
extern const int _num__array_neurongroup_4_u;
extern double *_array_neurongroup_4_v;
extern const int _num__array_neurongroup_4_v;
extern double *_array_neurongroup_4_wE;
extern const int _num__array_neurongroup_4_wE;
extern double *_array_neurongroup_4_wE2;
extern const int _num__array_neurongroup_4_wE2;
extern double *_array_neurongroup_4_wI_1;
extern const int _num__array_neurongroup_4_wI_1;
extern double *_array_neurongroup_4_wI_2;
extern const int _num__array_neurongroup_4_wI_2;
extern double *_array_neurongroup_4_wI_3;
extern const int _num__array_neurongroup_4_wI_3;
extern double *_array_neurongroup_4_y;
extern const int _num__array_neurongroup_4_y;
extern int32_t *_array_neurongroup_5__spikespace;
extern const int _num__array_neurongroup_5__spikespace;
extern double *_array_neurongroup_5_d;
extern const int _num__array_neurongroup_5_d;
extern int32_t *_array_neurongroup_5_i;
extern const int _num__array_neurongroup_5_i;
extern double *_array_neurongroup_5_lastspike;
extern const int _num__array_neurongroup_5_lastspike;
extern char *_array_neurongroup_5_not_refractory;
extern const int _num__array_neurongroup_5_not_refractory;
extern double *_array_neurongroup_5_u;
extern const int _num__array_neurongroup_5_u;
extern double *_array_neurongroup_5_v;
extern const int _num__array_neurongroup_5_v;
extern double *_array_neurongroup_5_wE;
extern const int _num__array_neurongroup_5_wE;
extern double *_array_neurongroup_5_wE2;
extern const int _num__array_neurongroup_5_wE2;
extern double *_array_neurongroup_5_wI_1;
extern const int _num__array_neurongroup_5_wI_1;
extern double *_array_neurongroup_5_wI_2;
extern const int _num__array_neurongroup_5_wI_2;
extern double *_array_neurongroup_5_wI_3;
extern const int _num__array_neurongroup_5_wI_3;
extern double *_array_neurongroup_5_y;
extern const int _num__array_neurongroup_5_y;
extern int32_t *_array_neurongroup_6__spikespace;
extern const int _num__array_neurongroup_6__spikespace;
extern double *_array_neurongroup_6_d;
extern const int _num__array_neurongroup_6_d;
extern int32_t *_array_neurongroup_6_i;
extern const int _num__array_neurongroup_6_i;
extern double *_array_neurongroup_6_lastspike;
extern const int _num__array_neurongroup_6_lastspike;
extern char *_array_neurongroup_6_not_refractory;
extern const int _num__array_neurongroup_6_not_refractory;
extern double *_array_neurongroup_6_u;
extern const int _num__array_neurongroup_6_u;
extern double *_array_neurongroup_6_v;
extern const int _num__array_neurongroup_6_v;
extern double *_array_neurongroup_6_wE;
extern const int _num__array_neurongroup_6_wE;
extern double *_array_neurongroup_6_wE2;
extern const int _num__array_neurongroup_6_wE2;
extern double *_array_neurongroup_6_wI_1;
extern const int _num__array_neurongroup_6_wI_1;
extern double *_array_neurongroup_6_wI_2;
extern const int _num__array_neurongroup_6_wI_2;
extern double *_array_neurongroup_6_wI_3;
extern const int _num__array_neurongroup_6_wI_3;
extern double *_array_neurongroup_6_y;
extern const int _num__array_neurongroup_6_y;
extern int32_t *_array_neurongroup__spikespace;
extern const int _num__array_neurongroup__spikespace;
extern double *_array_neurongroup_d;
extern const int _num__array_neurongroup_d;
extern int32_t *_array_neurongroup_i;
extern const int _num__array_neurongroup_i;
extern double *_array_neurongroup_lastspike;
extern const int _num__array_neurongroup_lastspike;
extern char *_array_neurongroup_not_refractory;
extern const int _num__array_neurongroup_not_refractory;
extern double *_array_neurongroup_u;
extern const int _num__array_neurongroup_u;
extern double *_array_neurongroup_v;
extern const int _num__array_neurongroup_v;
extern double *_array_neurongroup_wE;
extern const int _num__array_neurongroup_wE;
extern double *_array_neurongroup_wI_1;
extern const int _num__array_neurongroup_wI_1;
extern double *_array_neurongroup_wI_2;
extern const int _num__array_neurongroup_wI_2;
extern double *_array_neurongroup_wI_3;
extern const int _num__array_neurongroup_wI_3;
extern double *_array_neurongroup_y;
extern const int _num__array_neurongroup_y;
extern int32_t *_array_ratemonitor_1_N;
extern const int _num__array_ratemonitor_1_N;
extern int32_t *_array_ratemonitor_2_N;
extern const int _num__array_ratemonitor_2_N;
extern int32_t *_array_ratemonitor_3_N;
extern const int _num__array_ratemonitor_3_N;
extern int32_t *_array_ratemonitor_4_N;
extern const int _num__array_ratemonitor_4_N;
extern int32_t *_array_ratemonitor_5_N;
extern const int _num__array_ratemonitor_5_N;
extern int32_t *_array_ratemonitor_6_N;
extern const int _num__array_ratemonitor_6_N;
extern int32_t *_array_ratemonitor_N;
extern const int _num__array_ratemonitor_N;
extern int32_t *_array_spikemonitor_1__source_idx;
extern const int _num__array_spikemonitor_1__source_idx;
extern int32_t *_array_spikemonitor_1_count;
extern const int _num__array_spikemonitor_1_count;
extern int32_t *_array_spikemonitor_1_N;
extern const int _num__array_spikemonitor_1_N;
extern int32_t *_array_spikemonitor_2__source_idx;
extern const int _num__array_spikemonitor_2__source_idx;
extern int32_t *_array_spikemonitor_2_count;
extern const int _num__array_spikemonitor_2_count;
extern int32_t *_array_spikemonitor_2_N;
extern const int _num__array_spikemonitor_2_N;
extern int32_t *_array_spikemonitor_3__source_idx;
extern const int _num__array_spikemonitor_3__source_idx;
extern int32_t *_array_spikemonitor_3_count;
extern const int _num__array_spikemonitor_3_count;
extern int32_t *_array_spikemonitor_3_N;
extern const int _num__array_spikemonitor_3_N;
extern int32_t *_array_spikemonitor_4__source_idx;
extern const int _num__array_spikemonitor_4__source_idx;
extern int32_t *_array_spikemonitor_4_count;
extern const int _num__array_spikemonitor_4_count;
extern int32_t *_array_spikemonitor_4_N;
extern const int _num__array_spikemonitor_4_N;
extern int32_t *_array_spikemonitor_5__source_idx;
extern const int _num__array_spikemonitor_5__source_idx;
extern int32_t *_array_spikemonitor_5_count;
extern const int _num__array_spikemonitor_5_count;
extern int32_t *_array_spikemonitor_5_N;
extern const int _num__array_spikemonitor_5_N;
extern int32_t *_array_spikemonitor_6__source_idx;
extern const int _num__array_spikemonitor_6__source_idx;
extern int32_t *_array_spikemonitor_6_count;
extern const int _num__array_spikemonitor_6_count;
extern int32_t *_array_spikemonitor_6_N;
extern const int _num__array_spikemonitor_6_N;
extern int32_t *_array_spikemonitor__source_idx;
extern const int _num__array_spikemonitor__source_idx;
extern int32_t *_array_spikemonitor_count;
extern const int _num__array_spikemonitor_count;
extern int32_t *_array_spikemonitor_N;
extern const int _num__array_spikemonitor_N;
extern int32_t *_array_statemonitor_1__indices;
extern const int _num__array_statemonitor_1__indices;
extern int32_t *_array_statemonitor_1_N;
extern const int _num__array_statemonitor_1_N;
extern double *_array_statemonitor_1_v;
extern const int _num__array_statemonitor_1_v;
extern double *_array_statemonitor_1_wE;
extern const int _num__array_statemonitor_1_wE;
extern double *_array_statemonitor_1_wI_1;
extern const int _num__array_statemonitor_1_wI_1;
extern double *_array_statemonitor_1_wI_2;
extern const int _num__array_statemonitor_1_wI_2;
extern double *_array_statemonitor_1_wI_3;
extern const int _num__array_statemonitor_1_wI_3;
extern int32_t *_array_statemonitor_2__indices;
extern const int _num__array_statemonitor_2__indices;
extern int32_t *_array_statemonitor_2_N;
extern const int _num__array_statemonitor_2_N;
extern double *_array_statemonitor_2_v;
extern const int _num__array_statemonitor_2_v;
extern double *_array_statemonitor_2_wE;
extern const int _num__array_statemonitor_2_wE;
extern double *_array_statemonitor_2_wI_1;
extern const int _num__array_statemonitor_2_wI_1;
extern double *_array_statemonitor_2_wI_2;
extern const int _num__array_statemonitor_2_wI_2;
extern double *_array_statemonitor_2_wI_3;
extern const int _num__array_statemonitor_2_wI_3;
extern int32_t *_array_statemonitor_3__indices;
extern const int _num__array_statemonitor_3__indices;
extern int32_t *_array_statemonitor_3_N;
extern const int _num__array_statemonitor_3_N;
extern double *_array_statemonitor_3_v;
extern const int _num__array_statemonitor_3_v;
extern double *_array_statemonitor_3_wE;
extern const int _num__array_statemonitor_3_wE;
extern double *_array_statemonitor_3_wI_1;
extern const int _num__array_statemonitor_3_wI_1;
extern double *_array_statemonitor_3_wI_2;
extern const int _num__array_statemonitor_3_wI_2;
extern double *_array_statemonitor_3_wI_3;
extern const int _num__array_statemonitor_3_wI_3;
extern int32_t *_array_statemonitor_4__indices;
extern const int _num__array_statemonitor_4__indices;
extern int32_t *_array_statemonitor_4_N;
extern const int _num__array_statemonitor_4_N;
extern double *_array_statemonitor_4_v;
extern const int _num__array_statemonitor_4_v;
extern double *_array_statemonitor_4_wE;
extern const int _num__array_statemonitor_4_wE;
extern double *_array_statemonitor_4_wI_1;
extern const int _num__array_statemonitor_4_wI_1;
extern double *_array_statemonitor_4_wI_2;
extern const int _num__array_statemonitor_4_wI_2;
extern double *_array_statemonitor_4_wI_3;
extern const int _num__array_statemonitor_4_wI_3;
extern int32_t *_array_statemonitor_5__indices;
extern const int _num__array_statemonitor_5__indices;
extern int32_t *_array_statemonitor_5_N;
extern const int _num__array_statemonitor_5_N;
extern double *_array_statemonitor_5_v;
extern const int _num__array_statemonitor_5_v;
extern double *_array_statemonitor_5_wE;
extern const int _num__array_statemonitor_5_wE;
extern double *_array_statemonitor_5_wE2;
extern const int _num__array_statemonitor_5_wE2;
extern double *_array_statemonitor_5_wI_1;
extern const int _num__array_statemonitor_5_wI_1;
extern double *_array_statemonitor_5_wI_2;
extern const int _num__array_statemonitor_5_wI_2;
extern double *_array_statemonitor_5_wI_3;
extern const int _num__array_statemonitor_5_wI_3;
extern int32_t *_array_statemonitor_6__indices;
extern const int _num__array_statemonitor_6__indices;
extern int32_t *_array_statemonitor_6_N;
extern const int _num__array_statemonitor_6_N;
extern double *_array_statemonitor_6_v;
extern const int _num__array_statemonitor_6_v;
extern double *_array_statemonitor_6_wE;
extern const int _num__array_statemonitor_6_wE;
extern double *_array_statemonitor_6_wI_1;
extern const int _num__array_statemonitor_6_wI_1;
extern double *_array_statemonitor_6_wI_2;
extern const int _num__array_statemonitor_6_wI_2;
extern double *_array_statemonitor_6_wI_3;
extern const int _num__array_statemonitor_6_wI_3;
extern int32_t *_array_statemonitor__indices;
extern const int _num__array_statemonitor__indices;
extern int32_t *_array_statemonitor_N;
extern const int _num__array_statemonitor_N;
extern double *_array_statemonitor_v;
extern const int _num__array_statemonitor_v;
extern double *_array_statemonitor_wE;
extern const int _num__array_statemonitor_wE;
extern double *_array_statemonitor_wI_1;
extern const int _num__array_statemonitor_wI_1;
extern double *_array_statemonitor_wI_2;
extern const int _num__array_statemonitor_wI_2;
extern double *_array_statemonitor_wI_3;
extern const int _num__array_statemonitor_wI_3;
extern int32_t *_array_synapses_10_N;
extern const int _num__array_synapses_10_N;
extern int32_t *_array_synapses_11_N;
extern const int _num__array_synapses_11_N;
extern int32_t *_array_synapses_12_N;
extern const int _num__array_synapses_12_N;
extern int32_t *_array_synapses_13_N;
extern const int _num__array_synapses_13_N;
extern int32_t *_array_synapses_14_N;
extern const int _num__array_synapses_14_N;
extern int32_t *_array_synapses_15_N;
extern const int _num__array_synapses_15_N;
extern int32_t *_array_synapses_16_N;
extern const int _num__array_synapses_16_N;
extern int32_t *_array_synapses_17_N;
extern const int _num__array_synapses_17_N;
extern int32_t *_array_synapses_18_N;
extern const int _num__array_synapses_18_N;
extern int32_t *_array_synapses_1_N;
extern const int _num__array_synapses_1_N;
extern int32_t *_array_synapses_2_N;
extern const int _num__array_synapses_2_N;
extern int32_t *_array_synapses_3_N;
extern const int _num__array_synapses_3_N;
extern int32_t *_array_synapses_4_N;
extern const int _num__array_synapses_4_N;
extern int32_t *_array_synapses_5_N;
extern const int _num__array_synapses_5_N;
extern int32_t *_array_synapses_6_N;
extern const int _num__array_synapses_6_N;
extern int32_t *_array_synapses_7_N;
extern const int _num__array_synapses_7_N;
extern int32_t *_array_synapses_8_N;
extern const int _num__array_synapses_8_N;
extern int32_t *_array_synapses_9_N;
extern const int _num__array_synapses_9_N;
extern int32_t *_array_synapses_N;
extern const int _num__array_synapses_N;

//////////////// dynamic arrays 2d /////////
extern DynamicArray2D<double> _dynamic_array_statemonitor_1_v;
extern DynamicArray2D<double> _dynamic_array_statemonitor_1_wE;
extern DynamicArray2D<double> _dynamic_array_statemonitor_1_wI_1;
extern DynamicArray2D<double> _dynamic_array_statemonitor_1_wI_2;
extern DynamicArray2D<double> _dynamic_array_statemonitor_1_wI_3;
extern DynamicArray2D<double> _dynamic_array_statemonitor_2_v;
extern DynamicArray2D<double> _dynamic_array_statemonitor_2_wE;
extern DynamicArray2D<double> _dynamic_array_statemonitor_2_wI_1;
extern DynamicArray2D<double> _dynamic_array_statemonitor_2_wI_2;
extern DynamicArray2D<double> _dynamic_array_statemonitor_2_wI_3;
extern DynamicArray2D<double> _dynamic_array_statemonitor_3_v;
extern DynamicArray2D<double> _dynamic_array_statemonitor_3_wE;
extern DynamicArray2D<double> _dynamic_array_statemonitor_3_wI_1;
extern DynamicArray2D<double> _dynamic_array_statemonitor_3_wI_2;
extern DynamicArray2D<double> _dynamic_array_statemonitor_3_wI_3;
extern DynamicArray2D<double> _dynamic_array_statemonitor_4_v;
extern DynamicArray2D<double> _dynamic_array_statemonitor_4_wE;
extern DynamicArray2D<double> _dynamic_array_statemonitor_4_wI_1;
extern DynamicArray2D<double> _dynamic_array_statemonitor_4_wI_2;
extern DynamicArray2D<double> _dynamic_array_statemonitor_4_wI_3;
extern DynamicArray2D<double> _dynamic_array_statemonitor_5_v;
extern DynamicArray2D<double> _dynamic_array_statemonitor_5_wE;
extern DynamicArray2D<double> _dynamic_array_statemonitor_5_wE2;
extern DynamicArray2D<double> _dynamic_array_statemonitor_5_wI_1;
extern DynamicArray2D<double> _dynamic_array_statemonitor_5_wI_2;
extern DynamicArray2D<double> _dynamic_array_statemonitor_5_wI_3;
extern DynamicArray2D<double> _dynamic_array_statemonitor_6_v;
extern DynamicArray2D<double> _dynamic_array_statemonitor_6_wE;
extern DynamicArray2D<double> _dynamic_array_statemonitor_6_wI_1;
extern DynamicArray2D<double> _dynamic_array_statemonitor_6_wI_2;
extern DynamicArray2D<double> _dynamic_array_statemonitor_6_wI_3;
extern DynamicArray2D<double> _dynamic_array_statemonitor_v;
extern DynamicArray2D<double> _dynamic_array_statemonitor_wE;
extern DynamicArray2D<double> _dynamic_array_statemonitor_wI_1;
extern DynamicArray2D<double> _dynamic_array_statemonitor_wI_2;
extern DynamicArray2D<double> _dynamic_array_statemonitor_wI_3;

/////////////// static arrays /////////////
extern double *_static_array__array_neurongroup_1_d;
extern const int _num__static_array__array_neurongroup_1_d;
extern double *_static_array__array_neurongroup_1_u;
extern const int _num__static_array__array_neurongroup_1_u;
extern double *_static_array__array_neurongroup_1_v;
extern const int _num__static_array__array_neurongroup_1_v;
extern double *_static_array__array_neurongroup_2_d;
extern const int _num__static_array__array_neurongroup_2_d;
extern double *_static_array__array_neurongroup_2_u;
extern const int _num__static_array__array_neurongroup_2_u;
extern double *_static_array__array_neurongroup_2_v;
extern const int _num__static_array__array_neurongroup_2_v;
extern double *_static_array__array_neurongroup_3_d;
extern const int _num__static_array__array_neurongroup_3_d;
extern double *_static_array__array_neurongroup_3_u;
extern const int _num__static_array__array_neurongroup_3_u;
extern double *_static_array__array_neurongroup_3_v;
extern const int _num__static_array__array_neurongroup_3_v;
extern double *_static_array__array_neurongroup_4_d;
extern const int _num__static_array__array_neurongroup_4_d;
extern double *_static_array__array_neurongroup_4_u;
extern const int _num__static_array__array_neurongroup_4_u;
extern double *_static_array__array_neurongroup_4_v;
extern const int _num__static_array__array_neurongroup_4_v;
extern double *_static_array__array_neurongroup_5_d;
extern const int _num__static_array__array_neurongroup_5_d;
extern double *_static_array__array_neurongroup_5_u;
extern const int _num__static_array__array_neurongroup_5_u;
extern double *_static_array__array_neurongroup_5_v;
extern const int _num__static_array__array_neurongroup_5_v;
extern double *_static_array__array_neurongroup_6_d;
extern const int _num__static_array__array_neurongroup_6_d;
extern double *_static_array__array_neurongroup_6_u;
extern const int _num__static_array__array_neurongroup_6_u;
extern double *_static_array__array_neurongroup_6_v;
extern const int _num__static_array__array_neurongroup_6_v;
extern double *_static_array__array_neurongroup_d;
extern const int _num__static_array__array_neurongroup_d;
extern double *_static_array__array_neurongroup_u;
extern const int _num__static_array__array_neurongroup_u;
extern double *_static_array__array_neurongroup_v;
extern const int _num__static_array__array_neurongroup_v;

//////////////// synapses /////////////////
// synapses
extern SynapticPathway synapses_pre;
// synapses_1
extern SynapticPathway synapses_1_pre;
// synapses_10
extern SynapticPathway synapses_10_pre;
// synapses_11
extern SynapticPathway synapses_11_pre;
// synapses_12
extern SynapticPathway synapses_12_pre;
// synapses_13
extern SynapticPathway synapses_13_pre;
// synapses_14
extern SynapticPathway synapses_14_pre;
// synapses_15
extern SynapticPathway synapses_15_pre;
// synapses_16
extern SynapticPathway synapses_16_pre;
// synapses_17
extern SynapticPathway synapses_17_pre;
// synapses_18
extern SynapticPathway synapses_18_pre;
// synapses_2
extern SynapticPathway synapses_2_pre;
// synapses_3
extern SynapticPathway synapses_3_pre;
// synapses_4
extern SynapticPathway synapses_4_pre;
// synapses_5
extern SynapticPathway synapses_5_pre;
// synapses_6
extern SynapticPathway synapses_6_pre;
// synapses_7
extern SynapticPathway synapses_7_pre;
// synapses_8
extern SynapticPathway synapses_8_pre;
// synapses_9
extern SynapticPathway synapses_9_pre;

// Profiling information for each code object
}

void _init_arrays();
void _load_arrays();
void _write_arrays();
void _dealloc_arrays();

#endif

