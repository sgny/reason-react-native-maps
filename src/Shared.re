type point = {
  .
  "y": float,
  "x": float,
};

[@bs.obj] external point: (~x: float, ~y: float) => point = "";

type copos = {
  .
  "coordinate": LatLng.t,
  "position": point,
};

type poi = {
  .
  "coordinate": LatLng.t,
  "position": point,
  "placeId": string,
  "name": string,
};
