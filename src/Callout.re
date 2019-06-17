[@react.component] [@bs.module "react-native-maps/lib/components/MapCallout"]
// supports view props
external make:
  (
    ~tooltip: bool=?,
    ~alphaHitTest: bool=?,
    ~onPress: unit => unit=?,
    ~style: ReactNative.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "default";
