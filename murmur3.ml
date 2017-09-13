external murmur_x86_32 : Cstruct.buffer -> int -> int -> Cstruct.buffer -> int -> Int32.t -> unit = "murmur_x86_32_byte" "murmur_x86_32_native" [@@noalloc]
external murmur_x86_128 : Cstruct.buffer -> int -> int -> Cstruct.buffer -> int -> Int32.t -> unit = "murmur_x86_128_byte" "murmur_x86_128_native" [@@noalloc]
external murmur_x64_128 : Cstruct.buffer -> int -> int -> Cstruct.buffer -> int -> Int32.t -> unit = "murmur_x64_128_byte" "murmur_x64_128_native" [@@noalloc]

module Murmur_cstruct = struct
  let murmur_x86_32 buf data seed =
    Cstruct.(murmur_x86_32 data.buffer data.off data.len buf.buffer buf.off seed)
  let murmur_x86_128 buf data seed =
    Cstruct.(murmur_x86_128 data.buffer data.off data.len buf.buffer buf.off seed)
  let murmur_x64_128 buf data seed =
    Cstruct.(murmur_x64_128 data.buffer data.off data.len buf.buffer buf.off seed)
end
