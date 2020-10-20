/**
  new Intl.NumberFormat(
    'de-DE',  --> string
    { style: 'currency', currency: 'EUR' } --> Object
  )
  .format(number) -> 123456.789 -> float
  */
module NumberFormat = {
  type t;

  [@bs.new] [@bs.scope "Intl"] external make: string => t = "NumberFormat";
  [@bs.new] [@bs.scope "Intl"]
  external makeWithOptions: (string, Js.t({..})) => t = "NumberFormat";
  [@bs.send] external format: (t, float) => string = "format";
};

let formatId = NumberFormat.make("id-ID");
let formatId2 =
  NumberFormat.makeWithOptions(
    "id-ID",
    {"style": "currency", "currency": "IDR"},
  );
let limaribu = formatId->NumberFormat.format(500000.0);
let limaribu2 = NumberFormat.format(formatId2, 9999.9);

let intNumber = 10000;

Js.log2(
  "with pipe",
  intNumber->Belt.Int.toFloat |> NumberFormat.format(formatId2),
);

Js.log2("hey", NumberFormat.format(formatId2, intNumber->Belt.Int.toFloat));

limaribu->Js.log2("<--");
limaribu2->Js.log2("<-|");
