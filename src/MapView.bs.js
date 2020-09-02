"use strict";

var ReactNative = require("react-native");
var Event$ReactNative = require("reason-react-native/src/apis/Event.bs.js");
var MapView = require("react-native-maps/lib/components/MapView");

function Make(T) {
  var MapViewEvent = Event$ReactNative.SyntheticEvent({});
  var UserLocationChangeEvent = Event$ReactNative.SyntheticEvent({});
  var PoiClickEvent = Event$ReactNative.SyntheticEvent({});
  var MarkerDragEvent = Event$ReactNative.SyntheticEvent({});
  var MarkerDragStartEndEvent = Event$ReactNative.SyntheticEvent({});
  var KmlReadyEvent = Event$ReactNative.SyntheticEvent({});
  var IndoorLevelActivatedEvent = Event$ReactNative.SyntheticEvent({});
  var IndoorBuildingFocusedEvent = Event$ReactNative.SyntheticEvent({});
  return {
    MapViewEvent: MapViewEvent,
    UserLocationChangeEvent: UserLocationChangeEvent,
    PoiClickEvent: PoiClickEvent,
    MarkerDragEvent: MarkerDragEvent,
    MarkerDragStartEndEvent: MarkerDragStartEndEvent,
    KmlReadyEvent: KmlReadyEvent,
    IndoorLevelActivatedEvent: IndoorLevelActivatedEvent,
    IndoorBuildingFocusedEvent: IndoorBuildingFocusedEvent,
  };
}

var MapViewEvent = Event$ReactNative.SyntheticEvent({});

var UserLocationChangeEvent = Event$ReactNative.SyntheticEvent({});

var PoiClickEvent = Event$ReactNative.SyntheticEvent({});

var MarkerDragEvent = Event$ReactNative.SyntheticEvent({});

var MarkerDragStartEndEvent = Event$ReactNative.SyntheticEvent({});

var KmlReadyEvent = Event$ReactNative.SyntheticEvent({});

var IndoorLevelActivatedEvent = Event$ReactNative.SyntheticEvent({});

var IndoorBuildingFocusedEvent = Event$ReactNative.SyntheticEvent({});

var MapViewEvent$1 = Event$ReactNative.SyntheticEvent({});

var UserLocationChangeEvent$1 = Event$ReactNative.SyntheticEvent({});

var PoiClickEvent$1 = Event$ReactNative.SyntheticEvent({});

var MarkerDragEvent$1 = Event$ReactNative.SyntheticEvent({});

var MarkerDragStartEndEvent$1 = Event$ReactNative.SyntheticEvent({});

var KmlReadyEvent$1 = Event$ReactNative.SyntheticEvent({});

var IndoorLevelActivatedEvent$1 = Event$ReactNative.SyntheticEvent({});

var IndoorBuildingFocusedEvent$1 = Event$ReactNative.SyntheticEvent({});

var make = ReactNative.Animated.createAnimatedComponent(MapView.default);

var Animated = {
  MapViewEvent: MapViewEvent$1,
  UserLocationChangeEvent: UserLocationChangeEvent$1,
  PoiClickEvent: PoiClickEvent$1,
  MarkerDragEvent: MarkerDragEvent$1,
  MarkerDragStartEndEvent: MarkerDragStartEndEvent$1,
  KmlReadyEvent: KmlReadyEvent$1,
  IndoorLevelActivatedEvent: IndoorLevelActivatedEvent$1,
  IndoorBuildingFocusedEvent: IndoorBuildingFocusedEvent$1,
  make: make,
};

exports.Make = Make;
exports.MapViewEvent = MapViewEvent;
exports.UserLocationChangeEvent = UserLocationChangeEvent;
exports.PoiClickEvent = PoiClickEvent;
exports.MarkerDragEvent = MarkerDragEvent;
exports.MarkerDragStartEndEvent = MarkerDragStartEndEvent;
exports.KmlReadyEvent = KmlReadyEvent;
exports.IndoorLevelActivatedEvent = IndoorLevelActivatedEvent;
exports.IndoorBuildingFocusedEvent = IndoorBuildingFocusedEvent;
exports.Animated = Animated;
/* MapViewEvent Not a pure module */
