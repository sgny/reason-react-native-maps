type t;

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
