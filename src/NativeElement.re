type element;

type ref = React.Ref.t(Js.nullable(element));

[@bs.module "react-native"]
external findNodeHandle: element => ReactNative.NativeTypes.nodeHandle = "";
