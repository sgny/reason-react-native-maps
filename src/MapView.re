include Shared;

type element;

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

type edgeInsets;
[@bs.obj]
external edgeInsets:
  (~top: float, ~left: float, ~bottom: float, ~right: float) => edgeInsets =
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

[@bs.send] external getCamera: (element, unit) => unit = "";
[@bs.send]
external animateCamera: (element, camera, {. "duration": float}) => unit = "";
[@bs.send]
external setCamera: (element, camera, {. "duration": float}) => unit = "";
[@bs.send] external animateToRegion: (element, Region.t, float) => unit = "";
[@bs.send]
external getMapBoundaries:
  (element, unit) =>
  Js.Promise.t({
    .
    "northEast": LatLng.t,
    "southWest": LatLng.t,
  }) =
  "";
[@bs.send]
external setMapBoundaries:
  (
    element,
    {
      .
      "northEast": LatLng.t,
      "southWest": LatLng.t,
    }
  ) =>
  unit =
  "";
[@bs.send] external setIndoorActiveLevelIndex: (element, int) => unit = "";
[@bs.send] external fitToElements: (element, bool) => unit = "";
[@bs.send]
external fitToSuppliedMarkers:
  (
    element,
    array(string),
    {
      .
      "edgePadding": edgePadding,
      "animated": bool,
    }
  ) =>
  unit =
  "";
[@bs.send]
external fitToCoordinates:
  (
    element,
    array(LatLng.t),
    {
      .
      "edgePadding": edgePadding,
      "animated": bool,
    }
  ) =>
  unit =
  "";
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

[@react.component] [@bs.module "react-native-maps/lib/components/MapView"]
external make:
  (
    ~provider: [@bs.string] [ | `google]=?,
    ~region: Region.t,
    ~initialRegion: Region.t,
    ~camera: camera=?,
    ~initialCamera: camera=?,
    ~mapPadding: edgePadding=?,
    ~paddingAdjustmentBehavior: [@bs.string] [ | `always | `automatic | `never]
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
    ~onRegionChange: ReactNative.Event.syntheticEvent(Region.t) => unit=?,
    ~onRegionChangeComplete: ReactNative.Event.syntheticEvent(Region.t) =>
                             unit
                               =?,
    ~onPress: ReactNative.Event.syntheticEvent(copos) => unit=?,
    ~onLongPress: ReactNative.Event.syntheticEvent(copos) => unit=?,
    ~onPanDrag: ReactNative.Event.syntheticEvent(copos) => unit=?,
    ~onPoiClick: ReactNative.Event.syntheticEvent(poi) => unit=?,
    ~onMapReady: unit => unit=?,
    ~onKmlReady: ReactNative.Event.syntheticEvent(kmlContainer) => unit=?,
    ~onIndoorLevelActivated: ReactNative.Event.syntheticEvent(indoorLevel) =>
                             unit
                               =?,
    ~onIndoorBuildingFocused: ReactNative.Event.syntheticEvent(
                                indoorBuilding,
                              ) =>
                              unit
                                =?,
    ~style: ReactNative.Style.t=?,
    ~children: React.element=?
  ) =>
  React.element =
  "default";
