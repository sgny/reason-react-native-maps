# `MapView` Component API

## Props

| Prop Name <br/> and Type                                                                                                                                                                             | Notes                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `provider:` <br/> \[ &#124; `` `google `` \]                                                                                                                                                         | To specify the map framework to use. <br/><br/>Pass `` `google `` for GoogleMaps, otherwise omit the prop to use the native map framework (`MapKit` in iOS and `GoogleMaps` in android).                                                                                                                                                                                                                                                                        |
| `region:` <br/> `Region.t`                                                                                                                                                                           | The region to be displayed by the map. <br/><br/>The region is defined by the center coordinates and the span of coordinates to display.                                                                                                                                                                                                                                                                                                                        |
| `initialRegion:` <br/> `Region.t`                                                                                                                                                                    | The initial region to be displayed by the map. Use this prop instead of `region` only if you don't want to control the viewport of the map besides the initial region.<br/><br/> Changing this prop after the component has mounted will not result in a region change.<br/><br/> This is similar to the `initialValue` prop of a text input.                                                                                                                   |
| `camera:` <br/> `camera`                                                                                                                                                                             | The camera view the map should display. If you use this, the `region` prop is ignored.                                                                                                                                                                                                                                                                                                                                                                          |
| `initialCamera:` <br/> `camera`                                                                                                                                                                      | Like `initialRegion`, use this prop instead of `camera` only if you don't want to control the viewport of the map besides the initial camera setting.<br/><br/> Changing this prop after the component has mounted will not result in a region change.<br/><br/> This is similar to the `initialValue` prop of a text input.                                                                                                                                    |
| `mapPadding:` <br/> `edgePadding`                                                                                                                                                                    | _Google Maps only_ <br /> Adds custom padding to each side of the map. Useful when map elements/markers are obscured.                                                                                                                                                                                                                                                                                                                                           |
| `paddingAdjustmentBehavior`: <br /> \[ <br/> &#124; `` `always `` <br/> &#124; `` `automatic `` <br/> &#124; `` `never `` \]                                                                         | _GoogleMaps on iOS only_ <br /> Indicates how/when to affect padding with safe area insets <br /> <br /> **default value**: `` `never ``                                                                                                                                                                                                                                                                                                                        |
| `liteMode:` <br/> `bool`                                                                                                                                                                             | _Android only_ <br /> Enable lite mode. <br /> <br /> **default value**: `false`                                                                                                                                                                                                                                                                                                                                                                                |
| `mapType`: <br /> \[ <br/> &#124; `` `standard `` <br/> &#124; `` `satellite `` <br/> &#124; `` `hybrid `` <br/> &#124; `` `none `` <br/> &#124; `` `terrain `` <br/> &#124; `` `mutedStandard `` \] | The map type to be displayed. <br/><br/> - `` `standard ``: standard road map <br/> - `` `none ``: no map (Not available on MapKit) <br/> - `` `satellite ``: satellite view <br/> - `` `hybrid ``: satellite view with roads and points of interest overlayed <br/> - `` `terrain ``: topographic view (Android only)<br/> - `` `mutedStandard ``: more subtle, makes markers/lines pop more (iOS 11.0+ only) <br /> <br /> **default value**: `` `standard `` |
| `customMapStyle: array(Js.Json.t)`                                                                                                                                                                   | Adds custom styling to the map component. See [README](https://github.com/react-native-community/react-native-maps#customizing-the-map-style) for more information.                                                                                                                                                                                                                                                                                             |
| `showsUserLocation:` <br/> `bool`                                                                                                                                                                    | If `true` the app will ask for the user's location. <br/> **NOTE**: You need to add `NSLocationWhenInUseUsageDescription` key in Info.plist to enable geolocation, otherwise it is going to _fail silently_! You will also need to add an explanation for why you need the users location against `NSLocationWhenInUseUsageDescription` in Info.plist. Otherwise Apple may reject your app submission. <br /> <br /> **default value**: `false`                 |
| `userLocationAnnotationTitle:` <br/> `string`                                                                                                                                                        | _iOS only_ <br/> The title of the annotation for current user location. This only works if `showsUserLocation` is true. <br /> <br /> **default value**: `"My Location"`                                                                                                                                                                                                                                                                                        |
| `followsUserLocation:` <br/> `bool`                                                                                                                                                                  | _iOS only_ <br /> If `true` the map will focus on the user's location. This only works if `showsUserLocation` is true and the user has shared their location. <br/> <br /> **default value**: `false`.                                                                                                                                                                                                                                                          |
| `showsMyLocationButton:` <br/> `bool`                                                                                                                                                                | If `false` hide the button to move map to the current user's location. <br /> <br /> **default value**: `true`                                                                                                                                                                                                                                                                                                                                                  |
| `showsPointsOfInterest:` <br/> `bool`                                                                                                                                                                | If `false` points of interest won't be displayed on the map. <br /> <br /> **default value**: `true`                                                                                                                                                                                                                                                                                                                                                            |
| `showsCompass:` <br/> `bool`                                                                                                                                                                         | If `false` compass won't be displayed on the map. <br /> <br /> **default value**: `true`                                                                                                                                                                                                                                                                                                                                                                       |
| `showsScale:` <br/> `bool`                                                                                                                                                                           | _Apple Maps only_ <br /> A Boolean indicating whether the map shows scale information. <br /> <br /> **default value**: `true`                                                                                                                                                                                                                                                                                                                                  |
| `showsBuildings:` <br/> `bool`                                                                                                                                                                       | A Boolean indicating whether the map displays extruded building information. <br /> <br /> **default value**: `true`                                                                                                                                                                                                                                                                                                                                            |
| `showsTraffic:` <br/> `bool`                                                                                                                                                                         | A Boolean value indicating whether the map displays traffic information. <br /> <br /> **default value**: `true`                                                                                                                                                                                                                                                                                                                                                |
| `showsIndoors:` <br/> `bool`                                                                                                                                                                         | A Boolean indicating whether indoor maps should be enabled. <br /> <br /> **default value**: `true`                                                                                                                                                                                                                                                                                                                                                             |
| `showsIndoorLevelPicker:` <br/> `bool`                                                                                                                                                               | _Google Maps only_ <br /> (either Android or iOS with `` provider=`google ``) <br />A Boolean indicating whether indoor level picker should be enabled. <br /> <br /> **default value**: `false`                                                                                                                                                                                                                                                                |
| `zoomEnabled:` <br/> `bool`                                                                                                                                                                          | If `false` the user won't be able to pinch/zoom the map. <br /> <br /> **default value**: `true`                                                                                                                                                                                                                                                                                                                                                                |
| `zoomTapEnabled:` <br/> `bool`                                                                                                                                                                       | _only for Google Maps on iOS_ <br /> If `false` the user won't be able to double tap to zoom the map. <br/> **Note:** But it will greatly decrease delay of tap gesture recognition. <br/> <br /> **default value**: `true`                                                                                                                                                                                                                                     |
| `zoomControlEnabled:` <br/> `bool`                                                                                                                                                                   | _Android only_ <br /> If `false` the zoom control at the bottom right of the map won't be visible. <br /> <br /> **default value**: `true`                                                                                                                                                                                                                                                                                                                      |
| `minZoomLevel:` <br/> `int`                                                                                                                                                                          | Minimum zoom value for the map, must be between `0` and `20` <br /> <br /> **default value**: `0`                                                                                                                                                                                                                                                                                                                                                               |
| `maxZoomLevel:` <br/> `int`                                                                                                                                                                          | Maximum zoom value for the map, must be between `0` and `20` <br /> <br /> **default value**: `20`                                                                                                                                                                                                                                                                                                                                                              |
| `rotateEnabled:` <br/> `bool`                                                                                                                                                                        | If `false` the user won't be able to pinch/rotate the map. <br /> <br /> **default value**: `true`                                                                                                                                                                                                                                                                                                                                                              |
| `scrollEnabled:` <br/> `bool`                                                                                                                                                                        | If `false` the user won't be able to change the map region being displayed. <br /> <br /> **default value**: `true`                                                                                                                                                                                                                                                                                                                                             |
| `pitchEnabled:` <br/> `bool`                                                                                                                                                                         | If `false` the user won't be able to adjust the camera’s pitch angle. <br /> <br /> **default value**: `true`                                                                                                                                                                                                                                                                                                                                                   |
| `toolbarEnabled:` <br/> `bool`                                                                                                                                                                       | _Android only_ <br /> If `false` will hide 'Navigate' and 'Open in Maps' buttons on marker press <br /> <br /> **default value**: `true`                                                                                                                                                                                                                                                                                                                        |
| `cacheEnabled:` <br/> `bool`                                                                                                                                                                         | _Apple Maps only_ <br /> If `true` map will be cached and displayed as an image instead of being interactable, for performance usage. <br/> <br /> **default value**: `false`                                                                                                                                                                                                                                                                                   |
| `loadingEnabled:` <br/> `bool`                                                                                                                                                                       | If `true` a loading indicator will show while the map is loading. <br /> <br /> **default value**: `false`                                                                                                                                                                                                                                                                                                                                                      |
| `loadingIndicatorColor:` <br/> `ReactNative.Color.t`                                                                                                                                                 | Sets loading indicator color. <br /> <br /> **default value**: `"#606060"`                                                                                                                                                                                                                                                                                                                                                                                      |
| `loadingBackgroundColor:` <br/> `ReactNative.Color.t`                                                                                                                                                | Sets loading background color. <br /> <br /> **default value**: `"#FFFFFF"`                                                                                                                                                                                                                                                                                                                                                                                     |
| `moveOnMarkerPress:` <br/> `bool`                                                                                                                                                                    | _Android only_ <br /> If `false` the map won't move when a marker is pressed. <br /> <br /> **default value**: `true`                                                                                                                                                                                                                                                                                                                                           |
| `legalLabelInsets:` <br/> `ReactNative.View.edgeInsets`                                                                                                                                              | _iOS only_ <br /> If set, changes the position of the "Legal" label link from the OS default.                                                                                                                                                                                                                                                                                                                                                                   |
| `kmlSrc:` <br/> `string`                                                                                                                                                                             | _Google Maps and Markers only_ <br /> (either Android or iOS with `` provider = `google ``) <br /> The URL from KML file.                                                                                                                                                                                                                                                                                                                                       |
| `compassOffset:` <br/> `point`                                                                                                                                                                       | _iOS Maps only_ <br /> If set, changes the position of the compass.                                                                                                                                                                                                                                                                                                                                                                                             |

Please also see
[Reason React Native documentation of `View` props](https://reasonml-community.github.io/reason-react-native/en/docs/components/View/)
for additional supported props.

## Events

Events may return no data (`unit`), `Region.t` or
`ReactNative.Event.syntheticEvent('a)`.

### Events returning `unit`

Handler function needs to be of type `unit => unit`.

| Event Name         | Notes                                                                                                                                                              |
| ------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| `onCalloutPress`   | Callback that is called when a callout is tapped by the user.                                                                                                      |
| `onMapReady`       | Callback that is called once the map is fully loaded.                                                                                                              |
| `onMarkerPress`    | Callback that is called when a marker on the map is tapped by the user.                                                                                            |
| `onMarkerSelect`   | _iOS only_ <br /> Callback that is called when a marker on the map becomes selected. This will be called when the callout for that marker is about to be shown.    |
| `onMarkerDeselect` | _iOS only_ <br /> Callback that is called when a marker on the map becomes deselected. This will be called when the callout for that marker is about to be hidden. |

### Events returning `Region.t`

Handler function needs to be of type `Region.t => unit`.

| Event Name               | Notes                                                                                                  |
| ------------------------ | ------------------------------------------------------------------------------------------------------ |
| `onRegionChange`         | Callback that is called continuously when the region changes, such as when a user is dragging the map. |
| `onRegionChangeComplete` | Callback that is called once when the region changes, such as when the user is done moving the map.    |

### Events returning `ReactNative.Event.syntheticEvent('a)`

Events listed below return an appropriate instance of the parametrised type
`ReactNative.Event.syntheticEvent('a)` where `'a` is specified in the table
below. Handler function needs to be of type
`ReactNative.Event.syntheticEvent('a) => unit`.

You will need to use the `##` accessor for each individual key within the
function specified. For example:

```reason
onPress={e => Js.Console.warn(e##nativeEvent)}
```

| Event Name                | `'a`                          | Notes                                                                                                                                                                                                                                                         |
| ------------------------- | ----------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `onKmlReady`              | `kmlContainer`                | Callback that is called once the kml is fully loaded.                                                                                                                                                                                                         |
| `onUserLocationChange`    | `{. "coordinate": location }` | Callback that is called when the underlying map figures our users current location (coordinate also includes isFromMockProvider value for Android API 18 and above). Make sure **showsUserLocation** is set to _true_ and that the provider is `` `google ``. |
| `onPress`                 | `copos`                       | Callback that is called when user taps on the map.                                                                                                                                                                                                            |
| `onDoublePress`           | `copos`                       | Callback that is called when user double taps on the map.                                                                                                                                                                                                     |
| `onPanDrag`               | `copos`                       | Callback that is called when user presses and drags the map. <br/> **NOTE**: for iOS `scrollEnabled` should be set to `false` to trigger the event                                                                                                            |
| `onPoiClick`              | `poi`                         | Callback that is called when user click on a POI.                                                                                                                                                                                                             |
| `onLongPress`             | `copos`                       | Callback that is called when user makes a "long press" somewhere on the map.                                                                                                                                                                                  |
| `onMarkerDragStart`       | `copos`                       | Callback that is called when the user initiates a drag on a marker (if it is draggable)                                                                                                                                                                       |
| `onMarkerDrag`            | `copos`                       | Callback called continuously as a marker is dragged                                                                                                                                                                                                           |
| `onMarkerDragEnd`         | `copos`                       | Callback that is called when a drag on a marker finishes. This is usually the point you will want to setState on the marker's coordinate again                                                                                                                |
| `onIndoorLevelActivated`  | `indoorLevel`                 | Callback that is called when a level on indoor building is activated                                                                                                                                                                                          |
| `onIndoorBuildingFocused` | `indoorBuilding`              | Callback that is called when a indoor building is focused/unfocused                                                                                                                                                                                           |

## Methods

Deprecated methods are not supported.

| Method Name and Type Signature                                                                                | Notes                                                                                                                                                                                                                                                                                                          |
| ------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `getCamera:` <br/> `(element, unit) => camera`                                                                | Returns the current camera configuration.                                                                                                                                                                                                                                                                      |
| `animateCamera:` <br/> `(element, camera, duration) => unit`                                                  | Animate the camera to a new view. In JS, you can pass a partial camera object here; any property not given will remain unmodified, however, that is not supported in these bindings and a camera object is required. Do note that any optional arguments not specified in the new object will not be modified. |
| `setCamera:` <br/> `(element, camera, duration) => unit`                                                      | Like `animateCamera`, but sets the new view instantly, without an animation.                                                                                                                                                                                                                                   |
| `animateToRegion:` <br/> `(element, Region.t, float) => unit`                                                 | duration of the animation should be specified as a `float`                                                                                                                                                                                                                                                     |
| `getMapBoundaries:` <br/> `(element, unit) => Js.Promise.t(mapBoundaries)`                                    | Returns current boundaries of the map                                                                                                                                                                                                                                                                          |
| `setMapBoundaries:` <br/> `(element, mapBoundaries) => unit`                                                  | _Google Maps only_ <br /> The boundary is defined by the map's center coordinates, not the device's viewport itself.                                                                                                                                                                                           |
| `setIndoorActiveLevelIndex:` <br/> `(element, int) => unit`                                                   | `levelIndex` should be specified as an `int`                                                                                                                                                                                                                                                                   |
| `fitToElements:` <br/> `(element, bool) => unit`                                                              | Can specify whether the transition should be animated by the additonal argument                                                                                                                                                                                                                                |
| `fitToSuppliedMarkers:` <br/> `(element, array(string), fitConfig) => unit`                                   | markerIDs should be specified as `array(string)` If you need to use this in `ComponentDidMount`, make sure you put it in a timeout or it will cause performance problems.                                                                                                                                      |
| `fitToCoordinates:` <br/> `(element, array(LatLng.t), fitConfig) => unit`                                     | Coordinates should be specified as an array of `LatLng.t`. Options may also be specified. If called in `ComponentDidMount` on android, it will cause an exception. It is recommended to be called from the MapView `onLayout` event.                                                                           |
| `pointForCoordinate:` <br/> `(element, LatLng.t) => Js.Promise.t(point)`                                      | Converts a map coordinate (specified as `LatLng.t`) to a view coordinate (`point`).                                                                                                                                                                                                                            |
| `coordinateForPoint:` <br/> `(element, point) => Js.Promise.t(LatLng.t)`                                      | Converts a view coordinate (`point`) to a map coordinate (specified as `LatLng.t`).                                                                                                                                                                                                                            |
| `getMarkersFrames:` <br/> `(element, bool) => Js.Promise.t({. "markerID": {. point: point, frame: frame } })` | _iOS only_ <br /> Get markers' centers and frames in view coordinates, can limit to only visible markers by the additional argument.                                                                                                                                                                           |

## Types

### `camera`

```reason
camera:
  (
    ~center: LatLng.t,
    ~pitch: float,
    ~heading: float,
    ~altitude: float=?,
    ~zoom: int=?,
    unit
  ) =>
  camera
```

Note that `altitude` is only for when `MapKit` is used on iOS and `zoom` is only
for use with Google Maps. Specification of height differs between MapKit on iOS
and Google Maps differ. For a cross-platform app, it is necessary to specify
both the zoom level and the altitude separately.

### `location`

```reason
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
```

`timestamp` is milliseconds elapsed since the epoch

### `duration`

```reason
duration: (~duration: float) => duration
```

### `fitConfig`

```reason
fitConfig: (~edgePadding: edgePadding, ~animated: bool) => fitConfig
```

### `frame`

```reason
type frame = {
  .
  "x": float,
  "y": float,
  "width": float,
  "height": float,
};
```

### `edgePadding`

```reason
edgePadding:
  (~top: float, ~right: float, ~bottom: float, ~left: float) => edgePadding
```

### `mapBoundaries`

```reason
type mapBoundaries = {
  .
  "northEast": LatLng.t,
  "southWest": LatLng.t,
}
```

```reason
mapBoundaries:
  (~northEast: LatLng.t, ~southWest: LatLng.t) =>
  mapBoundaries
```

### `marker`

```reason
marker:
  (~id: string, ~coordinate: LatLng.t, ~title: string, ~description: string) =>
  marker
```

### `kmlContainer`

```reason
type kmlContainer = {. "markers": array(marker)}
```

### `indoorBuilding`

```reason
type indoorBuilding = {
  .
  "underground": bool,
  "activeLevelIndex": int,
  "levels": array(indoorLevel),
}
```

### `indoorLevel`

```reason
type indoorLevel = {
  .
  "activeLevelIndex": int,
  "name": string,
  "shortName": string,
}
```
