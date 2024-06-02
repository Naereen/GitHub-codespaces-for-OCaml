let () = Printf.printf "Hello world from OCaml v4.14.0!\n";;

(** Fonction factorielle : fact : int -> int. *)
let rec fact n =
  match n with
  | 0 -> 1
  | n when n < 0 -> 0
  | _ -> n * (fact (n-1))
;;

(** Affichage de la fonction Factorielle. *)
for n = 0 to 10 do
  Printf.printf "fact %i = %i\n" n (fact n)
done;;
