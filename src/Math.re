let add = (x, y) => x + y;
let addFloat = (x, y) => x +. y;

addFloat(1.0, 1.0);

add(Belt.Float.toInt(addFloat(addFloat(1.0, 10.5), 5.0)));

1.0->addFloat(10.5)->addFloat(5.0)->Belt.Float.toInt->add(5);
