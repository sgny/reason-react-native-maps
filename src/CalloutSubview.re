[@react.component]
[@bs.module "react-native-maps/lib/components/MapCalloutSubview"]
// supports view props
external make:
  (
    ~onPress: unit => unit=?,
    ~style: ReactNative.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "default";
