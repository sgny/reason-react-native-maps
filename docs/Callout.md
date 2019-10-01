# `Callout` Component API

## Props

| Prop           | Type   | Default | Note                                                                                                                                                                                            |
| -------------- | ------ | ------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `tooltip`      | `bool` | `false` | If `false`, a default "tooltip" bubble window will be drawn around this callouts children. If `true`, the child views can fully customize their appearance, including any "bubble" like styles. |
| `alphaHitTest` | `bool` | `false` | If `true`, clicks on transparent areas in callout will be passed to map. **Note**: iOS only.                                                                                                    |

## Events

Callback that is called when the user presses on the callout. The `onPress` event returns `ReactNative.Event.syntheticEvent({. action: action})`. Accordingly, to handle the event you need to pass a function of type `ReactNative.Event.syntheticEvent({. action: action}) => unit`. You will need to use the `##` accessor for each individual key within the function specified.

## Types

### `action`

Valid values are

- `calloutPress` when using `MapKit` on iOS or `GoogleMaps` on Android
- `marker-overlay-press` when using `GoogleMaps` on iOS
