"use strict";

var ReactNative = require("react-native");
var Event$ReactNative = require("reason-react-native/src/apis/Event.bs.js");
var MapMarker = require("react-native-maps/lib/components/MapMarker");

function Make(T) {
  var MarkerEvent = Event$ReactNative.SyntheticEvent({});
  return {
    MarkerEvent: MarkerEvent,
  };
}

var MarkerEvent = Event$ReactNative.SyntheticEvent({});

var MarkerEvent$1 = Event$ReactNative.SyntheticEvent({});

var make = ReactNative.Animated.createAnimatedComponent(MapMarker.default);

var Animated = {
  MarkerEvent: MarkerEvent$1,
  make: make,
};

exports.Make = Make;
exports.MarkerEvent = MarkerEvent;
exports.Animated = Animated;
/* MarkerEvent Not a pure module */
