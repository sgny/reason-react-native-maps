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

type animated;

[@bs.new] [@bs.module "react-native-maps/lib/components/AnimatedRegion"]
external createAnimated: t => animated = "default";
