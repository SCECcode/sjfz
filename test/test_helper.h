#ifndef TEST_HELPER_H
#define TEST_HELPER_H

#include "sjfz.h"

/* Constants */
#define MAX_TEST_POINTS 10
#define PLACEHOLDER -99999.0

/* modes of operation */
#define MODE_NONE 0
#define MODE_ELEVATION 2
#define MODE_DEPTH 4

typedef struct sjfz_surf_t {
        /** Longitude member of the point */
        double longitude;
        /** Latitude member of the point */
        double latitude;
        /** Depth member of the point */
        double surf;
} sjfz_surf_t;

extern sjfz_surf_t test_surfs[100];
extern int test_surfs_cnt;

int test_assert_file_exist(const char* filename);

double init_preset_ucvm_surface(sjfz_surf_t *surfs);
double get_preset_ucvm_surface(double, double);

/* Retrieve basic test points */
int get_depth_test_point(sjfz_point_t *pt, sjfz_properties_t *expect);

/* Retrieve expected surface elev at the test points */
int get_surf_values(double *surf_values);

/* run with model api */
int runSJFZ(const char *bindir, const char *cvmdir, 
	  const char *infile, const char *outfile,
          int mode);

#endif
