type action =
  | Increment
  | Decrement;

type state = int;

let reducer = (state, action) =>
  switch (action) {
  | Increment => state + 1
  | Decrement => state - 1
  };

let state = 0;

// Pipe Last |>
// Pipe first ->
// compose x->fn1->fn2->fn3->fn4
[@react.component]
let make = () => {
  let (state, dispatch) = React.useReducer(reducer, state);
  <div>
    <p> {("Counter:" ++ string_of_int(state))->React.string} </p>
    <button onClick={_ => dispatch(Increment)}>
      "Increment"->React.string
    </button>
    <button onClick={_ => Decrement->dispatch}>
      "Decrement"->React.string
    </button>
  </div>;
};
