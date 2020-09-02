"use strict";

var ReactNative = require("react-native");
var Event$ReactNative = require("reason-react-native/src/apis/Event.bs.js");
var MapOverlay = require("react-native-maps/lib/components/MapOverlay");

var OnPressEvent = Event$ReactNative.SyntheticEvent({});

var Make = {
  OnPressEvent: OnPressEvent,
};

var make = ReactNative.Animated.createAnimatedComponent(MapOverlay.default);

var Animated = {
  OnPressEvent: OnPressEvent,
  make: make,
};

var defaultAction = "overlay-press";

exports.defaultAction = defaultAction;
exports.Make = Make;
exports.OnPressEvent = OnPressEvent;
exports.Animated = Animated;
/* OnPressEvent Not a pure module */
