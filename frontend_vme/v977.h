
////////////////////////////////////////////////////////////////////////
//                                                                    //
//   Software Name: DANCE Data Acquisition and Analysis Package       //
//     Subpackage: DANCE_Analysis                                     //
//   Identifying Number: C18105                                       // 
//                                                                    //
////////////////////////////////////////////////////////////////////////
//                                                                    //
//                                                                    //
// Copyright 2019.                                                    //
// Triad National Security, LLC. All rights reserved.                 //
//                                                                    //
//                                                                    //
//                                                                    //
// This program was produced under U.S. Government contract           //
// 89233218CNA000001 for Los Alamos National Laboratory               //
// (LANL), which is operated by Triad National Security, LLC          //
// for the U.S. Department of Energy/National Nuclear Security        //
// Administration. All rights in the program are reserved by          //
// Triad National Security, LLC, and the U.S. Department of           //
// Energy/National Nuclear Security Administration. The Government    //
// is granted for itself and others acting on its behalf a            //
// nonexclusive, paid-up, irrevocable worldwide license in this       //
// material to reproduce, prepare derivative works, distribute        //
// copies to the public, perform publicly and display publicly,       //
// and to permit others to do so.                                     //
//                                                                    //
// This is open source software; you can redistribute it and/or       //
// modify it under the terms of the GPLv2 License. If software        //
// is modified to produce derivative works, such modified             //
// software should be clearly marked, so as not to confuse it         //
// with the version available from LANL. Full text of the GPLv2       //
// License can be found in the License file of the repository         //
// (GPLv2.0_License.txt).                                             //
//                                                                    //
////////////////////////////////////////////////////////////////////////

#ifndef __V977_LANL__
#define __V977_LANL__

//
// v977.h
//
// Description:
//   This header contains information for the CAEN v977 i/o register
//   At this point, it is all const variable declarations, but could
//   for more later. The documentation of the address map can be 
//   found in the v977 manual.
//
//  Author:
//    A. Couture
//
//  Revision History
//  Initial write
//    8 May 2013

namespace V977 {
  const unsigned int channels = 16;
  const uint32_t iset = 0x0000;
  const uint32_t imask = 0x0002;
  const uint32_t iread = 0x0004;
  const uint32_t singleh_read = 0x0006;
  const uint32_t multih_read = 0x0008;
  const uint32_t oset = 0x000A;
  const uint32_t omask = 0x000C;
  const uint32_t interrupt_mask = 0x000E;
  const uint32_t clear = 0x0010;
  const uint32_t singleh_readclear = 0x0016;
  const uint32_t multih_readclear = 0x0018;
  const uint32_t test = 0x001A;
  const uint32_t interrupt_level = 0x0020;
  const uint32_t interrupt_vector = 0x0022;
  const uint32_t serial = 0x0024;
  const uint32_t firmware = 0x0026;
  const uint32_t control = 0x0028;
  const uint32_t dummy = 0x002A;
  const uint32_t soft_reset = 0x002E;
}

#endif
