/*******************************************************************************
 * Copyright (c) 2002, 2014 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
 *******************************************************************************/
#define true 1
#define false 0
#include "floatsanityg.h"


   void group_JBdmul() {
      int i=0, groupNum=7,numTests=351;
      int testsPassed=0, testsFailed=0;
      unsigned int op_0 [] = {
         0x40000000, 0x00000000,
         0x40080000, 0x00000000,
         0x402e0000, 0x00000000,
         0x403e0000, 0x00000000,
         0x40468000, 0x00000000,
         0x404e0000, 0x00000000,
         0x4052c000, 0x00000000,
         0x405a4000, 0x00000000,
         0x405e0000, 0x00000000,
         0x4060e000, 0x00000000,
         0x4062c000, 0x00000000,
         0x4064a000, 0x00000000,
         0x40686000, 0x00000000,
         0x406a4000, 0x00000000,
         0x406c2000, 0x00000000,
         0x406e0000, 0x00000000,
         0x406fe000, 0x00000000,
         0x4071d000, 0x00000000,
         0x4072c000, 0x00000000,
         0x4073b000, 0x00000000,
         0x4074a000, 0x00000000,
         0x40759000, 0x00000000,
         0xbff00000, 0x00000000,
         0x40140000, 0x00000000,
         0xc02e0000, 0x00000000,
         0x00000000, 0x00000000,
         0xc02c0000, 0x00000000,
         0x40180000, 0x00000000,
         0xc0220000, 0x00000000,
         0xc0200000, 0x00000000,
         0x40200000, 0x00000000,
         0x402c0000, 0x00000000,
         0x403e0000, 0x00000000,
         0x402a0000, 0x00000000,
         0x00000000, 0x00000000,
         0x80000000, 0x00000000,
         0x00000000, 0x00000000,
         0x80000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000001,
         0x80000000, 0x00000000,
         0x00000000, 0x00000001,
         0x00000000, 0x00000000,
         0x80000000, 0x00000001,
         0x80000000, 0x00000000,
         0x80000000, 0x00000001,
         0x00000000, 0x00000000,
         0x00040000, 0x00000000,
         0x80000000, 0x00000000,
         0x00040000, 0x00000000,
         0x00000000, 0x00000000,
         0x80040000, 0x00000000,
         0x80000000, 0x00000000,
         0x80040000, 0x00000000,
         0x00000000, 0x00000000,
         0x3f1a36e2, 0xeb1c432d,
         0x80000000, 0x00000000,
         0x3f1a36e2, 0xeb1c432d,
         0x00000000, 0x00000000,
         0xbf1a36e2, 0xeb1c432d,
         0x80000000, 0x00000000,
         0xbf1a36e2, 0xeb1c432d,
         0x00000000, 0x00000000,
         0x3f847ae1, 0x47ae147b,
         0x80000000, 0x00000000,
         0x3f847ae1, 0x47ae147b,
         0x00000000, 0x00000000,
         0xbf847ae1, 0x47ae147b,
         0x80000000, 0x00000000,
         0xbf847ae1, 0x47ae147b,
         0x00000000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x80000000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x00000000, 0x00000000,
         0xbff00000, 0x00000000,
         0x80000000, 0x00000000,
         0xbff00000, 0x00000000,
         0x00000000, 0x00000000,
         0x40000000, 0x00000000,
         0x80000000, 0x00000000,
         0x40000000, 0x00000000,
         0x00000000, 0x00000000,
         0xc0000000, 0x00000000,
         0x80000000, 0x00000000,
         0xc0000000, 0x00000000,
         0x00000000, 0x00000000,
         0x408f4000, 0x00000000,
         0x80000000, 0x00000000,
         0x408f4000, 0x00000000,
         0x00000000, 0x00000000,
         0xc08f4000, 0x00000000,
         0x80000000, 0x00000000,
         0xc08f4000, 0x00000000,
         0x00000000, 0x00000000,
         0x7fefffff, 0xffffffff,
         0x80000000, 0x00000000,
         0x7fefffff, 0xffffffff,
         0x00000000, 0x00000000,
         0xffefffff, 0xffffffff,
         0x80000000, 0x00000000,
         0xffefffff, 0xffffffff,
         0x7ff80000, 0x00000000,
         0xfff00000, 0x00000000,
         0x7ff80000, 0x00000000,
         0xffefffff, 0xffffffff,
         0x7ff80000, 0x00000000,
         0xc08f4000, 0x00000000,
         0x7ff80000, 0x00000000,
         0xc0690000, 0x00000000,
         0x7ff80000, 0x00000000,
         0xc0019999, 0x9999999a,
         0x7ff80000, 0x00000000,
         0xbff00000, 0x00000000,
         0x7ff80000, 0x00000000,
         0xbf1a36e2, 0xeb1c432d,
         0x7ff80000, 0x00000000,
         0x80040000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x80000000, 0x00000001,
         0x7ff80000, 0x00000000,
         0x80000000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x00000000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x00000000, 0x00000001,
         0x7ff80000, 0x00000000,
         0x00040000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x3f1a36e2, 0xeb1c432d,
         0x7ff80000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x40019999, 0x9999999a,
         0x7ff80000, 0x00000000,
         0x40690000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x408f4000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7fefffff, 0xffffffff,
         0x7ff80000, 0x00000000,
         0x7ff00000, 0x00000000,
         0x00000000, 0x00000000,
         0x7ff00000, 0x00000000,
         0x00000000, 0x00000000,
         0xfff00000, 0x00000000,
         0x80000000, 0x00000000,
         0x7ff00000, 0x00000000,
         0x80000000, 0x00000000,
         0xfff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0xbff00000, 0x00000000,
         0xbff00000, 0x00000000,
         0x40000000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x40000000, 0x00000000,
         0xbff00000, 0x00000000,
         0xc0000000, 0x00000000,
         0x3ff00000, 0x00000000,
         0xc0000000, 0x00000000,
         0xbff00000, 0x00000000,
         0x40000000, 0x00000000,
         0x3ff19999, 0x9999999a,
         0x40000000, 0x00000000,
         0xbff19999, 0x9999999a,
         0xc0000000, 0x00000000,
         0x3ff19999, 0x9999999a,
         0xc0000000, 0x00000000,
         0xbff19999, 0x9999999a,
         0x3f847ae1, 0x47ae147b,
         0x40590000, 0x00000000,
         0x3f847ae1, 0x47ae147b,
         0xc0590000, 0x00000000,
         0xbf847ae1, 0x47ae147b,
         0x40590000, 0x00000000,
         0xbf847ae1, 0x47ae147b,
         0xc0590000, 0x00000000,
         0x7fefffff, 0xffffffff,
         0x3ff00000, 0x00000000,
         0x7fefffff, 0xffffffff,
         0xbff00000, 0x00000000,
         0xffefffff, 0xffffffff,
         0x3ff00000, 0x00000000,
         0xffefffff, 0xffffffff,
         0xbff00000, 0x00000000,
         0x00040000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x00040000, 0x00000000,
         0xbff00000, 0x00000000,
         0x80040000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x80040000, 0x00000000,
         0xbff00000, 0x00000000,
         0xc0000000, 0x00000000,
         0x40498000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x3fd0c152, 0x382d7365,
         0xc0080000, 0x00000000,
         0x3fb55555, 0x55555555,
         0x40000000, 0x00000000,
         0x3fe0c152, 0x382d7365,
         0x3fc55555, 0x55555555,
         0x40080000, 0x00000000,
         0x3fe921fb, 0x54442d18,
         0x3fd00000, 0x00000000,
         0x40100000, 0x00000000,
         0x3ff0c152, 0x382d7365,
         0x3fd55555, 0x55555555,
         0x3ff4f1a6, 0xc638d03f,
         0x3fdaaaaa, 0xaaaaaaab,
         0x3ff921fb, 0x54442d18,
         0x3fe00000, 0x00000000,
         0x3ffd524f, 0xe24f89f2,
         0x3fe2aaaa, 0xaaaaaaab,
         0x4000c152, 0x382d7365,
         0x3fe55555, 0x55555555,
         0x4002d97c, 0x7f3321d2,
         0x3fe80000, 0x00000000,
         0x4004f1a6, 0xc638d03f,
         0x3feaaaaa, 0xaaaaaaab,
         0x400709d1, 0x0d3e7eab,
         0x3fed5555, 0x55555555,
         0x400921fb, 0x54442d18,
         0x3ff00000, 0x00000000,
         0x400b3a25, 0x9b49db84,
         0x3ff15555, 0x55555555,
         0x400d524f, 0xe24f89f2,
         0x3ff2aaaa, 0xaaaaaaab,
         0x400f6a7a, 0x2955385e,
         0x3ff40000, 0x00000000,
         0x4010c152, 0x382d7365,
         0x3ff00000, 0x00000000,
         0x3ff55555, 0x55555555,
         0x4011cd67, 0x5bb04a9c,
         0x3ff6aaaa, 0xaaaaaaab,
         0x4012d97c, 0x7f3321d2,
         0x3ff80000, 0x00000000,
         0x401c0000, 0x00000000,
         0x4013e591, 0xa2b5f909,
         0x3ff95555, 0x55555555,
         0x4014f1a6, 0xc638d03f,
         0x3ffaaaaa, 0xaaaaaaab,
         0x4015fdbb, 0xe9bba775,
         0x3ffc0000, 0x00000000,
         0x401709d1, 0x0d3e7eab,
         0x3ffd5555, 0x55555555,
         0x401815e6, 0x30c155e2,
         0x3ffeaaaa, 0xaaaaaaab,
         0x401921fb, 0x54442d18,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0xbfd0c152, 0x382d7365,
         0xbfb55555, 0x55555555,
         0xbfe0c152, 0x382d7365,
         0xbfc55555, 0x55555555,
         0xbfe921fb, 0x54442d18,
         0xbfd00000, 0x00000000,
         0xbff0c152, 0x382d7365,
         0xbfd55555, 0x55555555,
         0xbff4f1a6, 0xc638d03f,
         0xbfdaaaaa, 0xaaaaaaab,
         0xbff921fb, 0x54442d18,
         0xbfe00000, 0x00000000,
         0xbffd524f, 0xe24f89f2,
         0xbfe2aaaa, 0xaaaaaaab,
         0xc000c152, 0x382d7365,
         0xbfe55555, 0x55555555,
         0xc002d97c, 0x7f3321d2,
         0xbfe80000, 0x00000000,
         0xc004f1a6, 0xc638d03f,
         0xbfeaaaaa, 0xaaaaaaab,
         0xc00709d1, 0x0d3e7eab,
         0xbfed5555, 0x55555555,
         0xc00921fb, 0x54442d18,
         0xbff00000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x40220000, 0x00000000,
         0x40240000, 0x00000000,
         0x40260000, 0x00000000,
         0xc0100000, 0x00000000,
         0x40300000, 0x00000000,
         0x40310000, 0x00000000,
         0x40330000, 0x00000000,
         0x40340000, 0x00000000,
         0x40360000, 0x00000000,
         0x416fffff, 0xe0000000,
         0x416fffff, 0xe0000000,
         0x000fffff, 0xfffffff8,
         0x001fffff, 0xffffffff,
         0x00000000, 0x44e38425,
         0x001fffff, 0xffffffff,
         0x3b200000, 0x007e03f7,
         0x3ff00000, 0x00000000,
         0x40470000, 0x00000000,
         0x00000000, 0x0000003f,
         0x3ff84104, 0x10410410,
         0x00000000, 0x0000003f,
         0x3ff02082, 0x08208208,
         0x00000000, 0x0000007f,
         0x3ff01020, 0x40810204,
         0x3fe81020, 0x40810204,
         0x00000000, 0x0000007f,
         0x3fe40810, 0x20408102,
         0x00000000, 0x0000007f,
         0x3fe20408, 0x10204081,
         0x00000000, 0x0000007f,
         0x00100000, 0x00000007,
         0x3fe90000, 0x00000000,
         0x00100000, 0x00000007,
         0x3fe92000, 0x00000000,
         0x00100000, 0x00000007,
         0x3fe92400, 0x00000000,
         0x00100000, 0x00000007,
         0x3fe92480, 0x00000000,
         0x00100000, 0x0000000f,
         0x3fe88888, 0x00000000,
         0x00100000, 0x0000000f,
         0x3fe44444, 0x00000000,
         0x00100000, 0x0000000f,
         0x3fe88888, 0x80000000,
         0x00100000, 0x0000000f,
         0x3fe44444, 0x40000000,
         0x00100000, 0x0000001f,
         0x3fe84210, 0x84000000,
         0x00000000, 0x07ffffff,
         0x3ff00000, 0x01000000,
         0x00100000, 0x0000001f,
         0x3fe42108, 0x42000000,
         0x00000000, 0x0fffffff,
         0x3ff00000, 0x00800000,
         0x00100000, 0x0000001f,
         0x3fe21084, 0x21000000,
         0x00000000, 0x1fffffff,
         0x3ff00000, 0x00400000,
         0x00000000, 0x3fffffff,
         0x3ff00000, 0x00200000,
         0x00000000, 0x7fffffff,
         0x3ff00000, 0x00100000,
         0x00100000, 0x0000001f,
         0x3fe84210, 0x84200000,
         0x00000000, 0xffffffff,
         0x3ff00000, 0x00080000,
         0x00100000, 0x0000001f,
         0x3fe42108, 0x42100000,
         0x00000001, 0xffffffff,
         0x3ff00000, 0x00040000,
         0x00100000, 0x0000001f,
         0x0, 0x0};
      unsigned int op_1 [] = {
         0x400921fb, 0x54442d18,
         0x400921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x401921fb, 0x54442d18,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x00000000, 0x00000001,
         0x00000000, 0x00000000,
         0x00000000, 0x00000001,
         0x80000000, 0x00000000,
         0x80000000, 0x00000001,
         0x00000000, 0x00000000,
         0x80000000, 0x00000001,
         0x80000000, 0x00000000,
         0x00040000, 0x00000000,
         0x00000000, 0x00000000,
         0x00040000, 0x00000000,
         0x80000000, 0x00000000,
         0x80040000, 0x00000000,
         0x00000000, 0x00000000,
         0x80040000, 0x00000000,
         0x80000000, 0x00000000,
         0x3f1a36e2, 0xeb1c432d,
         0x00000000, 0x00000000,
         0x3f1a36e2, 0xeb1c432d,
         0x80000000, 0x00000000,
         0xbf1a36e2, 0xeb1c432d,
         0x00000000, 0x00000000,
         0xbf1a36e2, 0xeb1c432d,
         0x80000000, 0x00000000,
         0x3f847ae1, 0x47ae147b,
         0x00000000, 0x00000000,
         0x3f847ae1, 0x47ae147b,
         0x80000000, 0x00000000,
         0xbf847ae1, 0x47ae147b,
         0x00000000, 0x00000000,
         0xbf847ae1, 0x47ae147b,
         0x80000000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x00000000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x80000000, 0x00000000,
         0xbff00000, 0x00000000,
         0x00000000, 0x00000000,
         0xbff00000, 0x00000000,
         0x80000000, 0x00000000,
         0x40000000, 0x00000000,
         0x00000000, 0x00000000,
         0x40000000, 0x00000000,
         0x80000000, 0x00000000,
         0xc0000000, 0x00000000,
         0x00000000, 0x00000000,
         0xc0000000, 0x00000000,
         0x80000000, 0x00000000,
         0x408f4000, 0x00000000,
         0x00000000, 0x00000000,
         0x408f4000, 0x00000000,
         0x80000000, 0x00000000,
         0xc08f4000, 0x00000000,
         0x00000000, 0x00000000,
         0xc08f4000, 0x00000000,
         0x80000000, 0x00000000,
         0x7fefffff, 0xffffffff,
         0x00000000, 0x00000000,
         0x7fefffff, 0xffffffff,
         0x80000000, 0x00000000,
         0xffefffff, 0xffffffff,
         0x00000000, 0x00000000,
         0xffefffff, 0xffffffff,
         0x80000000, 0x00000000,
         0xfff00000, 0x00000000,
         0x7ff80000, 0x00000000,
         0xffefffff, 0xffffffff,
         0x7ff80000, 0x00000000,
         0xc08f4000, 0x00000000,
         0x7ff80000, 0x00000000,
         0xc0690000, 0x00000000,
         0x7ff80000, 0x00000000,
         0xc0019999, 0x9999999a,
         0x7ff80000, 0x00000000,
         0xbff00000, 0x00000000,
         0x7ff80000, 0x00000000,
         0xbf1a36e2, 0xeb1c432d,
         0x7ff80000, 0x00000000,
         0x80040000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x80000000, 0x00000001,
         0x7ff80000, 0x00000000,
         0x80000000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x00000000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x00000000, 0x00000001,
         0x7ff80000, 0x00000000,
         0x00040000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x3f1a36e2, 0xeb1c432d,
         0x7ff80000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x40019999, 0x9999999a,
         0x7ff80000, 0x00000000,
         0x40690000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x408f4000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7fefffff, 0xffffffff,
         0x7ff80000, 0x00000000,
         0x7ff00000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff00000, 0x00000000,
         0x00000000, 0x00000000,
         0xfff00000, 0x00000000,
         0x00000000, 0x00000000,
         0x7ff00000, 0x00000000,
         0x80000000, 0x00000000,
         0xfff00000, 0x00000000,
         0x80000000, 0x00000000,
         0x3ff00000, 0x00000000,
         0xbff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0xbff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x40000000, 0x00000000,
         0xbff00000, 0x00000000,
         0x40000000, 0x00000000,
         0x3ff00000, 0x00000000,
         0xc0000000, 0x00000000,
         0xbff00000, 0x00000000,
         0xc0000000, 0x00000000,
         0x3ff19999, 0x9999999a,
         0x40000000, 0x00000000,
         0xbff19999, 0x9999999a,
         0x40000000, 0x00000000,
         0x3ff19999, 0x9999999a,
         0xc0000000, 0x00000000,
         0xbff19999, 0x9999999a,
         0xc0000000, 0x00000000,
         0x40590000, 0x00000000,
         0x3f847ae1, 0x47ae147b,
         0xc0590000, 0x00000000,
         0x3f847ae1, 0x47ae147b,
         0x40590000, 0x00000000,
         0xbf847ae1, 0x47ae147b,
         0xc0590000, 0x00000000,
         0xbf847ae1, 0x47ae147b,
         0x3ff00000, 0x00000000,
         0x7fefffff, 0xffffffff,
         0xbff00000, 0x00000000,
         0x7fefffff, 0xffffffff,
         0x3ff00000, 0x00000000,
         0xffefffff, 0xffffffff,
         0xbff00000, 0x00000000,
         0xffefffff, 0xffffffff,
         0x3ff00000, 0x00000000,
         0x00040000, 0x00000000,
         0xbff00000, 0x00000000,
         0x00040000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x80040000, 0x00000000,
         0xbff00000, 0x00000000,
         0x80040000, 0x00000000,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x3fd34413, 0x509f79fe,
         0x400921fb, 0x54442d18,
         0x3fd34413, 0x509f79fe,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x3fd34413, 0x509f79fe,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x3fd34413, 0x509f79fe,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x3fd34413, 0x509f79fe,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x3fd34413, 0x509f79fe,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x40668000, 0x00000000,
         0x400921fb, 0x54442d18,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3fd34413, 0x509f79fe,
         0x3ff00000, 0x00000000,
         0x35200000, 0x00000000,
         0x3ff00000, 0x00000001,
         0xbfe00000, 0x00000000,
         0x414dbaa6, 0x40000000,
         0x40000000, 0x00000000,
         0x3cd00000, 0x00010000,
         0x80000000, 0x00090000,
         0x3fd34413, 0x509f79fe,
         0x3ff84104, 0x10410410,
         0x00000000, 0x0000003f,
         0x3ff02082, 0x08208208,
         0x00000000, 0x0000003f,
         0x3ff01020, 0x40810204,
         0x00000000, 0x0000007f,
         0x00000000, 0x0000007f,
         0x3fe40810, 0x20408102,
         0x00000000, 0x0000007f,
         0x3fe20408, 0x10204081,
         0x00000000, 0x0000007f,
         0x3fe81020, 0x40810204,
         0x3fe90000, 0x00000000,
         0x00100000, 0x00000007,
         0x3fe92000, 0x00000000,
         0x00100000, 0x00000007,
         0x3fe92400, 0x00000000,
         0x00100000, 0x00000007,
         0x3fe92480, 0x00000000,
         0x00100000, 0x00000007,
         0x3fe88888, 0x00000000,
         0x00100000, 0x0000000f,
         0x3fe44444, 0x00000000,
         0x00100000, 0x0000000f,
         0x3fe88888, 0x80000000,
         0x00100000, 0x0000000f,
         0x3fe44444, 0x40000000,
         0x00100000, 0x0000000f,
         0x3fe84210, 0x84000000,
         0x00100000, 0x0000001f,
         0x3ff00000, 0x01000000,
         0x00000000, 0x07ffffff,
         0x3fe42108, 0x42000000,
         0x00100000, 0x0000001f,
         0x3ff00000, 0x00800000,
         0x00000000, 0x0fffffff,
         0x3fe21084, 0x21000000,
         0x00100000, 0x0000001f,
         0x3ff00000, 0x00400000,
         0x00000000, 0x1fffffff,
         0x3ff00000, 0x00200000,
         0x00000000, 0x3fffffff,
         0x3ff00000, 0x00100000,
         0x00000000, 0x7fffffff,
         0x3fe84210, 0x84200000,
         0x00100000, 0x0000001f,
         0x3ff00000, 0x00080000,
         0x00000000, 0xffffffff,
         0x3fe42108, 0x42100000,
         0x00100000, 0x0000001f,
         0x3ff00000, 0x00040000,
         0x00000001, 0xffffffff,
         0x3fe21084, 0x21080000,
         0x0, 0x0};
      unsigned int result [] = {
         0x401921fb, 0x54442d18,
         0x4022d97c, 0x7f3321d2,
         0x40578fdb, 0x9effea46,
         0x40678fdb, 0x9effea46,
         0x4071abe4, 0xb73fefb5,
         0x40778fdb, 0x9effea46,
         0x407d73d2, 0x86bfe4d8,
         0x40849de0, 0x2b1fecfe,
         0x40878fdb, 0x9effea46,
         0x408a81d7, 0x12dfe78f,
         0x408d73d2, 0x86bfe4d8,
         0x409032e6, 0xfd4ff110,
         0x409324e2, 0x712fee59,
         0x40949de0, 0x2b1fecfe,
         0x409616dd, 0xe50feba2,
         0x40978fdb, 0x9effea46,
         0x409908d9, 0x58efe8eb,
         0x409bfad4, 0xcccfe634,
         0x409d73d2, 0x86bfe4d8,
         0x409eecd0, 0x40afe37d,
         0x40a032e6, 0xfd4ff110,
         0x40a0ef65, 0xda47f063,
         0xbfd34413, 0x509f79fe,
         0x3ff81518, 0x24c7587e,
         0xc0120fd2, 0x1b95825e,
         0x00000000, 0x00000000,
         0xc010db90, 0xe68b8abe,
         0x3ffce61c, 0xf8ef36fd,
         0xc005ac95, 0xbab3693e,
         0xc0034413, 0x509f79fe,
         0x40034413, 0x509f79fe,
         0x4010db90, 0xe68b8abe,
         0x40220fd2, 0x1b95825e,
         0x400f4e9f, 0x6303263d,
         0x00000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0xfff80000, 0x00000000,
         0xfff80000, 0x00000000,
         0xfff80000, 0x00000000,
         0xfff80000, 0x00000000,
         0xfff80000, 0x00000000,
         0xfff80000, 0x00000000,
         0xfff80000, 0x00000000,
         0xfff80000, 0x00000000,
         0x3ff00000, 0x00000000,
         0xbff00000, 0x00000000,
         0xbff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x40000000, 0x00000000,
         0x40000000, 0x00000000,
         0xc0000000, 0x00000000,
         0xc0000000, 0x00000000,
         0xc0000000, 0x00000000,
         0xc0000000, 0x00000000,
         0x40000000, 0x00000000,
         0x40000000, 0x00000000,
         0x40019999, 0x9999999a,
         0x40019999, 0x9999999a,
         0xc0019999, 0x9999999a,
         0xc0019999, 0x9999999a,
         0xc0019999, 0x9999999a,
         0xc0019999, 0x9999999a,
         0x40019999, 0x9999999a,
         0x40019999, 0x9999999a,
         0x3ff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0xbff00000, 0x00000000,
         0xbff00000, 0x00000000,
         0xbff00000, 0x00000000,
         0xbff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x3ff00000, 0x00000000,
         0x7fefffff, 0xffffffff,
         0x7fefffff, 0xffffffff,
         0xffefffff, 0xffffffff,
         0xffefffff, 0xffffffff,
         0xffefffff, 0xffffffff,
         0xffefffff, 0xffffffff,
         0x7fefffff, 0xffffffff,
         0x7fefffff, 0xffffffff,
         0x00040000, 0x00000000,
         0x00040000, 0x00000000,
         0x80040000, 0x00000000,
         0x80040000, 0x00000000,
         0x80040000, 0x00000000,
         0x80040000, 0x00000000,
         0x00040000, 0x00000000,
         0x00040000, 0x00000000,
         0xbfe34413, 0x509f79fe,
         0x402eb47e, 0xc87e2a6d,
         0x00000000, 0x00000000,
         0x00000000, 0x00000000,
         0x40478fdb, 0x9effea46,
         0xbfece61c, 0xf8ef36fd,
         0x3fd0c152, 0x382d7365,
         0x3fe34413, 0x509f79fe,
         0x40578fdb, 0x9effea46,
         0x3fe0c152, 0x382d7365,
         0x3fece61c, 0xf8ef36fd,
         0x4061abe4, 0xb73fefb5,
         0x3fe921fb, 0x54442d18,
         0x3ff34413, 0x509f79fe,
         0x40678fdb, 0x9effea46,
         0x3ff0c152, 0x382d7365,
         0x406d73d2, 0x86bfe4d9,
         0x3ff4f1a6, 0xc638d03f,
         0x4071abe4, 0xb73fefb5,
         0x3ff921fb, 0x54442d18,
         0x40749de0, 0x2b1fecfe,
         0x3ffd524f, 0xe24f89f2,
         0x40778fdb, 0x9effea46,
         0x4000c152, 0x382d7365,
         0x407a81d7, 0x12dfe78f,
         0x4002d97c, 0x7f3321d2,
         0x407d73d2, 0x86bfe4d9,
         0x4004f1a6, 0xc638d03f,
         0x408032e6, 0xfd4ff110,
         0x400709d1, 0x0d3e7eab,
         0x4081abe4, 0xb73fefb5,
         0x400921fb, 0x54442d18,
         0x408324e2, 0x712fee59,
         0x400b3a25, 0x9b49db84,
         0x40849de0, 0x2b1fecfe,
         0x400d524f, 0xe24f89f2,
         0x408616dd, 0xe50feba2,
         0x400f6a7a, 0x2955385e,
         0x40878fdb, 0x9effea46,
         0x3fd34413, 0x509f79fe,
         0x4010c152, 0x382d7365,
         0x408908d9, 0x58efe8eb,
         0x4011cd67, 0x5bb04a9c,
         0x408a81d7, 0x12dfe78f,
         0x4012d97c, 0x7f3321d2,
         0x4000db90, 0xe68b8abe,
         0x408bfad4, 0xcccfe635,
         0x4013e591, 0xa2b5f908,
         0x408d73d2, 0x86bfe4d9,
         0x4014f1a6, 0xc638d03f,
         0x408eecd0, 0x40afe37d,
         0x4015fdbb, 0xe9bba775,
         0x409032e6, 0xfd4ff110,
         0x401709d1, 0x0d3e7eab,
         0x4090ef65, 0xda47f063,
         0x401815e6, 0x30c155e2,
         0x4091abe4, 0xb73fefb5,
         0x80000000, 0x00000000,
         0x80000000, 0x00000000,
         0xc0478fdb, 0x9effea46,
         0xbfd0c152, 0x382d7365,
         0xc0578fdb, 0x9effea46,
         0xbfe0c152, 0x382d7365,
         0xc061abe4, 0xb73fefb5,
         0xbfe921fb, 0x54442d18,
         0xc0678fdb, 0x9effea46,
         0xbff0c152, 0x382d7365,
         0xc06d73d2, 0x86bfe4d9,
         0xbff4f1a6, 0xc638d03f,
         0xc071abe4, 0xb73fefb5,
         0xbff921fb, 0x54442d18,
         0xc0749de0, 0x2b1fecfe,
         0xbffd524f, 0xe24f89f2,
         0xc0778fdb, 0x9effea46,
         0xc000c152, 0x382d7365,
         0xc07a81d7, 0x12dfe78f,
         0xc002d97c, 0x7f3321d2,
         0xc07d73d2, 0x86bfe4d9,
         0xc004f1a6, 0xc638d03f,
         0xc08032e6, 0xfd4ff110,
         0xc00709d1, 0x0d3e7eab,
         0xc081abe4, 0xb73fefb5,
         0xc00921fb, 0x54442d18,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x4005ac95, 0xbab3693e,
         0x40081518, 0x24c7587e,
         0x400a7d9a, 0x8edb47bd,
         0xbff34413, 0x509f79fe,
         0x40134413, 0x509f79fe,
         0x40147854, 0x85a9719e,
         0x4016e0d6, 0xefbd60de,
         0x40181518, 0x24c7587e,
         0x401a7d9a, 0x8edb47bd,
         0x416fffff, 0xe0000000,
         0x369fffff, 0xe0000000,
         0x000fffff, 0xfffffff9,
         0x80100000, 0x00000000,
         0x00100000, 0x05e8e60e,
         0x002fffff, 0xffffffff,
         0x38000000, 0x007f03f7,
         0x80000000, 0x00090000,
         0x402bb1db, 0xc3e53f5d,
         0x00000000, 0x0000005f,
         0x00000000, 0x0000005f,
         0x00000000, 0x0000003f,
         0x00000000, 0x0000003f,
         0x00000000, 0x0000007f,
         0x00000000, 0x0000007f,
         0x00000000, 0x0000005f,
         0x00000000, 0x0000004f,
         0x00000000, 0x0000004f,
         0x00000000, 0x00000047,
         0x00000000, 0x00000047,
         0x00000000, 0x0000005f,
         0x000c8000, 0x00000005,
         0x000c8000, 0x00000005,
         0x000c9000, 0x00000005,
         0x000c9000, 0x00000005,
         0x000c9200, 0x00000005,
         0x000c9200, 0x00000005,
         0x000c9240, 0x00000005,
         0x000c9240, 0x00000005,
         0x000c4444, 0x0000000b,
         0x000c4444, 0x0000000b,
         0x000a2222, 0x00000009,
         0x000a2222, 0x00000009,
         0x000c4444, 0x4000000b,
         0x000c4444, 0x4000000b,
         0x000a2222, 0x20000009,
         0x000a2222, 0x20000009,
         0x000c2108, 0x42000017,
         0x000c2108, 0x42000017,
         0x00000000, 0x07ffffff,
         0x00000000, 0x07ffffff,
         0x000a1084, 0x21000013,
         0x000a1084, 0x21000013,
         0x00000000, 0x0fffffff,
         0x00000000, 0x0fffffff,
         0x00090842, 0x10800011,
         0x00090842, 0x10800011,
         0x00000000, 0x1fffffff,
         0x00000000, 0x1fffffff,
         0x00000000, 0x3fffffff,
         0x00000000, 0x3fffffff,
         0x00000000, 0x7fffffff,
         0x00000000, 0x7fffffff,
         0x000c2108, 0x42100017,
         0x000c2108, 0x42100017,
         0x00000000, 0xffffffff,
         0x00000000, 0xffffffff,
         0x000a1084, 0x21080013,
         0x000a1084, 0x21080013,
         0x00000001, 0xffffffff,
         0x00000001, 0xffffffff,
         0x00090842, 0x10840011,
         0x0, 0x0};
      double *p0=(double *) op_0;
      double *p1=(double *) op_1;
      double *erp=(double*) result, r, *rp=&r;
      for (i=0; i<numTests; i++) {
         r = JBdmul(*(p0), *(p1));
         if ( IS_DNAN(erp) ){
            if ( !(IS_DNAN(&r)) ){
               printf("%d.%d: op_0=0x%08x%08x , op_1=0x%08x%08x Expected=0x%08x%08x Actual=0x%08x%08x \n",
                  groupNum, i, 
                  *(int *)p0, *((int *)p0+1), *(int *)p1, *((int *)p1+1), *(int *)erp, *((int *) erp + 1), *(int *)&r, *((int *) &r + 1));
               testsFailed++;
            } else {
               testsPassed++;
            }

         } else {
            if ( (HIWORD(&r) != HIWORD(erp)) || (LOWORD(&r) != LOWORD(erp)) ){
               printf("%d.%d: op_0=0x%08x%08x , op_1=0x%08x%08x Expected=0x%08x%08x Actual=0x%08x%08x \n",
                  groupNum, i, 
                  *(int *)p0, *((int *)p0+1), *(int *)p1, *((int *)p1+1), *(int *)erp, *((int *) erp + 1), *(int *)&r, *((int *) &r + 1));
               testsFailed++;
            } else {
               testsPassed++;
            }
         }

         p0++;p1++;erp++;
      }
      printf("[%d] %s Passed %d Failed %d Total %d \n", groupNum,"JBdmul", testsPassed, testsFailed, numTests);
      totalNumTest +=numTests; totalTestsPassed +=testsPassed; totalTestsFailed +=testsFailed;
   }
