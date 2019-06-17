[@react.component] [@bs.module "react-native-maps/lib/components/MapCircle"]
external make:
  (
    ~center: LatLng.t,
    ~radius: float,
    ~strokeWidth: float=?,
    ~strokeColor: ReactNative.Color.t=?,
    ~fillColor: ReactNative.Color.t=?,
    ~zIndex: int=?,
    ~lineCap: [@bs.string] [ | `butt | `round | `square]=?,
    ~lineJoin: [@bs.string] [ | `bevel | `miter | `round]=?,
    ~miterLimit: int=?,
    ~geodesic: bool=?,
    ~lineDashPhase: int=?,
    ~lineDashPattern: array(int)=?,
    ~style: ReactNative.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "default";
