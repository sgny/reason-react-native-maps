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

// this type does not appear to be used
type location = {
  .
  "latitude": float,
  "longitude": float,
  "altitude": float,
  "timestamp": float,
  "accuracy": float,
  "altitudeAccuracy": float,
  "speed": float,
};
