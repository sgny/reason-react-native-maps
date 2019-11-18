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

type animated;

[@bs.new] [@bs.module "react-native-maps/lib/components/AnimatedRegion"]
external createAnimated: t => animated = "default";
