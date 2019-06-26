type t = {
  .
  "latitude": float,
  "longitude": float,
};

[@bs.obj] external create: (~latitude: float, ~longitude: float) => t = "";
