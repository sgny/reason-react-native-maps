[@react.component] [@bs.module "react-native-maps/lib/components/MapOverlay"]
// supports view props
external make:
  (
    ~image: ReactNative.Image.Source.t=?,
    ~bounds: array(LatLng.t),
    ~style: ReactNative.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "default";
