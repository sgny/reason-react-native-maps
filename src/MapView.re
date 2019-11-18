include NativeElement;
include Shared;

type camera;
[@bs.obj]
external camera:
  (
    ~center: LatLng.t,
    ~pitch: float,
    ~heading: float,
    ~altitude: float=?,
    ~zoom: int=?,
    unit
  ) =>
  camera =
  "";

type edgePadding;
[@bs.obj]
external edgePadding:
  (~top: float, ~right: float, ~bottom: float, ~left: float) => edgePadding =
  "";

type mapBoundaries = {
  .
  "northEast": LatLng.t,
  "southWest": LatLng.t,
};
[@bs.obj]
external mapBoundaries:
  (~northEast: LatLng.t, ~southWest: LatLng.t) => mapBoundaries =
  "";

type marker;
[@bs.obj]
external marker:
  (~id: string, ~coordinate: LatLng.t, ~title: string, ~description: string) =>
  marker =
  "";

type kmlContainer = {. "markers": array(marker)};

type indoorLevel = {
  .
  "activeLevelIndex": int,
  "name": string,
  "shortName": string,
};

type indoorBuilding = {
  .
  "underground": bool,
  "activeLevelIndex": int,
  "levels": array(indoorLevel),
};

type frame = {
  .
  "x": float,
  "y": float,
  "width": float,
  "height": float,
};

type location = {
  .
  "latitude": float,
  "longitude": float,
  "altitude": float,
  "timestamp": float,
  "accuracy": float,
  "altitudeAccuracy": float,
  "speed": float,
};

type duration;
[@bs.obj] external duration: (~duration: float) => duration = "";

type fitConfig;
[@bs.obj]
external fitConfig: (~edgePadding: edgePadding, ~animated: bool) => fitConfig =
  "";

[@bs.send] external getCamera: (element, unit) => unit = "";
[@bs.send] external animateCamera: (element, camera, duration) => unit = "";
[@bs.send] external setCamera: (element, camera, duration) => unit = "";
[@bs.send] external animateToRegion: (element, Region.t, float) => unit = "";
[@bs.send]
external getMapBoundaries: (element, unit) => Js.Promise.t(mapBoundaries) =
  "";
[@bs.send] external setMapBoundaries: (element, mapBoundaries) => unit = "";
[@bs.send] external setIndoorActiveLevelIndex: (element, int) => unit = "";
[@bs.send] external fitToElements: (element, bool) => unit = "";
[@bs.send]
external fitToSuppliedMarkers: (element, array(string), fitConfig) => unit =
  "";
[@bs.send]
external fitToCoordinates: (element, array(LatLng.t), fitConfig) => unit = "";
[@bs.send]
external pointForCoordinate: (element, LatLng.t) => Js.Promise.t(point) = "";
[@bs.send]
external coordinateForPoint: (element, point) => Js.Promise.t(LatLng.t) = "";
[@bs.send]
external getMarkersFrames:
  (element, bool) =>
  Js.Promise.t({
    .
    "markerID": {
      .
      "point": point,
      "frame": frame,
    },
  }) =
  "";

