module Murmur_cstruct : sig
  val murmur_x86_32 : Cstruct.t -> Cstruct.t -> Int32.t -> unit
  val murmur_x86_128 : Cstruct.t -> Cstruct.t -> Int32.t -> unit
  val murmur_x64_128 : Cstruct.t -> Cstruct.t -> Int32.t -> unit
end
