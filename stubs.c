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


