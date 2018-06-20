/* -*- c++ -*- */

#define UHD_LINK_TEST_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "uhd_link_test_swig_doc.i"

%{
#include "uhd_link_test/uhd_usage.h"
%}


%include "uhd_link_test/uhd_usage.h"
GR_SWIG_BLOCK_MAGIC2(uhd_link_test, uhd_usage);
