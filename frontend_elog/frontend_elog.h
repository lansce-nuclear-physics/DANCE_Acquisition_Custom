
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


#ifndef DANCEELOG_H
#define DANCEELOG_H

  char* null_buffer;
  INT null_buffer_size;
  char* null_file;
  
  #define ELOG_PARAM_DEFINED

  typedef struct {
    char hostname[32];
    INT port;
    char logbook_name[32];
    char elog_user[32];
    char elog_passwd[32];
    BOOL write_elog;
    BOOL calibration_run;
    char sample[32];
    char filter[32];
    INT start_message_id;
  } ELOG_PARAM;

  #define ELOG_PARAM_STR(_name) const char *_name[] = {\
    "[.]",\
    "Hostname = STRING : [32] dancedaq.lanl.gov",\
    "Logbook Port = INT : 8080",\
    "Logbook Name = STRING : [32] Auto Elog Entries",\
    "Elog User = STRING : [32] daq",\
    "Elog Password = STRING [32] autopasswd",\
    "Write Elog = BOOL : y",\
    "Calibration Run = BOOL : n",\
    "Sample = STRING : [32] None",\
    "Filter = STRING : [32] None",\
    "Start Message ID = INT : 0",\
    "",\
    NULL }

#endif


