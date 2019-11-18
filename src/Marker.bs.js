"use strict";

var ReactNative = require("react-native");
var MapMarker = require("react-native-maps/lib/components/MapMarker");

function Make(T) {
  return {};
}

var make = ReactNative.Animated.createAnimatedComponent(MapMarker.default);

var Animated = {
  make: make,
};

exports.Make = Make;
exports.Animated = Animated;
/* make Not a pure module */
