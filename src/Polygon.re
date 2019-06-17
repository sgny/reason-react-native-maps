[@react.component] [@bs.module "react-native-maps/lib/components/MapPolygon"]
external make:
  (
    ~coordinates: array(LatLng.t),
    ~holes: array(LatLng.t)=?,
    ~strokeWidth: float=?,
    ~strokeColor: ReactNative.Color.t=?,
    ~fillColor: ReactNative.Color.t=?,
    ~lineCap: [@bs.string] [ | `butt | `round | `square]=?,
    ~lineJoin: [@bs.string] [ | `bevel | `miter | `round]=?,
    ~miterLimit: int=?,
    ~geodesic: bool=?,
    ~lineDashPhase: int=?,
    ~lineDashPattern: array(int)=?,
    ~tappable: bool=?,
    ~onPress: unit => unit=?,
    ~style: ReactNative.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "default";
