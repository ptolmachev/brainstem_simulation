#include<stdlib.h>
#include "objects.h"
#include<ctime>
#include "randomkit.h"

#include "code_objects/neurongroup_1_resetter_codeobject.h"
#include "code_objects/neurongroup_1_stateupdater_codeobject.h"
#include "code_objects/neurongroup_1_thresholder_codeobject.h"
#include "code_objects/neurongroup_2_resetter_codeobject.h"
#include "code_objects/neurongroup_2_stateupdater_codeobject.h"
#include "code_objects/neurongroup_2_thresholder_codeobject.h"
#include "code_objects/neurongroup_3_resetter_codeobject.h"
#include "code_objects/neurongroup_3_stateupdater_codeobject.h"
#include "code_objects/neurongroup_3_thresholder_codeobject.h"
#include "code_objects/neurongroup_4_resetter_codeobject.h"
#include "code_objects/neurongroup_4_stateupdater_codeobject.h"
#include "code_objects/neurongroup_4_thresholder_codeobject.h"
#include "code_objects/neurongroup_5_resetter_codeobject.h"
#include "code_objects/neurongroup_5_stateupdater_codeobject.h"
#include "code_objects/neurongroup_5_thresholder_codeobject.h"
#include "code_objects/neurongroup_6_resetter_codeobject.h"
#include "code_objects/neurongroup_6_stateupdater_codeobject.h"
#include "code_objects/neurongroup_6_thresholder_codeobject.h"
#include "code_objects/neurongroup_resetter_codeobject.h"
#include "code_objects/neurongroup_stateupdater_codeobject.h"
#include "code_objects/neurongroup_thresholder_codeobject.h"
#include "code_objects/ratemonitor_1_codeobject.h"
#include "code_objects/ratemonitor_2_codeobject.h"
#include "code_objects/ratemonitor_3_codeobject.h"
#include "code_objects/ratemonitor_4_codeobject.h"
#include "code_objects/ratemonitor_5_codeobject.h"
#include "code_objects/ratemonitor_6_codeobject.h"
#include "code_objects/ratemonitor_codeobject.h"
#include "code_objects/spikemonitor_1_codeobject.h"
#include "code_objects/spikemonitor_2_codeobject.h"
#include "code_objects/spikemonitor_3_codeobject.h"
#include "code_objects/spikemonitor_4_codeobject.h"
#include "code_objects/spikemonitor_5_codeobject.h"
#include "code_objects/spikemonitor_6_codeobject.h"
#include "code_objects/spikemonitor_codeobject.h"
#include "code_objects/statemonitor_1_codeobject.h"
#include "code_objects/statemonitor_2_codeobject.h"
#include "code_objects/statemonitor_3_codeobject.h"
#include "code_objects/statemonitor_4_codeobject.h"
#include "code_objects/statemonitor_5_codeobject.h"
#include "code_objects/statemonitor_6_codeobject.h"
#include "code_objects/statemonitor_codeobject.h"
#include "code_objects/synapses_10_pre_codeobject.h"
#include "code_objects/synapses_10_pre_push_spikes.h"
#include "code_objects/synapses_10_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_11_pre_codeobject.h"
#include "code_objects/synapses_11_pre_push_spikes.h"
#include "code_objects/synapses_11_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_12_pre_codeobject.h"
#include "code_objects/synapses_12_pre_push_spikes.h"
#include "code_objects/synapses_12_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_13_pre_codeobject.h"
#include "code_objects/synapses_13_pre_push_spikes.h"
#include "code_objects/synapses_13_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_14_pre_codeobject.h"
#include "code_objects/synapses_14_pre_push_spikes.h"
#include "code_objects/synapses_14_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_15_pre_codeobject.h"
#include "code_objects/synapses_15_pre_push_spikes.h"
#include "code_objects/synapses_15_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_16_pre_codeobject.h"
#include "code_objects/synapses_16_pre_push_spikes.h"
#include "code_objects/synapses_16_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_17_pre_codeobject.h"
#include "code_objects/synapses_17_pre_push_spikes.h"
#include "code_objects/synapses_17_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_18_pre_codeobject.h"
#include "code_objects/synapses_18_pre_push_spikes.h"
#include "code_objects/synapses_18_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_1_pre_codeobject.h"
#include "code_objects/synapses_1_pre_push_spikes.h"
#include "code_objects/synapses_1_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_2_pre_codeobject.h"
#include "code_objects/synapses_2_pre_push_spikes.h"
#include "code_objects/synapses_2_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_3_pre_codeobject.h"
#include "code_objects/synapses_3_pre_push_spikes.h"
#include "code_objects/synapses_3_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_4_pre_codeobject.h"
#include "code_objects/synapses_4_pre_push_spikes.h"
#include "code_objects/synapses_4_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_5_pre_codeobject.h"
#include "code_objects/synapses_5_pre_push_spikes.h"
#include "code_objects/synapses_5_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_6_pre_codeobject.h"
#include "code_objects/synapses_6_pre_push_spikes.h"
#include "code_objects/synapses_6_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_7_pre_codeobject.h"
#include "code_objects/synapses_7_pre_push_spikes.h"
#include "code_objects/synapses_7_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_8_pre_codeobject.h"
#include "code_objects/synapses_8_pre_push_spikes.h"
#include "code_objects/synapses_8_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_9_pre_codeobject.h"
#include "code_objects/synapses_9_pre_push_spikes.h"
#include "code_objects/synapses_9_synapses_create_generator_codeobject.h"
#include "code_objects/synapses_pre_codeobject.h"
#include "code_objects/synapses_pre_push_spikes.h"
#include "code_objects/synapses_synapses_create_generator_codeobject.h"


void brian_start()
{
	_init_arrays();
	_load_arrays();
	// Initialize clocks (link timestep and dt to the respective arrays)
    brian::defaultclock.timestep = brian::_array_defaultclock_timestep;
    brian::defaultclock.dt = brian::_array_defaultclock_dt;
    brian::defaultclock.t = brian::_array_defaultclock_t;
    for (int i=0; i<1; i++)
	    rk_randomseed(brian::_mersenne_twister_states[i]);  // Note that this seed can be potentially replaced in main.cpp
}

void brian_end()
{
	_write_arrays();
	_dealloc_arrays();
}


