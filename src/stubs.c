/* --------------------------------------------------------------------------
   Copyright (c) 2017 Vincent Bernardoff. All rights reserved.
   Distributed under the ISC license, see terms at the end of the file.
  --------------------------------------------------------------------------- */

#include <caml/bigarray.h>
#include "MurmurHash3.h"

void murmur_x86_32_native(value buf, value pos, value len, value out, value outpos, value seed) {
    MurmurHash3_x86_32(Caml_ba_data_val(buf) + Int_val(pos), Int_val(len), Int32_val(seed), Caml_ba_data_val(out) + Int_val(pos));
}

void murmur_x86_32_byte(value *argv, int argn) {
    MurmurHash3_x86_32(Caml_ba_data_val(argv[0]) + Int_val(argv[1]), Int_val(argv[2]), Int32_val(argv[5]), Caml_ba_data_val(argv[3]) + Int_val(argv[4]));
}

void murmur_x86_128_native(value buf, value pos, value len, value out, value outpos, value seed) {
    MurmurHash3_x86_128(Caml_ba_data_val(buf) + Int_val(pos), Int_val(len), Int32_val(seed), Caml_ba_data_val(out) + Int_val(pos));
}

void murmur_x86_128_byte(value *argv, int argn) {
    MurmurHash3_x86_128(Caml_ba_data_val(argv[0]) + Int_val(argv[1]), Int_val(argv[2]), Int32_val(argv[5]), Caml_ba_data_val(argv[3]) + Int_val(argv[4]));
}

void murmur_x64_128_native(value buf, value pos, value len, value out, value outpos, value seed) {
    MurmurHash3_x64_128(Caml_ba_data_val(buf) + Int_val(pos), Int_val(len), Int32_val(seed), Caml_ba_data_val(out) + Int_val(pos));
}

void murmur_x64_128_byte(value *argv, int argn) {
    MurmurHash3_x64_128(Caml_ba_data_val(argv[0]) + Int_val(argv[1]), Int_val(argv[2]), Int32_val(argv[5]), Caml_ba_data_val(argv[3]) + Int_val(argv[4]));
}

/* --------------------------------------------------------------------------
   Copyright (c) 2017 Vincent Bernardoff

   Permission to use, copy, modify, and/or distribute this software for any
   purpose with or without fee is hereby granted, provided that the above
   copyright notice and this permission notice appear in all copies.

   THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
   WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
   MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
   ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
   WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
   ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
   OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
  --------------------------------------------------------------------------- */
