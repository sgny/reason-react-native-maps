include Shared;

type element;

[@react.component] [@bs.module "react-native-maps/lib/components/MapMarker"]
external make:
  (
    ~title: string=?,
    ~description: string=?,
    ~image: ReactNative.Image.Source.t=?,
    ~icon: ReactNative.Image.Source.t=?,
    ~pinColor: string=?,
    ~coordinate: LatLng.t,
    ~centerOffset: point=?,
    ~calloutOffset: point=?,
    ~anchor: point=?,
    ~calloutAnchor: point=?,
    ~flat: bool=?,
    ~identifier: string=?,
    ~rotation: float=?,
    ~draggable: bool=?,
    ~tracksViewChanges: bool=?,
    ~tracksInfoWindowChanges: bool=?,
    ~stopPropagation: bool=?,
    ~opacity: float=?,
    ~onPress: ReactNative.Event.syntheticEvent(copos) => unit=?,
    ~onSelect: ReactNative.Event.syntheticEvent(copos) => unit=?,
    ~onDeselect: ReactNative.Event.syntheticEvent(copos) => unit=?,
    ~onCalloutPress: unit => unit=?,
    ~onDragStart: ReactNative.Event.syntheticEvent(copos) => unit=?,
    ~onDrag: ReactNative.Event.syntheticEvent(copos) => unit=?,
    ~onDragEnd: ReactNative.Event.syntheticEvent(copos) => unit=?,
    ~style: ReactNative.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "default";

[@bs.send] external showCallout: (element, unit) => unit = "";
[@bs.send] external hideCallout: (element, unit) => unit = "";
[@bs.send] external redrawCallout: (element, unit) => unit = "";
[@bs.send]
external animateMarkerToCoordinate: (element, LatLng.t, float) => unit = "";
[@bs.send] external redraw: (element, unit) => unit = "";
