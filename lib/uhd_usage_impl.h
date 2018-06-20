/* -*- c++ -*- */
/*
 * Copyright 2018 gr-uhd_link_test author.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_UHD_LINK_TEST_UHD_USAGE_IMPL_H
#define INCLUDED_UHD_LINK_TEST_UHD_USAGE_IMPL_H

#include <uhd_link_test/uhd_usage.h>

#include <uhd/types/time_spec.hpp>


namespace gr {
  namespace uhd_link_test {

    class uhd_usage_impl : public uhd_usage
    {
     private:
      ::uhd::time_spec_t d_t;

     public:
      uhd_usage_impl();
      ~uhd_usage_impl();

      // Where all the action really happens
      int work(int noutput_items,
         gr_vector_const_void_star &input_items,
         gr_vector_void_star &output_items);

    };
  } // namespace uhd_link_test
} // namespace gr

#endif /* INCLUDED_UHD_LINK_TEST_UHD_USAGE_IMPL_H */

