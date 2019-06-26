type t = {
  .
  "latitude": float,
  "longitude": float,
  "latitudeDelta": float,
  "longitudeDelta": float,
};

[@bs.obj]
external create:
  (
    ~latitude: float,
    ~longitude: float,
    ~latitudeDelta: float,
    ~longitudeDelta: float
  ) =>
  t =
  "";
