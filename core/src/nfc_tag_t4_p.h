/*
 * Copyright (C) 2019 Jolla Ltd.
 * Copyright (C) 2019 Slava Monich <slava.monich@jolla.com>
 *
 * You may use this file under the terms of BSD license as follows:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   1. Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *   3. Neither the names of the copyright holders nor the names of its
 *      contributors may be used to endorse or promote products derived
 *      from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef NFC_TAG_T4_PRIVATE_H
#define NFC_TAG_T4_PRIVATE_H

#include "nfc_tag_t4.h"
#include "nfc_tag_p.h"

/* Add _ prefix so that they don't get exported */
#define nfc_tag_new _nfc_tag_new
#define nfc_tag_t4a_new _nfc_tag_t4a_new
#define nfc_tag_t4b_new _nfc_tag_t4b_new
#define nfc_tag_t4_init_base _nfc_tag_t4_init_base

typedef struct nfc_tag_t4_class {
    NfcTagClass parent;
} NfcTagType4Class;

NfcTagType4a*
nfc_tag_t4a_new(
    NfcTarget* target,
    const NfcParamPollA* tech_param,
    const NfcParamIsoDepPollA* interface_param);

NfcTagType4b*
nfc_tag_t4b_new(
    NfcTarget* target,
    const NfcParamPollB* tech_param,
    const NfcParamIsoDepPollB* interface_param);

void
nfc_tag_t4_init_base(
    NfcTagType4* tag,
    NfcTarget* target,
    guint mtu);

#endif /* NFC_TAG_T4_PRIVATE_H */

/*
 * Local Variables:
 * mode: C
 * c-basic-offset: 4
 * indent-tabs-mode: nil
 * End:
 */
