/*
 Operator PIPE

 first ->  (apply aplikasikan sebuah nilai kedalam function)
 last |>
 */

let add = (x, y) => x + y; //

let sub = (x, y) => x - y;

/* Operator First Pipe */
let mynum: int = 10->add(5)->add(5)->add(10);

Js.log(mynum);

/* Operator Last Pipe */

(10 |> sub(5))->Js.log; // expected: -5
10->sub(5)->Js.log; // expected: 5

/* Custom Operator */
let (|+) = add; // 2 param
let (|-) = sub; // 2 {x,y}
// {rec} keyword (kata kunci) untuk mendefinisikan sesuatu, yang dimana sesuatu sifatnya
// recursive (dapat dijalankan atau dipanggil) oleh dirinya sendiri
let rec (!) = n => n == 0 ? 1 : n * (!(n - 1)); // 4! 4 = 4 x 3 x 2 x 1 = 24

Js.log2("Custom Operator {|+}", 10 |+ 5 |+ 20 |+ 30); // 65
Js.log2("Custom Operator {|-}", 10 |- 5); // {x}: 10 {y}: 5 = {5}
Js.log2("Custom Operator {|-}", 5 |- 10); // {x}: 10 {y}: 5 = {-5}
Js.log2("Custom Operator {!4}", !4); // {n} = 24
Js.log2("Custom Operator {!4}", !10); // {n} = 24
