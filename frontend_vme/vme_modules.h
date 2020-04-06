
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


#ifndef VME_MODULES
  #define VME_MODULES

  #include <cstdint>
  #include "CAENVMElib.h"
  #include "v560.h"

  typedef struct {
    uint32_t baseaddr ;	    // Base Address
    CVAddressModifier AddrMode;    // Addressing Mode
    const int nchannels;     // Number of channels
  } vmeLoc;

  //Definitions for Scaler module V560
  static const vmeLoc sclr[] = {
    //base addr   Addr mode     Channels  
    { 0x00100000, cvA32_U_DATA, V560::channels }, // Ungated scaler	
    { 0x00200000, cvA32_U_DATA, V560::channels }  // Live gated scaler
  };

  #define n_sclr (sizeof(sclr)/sizeof(sclr[0]))
  #define N_SCLR (n_sclr * 16+3)

#endif
