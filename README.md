# BuckleScript bindings to React Native Maps

_This branch does not support `GeoJSON`. Please use the `geojson` branch and the
`reason-react-native-maps-geojson` package if you need support for that format._

[![Build Status](https://github.com/sgny/reason-react-native-maps/workflows/Build/badge.svg)](https://github.com/sgny/reason-react-native-maps/actions)
[![Version](https://img.shields.io/npm/v/reason-react-native-maps.svg)](https://www.npmjs.com/package/reason-react-native-maps)

These are complete BuckleScript bindings to
[`React Native Maps`](https://github.com/react-native-community/react-native-maps),
in Reason syntax.

Version `x.y.z` of `reason-react-native-maps` should be compatible with version
`x.y.*` of `react-native-maps`.

## Changes

Please see the [changelog](./CHANGELOG.md).

## Installation

With `yarn`:

```shell
yarn add reason-react-native-maps
```

With `npm`:

```shell
npm install reason-react-native-maps
```

`react-native-maps` should be properly installed, and linked if you are using
React Native versions below 0.60. Please refer to the relevant
[instructions](https://github.com/react-native-community/react-native-maps/blob/master/docs/installation.md).

Finally, `reason-react-native-maps` should be added to `bs-dependencies` in
`BuckleScript` configuration of the project (`bsconfig.json`). For example,

```json
{
  ...
  "bs-dependencies": ["reason-react", "reason-react-native", "reason-react-native-maps"],
  ...
}
```

## Modules

### [MapView](docs/MapView.md)

### [MapView.Animated](docs/MapViewAnimated.md)

### [Marker](docs/Marker.md)

### [Marker.Animated](docs/MarkerAnimated.md)

### [Heatmap](docs/Heatmap.md)

### [Circle](docs/Circle.md)

### [Overlay](docs/Overlay.md)

### [Polygon](docs/Polygon.md)

### [Polyline](docs/Polyline.md)

### [Callout](docs/Callout.md)

### [CalloutSubview](docs/CalloutSubview.md)

## Types

### [LatLng](docs/LatLng.md)

### [Region](docs/Region.md)

### [Shared](docs/Shared.md)

Further documentation will be added later. Documentation has been adapted from
that for `React Native Maps`.