module Make = (T: {type t;}) => {
  [@react.component] [@bs.module "react-native-maps/lib/components/MapView"]
  external make:
    (
      ~ref: ref=?,
      ~provider: [@bs.string] [ | `google]=?,
      ~region: T.t=?,
      ~initialRegion: T.t=?,
      ~camera: camera=?,
      ~initialCamera: camera=?,
      ~mapPadding: edgePadding=?,
      ~paddingAdjustmentBehavior: [@bs.string] [
                                    | `always
                                    | `automatic
                                    | `never
                                  ]
                                    =?,
      ~liteMode: bool=?,
      ~mapType: [@bs.string] [
                  | `standard
                  | `satellite
                  | `hybrid
                  | `none
                  | `terrain
                  | `mutedStandard
                ]
                  =?,
      ~customMapStyle: array(Js.Json.t)=?,
      ~showsUserLocation: bool=?,
      ~userLocationAnnotationTitle: string=?,
      ~followsUserLocation: bool=?,
      ~showsMyLocationButton: bool=?,
      ~showsPointsOfInterest: bool=?,
      ~showsCompass: bool=?,
      ~showsScale: bool=?,
      ~showsBuildings: bool=?,
      ~showsTraffic: bool=?,
      ~showsIndoors: bool=?,
      ~showsIndoorLevelPicker: bool=?,
      ~zoomEnabled: bool=?,
      ~zoomControlEnabled: bool=?,
      ~minZoomLevel: int=?,
      ~maxZoomLevel: int=?,
      ~rotateEnabled: bool=?,
      ~scrollEnabled: bool=?,
      ~pitchEnabled: bool=?,
      ~toolbarEnabled: bool=?,
      ~cacheEnabled: bool=?,
      ~loadingEnabled: bool=?,
      ~loadingIndicatorColor: ReactNative.Color.t=?,
      ~loadingBackgroundColor: ReactNative.Color.t=?,
      ~moveOnMarkerPress: bool=?,
      ~legalLabelInsets: ReactNative.View.edgeInsets=?,
      ~kmlSrc: string=?,
      ~compassOffset: point=?,
      // Events
      ~onCalloutPress: unit => unit=?,
      ~onRegionChange: Region.t => unit=?,
      ~onRegionChangeComplete: Region.t => unit=?,
      ~onPress: ReactNative.Event.syntheticEvent(copos) => unit=?,
      ~onDoublePress: ReactNative.Event.syntheticEvent(copos) => unit=?,
      ~onLongPress: ReactNative.Event.syntheticEvent(copos) => unit=?,
      ~onPanDrag: ReactNative.Event.syntheticEvent(copos) => unit=?,
      ~onPoiClick: ReactNative.Event.syntheticEvent(poi) => unit=?,
      ~onMapReady: unit => unit=?,
      ~onMarkerPress: unit => unit=?,
      ~onMarkerDeselect: unit => unit=?,
      ~onMarkerSelect: unit => unit=?,
      ~onMarkerDrag: ReactNative.Event.syntheticEvent({
                       .
                       coordinate: LatLng.t,
                       position: point,
                     }) =>
                     unit
                       =?,
      ~onMarkerDragStart: ReactNative.Event.syntheticEvent({
                            .
                            coordinate: LatLng.t,
                            position: point,
                          }) =>
                          unit
                            =?,
      ~onMarkerDragEnd: ReactNative.Event.syntheticEvent({
                          .
                          coordinate: LatLng.t,
                          position: point,
                        }) =>
                        unit
                          =?,
      ~onKmlReady: ReactNative.Event.syntheticEvent(kmlContainer) => unit=?,
      ~onIndoorLevelActivated: ReactNative.Event.syntheticEvent(
                                 indoorLevel,
                               ) =>
                               unit
                                 =?,
      ~onIndoorBuildingFocused: ReactNative.Event.syntheticEvent(
                                  indoorBuilding,
                                ) =>
                                unit
                                  =?,
      ~onUserLocationChange: ReactNative.Event.syntheticEvent({
                               .
                               coordinate: location,
                             }) =>
                             unit
                               =?,
      // View props
      ~accessibilityComponentType: [@bs.string] [
                                     | `none
                                     | `button
                                     | `radiobutton_checked
                                     | `radiobutton_unchecked
                                   ]
                                     =?,
      ~accessibilityElementsHidden: bool=?,
      ~accessibilityHint: string=?,
      ~accessibilityIgnoresInvertColors: bool=?,
      ~accessibilityLabel: string=?,
      ~accessibilityLiveRegion: [@bs.string] [ | `none | `polite | `assertive]
                                  =?,
      ~accessibilityRole: [@bs.string] [
                            | `none
                            | `button
                            | `link
                            | `search
                            | `image
                            | `keyboardkey
                            | `text
                            | `adjustable
                            | `header
                            | `summary
                            | `imagebutton
                          ]
                            =?,
      ~accessibilityStates: array(ReactNative.AccessibilityState.t)=?,
      ~accessibilityTraits: array(ReactNative.AccessibilityTrait.t)=?,
      ~accessibilityViewIsModal: bool=?,
      ~accessible: bool=?,
      ~collapsable: bool=?,
      ~hitSlop: ReactNative.View.edgeInsets=?,
      ~importantForAccessibility: [@bs.string] [
                                    | `auto
                                    | `yes
                                    | `no
                                    | [@bs.as "no-hide-descendants"]
                                      `noHideDescendants
                                  ]
                                    =?,
      ~nativeID: string=?,
      ~needsOffscreenAlphaCompositing: bool=?,
      ~onAccessibilityEscape: unit => unit=?,
      ~onAccessibilityTap: unit => unit=?,
      ~onLayout: ReactNative.Event.layoutEvent => unit=?,
      ~onMagicTap: unit => unit=?,
      // Gesture Responder props
      ~onMoveShouldSetResponder: ReactNative.Event.pressEvent => bool=?,
      ~onMoveShouldSetResponderCapture: ReactNative.Event.pressEvent => bool=?,
      ~onResponderEnd: ReactNative.Event.pressEvent => unit=?,
      ~onResponderGrant: ReactNative.Event.pressEvent => unit=?,
      ~onResponderMove: ReactNative.Event.pressEvent => unit=?,
      ~onResponderReject: ReactNative.Event.pressEvent => unit=?,
      ~onResponderRelease: ReactNative.Event.pressEvent => unit=?,
      ~onResponderStart: ReactNative.Event.pressEvent => unit=?,
      ~onResponderTerminate: ReactNative.Event.pressEvent => unit=?,
      ~onResponderTerminationRequest: ReactNative.Event.pressEvent => bool=?,
      ~onStartShouldSetResponder: ReactNative.Event.pressEvent => bool=?,
      ~onStartShouldSetResponderCapture: ReactNative.Event.pressEvent => bool=?,
      ~pointerEvents: [@bs.string] [
                        | `auto
                        | `none
                        | [@bs.as "box-none"] `boxNone
                        | [@bs.as "box-only"] `boxOnly
                      ]
                        =?,
      ~removeClippedSubviews: bool=?,
      ~renderToHardwareTextureAndroid: bool=?,
      ~shouldRasterizeIOS: bool=?,
      ~style: ReactNative.Style.t=?,
      ~testID: string=?,
      ~children: React.element=?
    ) =>
    React.element =
    "default";
};

include Make({
  type t = Region.t;
});

module Animated = {
  include Make({
    type t = Region.animated;
  });

  let make = ReactNative.Animated.createAnimatedComponent(make);
};
