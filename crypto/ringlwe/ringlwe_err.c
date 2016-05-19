/* crypto/ringlwe/ringlwe_err.c */
/* ====================================================================
 * Copyright (c) 1999-2011 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

/* NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/ringlwe.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

#define ERR_FUNC(func) ERR_PACK(ERR_LIB_RINGLWE,func,0)
#define ERR_REASON(reason) ERR_PACK(ERR_LIB_RINGLWE,0,reason)

static ERR_STRING_DATA RINGLWE_str_functs[]=
	{
{ERR_FUNC(RINGLWE_F_I2O_RLWE_PUB),	"i2o_RLWE_PUB"},
{ERR_FUNC(RINGLWE_F_I2O_RLWE_REC),	"i2o_RLWE_REC"},
{ERR_FUNC(RINGLWE_F_I2O_RLWE_SEC),	"i2o_RLWE_SEC"},
{ERR_FUNC(RINGLWE_F_O2I_RLWE_PUB),	"o2i_RLWE_PUB"},
{ERR_FUNC(RINGLWE_F_O2I_RLWE_REC),	"o2i_RLWE_REC"},
{ERR_FUNC(RINGLWE_F_O2I_RLWE_SEC),	"o2i_RLWE_SEC"},
{ERR_FUNC(RINGLWE_F_RANDOM32),	"RANDOM32"},
{ERR_FUNC(RINGLWE_F_RANDOM64),	"RANDOM64"},
{ERR_FUNC(RINGLWE_F_RANDOM8),	"RANDOM8"},
{ERR_FUNC(RINGLWE_F_RINGLWE_),	"RINGLWE_"},
{ERR_FUNC(RINGLWE_F_RINGLWE_COMPUTE_KEY_ALICE),	"RINGLWE_compute_key_alice"},
{ERR_FUNC(RINGLWE_F_RINGLWE_COMPUTE_KEY_BOB),	"RINGLWE_compute_key_bob"},
{ERR_FUNC(RINGLWE_F_RLWE_CTX_NEW),	"RLWE_CTX_new"},
{ERR_FUNC(RINGLWE_F_RLWE_CTX_INIT),     "RLWE_CTX_init"},
{ERR_FUNC(RINGLWE_F_RLWE_PAIR_DUP),	"RLWE_PAIR_dup"},
{ERR_FUNC(RINGLWE_F_RLWE_PAIR_NEW),	"RLWE_PAIR_new"},
{ERR_FUNC(RINGLWE_F_RLWE_PARAM_NEW),	"RLWE_PARAM_new"},
{ERR_FUNC(RINGLWE_F_RINGLWE_PARAM_DATA_SET), "RINGLWE_PARAM_DATA_set"},
{ERR_FUNC(RINGLWE_F_RLWE_PUB_DUP),      "RLWR_PUB_dup"},
{ERR_FUNC(RINGLWE_F_RLWE_PUB_NEW),	"RLWE_PUB_new"},
{ERR_FUNC(RINGLWE_F_RLWE_REC_NEW),	"RLWE_REC_new"},
{ERR_FUNC(RINGLWE_F_RLWE_PAIR_GENERATE_KEY), "RLWE_PAIR_generate_key"},
{0,NULL}
	};

static ERR_STRING_DATA RINGLWE_str_reasons[]=
	{
{ERR_REASON(RINGLWE_R_INVALID_FORMAT)    ,"invalid format"},
{ERR_REASON(RINGLWE_R_KDF_FAILED)        ,"kdf failed"},
{ERR_REASON(RINGLWE_R_RANDOM_FAILED)     ,"random failed"},
{ERR_REASON(RINGLWE_R_PARAM_UNKNOWN)     ,"rlwe parameter id unknown"},
{ERR_REASON(RINGLWE_R_PARAM_INVALID)     ,"rlwe parameter invalid"},
{0,NULL}
	};

#endif

void ERR_load_RINGLWE_strings(void)
	{
#ifndef OPENSSL_NO_ERR

	if (ERR_func_error_string(RINGLWE_str_functs[0].error) == NULL)
		{
		ERR_load_strings(0,RINGLWE_str_functs);
		ERR_load_strings(0,RINGLWE_str_reasons);
		}
#endif
	}
