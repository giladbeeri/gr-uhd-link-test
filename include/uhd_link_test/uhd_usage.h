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


#ifndef INCLUDED_UHD_LINK_TEST_UHD_USAGE_H
#define INCLUDED_UHD_LINK_TEST_UHD_USAGE_H

#include <uhd_link_test/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace uhd_link_test {

    /*!
     * \brief <+description of block+>
     * \ingroup uhd_link_test
     *
     */
    class UHD_LINK_TEST_API uhd_usage : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<uhd_usage> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of uhd_link_test::uhd_usage.
       *
       * To avoid accidental use of raw pointers, uhd_link_test::uhd_usage's
       * constructor is in a private implementation
       * class. uhd_link_test::uhd_usage::make is the public interface for
       * creating new instances.
       */
      static sptr make();
    };

  } // namespace uhd_link_test
} // namespace gr

#endif /* INCLUDED_UHD_LINK_TEST_UHD_USAGE_H */

