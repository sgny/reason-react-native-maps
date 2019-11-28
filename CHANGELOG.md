# Changelog of `reason-react-native-maps`

## 0.26.4 - 2019-11-28

Added support for GeoJSON.

## 0.26.3 - 2019-11-18

Added support for Animated components with the introduction of

- `MapView.Animated` and `Marker.Animated` components
- `Region.animated` and `LatLng.animated` types

## 0.26.2 - 2019-11-15

Added `LocalTile`, `UrlTile` and `WMSTile` components for custom tile overlays.

## 0.26.1 - 2019-11-15

Added `ref` prop to `MapView` and `Marker`

## 0.26.0 - 2019-11-1

Note that there are breaking changes in this release:

- `react-native-maps` is now a peer dependency to make it more straightforward
  to use other versions of said package.
- added constructors for some types passed as arguments to `MapView` methods
- scripts are brought in line with those for `@reason-react-native/*` packages.

Other changes:

- documentation added for components and types

## 0.24.1 - 2019-06-24

`View` props added to components

## 0.24.0 - 2019-06-17

Initial release.
