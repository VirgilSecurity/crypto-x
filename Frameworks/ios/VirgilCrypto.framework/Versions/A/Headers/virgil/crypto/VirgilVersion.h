/**
 * Copyright (C) 2015 Virgil Security Inc.
 *
 * Lead Maintainer: Virgil Security Inc. <support@virgilsecurity.com>
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     (1) Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *
 *     (2) Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in
 *     the documentation and/or other materials provided with the
 *     distribution.
 *
 *     (3) Neither the name of the copyright holder nor the names of its
 *     contributors may be used to endorse or promote products derived from
 *     this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ''AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef VIRGIL_VERSION_H
#define VIRGIL_VERSION_H

#include <cstddef>
#include <string>

namespace virgil { namespace crypto {

/**
 * @brief Provides information about Virgil library version.
 */
class VirgilVersion {
public:
    /**
     * Return version number in the format MMNNPP (Major, Minor, Patch).
     *
     */
    static size_t asNumber();

    /**
     * Return the version number as string.
     */
    static std::string asString();

    /**
     * Return the major version number.
     */
    static size_t majorVersion();

    /**
     * Return the minor version number.
     */
    static size_t minorVersion();

    /**
     * Return the minor version number.
     */
    static size_t patchVersion();

    /**
     * Return version full name.
     *
     * If current release contains some additional tag, like rc1,
     * then version full name will be different from the string returned by method asString(),
     * i.e. 1.3.4-rc1, or 1.3.4-coolfeature, etc.
     */
    static std::string fullName();
};

}}

#endif /* VIRGIL_VERSION_H */