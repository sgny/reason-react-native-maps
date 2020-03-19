"use strict";

var ReactNative = require("react-native");
var MapOverlay = require("react-native-maps/lib/components/MapOverlay");

var Make = {};

var make = ReactNative.Animated.createAnimatedComponent(MapOverlay.default);

var Animated = {
  make: make,
};

var defaultAction = "overlay-press";

exports.defaultAction = defaultAction;
exports.Make = Make;
exports.Animated = Animated;
/* make Not a pure module */
