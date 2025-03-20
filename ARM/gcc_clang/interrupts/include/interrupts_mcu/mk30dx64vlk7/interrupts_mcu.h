/****************************************************************************
**
** Copyright (C) 2025 MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
**
** This file is part of the mikroSDK package
**
** Commercial License Usage
**
** Licensees holding valid commercial NECTO compilers AI licenses may use this
** file in accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The MikroElektronika Company.
** For licensing terms and conditions see
** https://www.mikroe.com/legal/software-license-agreement.
** For further information use the contact form at
** https://www.mikroe.com/contact.
**
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used for
** non-commercial projects under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
** OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
* @file  interrupts_mcu.h
* @brief MK30DX64VLK7 MCU specific interrupt per module definitions.
*/

#ifndef _INTERRUPTS_MCU_H_
#define _INTERRUPTS_MCU_H_

// Interrupt table
static const int INTERRUPTS_NMI = 2;
static const int INTERRUPTS_HARD_FAULT = 3;
static const int INTERRUPTS_MEMMANAGE_FAULT = 4;
static const int INTERRUPTS_BUS_FAULT = 5;
static const int INTERRUPTS_USAGE_FAULT = 6;
static const int INTERRUPTS_RESERVED = 7;
static const int INTERRUPTS_RESERVED_1 = 8;
static const int INTERRUPTS_RESERVED_2 = 9;
static const int INTERRUPTS_RESERVED_3 = 10;
static const int INTERRUPTS_SVCALL = 11;
static const int INTERRUPTS_DEBUG_MONITOR = 12;
static const int INTERRUPTS_RESERVED_4 = 13;
static const int INTERRUPTS_PENDABLESRVREQ = 14;
static const int INTERRUPTS_SYSTICK = 15;
static const int INTERRUPTS_DMA0 = 16;
static const int INTERRUPTS_DMA1 = 17;
static const int INTERRUPTS_DMA2 = 18;
static const int INTERRUPTS_DMA3 = 19;
static const int INTERRUPTS_DMA4 = 20;
static const int INTERRUPTS_DMA5 = 21;
static const int INTERRUPTS_DMA6 = 22;
static const int INTERRUPTS_DMA7 = 23;
static const int INTERRUPTS_DMA8 = 24;
static const int INTERRUPTS_DMA9 = 25;
static const int INTERRUPTS_DMA10 = 26;
static const int INTERRUPTS_DMA11 = 27;
static const int INTERRUPTS_DMA12 = 28;
static const int INTERRUPTS_DMA13 = 29;
static const int INTERRUPTS_DMA14 = 30;
static const int INTERRUPTS_DMA15 = 31;
static const int INTERRUPTS_DMA_ERROR = 32;
static const int INTERRUPTS_RESERVED_5 = 33;
static const int INTERRUPTS_COMMAND_COMPLETE = 34;
static const int INTERRUPTS_READ_COLLISION = 35;
static const int INTERRUPTS_PMC = 36;
static const int INTERRUPTS_LLWU = 37;
static const int INTERRUPTS_BOTH_WATCHDOG_MODULES_SHARE_THIS_INTERRUPT = 38;
static const int INTERRUPTS_RESERVED_6 = 39;
static const int INTERRUPTS_I2C0 = 40;
static const int INTERRUPTS_I2C1 = 41;
static const int INTERRUPTS_SPI0 = 42;
static const int INTERRUPTS_SPI1 = 43;
static const int INTERRUPTS_RESERVED_7 = 44;
static const int INTERRUPTS_CAN0_0RED_MESSAGE_BUFFER = 45;
static const int INTERRUPTS_CAN0_BUS_OFF = 46;
static const int INTERRUPTS_CAN0_ERROR = 47;
static const int INTERRUPTS_CAN0_TX_WARNING = 48;
static const int INTERRUPTS_CAN0_RX_WARNING = 49;
static const int INTERRUPTS_CAN0_WAKE_UP = 50;
static const int INTERRUPTS_TRANSMIT = 51;
static const int INTERRUPTS_RECEIVE = 52;
static const int INTERRUPTS_RESERVED_8 = 53;
static const int INTERRUPTS_RESERVED_9 = 54;
static const int INTERRUPTS_RESERVED_10 = 55;
static const int INTERRUPTS_SINGLE_INTERRUPT_VECTOR_FOR_UART_LON_SOURCES = 56;
static const int INTERRUPTS_UART0_RX_TX = 57;
static const int INTERRUPTS_UART0_ERR = 58;
static const int INTERRUPTS_UART1_RX_TX = 59;
static const int INTERRUPTS_UART1_ERR = 60;
static const int INTERRUPTS_UART2_RX_TX = 61;
static const int INTERRUPTS_UART2_ERR = 62;
static const int INTERRUPTS_UART3_RX_TX = 63;
static const int INTERRUPTS_UART3_ERR = 64;
static const int INTERRUPTS_RESERVED_11 = 65;
static const int INTERRUPTS_RESERVED_12 = 66;
static const int INTERRUPTS_RESERVED_13 = 67;
static const int INTERRUPTS_RESERVED_14 = 68;
static const int INTERRUPTS_RESERVED_15 = 69;
static const int INTERRUPTS_RESERVED_16 = 70;
static const int INTERRUPTS_RESERVED_17 = 71;
static const int INTERRUPTS_RESERVED_18 = 72;
static const int INTERRUPTS_RESERVED_19 = 73;
static const int INTERRUPTS_RESERVED_20 = 74;
static const int INTERRUPTS_RESERVED_21 = 75;
static const int INTERRUPTS_RESERVED_22 = 76;
static const int INTERRUPTS_RESERVED_23 = 77;
static const int INTERRUPTS_RESERVED_24 = 78;
static const int INTERRUPTS_RESERVED_25 = 79;
static const int INTERRUPTS_RESERVED_26 = 80;
static const int INTERRUPTS_RESERVED_27 = 81;
static const int INTERRUPTS_RESERVED_28 = 82;
static const int INTERRUPTS_RESERVED_29 = 83;
static const int INTERRUPTS_RESERVED_30 = 84;
static const int INTERRUPTS_RESERVED_31 = 85;
static const int INTERRUPTS_RESERVED_32 = 86;
static const int INTERRUPTS_RESERVED_33 = 87;
static const int INTERRUPTS_RESERVED_34 = 88;
static const int INTERRUPTS_RESERVED_35 = 89;
static const int INTERRUPTS_RESERVED_36 = 90;
static const int INTERRUPTS_RESERVED_37 = 91;
static const int INTERRUPTS_RESERVED_38 = 92;
static const int INTERRUPTS_RESERVED_39 = 93;
static const int INTERRUPTS_RESERVED_40 = 94;
static const int INTERRUPTS_RESERVED_41 = 95;
static const int INTERRUPTS_RESERVED_42 = 96;
static const int INTERRUPTS_RESERVED_43 = 97;
static const int INTERRUPTS_RESERVED_44 = 98;
static const int INTERRUPTS_RESERVED_45 = 99;
static const int INTERRUPTS_RESERVED_46 = 100;
static const int INTERRUPTS_RESERVED_47 = 101;
static const int INTERRUPTS_RESERVED_48 = 102;
static const int INTERRUPTS_RESERVED_49 = 103;
static const int INTERRUPTS_RESERVED_50 = 104;
static const int INTERRUPTS_RESERVED_51 = 105;
static const int INTERRUPTS_RESERVED_52 = 106;
static const int INTERRUPTS_RESERVED_53 = 107;
static const int INTERRUPTS_RESERVED_54 = 108;
static const int INTERRUPTS_RESERVED_55 = 109;
static const int INTERRUPTS_RESERVED_56 = 110;
static const int INTERRUPTS_RESERVED_57 = 111;
static const int INTERRUPTS_RESERVED_58 = 112;
static const int INTERRUPTS_RESERVED_59 = 113;
static const int INTERRUPTS_RESERVED_60 = 114;
static const int INTERRUPTS_RESERVED_61 = 115;
static const int INTERRUPTS_RESERVED_62 = 116;
static const int INTERRUPTS_RESERVED_63 = 117;
static const int INTERRUPTS_RESERVED_64 = 118;
static const int INTERRUPTS_RESERVED_65 = 119;
static const int INTERRUPTS_RESERVED_66 = 120;
static const int INTERRUPTS_RESERVED_67 = 121;
static const int INTERRUPTS_RESERVED_68 = 122;
static const int INTERRUPTS_RESERVED_69 = 123;
static const int INTERRUPTS_RESERVED_70 = 124;
static const int INTERRUPTS_RESERVED_71 = 125;
static const int INTERRUPTS_RESERVED_72 = 126;
static const int INTERRUPTS_RESERVED_73 = 127;
static const int INTERRUPTS_RESERVED_74 = 128;
static const int INTERRUPTS_RESERVED_75 = 129;
static const int INTERRUPTS_RESERVED_76 = 130;
static const int INTERRUPTS_RESERVED_77 = 131;
static const int INTERRUPTS_RESERVED_78 = 132;
static const int INTERRUPTS_RESERVED_79 = 133;
static const int INTERRUPTS_RESERVED_80 = 134;
static const int INTERRUPTS_RESERVED_81 = 135;
static const int INTERRUPTS_RESERVED_82 = 136;
static const int INTERRUPTS_RESERVED_83 = 137;
static const int INTERRUPTS_RESERVED_84 = 138;
static const int INTERRUPTS_RESERVED_85 = 139;
static const int INTERRUPTS_RESERVED_86 = 140;
static const int INTERRUPTS_RESERVED_87 = 141;
static const int INTERRUPTS_RESERVED_88 = 142;
static const int INTERRUPTS_RESERVED_89 = 143;
static const int INTERRUPTS_RESERVED_90 = 144;
static const int INTERRUPTS_RESERVED_91 = 145;
static const int INTERRUPTS_RESERVED_92 = 146;
static const int INTERRUPTS_RESERVED_93 = 147;
static const int INTERRUPTS_RESERVED_94 = 148;
static const int INTERRUPTS_RESERVED_95 = 149;
static const int INTERRUPTS_RESERVED_96 = 150;
static const int INTERRUPTS_RESERVED_97 = 151;
static const int INTERRUPTS_RESERVED_98 = 152;
static const int INTERRUPTS_RESERVED_99 = 153;
static const int INTERRUPTS_RESERVED_100 = 154;
static const int INTERRUPTS_RESERVED_101 = 155;
static const int INTERRUPTS_RESERVED_102 = 156;
static const int INTERRUPTS_RESERVED_103 = 157;
static const int INTERRUPTS_RESERVED_104 = 158;
static const int INTERRUPTS_RESERVED_105 = 159;
static const int INTERRUPTS_RESERVED_106 = 160;
static const int INTERRUPTS_RESERVED_107 = 161;
static const int INTERRUPTS_RESERVED_108 = 162;
static const int INTERRUPTS_RESERVED_109 = 163;
static const int INTERRUPTS_RESERVED_110 = 164;
static const int INTERRUPTS_RESERVED_111 = 165;
static const int INTERRUPTS_RESERVED_112 = 166;
static const int INTERRUPTS_RESERVED_113 = 167;
static const int INTERRUPTS_RESERVED_114 = 168;
static const int INTERRUPTS_RESERVED_115 = 169;
static const int INTERRUPTS_RESERVED_116 = 170;
static const int INTERRUPTS_RESERVED_117 = 171;
static const int INTERRUPTS_RESERVED_118 = 172;
static const int INTERRUPTS_RESERVED_119 = 173;
static const int INTERRUPTS_RESERVED_120 = 174;
static const int INTERRUPTS_RESERVED_121 = 175;
static const int INTERRUPTS_RESERVED_122 = 176;
static const int INTERRUPTS_RESERVED_123 = 177;
static const int INTERRUPTS_RESERVED_124 = 178;
static const int INTERRUPTS_RESERVED_125 = 179;
static const int INTERRUPTS_RESERVED_126 = 180;
static const int INTERRUPTS_RESERVED_127 = 181;
static const int INTERRUPTS_RESERVED_128 = 182;
static const int INTERRUPTS_RESERVED_129 = 183;
static const int INTERRUPTS_RESERVED_130 = 184;
static const int INTERRUPTS_RESERVED_131 = 185;
static const int INTERRUPTS_RESERVED_132 = 186;
static const int INTERRUPTS_RESERVED_133 = 187;
static const int INTERRUPTS_RESERVED_134 = 188;
static const int INTERRUPTS_RESERVED_135 = 189;
static const int INTERRUPTS_RESERVED_136 = 190;
static const int INTERRUPTS_RESERVED_137 = 191;
static const int INTERRUPTS_RESERVED_138 = 192;
static const int INTERRUPTS_RESERVED_139 = 193;
static const int INTERRUPTS_RESERVED_140 = 194;
static const int INTERRUPTS_RESERVED_141 = 195;
static const int INTERRUPTS_RESERVED_142 = 196;
static const int INTERRUPTS_RESERVED_143 = 197;
static const int INTERRUPTS_RESERVED_144 = 198;
static const int INTERRUPTS_RESERVED_145 = 199;
static const int INTERRUPTS_RESERVED_146 = 200;
static const int INTERRUPTS_RESERVED_147 = 201;
static const int INTERRUPTS_RESERVED_148 = 202;
static const int INTERRUPTS_RESERVED_149 = 203;
static const int INTERRUPTS_RESERVED_150 = 204;
static const int INTERRUPTS_RESERVED_151 = 205;
static const int INTERRUPTS_RESERVED_152 = 206;
static const int INTERRUPTS_RESERVED_153 = 207;
static const int INTERRUPTS_RESERVED_154 = 208;
static const int INTERRUPTS_RESERVED_155 = 209;
static const int INTERRUPTS_RESERVED_156 = 210;
static const int INTERRUPTS_RESERVED_157 = 211;
static const int INTERRUPTS_RESERVED_158 = 212;
static const int INTERRUPTS_RESERVED_159 = 213;
static const int INTERRUPTS_RESERVED_160 = 214;
static const int INTERRUPTS_RESERVED_161 = 215;
static const int INTERRUPTS_RESERVED_162 = 216;
static const int INTERRUPTS_RESERVED_163 = 217;
static const int INTERRUPTS_RESERVED_164 = 218;
static const int INTERRUPTS_RESERVED_165 = 219;
static const int INTERRUPTS_RESERVED_166 = 220;
static const int INTERRUPTS_RESERVED_167 = 221;
static const int INTERRUPTS_RESERVED_168 = 222;
static const int INTERRUPTS_RESERVED_169 = 223;
static const int INTERRUPTS_RESERVED_170 = 224;
static const int INTERRUPTS_RESERVED_171 = 225;
static const int INTERRUPTS_RESERVED_172 = 226;
static const int INTERRUPTS_RESERVED_173 = 227;
static const int INTERRUPTS_RESERVED_174 = 228;
static const int INTERRUPTS_RESERVED_175 = 229;
static const int INTERRUPTS_RESERVED_176 = 230;
static const int INTERRUPTS_RESERVED_177 = 231;
static const int INTERRUPTS_RESERVED_178 = 232;
static const int INTERRUPTS_RESERVED_179 = 233;
static const int INTERRUPTS_RESERVED_180 = 234;
static const int INTERRUPTS_RESERVED_181 = 235;
static const int INTERRUPTS_RESERVED_182 = 236;
static const int INTERRUPTS_RESERVED_183 = 237;
static const int INTERRUPTS_RESERVED_184 = 238;
static const int INTERRUPTS_RESERVED_185 = 239;
static const int INTERRUPTS_RESERVED_186 = 240;
static const int INTERRUPTS_RESERVED_187 = 241;
static const int INTERRUPTS_RESERVED_188 = 242;
static const int INTERRUPTS_RESERVED_189 = 243;
static const int INTERRUPTS_RESERVED_190 = 244;
static const int INTERRUPTS_RESERVED_191 = 245;
static const int INTERRUPTS_RESERVED_192 = 246;
static const int INTERRUPTS_RESERVED_193 = 247;
static const int INTERRUPTS_RESERVED_194 = 248;
static const int INTERRUPTS_RESERVED_195 = 249;
static const int INTERRUPTS_RESERVED_196 = 250;
static const int INTERRUPTS_RESERVED_197 = 251;
static const int INTERRUPTS_RESERVED_198 = 252;
static const int INTERRUPTS_RESERVED_199 = 253;
static const int INTERRUPTS_RESERVED_200 = 254;
static const int INTERRUPTS_RESERVED_201 = 255;
static const int INTERRUPTS_RESERVED_202 = 256;
static const int INTERRUPTS_RESERVED_203 = 257;
static const int INTERRUPTS_RESERVED_204 = 258;
static const int INTERRUPTS_RESERVED_205 = 259;
static const int INTERRUPTS_RESERVED_206 = 260;
static const int INTERRUPTS_RESERVED_207 = 261;
static const int INTERRUPTS_RESERVED_208 = 262;
static const int INTERRUPTS_RESERVED_209 = 263;
static const int INTERRUPTS_RESERVED_210 = 264;
static const int INTERRUPTS_RESERVED_211 = 265;
static const int INTERRUPTS_RESERVED_212 = 266;
static const int INTERRUPTS_RESERVED_213 = 267;
static const int INTERRUPTS_RESERVED_214 = 268;
static const int INTERRUPTS_RESERVED_215 = 269;
static const int INTERRUPTS_RESERVED_216 = 270;
static const int INTERRUPTS_RESERVED_217 = 271;
static const int INTERRUPTS_RESERVED_218 = 272;
static const int INTERRUPTS_RESERVED_219 = 273;
static const int INTERRUPTS_RESERVED_220 = 274;
static const int INTERRUPTS_RESERVED_221 = 275;
static const int INTERRUPTS_RESERVED_222 = 276;
static const int INTERRUPTS_RESERVED_223 = 277;
static const int INTERRUPTS_RESERVED_224 = 278;
static const int INTERRUPTS_RESERVED_225 = 279;
static const int INTERRUPTS_RESERVED_226 = 280;
static const int INTERRUPTS_RESERVED_227 = 281;
static const int INTERRUPTS_RESERVED_228 = 282;
static const int INTERRUPTS_RESERVED_229 = 283;
static const int INTERRUPTS_RESERVED_230 = 284;
static const int INTERRUPTS_RESERVED_231 = 285;
static const int INTERRUPTS_RESERVED_232 = 286;
static const int INTERRUPTS_RESERVED_233 = 287;
static const int INTERRUPTS_RESERVED_234 = 288;
static const int INTERRUPTS_RESERVED_235 = 289;
static const int INTERRUPTS_RESERVED_236 = 290;
static const int INTERRUPTS_RESERVED_237 = 291;
static const int INTERRUPTS_RESERVED_238 = 292;
static const int INTERRUPTS_RESERVED_239 = 293;
static const int INTERRUPTS_RESERVED_240 = 294;
static const int INTERRUPTS_RESERVED_241 = 295;
static const int INTERRUPTS_RESERVED_242 = 296;
static const int INTERRUPTS_RESERVED_243 = 297;
static const int INTERRUPTS_RESERVED_244 = 298;
static const int INTERRUPTS_RESERVED_245 = 299;
static const int INTERRUPTS_RESERVED_246 = 300;
static const int INTERRUPTS_RESERVED_247 = 301;
static const int INTERRUPTS_RESERVED_248 = 302;
static const int INTERRUPTS_RESERVED_249 = 303;
static const int INTERRUPTS_RESERVED_250 = 304;
static const int INTERRUPTS_RESERVED_251 = 305;
static const int INTERRUPTS_RESERVED_252 = 306;
static const int INTERRUPTS_RESERVED_253 = 307;
static const int INTERRUPTS_RESERVED_254 = 308;
static const int INTERRUPTS_RESERVED_255 = 309;
static const int INTERRUPTS_RESERVED_256 = 310;
static const int INTERRUPTS_RESERVED_257 = 311;
static const int INTERRUPTS_RESERVED_258 = 312;
static const int INTERRUPTS_RESERVED_259 = 313;
static const int INTERRUPTS_RESERVED_260 = 314;
static const int INTERRUPTS_RESERVED_261 = 315;
static const int INTERRUPTS_RESERVED_262 = 316;
static const int INTERRUPTS_RESERVED_263 = 317;
static const int INTERRUPTS_RESERVED_264 = 318;
static const int INTERRUPTS_RESERVED_265 = 319;
static const int INTERRUPTS_RESERVED_266 = 320;
static const int INTERRUPTS_RESERVED_267 = 321;
static const int INTERRUPTS_RESERVED_268 = 322;
static const int INTERRUPTS_RESERVED_269 = 323;
static const int INTERRUPTS_RESERVED_270 = 324;
static const int INTERRUPTS_RESERVED_271 = 325;
static const int INTERRUPTS_RESERVED_272 = 326;
static const int INTERRUPTS_RESERVED_273 = 327;
static const int INTERRUPTS_RESERVED_274 = 328;
static const int INTERRUPTS_RESERVED_275 = 329;
static const int INTERRUPTS_RESERVED_276 = 330;
static const int INTERRUPTS_RESERVED_277 = 331;
static const int INTERRUPTS_RESERVED_278 = 332;
static const int INTERRUPTS_RESERVED_279 = 333;
static const int INTERRUPTS_RESERVED_280 = 334;
static const int INTERRUPTS_RESERVED_281 = 335;
static const int INTERRUPTS_RESERVED_282 = 336;
static const int INTERRUPTS_RESERVED_283 = 337;
static const int INTERRUPTS_RESERVED_284 = 338;
static const int INTERRUPTS_RESERVED_285 = 339;
static const int INTERRUPTS_RESERVED_286 = 340;
static const int INTERRUPTS_RESERVED_287 = 341;
static const int INTERRUPTS_RESERVED_288 = 342;
static const int INTERRUPTS_RESERVED_289 = 343;
static const int INTERRUPTS_RESERVED_290 = 344;
static const int INTERRUPTS_RESERVED_291 = 345;
static const int INTERRUPTS_RESERVED_292 = 346;
static const int INTERRUPTS_RESERVED_293 = 347;
static const int INTERRUPTS_RESERVED_294 = 348;
static const int INTERRUPTS_RESERVED_295 = 349;
static const int INTERRUPTS_RESERVED_296 = 350;
static const int INTERRUPTS_RESERVED_297 = 351;
static const int INTERRUPTS_RESERVED_298 = 352;
static const int INTERRUPTS_RESERVED_299 = 353;
static const int INTERRUPTS_RESERVED_300 = 354;
static const int INTERRUPTS_RESERVED_301 = 355;
static const int INTERRUPTS_RESERVED_302 = 356;
static const int INTERRUPTS_RESERVED_303 = 357;
static const int INTERRUPTS_RESERVED_304 = 358;
static const int INTERRUPTS_RESERVED_305 = 359;
static const int INTERRUPTS_RESERVED_306 = 360;
static const int INTERRUPTS_RESERVED_307 = 361;
static const int INTERRUPTS_RESERVED_308 = 362;
static const int INTERRUPTS_RESERVED_309 = 363;
static const int INTERRUPTS_RESERVED_310 = 364;
static const int INTERRUPTS_RESERVED_311 = 365;
static const int INTERRUPTS_RESERVED_312 = 366;
static const int INTERRUPTS_RESERVED_313 = 367;
static const int INTERRUPTS_RESERVED_314 = 368;
static const int INTERRUPTS_RESERVED_315 = 369;
static const int INTERRUPTS_RESERVED_316 = 370;
static const int INTERRUPTS_RESERVED_317 = 371;
static const int INTERRUPTS_RESERVED_318 = 372;
static const int INTERRUPTS_RESERVED_319 = 373;
static const int INTERRUPTS_RESERVED_320 = 374;
static const int INTERRUPTS_RESERVED_321 = 375;
static const int INTERRUPTS_RESERVED_322 = 376;
static const int INTERRUPTS_RESERVED_323 = 377;
static const int INTERRUPTS_RESERVED_324 = 378;
static const int INTERRUPTS_RESERVED_325 = 379;
static const int INTERRUPTS_RESERVED_326 = 380;
static const int INTERRUPTS_RESERVED_327 = 381;
static const int INTERRUPTS_RESERVED_328 = 382;
static const int INTERRUPTS_RESERVED_329 = 383;
static const int INTERRUPTS_RESERVED_330 = 384;
static const int INTERRUPTS_RESERVED_331 = 385;
static const int INTERRUPTS_RESERVED_332 = 386;
static const int INTERRUPTS_RESERVED_333 = 387;
static const int INTERRUPTS_RESERVED_334 = 388;
static const int INTERRUPTS_RESERVED_335 = 389;
static const int INTERRUPTS_RESERVED_336 = 390;
static const int INTERRUPTS_RESERVED_337 = 391;
static const int INTERRUPTS_RESERVED_338 = 392;
static const int INTERRUPTS_RESERVED_339 = 393;
static const int INTERRUPTS_RESERVED_340 = 394;
static const int INTERRUPTS_RESERVED_341 = 395;
static const int INTERRUPTS_RESERVED_342 = 396;
static const int INTERRUPTS_RESERVED_343 = 397;
static const int INTERRUPTS_RESERVED_344 = 398;
static const int INTERRUPTS_RESERVED_345 = 399;
static const int INTERRUPTS_RESERVED_346 = 400;
static const int INTERRUPTS_RESERVED_347 = 401;
static const int INTERRUPTS_RESERVED_348 = 402;
static const int INTERRUPTS_RESERVED_349 = 403;
static const int INTERRUPTS_RESERVED_350 = 404;
static const int INTERRUPTS_RESERVED_351 = 405;
static const int INTERRUPTS_RESERVED_352 = 406;
static const int INTERRUPTS_RESERVED_353 = 407;
static const int INTERRUPTS_RESERVED_354 = 408;
static const int INTERRUPTS_RESERVED_355 = 409;
static const int INTERRUPTS_RESERVED_356 = 410;
static const int INTERRUPTS_RESERVED_357 = 411;
static const int INTERRUPTS_RESERVED_358 = 412;
static const int INTERRUPTS_RESERVED_359 = 413;
static const int INTERRUPTS_RESERVED_360 = 414;
static const int INTERRUPTS_RESERVED_361 = 415;
static const int INTERRUPTS_RESERVED_362 = 416;
static const int INTERRUPTS_RESERVED_363 = 417;
static const int INTERRUPTS_RESERVED_364 = 418;
static const int INTERRUPTS_RESERVED_365 = 419;
static const int INTERRUPTS_RESERVED_366 = 420;
static const int INTERRUPTS_RESERVED_367 = 421;
static const int INTERRUPTS_RESERVED_368 = 422;
static const int INTERRUPTS_RESERVED_369 = 423;
static const int INTERRUPTS_RESERVED_370 = 424;
static const int INTERRUPTS_RESERVED_371 = 425;
static const int INTERRUPTS_RESERVED_372 = 426;
static const int INTERRUPTS_RESERVED_373 = 427;
static const int INTERRUPTS_RESERVED_374 = 428;
static const int INTERRUPTS_RESERVED_375 = 429;
static const int INTERRUPTS_RESERVED_376 = 430;
static const int INTERRUPTS_RESERVED_377 = 431;
static const int INTERRUPTS_RESERVED_378 = 432;
static const int INTERRUPTS_RESERVED_379 = 433;
static const int INTERRUPTS_RESERVED_380 = 434;
static const int INTERRUPTS_RESERVED_381 = 435;
static const int INTERRUPTS_RESERVED_382 = 436;
static const int INTERRUPTS_RESERVED_383 = 437;
static const int INTERRUPTS_RESERVED_384 = 438;
static const int INTERRUPTS_RESERVED_385 = 439;
static const int INTERRUPTS_RESERVED_386 = 440;
static const int INTERRUPTS_RESERVED_387 = 441;
static const int INTERRUPTS_RESERVED_388 = 442;
static const int INTERRUPTS_RESERVED_389 = 443;
static const int INTERRUPTS_RESERVED_390 = 444;
static const int INTERRUPTS_RESERVED_391 = 445;
static const int INTERRUPTS_RESERVED_392 = 446;
static const int INTERRUPTS_RESERVED_393 = 447;
static const int INTERRUPTS_RESERVED_394 = 448;
static const int INTERRUPTS_RESERVED_395 = 449;
static const int INTERRUPTS_RESERVED_396 = 450;
static const int INTERRUPTS_RESERVED_397 = 451;
static const int INTERRUPTS_RESERVED_398 = 452;
static const int INTERRUPTS_RESERVED_399 = 453;
static const int INTERRUPTS_RESERVED_400 = 454;
static const int INTERRUPTS_RESERVED_401 = 455;
static const int INTERRUPTS_RESERVED_402 = 456;
static const int INTERRUPTS_RESERVED_403 = 457;
static const int INTERRUPTS_RESERVED_404 = 458;
static const int INTERRUPTS_RESERVED_405 = 459;
static const int INTERRUPTS_RESERVED_406 = 460;
static const int INTERRUPTS_RESERVED_407 = 461;
static const int INTERRUPTS_RESERVED_408 = 462;
static const int INTERRUPTS_RESERVED_409 = 463;
static const int INTERRUPTS_RESERVED_410 = 464;
static const int INTERRUPTS_RESERVED_411 = 465;
static const int INTERRUPTS_RESERVED_412 = 466;
static const int INTERRUPTS_RESERVED_413 = 467;
static const int INTERRUPTS_RESERVED_414 = 468;
static const int INTERRUPTS_RESERVED_415 = 469;
static const int INTERRUPTS_RESERVED_416 = 470;
static const int INTERRUPTS_RESERVED_417 = 471;
static const int INTERRUPTS_RESERVED_418 = 472;
static const int INTERRUPTS_RESERVED_419 = 473;
static const int INTERRUPTS_RESERVED_420 = 474;
static const int INTERRUPTS_RESERVED_421 = 475;


// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MK30DX64VLK7.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mk20dn32vlh5.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END

