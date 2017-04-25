
open Immutable;

let benchmark (fn : unit => unit)=> {
    let a = Js.Date.now () ;
    fn ();
    Js.Date.now () -. a
    |> Printf.sprintf "%.0f ms"
};

/* Persistent vector */
let vec_sequential () => {
IntRange.create start::0 count::10_000_000
|> IntRange.toIterable
|> Vector.from
|> Vector.count
|> Js.log
};

let _ = benchmark vec_sequential |> Js.log;