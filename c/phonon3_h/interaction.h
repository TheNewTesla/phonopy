#ifndef __interaction_H__
#define __interaction_H__

#include "array.h"

int get_interaction(Darray *amps,
		    Darray *freqs,
		    Carray *eigvecs,
		    int *phonon_done,
		    Iarray *triplets,
		    Iarray *grid_address,
		    const int *mesh,
		    const Darray *fc2,
		    const Darray *fc3,
		    const Darray *svecs_fc2,
		    const Iarray *multi_fc2,
		    const Darray *svecs_fc3,
		    const Iarray *multi_fc3,
		    const double *masses_fc2,
		    const double *masses_fc3,
		    const int *p2s_fc2,
		    const int *s2p_fc2,
		    const int *p2s_fc3,
		    const int *s2p_fc3,
		    const Iarray *band_indices,
		    const double *born,
		    const double *dielectric,
		    const double *reciprocal_lattice,
		    const double *q_direction,
		    const double nac_factor,
		    const double freq_unit_factor,
		    const char uplo);

#endif
