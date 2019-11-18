"use strict";

var ReactNative = require("react-native");
var MapView = require("react-native-maps/lib/components/MapView");

function Make(T) {
  return {};
}

var make = ReactNative.Animated.createAnimatedComponent(MapView.default);

var Animated = {
  make: make,
};

exports.Make = Make;
exports.Animated = Animated;
/* make Not a pure module */
