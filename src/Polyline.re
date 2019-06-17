[@react.component] [@bs.module "react-native-maps/lib/components/MapPolyline"]
external make:
  (
    ~coordinates: array(LatLng.t),
    ~strokeWidth: float=?,
    ~strokeColor: ReactNative.Color.t=?,
    ~strokeColors: array(ReactNative.Color.t)=?,
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
