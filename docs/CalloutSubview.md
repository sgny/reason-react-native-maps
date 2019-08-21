# `CalloutSubview` Component API

**Note**: Supported on iOS only.
Use to handle press on specific subview of callout.
This component should be a child of a `Callout` component.

## Events

### `onPress`

Callback that is called when the user presses on this subview inside callout. The `onPress` event returns `ReactNative.Event.syntheticEvent({. action: action})`. Accordingly, to handle the event you need to pass a function of type `ReactNative.Event.syntheticEvent({. action: action}) => unit`. You will need to use the `##` accessor for each individual key within the function specified.

## Types

### `action`

Valid values are:

- `calloutInsidePress` when using `MapKit`
- `markerInsideOverlayPress` when using `GoogleMaps`

