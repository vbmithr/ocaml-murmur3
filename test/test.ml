open Alcotest
open Murmur3.Murmur_cstruct

let cstr = testable Cstruct.hexdump_pp Cstruct.equal

let runtest () =
  let empty = Cstruct.create 0 in
  let result = Cstruct.of_string "\000\000\000\000" in
  murmur_x86_32 result empty 0l ;
  let expected = Cstruct.of_string "\000\000\000\000" in
  check cstr "empty" expected result ;

  let expected = Cstruct.of_string "\xb7\x28\x4e\x51" in
  murmur_x86_32 result empty 1l ;
  check cstr "v1" expected result ;

  let expected = Cstruct.of_string "\x39\x6f\xf1\x81" in
  murmur_x86_32 result empty 0xffffffffl ;
  check cstr "v2" expected result

let vectors = [
  "Vectors", `Quick, runtest ;
]

let () =
  run "Murmur" [
    "vectors", vectors ;
  ]
