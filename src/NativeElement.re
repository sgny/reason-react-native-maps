type element;

type ref = React.ref(Js.nullable(element));

[@bs.module "react-native"]
external findNodeHandle: element => ReactNative.NativeTypes.nodeHandle =
  "findNodeHandle";
