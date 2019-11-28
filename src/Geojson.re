module Make = (T: {type t;}) => {
  [@react.component] [@bs.module "react-native-maps/lib/components/Geojson"]
  external make: (~geojson: T.t) => React.element = "default";
};
