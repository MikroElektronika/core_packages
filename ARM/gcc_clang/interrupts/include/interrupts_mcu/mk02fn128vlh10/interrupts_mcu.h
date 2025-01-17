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
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
* @file  interrupts_mcu.h
* @brief MK02FN128VLH10 MCU specific interrupt per module definitions.
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
static const int INTERRUPTS_RESERVED_5 = 20;
static const int INTERRUPTS_RESERVED_6 = 21;
static const int INTERRUPTS_RESERVED_7 = 22;
static const int INTERRUPTS_RESERVED_8 = 23;
static const int INTERRUPTS_RESERVED_9 = 24;
static const int INTERRUPTS_RESERVED_10 = 25;
static const int INTERRUPTS_RESERVED_11 = 26;
static const int INTERRUPTS_RESERVED_12 = 27;
static const int INTERRUPTS_RESERVED_13 = 28;
static const int INTERRUPTS_RESERVED_14 = 29;
static const int INTERRUPTS_RESERVED_15 = 30;
static const int INTERRUPTS_RESERVED_16 = 31;
static const int INTERRUPTS_DMA_ERROR = 32;
static const int INTERRUPTS_FPU_SOURCES = 33;
static const int INTERRUPTS_COMMAND_COMPLETE = 34;
static const int INTERRUPTS_READ_COLLISION = 35;
static const int INTERRUPTS_PMC = 36;
static const int INTERRUPTS_LLWU = 37;
static const int INTERRUPTS_BOTH_WATCHDOG_MODULES_SHARE_THIS_INTERRUPT = 38;
static const int INTERRUPTS_RESERVED_17 = 39;
static const int INTERRUPTS_I2C0 = 40;
static const int INTERRUPTS_RESERVED_18 = 41;
static const int INTERRUPTS_SPI0 = 42;
static const int INTERRUPTS_RESERVED_19 = 43;
static const int INTERRUPTS_RESERVED_20 = 44;
static const int INTERRUPTS_RESERVED_21 = 45;
static const int INTERRUPTS_RESERVED_22 = 46;
static const int INTERRUPTS_UART0_RX_TX = 47;
static const int INTERRUPTS_UART0_ERR = 48;
static const int INTERRUPTS_UART1_RX_TX = 49;
static const int INTERRUPTS_UART1_ERR = 50;
static const int INTERRUPTS_RESERVED_23 = 51;
static const int INTERRUPTS_RESERVED_24 = 52;
static const int INTERRUPTS_RESERVED_25 = 53;
static const int INTERRUPTS_RESERVED_26 = 54;
static const int INTERRUPTS_ADC0 = 55;
static const int INTERRUPTS_CMP0 = 56;
static const int INTERRUPTS_CMP1 = 57;
static const int INTERRUPTS_FTM0 = 58;
static const int INTERRUPTS_FTM1 = 59;
static const int INTERRUPTS_FTM2 = 60;
static const int INTERRUPTS_RESERVED_27 = 61;
static const int INTERRUPTS_RESERVED_28 = 62;
static const int INTERRUPTS_RESERVED_29 = 63;
static const int INTERRUPTS_PIT0 = 64;
static const int INTERRUPTS_PIT1 = 65;
static const int INTERRUPTS_PIT2 = 66;
static const int INTERRUPTS_PIT3 = 67;
static const int INTERRUPTS_PDB = 68;
static const int INTERRUPTS_RESERVED_30 = 69;
static const int INTERRUPTS_RESERVED_31 = 70;
static const int INTERRUPTS_RESERVED_32 = 71;
static const int INTERRUPTS_DAC0 = 72;
static const int INTERRUPTS_MCG = 73;
static const int INTERRUPTS_LPTMR0 = 74;
static const int INTERRUPTS_PORTA = 75;
static const int INTERRUPTS_PORTB = 76;
static const int INTERRUPTS_PORTC = 77;
static const int INTERRUPTS_PORTD = 78;
static const int INTERRUPTS_PORTE = 79;
static const int INTERRUPTS_SOFTWARE_INTERRUPT4 = 80;
static const int INTERRUPTS_RESERVED_33 = 81;
static const int INTERRUPTS_RESERVED_34 = 82;
static const int INTERRUPTS_RESERVED_35 = 83;
static const int INTERRUPTS_RESERVED_36 = 84;
static const int INTERRUPTS_RESERVED_37 = 85;
static const int INTERRUPTS_RESERVED_38 = 86;
static const int INTERRUPTS_RESERVED_39 = 87;
static const int INTERRUPTS_RESERVED_40 = 88;
static const int INTERRUPTS_RESERVED_41 = 89;
static const int INTERRUPTS_RESERVED_42 = 90;
static const int INTERRUPTS_RESERVED_43 = 91;
static const int INTERRUPTS_RESERVED_44 = 92;
static const int INTERRUPTS_RESERVED_45 = 93;
static const int INTERRUPTS_RESERVED_46 = 94;
static const int INTERRUPTS_RESERVED_47 = 95;
static const int INTERRUPTS_RESERVED_48 = 96;
static const int INTERRUPTS_RESERVED_49 = 97;
static const int INTERRUPTS_RESERVED_50 = 98;
static const int INTERRUPTS_RESERVED_51 = 99;
static const int INTERRUPTS_RESERVED_52 = 100;
static const int INTERRUPTS_RESERVED_53 = 101;
static const int INTERRUPTS_RESERVED_54 = 102;
static const int INTERRUPTS_RESERVED_55 = 103;
static const int INTERRUPTS_RESERVED_56 = 104;
static const int INTERRUPTS_RESERVED_57 = 105;
static const int INTERRUPTS_RESERVED_58 = 106;
static const int INTERRUPTS_RESERVED_59 = 107;
static const int INTERRUPTS_RESERVED_60 = 108;
static const int INTERRUPTS_RESERVED_61 = 109;
static const int INTERRUPTS_RESERVED_62 = 110;
static const int INTERRUPTS_RESERVED_63 = 111;
static const int INTERRUPTS_RESERVED_64 = 112;
static const int INTERRUPTS_RESERVED_65 = 113;
static const int INTERRUPTS_RESERVED_66 = 114;
static const int INTERRUPTS_RESERVED_67 = 115;
static const int INTERRUPTS_RESERVED_68 = 116;
static const int INTERRUPTS_RESERVED_69 = 117;
static const int INTERRUPTS_RESERVED_70 = 118;
static const int INTERRUPTS_RESERVED_71 = 119;
static const int INTERRUPTS_RESERVED_72 = 120;
static const int INTERRUPTS_RESERVED_73 = 121;
static const int INTERRUPTS_RESERVED_74 = 122;
static const int INTERRUPTS_RESERVED_75 = 123;
static const int INTERRUPTS_RESERVED_76 = 124;
static const int INTERRUPTS_RESERVED_77 = 125;
static const int INTERRUPTS_RESERVED_78 = 126;
static const int INTERRUPTS_RESERVED_79 = 127;
static const int INTERRUPTS_RESERVED_80 = 128;
static const int INTERRUPTS_RESERVED_81 = 129;
static const int INTERRUPTS_RESERVED_82 = 130;
static const int INTERRUPTS_RESERVED_83 = 131;
static const int INTERRUPTS_RESERVED_84 = 132;
static const int INTERRUPTS_RESERVED_85 = 133;
static const int INTERRUPTS_RESERVED_86 = 134;
static const int INTERRUPTS_RESERVED_87 = 135;
static const int INTERRUPTS_RESERVED_88 = 136;
static const int INTERRUPTS_RESERVED_89 = 137;
static const int INTERRUPTS_RESERVED_90 = 138;
static const int INTERRUPTS_RESERVED_91 = 139;
static const int INTERRUPTS_RESERVED_92 = 140;
static const int INTERRUPTS_RESERVED_93 = 141;
static const int INTERRUPTS_RESERVED_94 = 142;
static const int INTERRUPTS_RESERVED_95 = 143;
static const int INTERRUPTS_RESERVED_96 = 144;
static const int INTERRUPTS_RESERVED_97 = 145;
static const int INTERRUPTS_RESERVED_98 = 146;
static const int INTERRUPTS_RESERVED_99 = 147;
static const int INTERRUPTS_RESERVED_100 = 148;
static const int INTERRUPTS_RESERVED_101 = 149;
static const int INTERRUPTS_RESERVED_102 = 150;
static const int INTERRUPTS_RESERVED_103 = 151;
static const int INTERRUPTS_RESERVED_104 = 152;
static const int INTERRUPTS_RESERVED_105 = 153;
static const int INTERRUPTS_RESERVED_106 = 154;
static const int INTERRUPTS_RESERVED_107 = 155;
static const int INTERRUPTS_RESERVED_108 = 156;
static const int INTERRUPTS_RESERVED_109 = 157;
static const int INTERRUPTS_RESERVED_110 = 158;
static const int INTERRUPTS_RESERVED_111 = 159;
static const int INTERRUPTS_RESERVED_112 = 160;
static const int INTERRUPTS_RESERVED_113 = 161;
static const int INTERRUPTS_RESERVED_114 = 162;
static const int INTERRUPTS_RESERVED_115 = 163;
static const int INTERRUPTS_RESERVED_116 = 164;
static const int INTERRUPTS_RESERVED_117 = 165;
static const int INTERRUPTS_RESERVED_118 = 166;
static const int INTERRUPTS_RESERVED_119 = 167;
static const int INTERRUPTS_RESERVED_120 = 168;
static const int INTERRUPTS_RESERVED_121 = 169;
static const int INTERRUPTS_RESERVED_122 = 170;
static const int INTERRUPTS_RESERVED_123 = 171;
static const int INTERRUPTS_RESERVED_124 = 172;
static const int INTERRUPTS_RESERVED_125 = 173;
static const int INTERRUPTS_RESERVED_126 = 174;
static const int INTERRUPTS_RESERVED_127 = 175;
static const int INTERRUPTS_RESERVED_128 = 176;
static const int INTERRUPTS_RESERVED_129 = 177;
static const int INTERRUPTS_RESERVED_130 = 178;
static const int INTERRUPTS_RESERVED_131 = 179;
static const int INTERRUPTS_RESERVED_132 = 180;
static const int INTERRUPTS_RESERVED_133 = 181;
static const int INTERRUPTS_RESERVED_134 = 182;
static const int INTERRUPTS_RESERVED_135 = 183;
static const int INTERRUPTS_RESERVED_136 = 184;
static const int INTERRUPTS_RESERVED_137 = 185;
static const int INTERRUPTS_RESERVED_138 = 186;
static const int INTERRUPTS_RESERVED_139 = 187;
static const int INTERRUPTS_RESERVED_140 = 188;
static const int INTERRUPTS_RESERVED_141 = 189;
static const int INTERRUPTS_RESERVED_142 = 190;
static const int INTERRUPTS_RESERVED_143 = 191;
static const int INTERRUPTS_RESERVED_144 = 192;
static const int INTERRUPTS_RESERVED_145 = 193;
static const int INTERRUPTS_RESERVED_146 = 194;
static const int INTERRUPTS_RESERVED_147 = 195;
static const int INTERRUPTS_RESERVED_148 = 196;
static const int INTERRUPTS_RESERVED_149 = 197;
static const int INTERRUPTS_RESERVED_150 = 198;
static const int INTERRUPTS_RESERVED_151 = 199;
static const int INTERRUPTS_RESERVED_152 = 200;
static const int INTERRUPTS_RESERVED_153 = 201;
static const int INTERRUPTS_RESERVED_154 = 202;
static const int INTERRUPTS_RESERVED_155 = 203;
static const int INTERRUPTS_RESERVED_156 = 204;
static const int INTERRUPTS_RESERVED_157 = 205;
static const int INTERRUPTS_RESERVED_158 = 206;
static const int INTERRUPTS_RESERVED_159 = 207;
static const int INTERRUPTS_RESERVED_160 = 208;
static const int INTERRUPTS_RESERVED_161 = 209;
static const int INTERRUPTS_RESERVED_162 = 210;
static const int INTERRUPTS_RESERVED_163 = 211;
static const int INTERRUPTS_RESERVED_164 = 212;
static const int INTERRUPTS_RESERVED_165 = 213;
static const int INTERRUPTS_RESERVED_166 = 214;
static const int INTERRUPTS_RESERVED_167 = 215;
static const int INTERRUPTS_RESERVED_168 = 216;
static const int INTERRUPTS_RESERVED_169 = 217;
static const int INTERRUPTS_RESERVED_170 = 218;
static const int INTERRUPTS_RESERVED_171 = 219;
static const int INTERRUPTS_RESERVED_172 = 220;
static const int INTERRUPTS_RESERVED_173 = 221;
static const int INTERRUPTS_RESERVED_174 = 222;
static const int INTERRUPTS_RESERVED_175 = 223;
static const int INTERRUPTS_RESERVED_176 = 224;
static const int INTERRUPTS_RESERVED_177 = 225;
static const int INTERRUPTS_RESERVED_178 = 226;
static const int INTERRUPTS_RESERVED_179 = 227;
static const int INTERRUPTS_RESERVED_180 = 228;
static const int INTERRUPTS_RESERVED_181 = 229;
static const int INTERRUPTS_RESERVED_182 = 230;
static const int INTERRUPTS_RESERVED_183 = 231;
static const int INTERRUPTS_RESERVED_184 = 232;
static const int INTERRUPTS_RESERVED_185 = 233;
static const int INTERRUPTS_RESERVED_186 = 234;
static const int INTERRUPTS_RESERVED_187 = 235;
static const int INTERRUPTS_RESERVED_188 = 236;
static const int INTERRUPTS_RESERVED_189 = 237;
static const int INTERRUPTS_RESERVED_190 = 238;
static const int INTERRUPTS_RESERVED_191 = 239;
static const int INTERRUPTS_RESERVED_192 = 240;
static const int INTERRUPTS_RESERVED_193 = 241;
static const int INTERRUPTS_RESERVED_194 = 242;
static const int INTERRUPTS_RESERVED_195 = 243;
static const int INTERRUPTS_RESERVED_196 = 244;
static const int INTERRUPTS_RESERVED_197 = 245;
static const int INTERRUPTS_RESERVED_198 = 246;
static const int INTERRUPTS_RESERVED_199 = 247;
static const int INTERRUPTS_RESERVED_200 = 248;
static const int INTERRUPTS_RESERVED_201 = 249;
static const int INTERRUPTS_RESERVED_202 = 250;
static const int INTERRUPTS_RESERVED_203 = 251;
static const int INTERRUPTS_RESERVED_204 = 252;
static const int INTERRUPTS_RESERVED_205 = 253;
static const int INTERRUPTS_RESERVED_206 = 254;
static const int INTERRUPTS_RESERVED_207 = 255;
static const int INTERRUPTS_RESERVED_208 = 256;
static const int INTERRUPTS_RESERVED_209 = 257;
static const int INTERRUPTS_RESERVED_210 = 258;
static const int INTERRUPTS_RESERVED_211 = 259;
static const int INTERRUPTS_RESERVED_212 = 260;
static const int INTERRUPTS_RESERVED_213 = 261;
static const int INTERRUPTS_RESERVED_214 = 262;
static const int INTERRUPTS_RESERVED_215 = 263;
static const int INTERRUPTS_RESERVED_216 = 264;
static const int INTERRUPTS_RESERVED_217 = 265;
static const int INTERRUPTS_RESERVED_218 = 266;
static const int INTERRUPTS_RESERVED_219 = 267;
static const int INTERRUPTS_RESERVED_220 = 268;
static const int INTERRUPTS_RESERVED_221 = 269;
static const int INTERRUPTS_RESERVED_222 = 270;
static const int INTERRUPTS_RESERVED_223 = 271;
static const int INTERRUPTS_RESERVED_224 = 272;
static const int INTERRUPTS_RESERVED_225 = 273;
static const int INTERRUPTS_RESERVED_226 = 274;
static const int INTERRUPTS_RESERVED_227 = 275;
static const int INTERRUPTS_RESERVED_228 = 276;
static const int INTERRUPTS_RESERVED_229 = 277;
static const int INTERRUPTS_RESERVED_230 = 278;
static const int INTERRUPTS_RESERVED_231 = 279;
static const int INTERRUPTS_RESERVED_232 = 280;
static const int INTERRUPTS_RESERVED_233 = 281;
static const int INTERRUPTS_RESERVED_234 = 282;
static const int INTERRUPTS_RESERVED_235 = 283;
static const int INTERRUPTS_RESERVED_236 = 284;
static const int INTERRUPTS_RESERVED_237 = 285;
static const int INTERRUPTS_RESERVED_238 = 286;
static const int INTERRUPTS_RESERVED_239 = 287;
static const int INTERRUPTS_RESERVED_240 = 288;
static const int INTERRUPTS_RESERVED_241 = 289;
static const int INTERRUPTS_RESERVED_242 = 290;
static const int INTERRUPTS_RESERVED_243 = 291;
static const int INTERRUPTS_RESERVED_244 = 292;
static const int INTERRUPTS_RESERVED_245 = 293;
static const int INTERRUPTS_RESERVED_246 = 294;
static const int INTERRUPTS_RESERVED_247 = 295;
static const int INTERRUPTS_RESERVED_248 = 296;
static const int INTERRUPTS_RESERVED_249 = 297;
static const int INTERRUPTS_RESERVED_250 = 298;
static const int INTERRUPTS_RESERVED_251 = 299;
static const int INTERRUPTS_RESERVED_252 = 300;
static const int INTERRUPTS_RESERVED_253 = 301;
static const int INTERRUPTS_RESERVED_254 = 302;
static const int INTERRUPTS_RESERVED_255 = 303;
static const int INTERRUPTS_RESERVED_256 = 304;
static const int INTERRUPTS_RESERVED_257 = 305;
static const int INTERRUPTS_RESERVED_258 = 306;
static const int INTERRUPTS_RESERVED_259 = 307;
static const int INTERRUPTS_RESERVED_260 = 308;
static const int INTERRUPTS_RESERVED_261 = 309;
static const int INTERRUPTS_RESERVED_262 = 310;
static const int INTERRUPTS_RESERVED_263 = 311;
static const int INTERRUPTS_RESERVED_264 = 312;
static const int INTERRUPTS_RESERVED_265 = 313;
static const int INTERRUPTS_RESERVED_266 = 314;
static const int INTERRUPTS_RESERVED_267 = 315;
static const int INTERRUPTS_RESERVED_268 = 316;
static const int INTERRUPTS_RESERVED_269 = 317;
static const int INTERRUPTS_RESERVED_270 = 318;
static const int INTERRUPTS_RESERVED_271 = 319;
static const int INTERRUPTS_RESERVED_272 = 320;
static const int INTERRUPTS_RESERVED_273 = 321;
static const int INTERRUPTS_RESERVED_274 = 322;
static const int INTERRUPTS_RESERVED_275 = 323;
static const int INTERRUPTS_RESERVED_276 = 324;
static const int INTERRUPTS_RESERVED_277 = 325;
static const int INTERRUPTS_RESERVED_278 = 326;
static const int INTERRUPTS_RESERVED_279 = 327;
static const int INTERRUPTS_RESERVED_280 = 328;
static const int INTERRUPTS_RESERVED_281 = 329;
static const int INTERRUPTS_RESERVED_282 = 330;
static const int INTERRUPTS_RESERVED_283 = 331;
static const int INTERRUPTS_RESERVED_284 = 332;
static const int INTERRUPTS_RESERVED_285 = 333;
static const int INTERRUPTS_RESERVED_286 = 334;
static const int INTERRUPTS_RESERVED_287 = 335;
static const int INTERRUPTS_RESERVED_288 = 336;
static const int INTERRUPTS_RESERVED_289 = 337;
static const int INTERRUPTS_RESERVED_290 = 338;
static const int INTERRUPTS_RESERVED_291 = 339;
static const int INTERRUPTS_RESERVED_292 = 340;
static const int INTERRUPTS_RESERVED_293 = 341;
static const int INTERRUPTS_RESERVED_294 = 342;
static const int INTERRUPTS_RESERVED_295 = 343;
static const int INTERRUPTS_RESERVED_296 = 344;
static const int INTERRUPTS_RESERVED_297 = 345;
static const int INTERRUPTS_RESERVED_298 = 346;
static const int INTERRUPTS_RESERVED_299 = 347;
static const int INTERRUPTS_RESERVED_300 = 348;
static const int INTERRUPTS_RESERVED_301 = 349;
static const int INTERRUPTS_RESERVED_302 = 350;
static const int INTERRUPTS_RESERVED_303 = 351;
static const int INTERRUPTS_RESERVED_304 = 352;
static const int INTERRUPTS_RESERVED_305 = 353;
static const int INTERRUPTS_RESERVED_306 = 354;
static const int INTERRUPTS_RESERVED_307 = 355;
static const int INTERRUPTS_RESERVED_308 = 356;
static const int INTERRUPTS_RESERVED_309 = 357;
static const int INTERRUPTS_RESERVED_310 = 358;
static const int INTERRUPTS_RESERVED_311 = 359;
static const int INTERRUPTS_RESERVED_312 = 360;
static const int INTERRUPTS_RESERVED_313 = 361;
static const int INTERRUPTS_RESERVED_314 = 362;
static const int INTERRUPTS_RESERVED_315 = 363;
static const int INTERRUPTS_RESERVED_316 = 364;
static const int INTERRUPTS_RESERVED_317 = 365;
static const int INTERRUPTS_RESERVED_318 = 366;
static const int INTERRUPTS_RESERVED_319 = 367;
static const int INTERRUPTS_RESERVED_320 = 368;
static const int INTERRUPTS_RESERVED_321 = 369;
static const int INTERRUPTS_RESERVED_322 = 370;
static const int INTERRUPTS_RESERVED_323 = 371;
static const int INTERRUPTS_RESERVED_324 = 372;
static const int INTERRUPTS_RESERVED_325 = 373;
static const int INTERRUPTS_RESERVED_326 = 374;
static const int INTERRUPTS_RESERVED_327 = 375;
static const int INTERRUPTS_RESERVED_328 = 376;
static const int INTERRUPTS_RESERVED_329 = 377;
static const int INTERRUPTS_RESERVED_330 = 378;
static const int INTERRUPTS_RESERVED_331 = 379;
static const int INTERRUPTS_RESERVED_332 = 380;
static const int INTERRUPTS_RESERVED_333 = 381;
static const int INTERRUPTS_RESERVED_334 = 382;
static const int INTERRUPTS_RESERVED_335 = 383;
static const int INTERRUPTS_RESERVED_336 = 384;
static const int INTERRUPTS_RESERVED_337 = 385;
static const int INTERRUPTS_RESERVED_338 = 386;
static const int INTERRUPTS_RESERVED_339 = 387;
static const int INTERRUPTS_RESERVED_340 = 388;
static const int INTERRUPTS_RESERVED_341 = 389;
static const int INTERRUPTS_RESERVED_342 = 390;
static const int INTERRUPTS_RESERVED_343 = 391;
static const int INTERRUPTS_RESERVED_344 = 392;
static const int INTERRUPTS_RESERVED_345 = 393;
static const int INTERRUPTS_RESERVED_346 = 394;
static const int INTERRUPTS_RESERVED_347 = 395;
static const int INTERRUPTS_RESERVED_348 = 396;
static const int INTERRUPTS_RESERVED_349 = 397;
static const int INTERRUPTS_RESERVED_350 = 398;
static const int INTERRUPTS_RESERVED_351 = 399;
static const int INTERRUPTS_RESERVED_352 = 400;
static const int INTERRUPTS_RESERVED_353 = 401;
static const int INTERRUPTS_RESERVED_354 = 402;
static const int INTERRUPTS_RESERVED_355 = 403;
static const int INTERRUPTS_RESERVED_356 = 404;
static const int INTERRUPTS_RESERVED_357 = 405;
static const int INTERRUPTS_RESERVED_358 = 406;
static const int INTERRUPTS_RESERVED_359 = 407;
static const int INTERRUPTS_RESERVED_360 = 408;
static const int INTERRUPTS_RESERVED_361 = 409;
static const int INTERRUPTS_RESERVED_362 = 410;
static const int INTERRUPTS_RESERVED_363 = 411;
static const int INTERRUPTS_RESERVED_364 = 412;
static const int INTERRUPTS_RESERVED_365 = 413;
static const int INTERRUPTS_RESERVED_366 = 414;
static const int INTERRUPTS_RESERVED_367 = 415;
static const int INTERRUPTS_RESERVED_368 = 416;
static const int INTERRUPTS_RESERVED_369 = 417;
static const int INTERRUPTS_RESERVED_370 = 418;
static const int INTERRUPTS_RESERVED_371 = 419;
static const int INTERRUPTS_RESERVED_372 = 420;
static const int INTERRUPTS_RESERVED_373 = 421;
static const int INTERRUPTS_RESERVED_374 = 422;
static const int INTERRUPTS_RESERVED_375 = 423;
static const int INTERRUPTS_RESERVED_376 = 424;
static const int INTERRUPTS_RESERVED_377 = 425;
static const int INTERRUPTS_RESERVED_378 = 426;
static const int INTERRUPTS_RESERVED_379 = 427;
static const int INTERRUPTS_RESERVED_380 = 428;
static const int INTERRUPTS_RESERVED_381 = 429;
static const int INTERRUPTS_RESERVED_382 = 430;
static const int INTERRUPTS_RESERVED_383 = 431;
static const int INTERRUPTS_RESERVED_384 = 432;
static const int INTERRUPTS_RESERVED_385 = 433;
static const int INTERRUPTS_RESERVED_386 = 434;
static const int INTERRUPTS_RESERVED_387 = 435;
static const int INTERRUPTS_RESERVED_388 = 436;
static const int INTERRUPTS_RESERVED_389 = 437;
static const int INTERRUPTS_RESERVED_390 = 438;
static const int INTERRUPTS_RESERVED_391 = 439;
static const int INTERRUPTS_RESERVED_392 = 440;
static const int INTERRUPTS_RESERVED_393 = 441;
static const int INTERRUPTS_RESERVED_394 = 442;
static const int INTERRUPTS_RESERVED_395 = 443;
static const int INTERRUPTS_RESERVED_396 = 444;
static const int INTERRUPTS_RESERVED_397 = 445;
static const int INTERRUPTS_RESERVED_398 = 446;
static const int INTERRUPTS_RESERVED_399 = 447;
static const int INTERRUPTS_RESERVED_400 = 448;
static const int INTERRUPTS_RESERVED_401 = 449;
static const int INTERRUPTS_RESERVED_402 = 450;
static const int INTERRUPTS_RESERVED_403 = 451;
static const int INTERRUPTS_RESERVED_404 = 452;
static const int INTERRUPTS_RESERVED_405 = 453;
static const int INTERRUPTS_RESERVED_406 = 454;
static const int INTERRUPTS_RESERVED_407 = 455;
static const int INTERRUPTS_RESERVED_408 = 456;
static const int INTERRUPTS_RESERVED_409 = 457;
static const int INTERRUPTS_RESERVED_410 = 458;
static const int INTERRUPTS_RESERVED_411 = 459;
static const int INTERRUPTS_RESERVED_412 = 460;
static const int INTERRUPTS_RESERVED_413 = 461;
static const int INTERRUPTS_RESERVED_414 = 462;
static const int INTERRUPTS_RESERVED_415 = 463;
static const int INTERRUPTS_RESERVED_416 = 464;
static const int INTERRUPTS_RESERVED_417 = 465;
static const int INTERRUPTS_RESERVED_418 = 466;
static const int INTERRUPTS_RESERVED_419 = 467;
static const int INTERRUPTS_RESERVED_420 = 468;
static const int INTERRUPTS_RESERVED_421 = 469;
static const int INTERRUPTS_RESERVED_422 = 470;
static const int INTERRUPTS_RESERVED_423 = 471;
static const int INTERRUPTS_RESERVED_424 = 472;
static const int INTERRUPTS_RESERVED_425 = 473;
static const int INTERRUPTS_RESERVED_426 = 474;
static const int INTERRUPTS_RESERVED_427 = 475;
static const int INTERRUPTS_RESERVED_428 = 476;
static const int INTERRUPTS_RESERVED_429 = 477;
static const int INTERRUPTS_RESERVED_430 = 478;
static const int INTERRUPTS_RESERVED_431 = 479;
static const int INTERRUPTS_RESERVED_432 = 480;
static const int INTERRUPTS_RESERVED_433 = 481;
static const int INTERRUPTS_RESERVED_434 = 482;
static const int INTERRUPTS_RESERVED_435 = 483;
static const int INTERRUPTS_RESERVED_436 = 484;


// EOF Interrupt table

// Interrupt addresses
// No interrupt registers for MK02FN128VLH10.
// EOF Interrupt addresses

// Interrupt register bit values
// No interrupt bits for mk20dn32vlh5.
// EOF Interrupt register bit values

#endif // _INTERRUPTS_MCU_H_
// ------------------------------------------------------------------------- END

