type t = {
  .
  "latitude": float,
  "longitude": float,
};

[@bs.obj] external create: (~latitude: float, ~longitude: float) => t = "";

type weighted;

[@bs.obj]
external weighted:
  (~latitude: float, ~longitude: float, ~weight: float=?, unit) => weighted =
  "";
