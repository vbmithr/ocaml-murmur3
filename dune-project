(lang dune 3.16)

(name murmur3)

(generate_opam_files true)

(source
 (github vbmithr/ocaml-murmur3))

(authors "Vincent Bernardoff <vb@luminar.eu.org>")

(maintainers "Vincent Bernardoff")

(license LICENSE)

(documentation https://url/to/documentation)

(package
 (name murmur3)
 (synopsis "Base58 binary encoding")
 (description "")
 (depends
   ocaml
   dune
   cstruct
  (alcotest :with-test)
 )
 (tags (hash murmur murmur3)))
