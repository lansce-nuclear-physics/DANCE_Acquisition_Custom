
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

#ifndef __V560_LANL__
#define __V560_LANL__

//
// v560.h
//
// Description:
//   This header contains information for the CAEN v560 scaler
//   At this point, it is all const variable declarations, but could
//   for more later. The documentation of the address map can be 
//   found in the v560 manual.
//
//  Author:
//    A. Couture
//
//  Revision History
//  Initial write
//    8 May 2013

namespace V560 {
  const unsigned int channels = 16;
  const uint32_t interrupt_vector = 0x0004;
  const uint32_t interrupt_level_veto = 0x0006;
  const uint32_t interrupt_enable = 0x0008;
  const uint32_t interrupt_disable = 0x000A;
  const uint32_t interrupt_clear = 0x000C;
  const uint32_t request_register = 0x000E;
  const uint32_t read[16] = { 0x0010, 0x0014, 0x0018, 0x001C,
                              0x0020, 0x0024, 0x0028, 0x002C,
                              0x0030, 0x0034, 0x0038, 0x003C,
                              0x0040, 0x0044, 0x0048, 0x0048 } ;
  const uint32_t clear = 0x0050;
  const uint32_t set_veto = 0x0052;
  const uint32_t reset_veto = 0x0054;
  const uint32_t increment = 0x0056;
  const uint32_t config = 0x0058;
  const uint32_t fixed = 0x00FA;
  const uint32_t module = 0x00FC;
  const uint32_t serial = 0x00FE;
}

#endif
